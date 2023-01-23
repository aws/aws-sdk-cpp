/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/SingleHeader.h>
#include <aws/wafv2/model/SingleQueryArgument.h>
#include <aws/wafv2/model/AllQueryArguments.h>
#include <aws/wafv2/model/UriPath.h>
#include <aws/wafv2/model/QueryString.h>
#include <aws/wafv2/model/Body.h>
#include <aws/wafv2/model/Method.h>
#include <aws/wafv2/model/JsonBody.h>
#include <aws/wafv2/model/Headers.h>
#include <aws/wafv2/model/Cookies.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   * <p>The part of the web request that you want WAF to inspect. Include the single
   * <code>FieldToMatch</code> type that you want to inspect, with additional
   * specifications as needed, according to the type. You specify a single request
   * component in <code>FieldToMatch</code> for each rule statement that requires it.
   * To inspect more than one component of the web request, create a separate rule
   * statement for each component.</p> <p>Example JSON for a <code>QueryString</code>
   * field to match: </p> <p> <code> "FieldToMatch": { "QueryString": {} }</code>
   * </p> <p>Example JSON for a <code>Method</code> field to match specification:</p>
   * <p> <code> "FieldToMatch": { "Method": { "Name": "DELETE" } }</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/FieldToMatch">AWS
   * API Reference</a></p>
   */
  class FieldToMatch
  {
  public:
    AWS_WAFV2_API FieldToMatch();
    AWS_WAFV2_API FieldToMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API FieldToMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p> <p>Alternately, you can filter and inspect all headers with the
     * <code>Headers</code> <code>FieldToMatch</code> setting. </p>
     */
    inline const SingleHeader& GetSingleHeader() const{ return m_singleHeader; }

    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p> <p>Alternately, you can filter and inspect all headers with the
     * <code>Headers</code> <code>FieldToMatch</code> setting. </p>
     */
    inline bool SingleHeaderHasBeenSet() const { return m_singleHeaderHasBeenSet; }

    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p> <p>Alternately, you can filter and inspect all headers with the
     * <code>Headers</code> <code>FieldToMatch</code> setting. </p>
     */
    inline void SetSingleHeader(const SingleHeader& value) { m_singleHeaderHasBeenSet = true; m_singleHeader = value; }

    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p> <p>Alternately, you can filter and inspect all headers with the
     * <code>Headers</code> <code>FieldToMatch</code> setting. </p>
     */
    inline void SetSingleHeader(SingleHeader&& value) { m_singleHeaderHasBeenSet = true; m_singleHeader = std::move(value); }

    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p> <p>Alternately, you can filter and inspect all headers with the
     * <code>Headers</code> <code>FieldToMatch</code> setting. </p>
     */
    inline FieldToMatch& WithSingleHeader(const SingleHeader& value) { SetSingleHeader(value); return *this;}

    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p> <p>Alternately, you can filter and inspect all headers with the
     * <code>Headers</code> <code>FieldToMatch</code> setting. </p>
     */
    inline FieldToMatch& WithSingleHeader(SingleHeader&& value) { SetSingleHeader(std::move(value)); return *this;}


    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>Example JSON:
     * <code>"SingleQueryArgument": { "Name": "myArgument" }</code> </p>
     */
    inline const SingleQueryArgument& GetSingleQueryArgument() const{ return m_singleQueryArgument; }

    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>Example JSON:
     * <code>"SingleQueryArgument": { "Name": "myArgument" }</code> </p>
     */
    inline bool SingleQueryArgumentHasBeenSet() const { return m_singleQueryArgumentHasBeenSet; }

    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>Example JSON:
     * <code>"SingleQueryArgument": { "Name": "myArgument" }</code> </p>
     */
    inline void SetSingleQueryArgument(const SingleQueryArgument& value) { m_singleQueryArgumentHasBeenSet = true; m_singleQueryArgument = value; }

    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>Example JSON:
     * <code>"SingleQueryArgument": { "Name": "myArgument" }</code> </p>
     */
    inline void SetSingleQueryArgument(SingleQueryArgument&& value) { m_singleQueryArgumentHasBeenSet = true; m_singleQueryArgument = std::move(value); }

    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>Example JSON:
     * <code>"SingleQueryArgument": { "Name": "myArgument" }</code> </p>
     */
    inline FieldToMatch& WithSingleQueryArgument(const SingleQueryArgument& value) { SetSingleQueryArgument(value); return *this;}

    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>Example JSON:
     * <code>"SingleQueryArgument": { "Name": "myArgument" }</code> </p>
     */
    inline FieldToMatch& WithSingleQueryArgument(SingleQueryArgument&& value) { SetSingleQueryArgument(std::move(value)); return *this;}


    /**
     * <p>Inspect all query arguments. </p>
     */
    inline const AllQueryArguments& GetAllQueryArguments() const{ return m_allQueryArguments; }

    /**
     * <p>Inspect all query arguments. </p>
     */
    inline bool AllQueryArgumentsHasBeenSet() const { return m_allQueryArgumentsHasBeenSet; }

    /**
     * <p>Inspect all query arguments. </p>
     */
    inline void SetAllQueryArguments(const AllQueryArguments& value) { m_allQueryArgumentsHasBeenSet = true; m_allQueryArguments = value; }

    /**
     * <p>Inspect all query arguments. </p>
     */
    inline void SetAllQueryArguments(AllQueryArguments&& value) { m_allQueryArgumentsHasBeenSet = true; m_allQueryArguments = std::move(value); }

    /**
     * <p>Inspect all query arguments. </p>
     */
    inline FieldToMatch& WithAllQueryArguments(const AllQueryArguments& value) { SetAllQueryArguments(value); return *this;}

    /**
     * <p>Inspect all query arguments. </p>
     */
    inline FieldToMatch& WithAllQueryArguments(AllQueryArguments&& value) { SetAllQueryArguments(std::move(value)); return *this;}


    /**
     * <p>Inspect the request URI path. This is the part of the web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline const UriPath& GetUriPath() const{ return m_uriPath; }

    /**
     * <p>Inspect the request URI path. This is the part of the web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline bool UriPathHasBeenSet() const { return m_uriPathHasBeenSet; }

    /**
     * <p>Inspect the request URI path. This is the part of the web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline void SetUriPath(const UriPath& value) { m_uriPathHasBeenSet = true; m_uriPath = value; }

    /**
     * <p>Inspect the request URI path. This is the part of the web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline void SetUriPath(UriPath&& value) { m_uriPathHasBeenSet = true; m_uriPath = std::move(value); }

    /**
     * <p>Inspect the request URI path. This is the part of the web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline FieldToMatch& WithUriPath(const UriPath& value) { SetUriPath(value); return *this;}

    /**
     * <p>Inspect the request URI path. This is the part of the web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline FieldToMatch& WithUriPath(UriPath&& value) { SetUriPath(std::move(value)); return *this;}


    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline const QueryString& GetQueryString() const{ return m_queryString; }

    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline void SetQueryString(const QueryString& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline void SetQueryString(QueryString&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline FieldToMatch& WithQueryString(const QueryString& value) { SetQueryString(value); return *this;}

    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline FieldToMatch& WithQueryString(QueryString&& value) { SetQueryString(std::move(value)); return *this;}


    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body
     * are forwarded to WAF for inspection by the underlying host service. For
     * information about how to handle oversized request bodies, see the
     * <code>Body</code> object configuration. </p>
     */
    inline const Body& GetBody() const{ return m_body; }

    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body
     * are forwarded to WAF for inspection by the underlying host service. For
     * information about how to handle oversized request bodies, see the
     * <code>Body</code> object configuration. </p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body
     * are forwarded to WAF for inspection by the underlying host service. For
     * information about how to handle oversized request bodies, see the
     * <code>Body</code> object configuration. </p>
     */
    inline void SetBody(const Body& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body
     * are forwarded to WAF for inspection by the underlying host service. For
     * information about how to handle oversized request bodies, see the
     * <code>Body</code> object configuration. </p>
     */
    inline void SetBody(Body&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body
     * are forwarded to WAF for inspection by the underlying host service. For
     * information about how to handle oversized request bodies, see the
     * <code>Body</code> object configuration. </p>
     */
    inline FieldToMatch& WithBody(const Body& value) { SetBody(value); return *this;}

    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body
     * are forwarded to WAF for inspection by the underlying host service. For
     * information about how to handle oversized request bodies, see the
     * <code>Body</code> object configuration. </p>
     */
    inline FieldToMatch& WithBody(Body&& value) { SetBody(std::move(value)); return *this;}


    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline const Method& GetMethod() const{ return m_method; }

    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }

    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline void SetMethod(const Method& value) { m_methodHasBeenSet = true; m_method = value; }

    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline void SetMethod(Method&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }

    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline FieldToMatch& WithMethod(const Method& value) { SetMethod(value); return *this;}

    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline FieldToMatch& WithMethod(Method&& value) { SetMethod(std::move(value)); return *this;}


    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body are
     * forwarded to WAF for inspection by the underlying host service. For information
     * about how to handle oversized request bodies, see the <code>JsonBody</code>
     * object configuration. </p>
     */
    inline const JsonBody& GetJsonBody() const{ return m_jsonBody; }

    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body are
     * forwarded to WAF for inspection by the underlying host service. For information
     * about how to handle oversized request bodies, see the <code>JsonBody</code>
     * object configuration. </p>
     */
    inline bool JsonBodyHasBeenSet() const { return m_jsonBodyHasBeenSet; }

    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body are
     * forwarded to WAF for inspection by the underlying host service. For information
     * about how to handle oversized request bodies, see the <code>JsonBody</code>
     * object configuration. </p>
     */
    inline void SetJsonBody(const JsonBody& value) { m_jsonBodyHasBeenSet = true; m_jsonBody = value; }

    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body are
     * forwarded to WAF for inspection by the underlying host service. For information
     * about how to handle oversized request bodies, see the <code>JsonBody</code>
     * object configuration. </p>
     */
    inline void SetJsonBody(JsonBody&& value) { m_jsonBodyHasBeenSet = true; m_jsonBody = std::move(value); }

    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body are
     * forwarded to WAF for inspection by the underlying host service. For information
     * about how to handle oversized request bodies, see the <code>JsonBody</code>
     * object configuration. </p>
     */
    inline FieldToMatch& WithJsonBody(const JsonBody& value) { SetJsonBody(value); return *this;}

    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>Only the first 8 KB (8192 bytes) of the request body are
     * forwarded to WAF for inspection by the underlying host service. For information
     * about how to handle oversized request bodies, see the <code>JsonBody</code>
     * object configuration. </p>
     */
    inline FieldToMatch& WithJsonBody(JsonBody&& value) { SetJsonBody(std::move(value)); return *this;}


    /**
     * <p>Inspect the request headers. You must configure scope and pattern matching
     * filters in the <code>Headers</code> object, to define the set of headers to and
     * the parts of the headers that WAF inspects. </p> <p>Only the first 8 KB (8192
     * bytes) of a request's headers and only the first 200 headers are forwarded to
     * WAF for inspection by the underlying host service. You must configure how to
     * handle any oversize header content in the <code>Headers</code> object. WAF
     * applies the pattern matching filters to the headers that it receives from the
     * underlying host service. </p>
     */
    inline const Headers& GetHeaders() const{ return m_headers; }

    /**
     * <p>Inspect the request headers. You must configure scope and pattern matching
     * filters in the <code>Headers</code> object, to define the set of headers to and
     * the parts of the headers that WAF inspects. </p> <p>Only the first 8 KB (8192
     * bytes) of a request's headers and only the first 200 headers are forwarded to
     * WAF for inspection by the underlying host service. You must configure how to
     * handle any oversize header content in the <code>Headers</code> object. WAF
     * applies the pattern matching filters to the headers that it receives from the
     * underlying host service. </p>
     */
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }

    /**
     * <p>Inspect the request headers. You must configure scope and pattern matching
     * filters in the <code>Headers</code> object, to define the set of headers to and
     * the parts of the headers that WAF inspects. </p> <p>Only the first 8 KB (8192
     * bytes) of a request's headers and only the first 200 headers are forwarded to
     * WAF for inspection by the underlying host service. You must configure how to
     * handle any oversize header content in the <code>Headers</code> object. WAF
     * applies the pattern matching filters to the headers that it receives from the
     * underlying host service. </p>
     */
    inline void SetHeaders(const Headers& value) { m_headersHasBeenSet = true; m_headers = value; }

    /**
     * <p>Inspect the request headers. You must configure scope and pattern matching
     * filters in the <code>Headers</code> object, to define the set of headers to and
     * the parts of the headers that WAF inspects. </p> <p>Only the first 8 KB (8192
     * bytes) of a request's headers and only the first 200 headers are forwarded to
     * WAF for inspection by the underlying host service. You must configure how to
     * handle any oversize header content in the <code>Headers</code> object. WAF
     * applies the pattern matching filters to the headers that it receives from the
     * underlying host service. </p>
     */
    inline void SetHeaders(Headers&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }

    /**
     * <p>Inspect the request headers. You must configure scope and pattern matching
     * filters in the <code>Headers</code> object, to define the set of headers to and
     * the parts of the headers that WAF inspects. </p> <p>Only the first 8 KB (8192
     * bytes) of a request's headers and only the first 200 headers are forwarded to
     * WAF for inspection by the underlying host service. You must configure how to
     * handle any oversize header content in the <code>Headers</code> object. WAF
     * applies the pattern matching filters to the headers that it receives from the
     * underlying host service. </p>
     */
    inline FieldToMatch& WithHeaders(const Headers& value) { SetHeaders(value); return *this;}

    /**
     * <p>Inspect the request headers. You must configure scope and pattern matching
     * filters in the <code>Headers</code> object, to define the set of headers to and
     * the parts of the headers that WAF inspects. </p> <p>Only the first 8 KB (8192
     * bytes) of a request's headers and only the first 200 headers are forwarded to
     * WAF for inspection by the underlying host service. You must configure how to
     * handle any oversize header content in the <code>Headers</code> object. WAF
     * applies the pattern matching filters to the headers that it receives from the
     * underlying host service. </p>
     */
    inline FieldToMatch& WithHeaders(Headers&& value) { SetHeaders(std::move(value)); return *this;}


    /**
     * <p>Inspect the request cookies. You must configure scope and pattern matching
     * filters in the <code>Cookies</code> object, to define the set of cookies and the
     * parts of the cookies that WAF inspects. </p> <p>Only the first 8 KB (8192 bytes)
     * of a request's cookies and only the first 200 cookies are forwarded to WAF for
     * inspection by the underlying host service. You must configure how to handle any
     * oversize cookie content in the <code>Cookies</code> object. WAF applies the
     * pattern matching filters to the cookies that it receives from the underlying
     * host service. </p>
     */
    inline const Cookies& GetCookies() const{ return m_cookies; }

    /**
     * <p>Inspect the request cookies. You must configure scope and pattern matching
     * filters in the <code>Cookies</code> object, to define the set of cookies and the
     * parts of the cookies that WAF inspects. </p> <p>Only the first 8 KB (8192 bytes)
     * of a request's cookies and only the first 200 cookies are forwarded to WAF for
     * inspection by the underlying host service. You must configure how to handle any
     * oversize cookie content in the <code>Cookies</code> object. WAF applies the
     * pattern matching filters to the cookies that it receives from the underlying
     * host service. </p>
     */
    inline bool CookiesHasBeenSet() const { return m_cookiesHasBeenSet; }

    /**
     * <p>Inspect the request cookies. You must configure scope and pattern matching
     * filters in the <code>Cookies</code> object, to define the set of cookies and the
     * parts of the cookies that WAF inspects. </p> <p>Only the first 8 KB (8192 bytes)
     * of a request's cookies and only the first 200 cookies are forwarded to WAF for
     * inspection by the underlying host service. You must configure how to handle any
     * oversize cookie content in the <code>Cookies</code> object. WAF applies the
     * pattern matching filters to the cookies that it receives from the underlying
     * host service. </p>
     */
    inline void SetCookies(const Cookies& value) { m_cookiesHasBeenSet = true; m_cookies = value; }

    /**
     * <p>Inspect the request cookies. You must configure scope and pattern matching
     * filters in the <code>Cookies</code> object, to define the set of cookies and the
     * parts of the cookies that WAF inspects. </p> <p>Only the first 8 KB (8192 bytes)
     * of a request's cookies and only the first 200 cookies are forwarded to WAF for
     * inspection by the underlying host service. You must configure how to handle any
     * oversize cookie content in the <code>Cookies</code> object. WAF applies the
     * pattern matching filters to the cookies that it receives from the underlying
     * host service. </p>
     */
    inline void SetCookies(Cookies&& value) { m_cookiesHasBeenSet = true; m_cookies = std::move(value); }

    /**
     * <p>Inspect the request cookies. You must configure scope and pattern matching
     * filters in the <code>Cookies</code> object, to define the set of cookies and the
     * parts of the cookies that WAF inspects. </p> <p>Only the first 8 KB (8192 bytes)
     * of a request's cookies and only the first 200 cookies are forwarded to WAF for
     * inspection by the underlying host service. You must configure how to handle any
     * oversize cookie content in the <code>Cookies</code> object. WAF applies the
     * pattern matching filters to the cookies that it receives from the underlying
     * host service. </p>
     */
    inline FieldToMatch& WithCookies(const Cookies& value) { SetCookies(value); return *this;}

    /**
     * <p>Inspect the request cookies. You must configure scope and pattern matching
     * filters in the <code>Cookies</code> object, to define the set of cookies and the
     * parts of the cookies that WAF inspects. </p> <p>Only the first 8 KB (8192 bytes)
     * of a request's cookies and only the first 200 cookies are forwarded to WAF for
     * inspection by the underlying host service. You must configure how to handle any
     * oversize cookie content in the <code>Cookies</code> object. WAF applies the
     * pattern matching filters to the cookies that it receives from the underlying
     * host service. </p>
     */
    inline FieldToMatch& WithCookies(Cookies&& value) { SetCookies(std::move(value)); return *this;}

  private:

    SingleHeader m_singleHeader;
    bool m_singleHeaderHasBeenSet = false;

    SingleQueryArgument m_singleQueryArgument;
    bool m_singleQueryArgumentHasBeenSet = false;

    AllQueryArguments m_allQueryArguments;
    bool m_allQueryArgumentsHasBeenSet = false;

    UriPath m_uriPath;
    bool m_uriPathHasBeenSet = false;

    QueryString m_queryString;
    bool m_queryStringHasBeenSet = false;

    Body m_body;
    bool m_bodyHasBeenSet = false;

    Method m_method;
    bool m_methodHasBeenSet = false;

    JsonBody m_jsonBody;
    bool m_jsonBodyHasBeenSet = false;

    Headers m_headers;
    bool m_headersHasBeenSet = false;

    Cookies m_cookies;
    bool m_cookiesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
