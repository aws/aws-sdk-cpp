/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/HTTPHeader.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>The response from a
   * <a>GetSampledRequests</a> request includes an <code>HTTPRequest</code> complex
   * type that appears as <code>Request</code> in the response syntax.
   * <code>HTTPRequest</code> contains information about one of the web requests that
   * were returned by <code>GetSampledRequests</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/HTTPRequest">AWS
   * API Reference</a></p>
   */
  class HTTPRequest
  {
  public:
    AWS_WAFREGIONAL_API HTTPRequest() = default;
    AWS_WAFREGIONAL_API HTTPRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API HTTPRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address that the request originated from. If the <code>WebACL</code>
     * is associated with a CloudFront distribution, this is the value of one of the
     * following fields in CloudFront access logs:</p> <ul> <li> <p> <code>c-ip</code>,
     * if the viewer did not use an HTTP proxy or a load balancer to send the
     * request</p> </li> <li> <p> <code>x-forwarded-for</code>, if the viewer did use
     * an HTTP proxy or a load balancer to send the request</p> </li> </ul>
     */
    inline const Aws::String& GetClientIP() const { return m_clientIP; }
    inline bool ClientIPHasBeenSet() const { return m_clientIPHasBeenSet; }
    template<typename ClientIPT = Aws::String>
    void SetClientIP(ClientIPT&& value) { m_clientIPHasBeenSet = true; m_clientIP = std::forward<ClientIPT>(value); }
    template<typename ClientIPT = Aws::String>
    HTTPRequest& WithClientIP(ClientIPT&& value) { SetClientIP(std::forward<ClientIPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-letter country code for the country that the request originated from.
     * For a current list of country codes, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1
     * alpha-2</a>.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    HTTPRequest& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part of a web request that identifies the resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p>
     */
    inline const Aws::String& GetURI() const { return m_uRI; }
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }
    template<typename URIT = Aws::String>
    void SetURI(URIT&& value) { m_uRIHasBeenSet = true; m_uRI = std::forward<URIT>(value); }
    template<typename URIT = Aws::String>
    HTTPRequest& WithURI(URIT&& value) { SetURI(std::forward<URIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method specified in the sampled web request. CloudFront supports the
     * following methods: <code>DELETE</code>, <code>GET</code>, <code>HEAD</code>,
     * <code>OPTIONS</code>, <code>PATCH</code>, <code>POST</code>, and
     * <code>PUT</code>. </p>
     */
    inline const Aws::String& GetMethod() const { return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    template<typename MethodT = Aws::String>
    void SetMethod(MethodT&& value) { m_methodHasBeenSet = true; m_method = std::forward<MethodT>(value); }
    template<typename MethodT = Aws::String>
    HTTPRequest& WithMethod(MethodT&& value) { SetMethod(std::forward<MethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP version specified in the sampled web request, for example,
     * <code>HTTP/1.1</code>.</p>
     */
    inline const Aws::String& GetHTTPVersion() const { return m_hTTPVersion; }
    inline bool HTTPVersionHasBeenSet() const { return m_hTTPVersionHasBeenSet; }
    template<typename HTTPVersionT = Aws::String>
    void SetHTTPVersion(HTTPVersionT&& value) { m_hTTPVersionHasBeenSet = true; m_hTTPVersion = std::forward<HTTPVersionT>(value); }
    template<typename HTTPVersionT = Aws::String>
    HTTPRequest& WithHTTPVersion(HTTPVersionT&& value) { SetHTTPVersion(std::forward<HTTPVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains two values for each header in the sampled web
     * request: the name of the header and the value of the header.</p>
     */
    inline const Aws::Vector<HTTPHeader>& GetHeaders() const { return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    template<typename HeadersT = Aws::Vector<HTTPHeader>>
    void SetHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers = std::forward<HeadersT>(value); }
    template<typename HeadersT = Aws::Vector<HTTPHeader>>
    HTTPRequest& WithHeaders(HeadersT&& value) { SetHeaders(std::forward<HeadersT>(value)); return *this;}
    template<typename HeadersT = HTTPHeader>
    HTTPRequest& AddHeaders(HeadersT&& value) { m_headersHasBeenSet = true; m_headers.emplace_back(std::forward<HeadersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientIP;
    bool m_clientIPHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_uRI;
    bool m_uRIHasBeenSet = false;

    Aws::String m_method;
    bool m_methodHasBeenSet = false;

    Aws::String m_hTTPVersion;
    bool m_hTTPVersionHasBeenSet = false;

    Aws::Vector<HTTPHeader> m_headers;
    bool m_headersHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
