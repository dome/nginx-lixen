#ifndef NGX_HTTP_SRCACHE_HEADERS_H
#define NGX_HTTP_SRCACHE_HEADERS_H


#include "ngx_http_srcache_filter_module.h"


typedef struct {
    ngx_str_t                        name;
    ngx_http_header_handler_pt       handler;
    ngx_uint_t                       offset;
} ngx_http_srcache_header_t;


extern ngx_http_srcache_header_t  ngx_http_srcache_headers_in[];


ngx_int_t ngx_http_srcache_process_header_line(ngx_http_request_t *r,
    ngx_table_elt_t *h, ngx_uint_t offset);


#endif /* NGX_HTTP_SRCACHE_HEADERS_H */

