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
#include <aws/wafv2/model/RateLimitJA3Fingerprint.h>
#include <aws/wafv2/model/RateLimitJA4Fingerprint.h>
#include <aws/wafv2/model/RateLimitAsn.h>
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
    AWS_WAFV2_API RateBasedStatementCustomKey() = default;
    AWS_WAFV2_API RateBasedStatementCustomKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateBasedStatementCustomKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use the value of a header in the request as an aggregate key. Each distinct
     * value in the header contributes to the aggregation instance. If you use a single
     * header as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline const RateLimitHeader& GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    template<typename HeaderT = RateLimitHeader>
    void SetHeader(HeaderT&& value) { m_headerHasBeenSet = true; m_header = std::forward<HeaderT>(value); }
    template<typename HeaderT = RateLimitHeader>
    RateBasedStatementCustomKey& WithHeader(HeaderT&& value) { SetHeader(std::forward<HeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the value of a cookie in the request as an aggregate key. Each distinct
     * value in the cookie contributes to the aggregation instance. If you use a single
     * cookie as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline const RateLimitCookie& GetCookie() const { return m_cookie; }
    inline bool CookieHasBeenSet() const { return m_cookieHasBeenSet; }
    template<typename CookieT = RateLimitCookie>
    void SetCookie(CookieT&& value) { m_cookieHasBeenSet = true; m_cookie = std::forward<CookieT>(value); }
    template<typename CookieT = RateLimitCookie>
    RateBasedStatementCustomKey& WithCookie(CookieT&& value) { SetCookie(std::forward<CookieT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the specified query argument as an aggregate key. Each distinct value for
     * the named query argument contributes to the aggregation instance. If you use a
     * single query argument as your custom key, then each value fully defines an
     * aggregation instance. </p>
     */
    inline const RateLimitQueryArgument& GetQueryArgument() const { return m_queryArgument; }
    inline bool QueryArgumentHasBeenSet() const { return m_queryArgumentHasBeenSet; }
    template<typename QueryArgumentT = RateLimitQueryArgument>
    void SetQueryArgument(QueryArgumentT&& value) { m_queryArgumentHasBeenSet = true; m_queryArgument = std::forward<QueryArgumentT>(value); }
    template<typename QueryArgumentT = RateLimitQueryArgument>
    RateBasedStatementCustomKey& WithQueryArgument(QueryArgumentT&& value) { SetQueryArgument(std::forward<QueryArgumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the request's query string as an aggregate key. Each distinct string
     * contributes to the aggregation instance. If you use just the query string as
     * your custom key, then each string fully defines an aggregation instance. </p>
     */
    inline const RateLimitQueryString& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = RateLimitQueryString>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = RateLimitQueryString>
    RateBasedStatementCustomKey& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the request's HTTP method as an aggregate key. Each distinct HTTP method
     * contributes to the aggregation instance. If you use just the HTTP method as your
     * custom key, then each method fully defines an aggregation instance. </p>
     */
    inline const RateLimitHTTPMethod& GetHTTPMethod() const { return m_hTTPMethod; }
    inline bool HTTPMethodHasBeenSet() const { return m_hTTPMethodHasBeenSet; }
    template<typename HTTPMethodT = RateLimitHTTPMethod>
    void SetHTTPMethod(HTTPMethodT&& value) { m_hTTPMethodHasBeenSet = true; m_hTTPMethod = std::forward<HTTPMethodT>(value); }
    template<typename HTTPMethodT = RateLimitHTTPMethod>
    RateBasedStatementCustomKey& WithHTTPMethod(HTTPMethodT&& value) { SetHTTPMethod(std::forward<HTTPMethodT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const RateLimitForwardedIP& GetForwardedIP() const { return m_forwardedIP; }
    inline bool ForwardedIPHasBeenSet() const { return m_forwardedIPHasBeenSet; }
    template<typename ForwardedIPT = RateLimitForwardedIP>
    void SetForwardedIP(ForwardedIPT&& value) { m_forwardedIPHasBeenSet = true; m_forwardedIP = std::forward<ForwardedIPT>(value); }
    template<typename ForwardedIPT = RateLimitForwardedIP>
    RateBasedStatementCustomKey& WithForwardedIP(ForwardedIPT&& value) { SetForwardedIP(std::forward<ForwardedIPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the request's originating IP address as an aggregate key. Each distinct
     * IP address contributes to the aggregation instance.</p> <p>When you specify an
     * IP or forwarded IP in the custom key settings, you must also specify at least
     * one other key to use. You can aggregate on only the IP address by specifying
     * <code>IP</code> in your rate-based statement's <code>AggregateKeyType</code>.
     * </p>
     */
    inline const RateLimitIP& GetIP() const { return m_iP; }
    inline bool IPHasBeenSet() const { return m_iPHasBeenSet; }
    template<typename IPT = RateLimitIP>
    void SetIP(IPT&& value) { m_iPHasBeenSet = true; m_iP = std::forward<IPT>(value); }
    template<typename IPT = RateLimitIP>
    RateBasedStatementCustomKey& WithIP(IPT&& value) { SetIP(std::forward<IPT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const RateLimitLabelNamespace& GetLabelNamespace() const { return m_labelNamespace; }
    inline bool LabelNamespaceHasBeenSet() const { return m_labelNamespaceHasBeenSet; }
    template<typename LabelNamespaceT = RateLimitLabelNamespace>
    void SetLabelNamespace(LabelNamespaceT&& value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace = std::forward<LabelNamespaceT>(value); }
    template<typename LabelNamespaceT = RateLimitLabelNamespace>
    RateBasedStatementCustomKey& WithLabelNamespace(LabelNamespaceT&& value) { SetLabelNamespace(std::forward<LabelNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the request's URI path as an aggregate key. Each distinct URI path
     * contributes to the aggregation instance. If you use just the URI path as your
     * custom key, then each URI path fully defines an aggregation instance. </p>
     */
    inline const RateLimitUriPath& GetUriPath() const { return m_uriPath; }
    inline bool UriPathHasBeenSet() const { return m_uriPathHasBeenSet; }
    template<typename UriPathT = RateLimitUriPath>
    void SetUriPath(UriPathT&& value) { m_uriPathHasBeenSet = true; m_uriPath = std::forward<UriPathT>(value); }
    template<typename UriPathT = RateLimitUriPath>
    RateBasedStatementCustomKey& WithUriPath(UriPathT&& value) { SetUriPath(std::forward<UriPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Use the request's JA3 fingerprint as an aggregate key. If you use a single
     * JA3 fingerprint as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline const RateLimitJA3Fingerprint& GetJA3Fingerprint() const { return m_jA3Fingerprint; }
    inline bool JA3FingerprintHasBeenSet() const { return m_jA3FingerprintHasBeenSet; }
    template<typename JA3FingerprintT = RateLimitJA3Fingerprint>
    void SetJA3Fingerprint(JA3FingerprintT&& value) { m_jA3FingerprintHasBeenSet = true; m_jA3Fingerprint = std::forward<JA3FingerprintT>(value); }
    template<typename JA3FingerprintT = RateLimitJA3Fingerprint>
    RateBasedStatementCustomKey& WithJA3Fingerprint(JA3FingerprintT&& value) { SetJA3Fingerprint(std::forward<JA3FingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the request's JA4 fingerprint as an aggregate key. If you use a single
     * JA4 fingerprint as your custom key, then each value fully defines an aggregation
     * instance. </p>
     */
    inline const RateLimitJA4Fingerprint& GetJA4Fingerprint() const { return m_jA4Fingerprint; }
    inline bool JA4FingerprintHasBeenSet() const { return m_jA4FingerprintHasBeenSet; }
    template<typename JA4FingerprintT = RateLimitJA4Fingerprint>
    void SetJA4Fingerprint(JA4FingerprintT&& value) { m_jA4FingerprintHasBeenSet = true; m_jA4Fingerprint = std::forward<JA4FingerprintT>(value); }
    template<typename JA4FingerprintT = RateLimitJA4Fingerprint>
    RateBasedStatementCustomKey& WithJA4Fingerprint(JA4FingerprintT&& value) { SetJA4Fingerprint(std::forward<JA4FingerprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use an Autonomous System Number (ASN) derived from the request's originating
     * or forwarded IP address as an aggregate key. Each distinct ASN contributes to
     * the aggregation instance. </p>
     */
    inline const RateLimitAsn& GetASN() const { return m_aSN; }
    inline bool ASNHasBeenSet() const { return m_aSNHasBeenSet; }
    template<typename ASNT = RateLimitAsn>
    void SetASN(ASNT&& value) { m_aSNHasBeenSet = true; m_aSN = std::forward<ASNT>(value); }
    template<typename ASNT = RateLimitAsn>
    RateBasedStatementCustomKey& WithASN(ASNT&& value) { SetASN(std::forward<ASNT>(value)); return *this;}
    ///@}
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

    RateLimitJA3Fingerprint m_jA3Fingerprint;
    bool m_jA3FingerprintHasBeenSet = false;

    RateLimitJA4Fingerprint m_jA4Fingerprint;
    bool m_jA4FingerprintHasBeenSet = false;

    RateLimitAsn m_aSN;
    bool m_aSNHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
