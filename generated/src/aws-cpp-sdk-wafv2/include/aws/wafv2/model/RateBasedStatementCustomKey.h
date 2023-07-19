/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/RateLimitHeader.h>
#include <aws/wafv2/model/RateLimitCookie.h>
#include <aws/wafv2/model/RateLimitQueryArgument.h>
#include <aws/wafv2/model/RateLimitQueryString.h>
#include <aws/wafv2/model/RateLimitHTTPMethod.h>
#include <aws/wafv2/model/RateLimitForwardedIP.h>
#include <aws/wafv2/model/RateLimitIP.h>
#include <aws/wafv2/model/RateLimitLabelNamespace.h>
#include <aws/wafv2/model/RateLimitUriPath.h>
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
   * <p>Specifies a single custom aggregate key for a rate-base rule. </p> 
   * <p>Web requests that are missing any of the components specified in the
   * aggregation keys are omitted from the rate-based rule evaluation and handling.
   * </p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateBasedStatementCustomKey">AWS
   * API Reference</a></p>
   */
  class RateBasedStatementCustomKey
  {
  public:
    AWS_WAFV2_API RateBasedStatementCustomKey();
    AWS_WAFV2_API RateBasedStatementCustomKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateBasedStatementCustomKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Use the value of a header in the request as an aggregate key. Each distinct
     * value in the header contributes to the aggregation instance. If you use a single
     * header as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline const RateLimitHeader& GetHeader() const{ return m_header; }

    /**
     * <p>Use the value of a header in the request as an aggregate key. Each distinct
     * value in the header contributes to the aggregation instance. If you use a single
     * header as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p>Use the value of a header in the request as an aggregate key. Each distinct
     * value in the header contributes to the aggregation instance. If you use a single
     * header as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline void SetHeader(const RateLimitHeader& value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p>Use the value of a header in the request as an aggregate key. Each distinct
     * value in the header contributes to the aggregation instance. If you use a single
     * header as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline void SetHeader(RateLimitHeader&& value) { m_headerHasBeenSet = true; m_header = std::move(value); }

    /**
     * <p>Use the value of a header in the request as an aggregate key. Each distinct
     * value in the header contributes to the aggregation instance. If you use a single
     * header as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline RateBasedStatementCustomKey& WithHeader(const RateLimitHeader& value) { SetHeader(value); return *this;}

    /**
     * <p>Use the value of a header in the request as an aggregate key. Each distinct
     * value in the header contributes to the aggregation instance. If you use a single
     * header as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline RateBasedStatementCustomKey& WithHeader(RateLimitHeader&& value) { SetHeader(std::move(value)); return *this;}


    /**
     * <p>Use the value of a cookie in the request as an aggregate key. Each distinct
     * value in the cookie contributes to the aggregation instance. If you use a single
     * cookie as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline const RateLimitCookie& GetCookie() const{ return m_cookie; }

    /**
     * <p>Use the value of a cookie in the request as an aggregate key. Each distinct
     * value in the cookie contributes to the aggregation instance. If you use a single
     * cookie as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline bool CookieHasBeenSet() const { return m_cookieHasBeenSet; }

    /**
     * <p>Use the value of a cookie in the request as an aggregate key. Each distinct
     * value in the cookie contributes to the aggregation instance. If you use a single
     * cookie as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline void SetCookie(const RateLimitCookie& value) { m_cookieHasBeenSet = true; m_cookie = value; }

    /**
     * <p>Use the value of a cookie in the request as an aggregate key. Each distinct
     * value in the cookie contributes to the aggregation instance. If you use a single
     * cookie as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline void SetCookie(RateLimitCookie&& value) { m_cookieHasBeenSet = true; m_cookie = std::move(value); }

    /**
     * <p>Use the value of a cookie in the request as an aggregate key. Each distinct
     * value in the cookie contributes to the aggregation instance. If you use a single
     * cookie as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline RateBasedStatementCustomKey& WithCookie(const RateLimitCookie& value) { SetCookie(value); return *this;}

    /**
     * <p>Use the value of a cookie in the request as an aggregate key. Each distinct
     * value in the cookie contributes to the aggregation instance. If you use a single
     * cookie as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline RateBasedStatementCustomKey& WithCookie(RateLimitCookie&& value) { SetCookie(std::move(value)); return *this;}


    /**
     * <p>Use the specified query argument as an aggregate key. Each distinct value for
     * the named query argument contributes to the aggregation instance. If you use a
     * single query argument as your custom key, then each value fully defines an
     * aggregation instance. </p>
     */
    inline const RateLimitQueryArgument& GetQueryArgument() const{ return m_queryArgument; }

    /**
     * <p>Use the specified query argument as an aggregate key. Each distinct value for
     * the named query argument contributes to the aggregation instance. If you use a
     * single query argument as your custom key, then each value fully defines an
     * aggregation instance. </p>
     */
    inline bool QueryArgumentHasBeenSet() const { return m_queryArgumentHasBeenSet; }

    /**
     * <p>Use the specified query argument as an aggregate key. Each distinct value for
     * the named query argument contributes to the aggregation instance. If you use a
     * single query argument as your custom key, then each value fully defines an
     * aggregation instance. </p>
     */
    inline void SetQueryArgument(const RateLimitQueryArgument& value) { m_queryArgumentHasBeenSet = true; m_queryArgument = value; }

    /**
     * <p>Use the specified query argument as an aggregate key. Each distinct value for
     * the named query argument contributes to the aggregation instance. If you use a
     * single query argument as your custom key, then each value fully defines an
     * aggregation instance. </p>
     */
    inline void SetQueryArgument(RateLimitQueryArgument&& value) { m_queryArgumentHasBeenSet = true; m_queryArgument = std::move(value); }

    /**
     * <p>Use the specified query argument as an aggregate key. Each distinct value for
     * the named query argument contributes to the aggregation instance. If you use a
     * single query argument as your custom key, then each value fully defines an
     * aggregation instance. </p>
     */
    inline RateBasedStatementCustomKey& WithQueryArgument(const RateLimitQueryArgument& value) { SetQueryArgument(value); return *this;}

    /**
     * <p>Use the specified query argument as an aggregate key. Each distinct value for
     * the named query argument contributes to the aggregation instance. If you use a
     * single query argument as your custom key, then each value fully defines an
     * aggregation instance. </p>
     */
    inline RateBasedStatementCustomKey& WithQueryArgument(RateLimitQueryArgument&& value) { SetQueryArgument(std::move(value)); return *this;}


    /**
     * <p>Use the request's query string as an aggregate key. Each distinct string
     * contributes to the aggregation instance. If you use just the query string as
     * your custom key, then each string fully defines an aggregation instance. </p>
     */
    inline const RateLimitQueryString& GetQueryString() const{ return m_queryString; }

    /**
     * <p>Use the request's query string as an aggregate key. Each distinct string
     * contributes to the aggregation instance. If you use just the query string as
     * your custom key, then each string fully defines an aggregation instance. </p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>Use the request's query string as an aggregate key. Each distinct string
     * contributes to the aggregation instance. If you use just the query string as
     * your custom key, then each string fully defines an aggregation instance. </p>
     */
    inline void SetQueryString(const RateLimitQueryString& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>Use the request's query string as an aggregate key. Each distinct string
     * contributes to the aggregation instance. If you use just the query string as
     * your custom key, then each string fully defines an aggregation instance. </p>
     */
    inline void SetQueryString(RateLimitQueryString&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>Use the request's query string as an aggregate key. Each distinct string
     * contributes to the aggregation instance. If you use just the query string as
     * your custom key, then each string fully defines an aggregation instance. </p>
     */
    inline RateBasedStatementCustomKey& WithQueryString(const RateLimitQueryString& value) { SetQueryString(value); return *this;}

    /**
     * <p>Use the request's query string as an aggregate key. Each distinct string
     * contributes to the aggregation instance. If you use just the query string as
     * your custom key, then each string fully defines an aggregation instance. </p>
     */
    inline RateBasedStatementCustomKey& WithQueryString(RateLimitQueryString&& value) { SetQueryString(std::move(value)); return *this;}


    /**
     * <p>Use the request's HTTP method as an aggregate key. Each distinct HTTP method
     * contributes to the aggregation instance. If you use just the HTTP method as your
     * custom key, then each method fully defines an aggregation instance. </p>
     */
    inline const RateLimitHTTPMethod& GetHTTPMethod() const{ return m_hTTPMethod; }

    /**
     * <p>Use the request's HTTP method as an aggregate key. Each distinct HTTP method
     * contributes to the aggregation instance. If you use just the HTTP method as your
     * custom key, then each method fully defines an aggregation instance. </p>
     */
    inline bool HTTPMethodHasBeenSet() const { return m_hTTPMethodHasBeenSet; }

    /**
     * <p>Use the request's HTTP method as an aggregate key. Each distinct HTTP method
     * contributes to the aggregation instance. If you use just the HTTP method as your
     * custom key, then each method fully defines an aggregation instance. </p>
     */
    inline void SetHTTPMethod(const RateLimitHTTPMethod& value) { m_hTTPMethodHasBeenSet = true; m_hTTPMethod = value; }

    /**
     * <p>Use the request's HTTP method as an aggregate key. Each distinct HTTP method
     * contributes to the aggregation instance. If you use just the HTTP method as your
     * custom key, then each method fully defines an aggregation instance. </p>
     */
    inline void SetHTTPMethod(RateLimitHTTPMethod&& value) { m_hTTPMethodHasBeenSet = true; m_hTTPMethod = std::move(value); }

    /**
     * <p>Use the request's HTTP method as an aggregate key. Each distinct HTTP method
     * contributes to the aggregation instance. If you use just the HTTP method as your
     * custom key, then each method fully defines an aggregation instance. </p>
     */
    inline RateBasedStatementCustomKey& WithHTTPMethod(const RateLimitHTTPMethod& value) { SetHTTPMethod(value); return *this;}

    /**
     * <p>Use the request's HTTP method as an aggregate key. Each distinct HTTP method
     * contributes to the aggregation instance. If you use just the HTTP method as your
     * custom key, then each method fully defines an aggregation instance. </p>
     */
    inline RateBasedStatementCustomKey& WithHTTPMethod(RateLimitHTTPMethod&& value) { SetHTTPMethod(std::move(value)); return *this;}


    /**
     * <p>Use the first IP address in an HTTP header as an aggregate key. Each distinct
     * forwarded IP address contributes to the aggregation instance.</p> <p>When you
     * specify an IP or forwarded IP in the custom key settings, you must also specify
     * at least one other key to use. You can aggregate on only the forwarded IP
     * address by specifying <code>FORWARDED_IP</code> in your rate-based statement's
     * <code>AggregateKeyType</code>. </p> <p>With this option, you must specify the
     * header to use in the rate-based rule's <code>ForwardedIPConfig</code> property.
     * </p>
     */
    inline const RateLimitForwardedIP& GetForwardedIP() const{ return m_forwardedIP; }

    /**
     * <p>Use the first IP address in an HTTP header as an aggregate key. Each distinct
     * forwarded IP address contributes to the aggregation instance.</p> <p>When you
     * specify an IP or forwarded IP in the custom key settings, you must also specify
     * at least one other key to use. You can aggregate on only the forwarded IP
     * address by specifying <code>FORWARDED_IP</code> in your rate-based statement's
     * <code>AggregateKeyType</code>. </p> <p>With this option, you must specify the
     * header to use in the rate-based rule's <code>ForwardedIPConfig</code> property.
     * </p>
     */
    inline bool ForwardedIPHasBeenSet() const { return m_forwardedIPHasBeenSet; }

    /**
     * <p>Use the first IP address in an HTTP header as an aggregate key. Each distinct
     * forwarded IP address contributes to the aggregation instance.</p> <p>When you
     * specify an IP or forwarded IP in the custom key settings, you must also specify
     * at least one other key to use. You can aggregate on only the forwarded IP
     * address by specifying <code>FORWARDED_IP</code> in your rate-based statement's
     * <code>AggregateKeyType</code>. </p> <p>With this option, you must specify the
     * header to use in the rate-based rule's <code>ForwardedIPConfig</code> property.
     * </p>
     */
    inline void SetForwardedIP(const RateLimitForwardedIP& value) { m_forwardedIPHasBeenSet = true; m_forwardedIP = value; }

    /**
     * <p>Use the first IP address in an HTTP header as an aggregate key. Each distinct
     * forwarded IP address contributes to the aggregation instance.</p> <p>When you
     * specify an IP or forwarded IP in the custom key settings, you must also specify
     * at least one other key to use. You can aggregate on only the forwarded IP
     * address by specifying <code>FORWARDED_IP</code> in your rate-based statement's
     * <code>AggregateKeyType</code>. </p> <p>With this option, you must specify the
     * header to use in the rate-based rule's <code>ForwardedIPConfig</code> property.
     * </p>
     */
    inline void SetForwardedIP(RateLimitForwardedIP&& value) { m_forwardedIPHasBeenSet = true; m_forwardedIP = std::move(value); }

    /**
     * <p>Use the first IP address in an HTTP header as an aggregate key. Each distinct
     * forwarded IP address contributes to the aggregation instance.</p> <p>When you
     * specify an IP or forwarded IP in the custom key settings, you must also specify
     * at least one other key to use. You can aggregate on only the forwarded IP
     * address by specifying <code>FORWARDED_IP</code> in your rate-based statement's
     * <code>AggregateKeyType</code>. </p> <p>With this option, you must specify the
     * header to use in the rate-based rule's <code>ForwardedIPConfig</code> property.
     * </p>
     */
    inline RateBasedStatementCustomKey& WithForwardedIP(const RateLimitForwardedIP& value) { SetForwardedIP(value); return *this;}

    /**
     * <p>Use the first IP address in an HTTP header as an aggregate key. Each distinct
     * forwarded IP address contributes to the aggregation instance.</p> <p>When you
     * specify an IP or forwarded IP in the custom key settings, you must also specify
     * at least one other key to use. You can aggregate on only the forwarded IP
     * address by specifying <code>FORWARDED_IP</code> in your rate-based statement's
     * <code>AggregateKeyType</code>. </p> <p>With this option, you must specify the
     * header to use in the rate-based rule's <code>ForwardedIPConfig</code> property.
     * </p>
     */
    inline RateBasedStatementCustomKey& WithForwardedIP(RateLimitForwardedIP&& value) { SetForwardedIP(std::move(value)); return *this;}


    /**
     * <p>Use the request's originating IP address as an aggregate key. Each distinct
     * IP address contributes to the aggregation instance.</p> <p>When you specify an
     * IP or forwarded IP in the custom key settings, you must also specify at least
     * one other key to use. You can aggregate on only the IP address by specifying
     * <code>IP</code> in your rate-based statement's <code>AggregateKeyType</code>.
     * </p>
     */
    inline const RateLimitIP& GetIP() const{ return m_iP; }

    /**
     * <p>Use the request's originating IP address as an aggregate key. Each distinct
     * IP address contributes to the aggregation instance.</p> <p>When you specify an
     * IP or forwarded IP in the custom key settings, you must also specify at least
     * one other key to use. You can aggregate on only the IP address by specifying
     * <code>IP</code> in your rate-based statement's <code>AggregateKeyType</code>.
     * </p>
     */
    inline bool IPHasBeenSet() const { return m_iPHasBeenSet; }

    /**
     * <p>Use the request's originating IP address as an aggregate key. Each distinct
     * IP address contributes to the aggregation instance.</p> <p>When you specify an
     * IP or forwarded IP in the custom key settings, you must also specify at least
     * one other key to use. You can aggregate on only the IP address by specifying
     * <code>IP</code> in your rate-based statement's <code>AggregateKeyType</code>.
     * </p>
     */
    inline void SetIP(const RateLimitIP& value) { m_iPHasBeenSet = true; m_iP = value; }

    /**
     * <p>Use the request's originating IP address as an aggregate key. Each distinct
     * IP address contributes to the aggregation instance.</p> <p>When you specify an
     * IP or forwarded IP in the custom key settings, you must also specify at least
     * one other key to use. You can aggregate on only the IP address by specifying
     * <code>IP</code> in your rate-based statement's <code>AggregateKeyType</code>.
     * </p>
     */
    inline void SetIP(RateLimitIP&& value) { m_iPHasBeenSet = true; m_iP = std::move(value); }

    /**
     * <p>Use the request's originating IP address as an aggregate key. Each distinct
     * IP address contributes to the aggregation instance.</p> <p>When you specify an
     * IP or forwarded IP in the custom key settings, you must also specify at least
     * one other key to use. You can aggregate on only the IP address by specifying
     * <code>IP</code> in your rate-based statement's <code>AggregateKeyType</code>.
     * </p>
     */
    inline RateBasedStatementCustomKey& WithIP(const RateLimitIP& value) { SetIP(value); return *this;}

    /**
     * <p>Use the request's originating IP address as an aggregate key. Each distinct
     * IP address contributes to the aggregation instance.</p> <p>When you specify an
     * IP or forwarded IP in the custom key settings, you must also specify at least
     * one other key to use. You can aggregate on only the IP address by specifying
     * <code>IP</code> in your rate-based statement's <code>AggregateKeyType</code>.
     * </p>
     */
    inline RateBasedStatementCustomKey& WithIP(RateLimitIP&& value) { SetIP(std::move(value)); return *this;}


    /**
     * <p>Use the specified label namespace as an aggregate key. Each distinct fully
     * qualified label name that has the specified label namespace contributes to the
     * aggregation instance. If you use just one label namespace as your custom key,
     * then each label name fully defines an aggregation instance. </p> <p>This uses
     * only labels that have been added to the request by rules that are evaluated
     * before this rate-based rule in the web ACL. </p> <p>For information about label
     * namespaces and names, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-label-requirements.html">Label
     * syntax and naming requirements</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline const RateLimitLabelNamespace& GetLabelNamespace() const{ return m_labelNamespace; }

    /**
     * <p>Use the specified label namespace as an aggregate key. Each distinct fully
     * qualified label name that has the specified label namespace contributes to the
     * aggregation instance. If you use just one label namespace as your custom key,
     * then each label name fully defines an aggregation instance. </p> <p>This uses
     * only labels that have been added to the request by rules that are evaluated
     * before this rate-based rule in the web ACL. </p> <p>For information about label
     * namespaces and names, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-label-requirements.html">Label
     * syntax and naming requirements</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline bool LabelNamespaceHasBeenSet() const { return m_labelNamespaceHasBeenSet; }

    /**
     * <p>Use the specified label namespace as an aggregate key. Each distinct fully
     * qualified label name that has the specified label namespace contributes to the
     * aggregation instance. If you use just one label namespace as your custom key,
     * then each label name fully defines an aggregation instance. </p> <p>This uses
     * only labels that have been added to the request by rules that are evaluated
     * before this rate-based rule in the web ACL. </p> <p>For information about label
     * namespaces and names, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-label-requirements.html">Label
     * syntax and naming requirements</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline void SetLabelNamespace(const RateLimitLabelNamespace& value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace = value; }

    /**
     * <p>Use the specified label namespace as an aggregate key. Each distinct fully
     * qualified label name that has the specified label namespace contributes to the
     * aggregation instance. If you use just one label namespace as your custom key,
     * then each label name fully defines an aggregation instance. </p> <p>This uses
     * only labels that have been added to the request by rules that are evaluated
     * before this rate-based rule in the web ACL. </p> <p>For information about label
     * namespaces and names, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-label-requirements.html">Label
     * syntax and naming requirements</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline void SetLabelNamespace(RateLimitLabelNamespace&& value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace = std::move(value); }

    /**
     * <p>Use the specified label namespace as an aggregate key. Each distinct fully
     * qualified label name that has the specified label namespace contributes to the
     * aggregation instance. If you use just one label namespace as your custom key,
     * then each label name fully defines an aggregation instance. </p> <p>This uses
     * only labels that have been added to the request by rules that are evaluated
     * before this rate-based rule in the web ACL. </p> <p>For information about label
     * namespaces and names, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-label-requirements.html">Label
     * syntax and naming requirements</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline RateBasedStatementCustomKey& WithLabelNamespace(const RateLimitLabelNamespace& value) { SetLabelNamespace(value); return *this;}

    /**
     * <p>Use the specified label namespace as an aggregate key. Each distinct fully
     * qualified label name that has the specified label namespace contributes to the
     * aggregation instance. If you use just one label namespace as your custom key,
     * then each label name fully defines an aggregation instance. </p> <p>This uses
     * only labels that have been added to the request by rules that are evaluated
     * before this rate-based rule in the web ACL. </p> <p>For information about label
     * namespaces and names, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-label-requirements.html">Label
     * syntax and naming requirements</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline RateBasedStatementCustomKey& WithLabelNamespace(RateLimitLabelNamespace&& value) { SetLabelNamespace(std::move(value)); return *this;}


    /**
     * <p>Use the request's URI path as an aggregate key. Each distinct URI path
     * contributes to the aggregation instance. If you use just the URI path as your
     * custom key, then each URI path fully defines an aggregation instance. </p>
     */
    inline const RateLimitUriPath& GetUriPath() const{ return m_uriPath; }

    /**
     * <p>Use the request's URI path as an aggregate key. Each distinct URI path
     * contributes to the aggregation instance. If you use just the URI path as your
     * custom key, then each URI path fully defines an aggregation instance. </p>
     */
    inline bool UriPathHasBeenSet() const { return m_uriPathHasBeenSet; }

    /**
     * <p>Use the request's URI path as an aggregate key. Each distinct URI path
     * contributes to the aggregation instance. If you use just the URI path as your
     * custom key, then each URI path fully defines an aggregation instance. </p>
     */
    inline void SetUriPath(const RateLimitUriPath& value) { m_uriPathHasBeenSet = true; m_uriPath = value; }

    /**
     * <p>Use the request's URI path as an aggregate key. Each distinct URI path
     * contributes to the aggregation instance. If you use just the URI path as your
     * custom key, then each URI path fully defines an aggregation instance. </p>
     */
    inline void SetUriPath(RateLimitUriPath&& value) { m_uriPathHasBeenSet = true; m_uriPath = std::move(value); }

    /**
     * <p>Use the request's URI path as an aggregate key. Each distinct URI path
     * contributes to the aggregation instance. If you use just the URI path as your
     * custom key, then each URI path fully defines an aggregation instance. </p>
     */
    inline RateBasedStatementCustomKey& WithUriPath(const RateLimitUriPath& value) { SetUriPath(value); return *this;}

    /**
     * <p>Use the request's URI path as an aggregate key. Each distinct URI path
     * contributes to the aggregation instance. If you use just the URI path as your
     * custom key, then each URI path fully defines an aggregation instance. </p>
     */
    inline RateBasedStatementCustomKey& WithUriPath(RateLimitUriPath&& value) { SetUriPath(std::move(value)); return *this;}

  private:

    RateLimitHeader m_header;
    bool m_headerHasBeenSet = false;

    RateLimitCookie m_cookie;
    bool m_cookieHasBeenSet = false;

    RateLimitQueryArgument m_queryArgument;
    bool m_queryArgumentHasBeenSet = false;

    RateLimitQueryString m_queryString;
    bool m_queryStringHasBeenSet = false;

    RateLimitHTTPMethod m_hTTPMethod;
    bool m_hTTPMethodHasBeenSet = false;

    RateLimitForwardedIP m_forwardedIP;
    bool m_forwardedIPHasBeenSet = false;

    RateLimitIP m_iP;
    bool m_iPHasBeenSet = false;

    RateLimitLabelNamespace m_labelNamespace;
    bool m_labelNamespaceHasBeenSet = false;

    RateLimitUriPath m_uriPath;
    bool m_uriPathHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
