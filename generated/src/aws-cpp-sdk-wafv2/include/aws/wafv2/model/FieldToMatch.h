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
#include <aws/wafv2/model/HeaderOrder.h>
#include <aws/wafv2/model/JA3Fingerprint.h>
#include <aws/wafv2/model/JA4Fingerprint.h>
#include <aws/wafv2/model/UriFragment.h>
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
   * <p>Specifies a web request component to be used in a rule match statement or in
   * a logging configuration. </p> <ul> <li> <p>In a rule statement, this is the part
   * of the web request that you want WAF to inspect. Include the single
   * <code>FieldToMatch</code> type that you want to inspect, with additional
   * specifications as needed, according to the type. You specify a single request
   * component in <code>FieldToMatch</code> for each rule statement that requires it.
   * To inspect more than one component of the web request, create a separate rule
   * statement for each component.</p> <p>Example JSON for a <code>QueryString</code>
   * field to match: </p> <p> <code> "FieldToMatch": { "QueryString": {} }</code>
   * </p> <p>Example JSON for a <code>Method</code> field to match specification:</p>
   * <p> <code> "FieldToMatch": { "Method": { "Name": "DELETE" } }</code> </p> </li>
   * <li> <p>In a logging configuration, this is used in the
   * <code>RedactedFields</code> property to specify a field to redact from the
   * logging records. For this use case, note the following: </p> <ul> <li> <p>Even
   * though all <code>FieldToMatch</code> settings are available, the only valid
   * settings for field redaction are <code>UriPath</code>, <code>QueryString</code>,
   * <code>SingleHeader</code>, and <code>Method</code>.</p> </li> <li> <p>In this
   * documentation, the descriptions of the individual fields talk about specifying
   * the web request component to inspect, but for field redaction, you are
   * specifying the component type to redact from the logs. </p> </li> <li> <p>If you
   * have request sampling enabled, the redacted fields configuration for logging has
   * no impact on sampling. You can only exclude fields from request sampling by
   * disabling sampling in the web ACL visibility configuration or by configuring
   * data protection for the web ACL.</p> </li> </ul> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/FieldToMatch">AWS
   * API Reference</a></p>
   */
  class FieldToMatch
  {
  public:
    AWS_WAFV2_API FieldToMatch() = default;
    AWS_WAFV2_API FieldToMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API FieldToMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Inspect a single header. Provide the name of the header to inspect, for
     * example, <code>User-Agent</code> or <code>Referer</code>. This setting isn't
     * case sensitive.</p> <p>Example JSON: <code>"SingleHeader": { "Name": "haystack"
     * }</code> </p> <p>Alternately, you can filter and inspect all headers with the
     * <code>Headers</code> <code>FieldToMatch</code> setting. </p>
     */
    inline const SingleHeader& GetSingleHeader() const { return m_singleHeader; }
    inline bool SingleHeaderHasBeenSet() const { return m_singleHeaderHasBeenSet; }
    template<typename SingleHeaderT = SingleHeader>
    void SetSingleHeader(SingleHeaderT&& value) { m_singleHeaderHasBeenSet = true; m_singleHeader = std::forward<SingleHeaderT>(value); }
    template<typename SingleHeaderT = SingleHeader>
    FieldToMatch& WithSingleHeader(SingleHeaderT&& value) { SetSingleHeader(std::forward<SingleHeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inspect a single query argument. Provide the name of the query argument to
     * inspect, such as <i>UserName</i> or <i>SalesRegion</i>. The name can be up to 30
     * characters long and isn't case sensitive. </p> <p>Example JSON:
     * <code>"SingleQueryArgument": { "Name": "myArgument" }</code> </p>
     */
    inline const SingleQueryArgument& GetSingleQueryArgument() const { return m_singleQueryArgument; }
    inline bool SingleQueryArgumentHasBeenSet() const { return m_singleQueryArgumentHasBeenSet; }
    template<typename SingleQueryArgumentT = SingleQueryArgument>
    void SetSingleQueryArgument(SingleQueryArgumentT&& value) { m_singleQueryArgumentHasBeenSet = true; m_singleQueryArgument = std::forward<SingleQueryArgumentT>(value); }
    template<typename SingleQueryArgumentT = SingleQueryArgument>
    FieldToMatch& WithSingleQueryArgument(SingleQueryArgumentT&& value) { SetSingleQueryArgument(std::forward<SingleQueryArgumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inspect all query arguments. </p>
     */
    inline const AllQueryArguments& GetAllQueryArguments() const { return m_allQueryArguments; }
    inline bool AllQueryArgumentsHasBeenSet() const { return m_allQueryArgumentsHasBeenSet; }
    template<typename AllQueryArgumentsT = AllQueryArguments>
    void SetAllQueryArguments(AllQueryArgumentsT&& value) { m_allQueryArgumentsHasBeenSet = true; m_allQueryArguments = std::forward<AllQueryArgumentsT>(value); }
    template<typename AllQueryArgumentsT = AllQueryArguments>
    FieldToMatch& WithAllQueryArguments(AllQueryArgumentsT&& value) { SetAllQueryArguments(std::forward<AllQueryArgumentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inspect the request URI path. This is the part of the web request that
     * identifies a resource, for example, <code>/images/daily-ad.jpg</code>.</p>
     */
    inline const UriPath& GetUriPath() const { return m_uriPath; }
    inline bool UriPathHasBeenSet() const { return m_uriPathHasBeenSet; }
    template<typename UriPathT = UriPath>
    void SetUriPath(UriPathT&& value) { m_uriPathHasBeenSet = true; m_uriPath = std::forward<UriPathT>(value); }
    template<typename UriPathT = UriPath>
    FieldToMatch& WithUriPath(UriPathT&& value) { SetUriPath(std::forward<UriPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inspect the query string. This is the part of a URL that appears after a
     * <code>?</code> character, if any.</p>
     */
    inline const QueryString& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = QueryString>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = QueryString>
    FieldToMatch& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inspect the request body as plain text. The request body immediately follows
     * the request headers. This is the part of a request that contains any additional
     * data that you want to send to your web server as the HTTP request body, such as
     * data from a form. </p> <p>WAF does not support inspecting the entire contents of
     * the web request body if the body exceeds the limit for the resource type. When a
     * web request body is larger than the limit, the underlying host service only
     * forwards the contents that are within the limit to WAF for inspection. </p> <ul>
     * <li> <p>For Application Load Balancer and AppSync, the limit is fixed at 8 KB
     * (8,192 bytes).</p> </li> <li> <p>For CloudFront, API Gateway, Amazon Cognito,
     * App Runner, and Verified Access, the default limit is 16 KB (16,384 bytes), and
     * you can increase the limit for each resource type in the web ACL
     * <code>AssociationConfig</code>, for additional processing fees. </p> </li> <li>
     * <p>For Amplify, use the CloudFront limit.</p> </li> </ul> <p>For information
     * about how to handle oversized request bodies, see the <code>Body</code> object
     * configuration. </p>
     */
    inline const Body& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Body>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Body>
    FieldToMatch& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inspect the HTTP method. The method indicates the type of operation that the
     * request is asking the origin to perform. </p>
     */
    inline const Method& GetMethod() const { return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    template<typename MethodT = Method>
    void SetMethod(MethodT&& value) { m_methodHasBeenSet = true; m_method = std::forward<MethodT>(value); }
    template<typename MethodT = Method>
    FieldToMatch& WithMethod(MethodT&& value) { SetMethod(std::forward<MethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inspect the request body as JSON. The request body immediately follows the
     * request headers. This is the part of a request that contains any additional data
     * that you want to send to your web server as the HTTP request body, such as data
     * from a form. </p> <p>WAF does not support inspecting the entire contents of the
     * web request body if the body exceeds the limit for the resource type. When a web
     * request body is larger than the limit, the underlying host service only forwards
     * the contents that are within the limit to WAF for inspection. </p> <ul> <li>
     * <p>For Application Load Balancer and AppSync, the limit is fixed at 8 KB (8,192
     * bytes).</p> </li> <li> <p>For CloudFront, API Gateway, Amazon Cognito, App
     * Runner, and Verified Access, the default limit is 16 KB (16,384 bytes), and you
     * can increase the limit for each resource type in the web ACL
     * <code>AssociationConfig</code>, for additional processing fees. </p> </li> <li>
     * <p>For Amplify, use the CloudFront limit.</p> </li> </ul> <p>For information
     * about how to handle oversized request bodies, see the <code>JsonBody</code>
     * object configuration. </p>
     */
    inline const JsonBody& GetJsonBody() const { return m_jsonBody; }
    inline bool JsonBodyHasBeenSet() const { return m_jsonBodyHasBeenSet; }
    template<typename JsonBodyT = JsonBody>
    void SetJsonBody(JsonBodyT&& value) { m_jsonBodyHasBeenSet = true; m_jsonBody = std::forward<JsonBodyT>(value); }
    template<typename JsonBodyT = JsonBody>
    FieldToMatch& WithJsonBody(JsonBodyT&& value) { SetJsonBody(std::forward<JsonBodyT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Headers& GetHeaders() const { return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    template<typename HeadersT = Headers>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Headers>
    FieldToMatch& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Cookies& GetCookies() const { return m_cookies; }
    inline bool CookiesHasBeenSet() const { return m_cookiesHasBeenSet; }
    template<typename CookiesT = Cookies>
    void SetCookies(CookiesT&& value) { m_cookiesHasBeenSet = true; m_cookies = std::forward<CookiesT>(value); }
    template<typename CookiesT = Cookies>
    FieldToMatch& WithCookies(CookiesT&& value) { SetCookies(std::forward<CookiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inspect a string containing the list of the request's header names, ordered
     * as they appear in the web request that WAF receives for inspection. WAF
     * generates the string and then uses that as the field to match component in its
     * inspection. WAF separates the header names in the string using colons and no
     * added spaces, for example
     * <code>host:user-agent:accept:authorization:referer</code>.</p>
     */
    inline const HeaderOrder& GetHeaderOrder() const { return m_headerOrder; }
    inline bool HeaderOrderHasBeenSet() const { return m_headerOrderHasBeenSet; }
    template<typename HeaderOrderT = HeaderOrder>
    void SetHeaderOrder(HeaderOrderT&& value) { m_headerOrderHasBeenSet = true; m_headerOrder = std::forward<HeaderOrderT>(value); }
    template<typename HeaderOrderT = HeaderOrder>
    FieldToMatch& WithHeaderOrder(HeaderOrderT&& value) { SetHeaderOrder(std::forward<HeaderOrderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available for use with Amazon CloudFront distributions and Application Load
     * Balancers. Match against the request's JA3 fingerprint. The JA3 fingerprint is a
     * 32-character hash derived from the TLS Client Hello of an incoming request. This
     * fingerprint serves as a unique identifier for the client's TLS configuration.
     * WAF calculates and logs this fingerprint for each request that has enough TLS
     * Client Hello information for the calculation. Almost all web requests include
     * this information.</p>  <p>You can use this choice only with a string match
     * <code>ByteMatchStatement</code> with the <code>PositionalConstraint</code> set
     * to <code>EXACTLY</code>. </p>  <p>You can obtain the JA3 fingerprint for
     * client requests from the web ACL logs. If WAF is able to calculate the
     * fingerprint, it includes it in the logs. For information about the logging
     * fields, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging-fields.html">Log
     * fields</a> in the <i>WAF Developer Guide</i>. </p> <p>Provide the JA3
     * fingerprint string from the logs in your string match statement specification,
     * to match with any future requests that have the same TLS configuration.</p>
     */
    inline const JA3Fingerprint& GetJA3Fingerprint() const { return m_jA3Fingerprint; }
    inline bool JA3FingerprintHasBeenSet() const { return m_jA3FingerprintHasBeenSet; }
    template<typename JA3FingerprintT = JA3Fingerprint>
    void SetJA3Fingerprint(JA3FingerprintT&& value) { m_jA3FingerprintHasBeenSet = true; m_jA3Fingerprint = std::forward<JA3FingerprintT>(value); }
    template<typename JA3FingerprintT = JA3Fingerprint>
    FieldToMatch& WithJA3Fingerprint(JA3FingerprintT&& value) { SetJA3Fingerprint(std::forward<JA3FingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available for use with Amazon CloudFront distributions and Application Load
     * Balancers. Match against the request's JA4 fingerprint. The JA4 fingerprint is a
     * 36-character hash derived from the TLS Client Hello of an incoming request. This
     * fingerprint serves as a unique identifier for the client's TLS configuration.
     * WAF calculates and logs this fingerprint for each request that has enough TLS
     * Client Hello information for the calculation. Almost all web requests include
     * this information.</p>  <p>You can use this choice only with a string match
     * <code>ByteMatchStatement</code> with the <code>PositionalConstraint</code> set
     * to <code>EXACTLY</code>. </p>  <p>You can obtain the JA4 fingerprint for
     * client requests from the web ACL logs. If WAF is able to calculate the
     * fingerprint, it includes it in the logs. For information about the logging
     * fields, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging-fields.html">Log
     * fields</a> in the <i>WAF Developer Guide</i>. </p> <p>Provide the JA4
     * fingerprint string from the logs in your string match statement specification,
     * to match with any future requests that have the same TLS configuration.</p>
     */
    inline const JA4Fingerprint& GetJA4Fingerprint() const { return m_jA4Fingerprint; }
    inline bool JA4FingerprintHasBeenSet() const { return m_jA4FingerprintHasBeenSet; }
    template<typename JA4FingerprintT = JA4Fingerprint>
    void SetJA4Fingerprint(JA4FingerprintT&& value) { m_jA4FingerprintHasBeenSet = true; m_jA4Fingerprint = std::forward<JA4FingerprintT>(value); }
    template<typename JA4FingerprintT = JA4Fingerprint>
    FieldToMatch& WithJA4Fingerprint(JA4FingerprintT&& value) { SetJA4Fingerprint(std::forward<JA4FingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Inspect fragments of the request URI. You must configure scope and pattern
     * matching filters in the <code>UriFragment</code> object, to define the fragment
     * of a URI that WAF inspects. </p> <p>Only the first 8 KB (8192 bytes) of a
     * request's URI fragments and only the first 200 URI fragments are forwarded to
     * WAF for inspection by the underlying host service. You must configure how to
     * handle any oversize URI fragment content in the <code>UriFragment</code> object.
     * WAF applies the pattern matching filters to the cookies that it receives from
     * the underlying host service. </p>
     */
    inline const UriFragment& GetUriFragment() const { return m_uriFragment; }
    inline bool UriFragmentHasBeenSet() const { return m_uriFragmentHasBeenSet; }
    template<typename UriFragmentT = UriFragment>
    void SetUriFragment(UriFragmentT&& value) { m_uriFragmentHasBeenSet = true; m_uriFragment = std::forward<UriFragmentT>(value); }
    template<typename UriFragmentT = UriFragment>
    FieldToMatch& WithUriFragment(UriFragmentT&& value) { SetUriFragment(std::forward<UriFragmentT>(value)); return *this;}
    ///@}
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

    HeaderOrder m_headerOrder;
    bool m_headerOrderHasBeenSet = false;

    JA3Fingerprint m_jA3Fingerprint;
    bool m_jA3FingerprintHasBeenSet = false;

    JA4Fingerprint m_jA4Fingerprint;
    bool m_jA4FingerprintHasBeenSet = false;

    UriFragment m_uriFragment;
    bool m_uriFragmentHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
