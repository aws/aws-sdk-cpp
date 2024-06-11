/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/HTTPHeader.h>
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
namespace WAF
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/HTTPRequest">AWS API
   * Reference</a></p>
   */
  class HTTPRequest
  {
  public:
    AWS_WAF_API HTTPRequest();
    AWS_WAF_API HTTPRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API HTTPRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address that the request originated from. If the <code>WebACL</code>
     * is associated with a CloudFront distribution, this is the value of one of the
     * following fields in CloudFront access logs:</p> <ul> <li> <p> <code>c-ip</code>,
     * if the viewer did not use an HTTP proxy or a load balancer to send the
     * request</p> </li> <li> <p> <code>x-forwarded-for</code>, if the viewer did use
     * an HTTP proxy or a load balancer to send the request</p> </li> </ul>
     */
    inline const Aws::String& GetClientIP() const{ return m_clientIP; }
    inline bool ClientIPHasBeenSet() const { return m_clientIPHasBeenSet; }
    inline void SetClientIP(const Aws::String& value) { m_clientIPHasBeenSet = true; m_clientIP = value; }
    inline void SetClientIP(Aws::String&& value) { m_clientIPHasBeenSet = true; m_clientIP = std::move(value); }
    inline void SetClientIP(const char* value) { m_clientIPHasBeenSet = true; m_clientIP.assign(value); }
    inline HTTPRequest& WithClientIP(const Aws::String& value) { SetClientIP(value); return *this;}
    inline HTTPRequest& WithClientIP(Aws::String&& value) { SetClientIP(std::move(value)); return *this;}
    inline HTTPRequest& WithClientIP(const char* value) { SetClientIP(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-letter country code for the country that the request originated from.
     * For a current list of country codes, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2">ISO 3166-1
     * alpha-2</a>.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline HTTPRequest& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline HTTPRequest& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline HTTPRequest& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The part of a web request that identifies the resource, for example,
     * <code>/images/daily-ad.jpg</code>.</p>
     */
    inline const Aws::String& GetURI() const{ return m_uRI; }
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }
    inline void SetURI(const Aws::String& value) { m_uRIHasBeenSet = true; m_uRI = value; }
    inline void SetURI(Aws::String&& value) { m_uRIHasBeenSet = true; m_uRI = std::move(value); }
    inline void SetURI(const char* value) { m_uRIHasBeenSet = true; m_uRI.assign(value); }
    inline HTTPRequest& WithURI(const Aws::String& value) { SetURI(value); return *this;}
    inline HTTPRequest& WithURI(Aws::String&& value) { SetURI(std::move(value)); return *this;}
    inline HTTPRequest& WithURI(const char* value) { SetURI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method specified in the sampled web request. CloudFront supports the
     * following methods: <code>DELETE</code>, <code>GET</code>, <code>HEAD</code>,
     * <code>OPTIONS</code>, <code>PATCH</code>, <code>POST</code>, and
     * <code>PUT</code>. </p>
     */
    inline const Aws::String& GetMethod() const{ return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    inline void SetMethod(const Aws::String& value) { m_methodHasBeenSet = true; m_method = value; }
    inline void SetMethod(Aws::String&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }
    inline void SetMethod(const char* value) { m_methodHasBeenSet = true; m_method.assign(value); }
    inline HTTPRequest& WithMethod(const Aws::String& value) { SetMethod(value); return *this;}
    inline HTTPRequest& WithMethod(Aws::String&& value) { SetMethod(std::move(value)); return *this;}
    inline HTTPRequest& WithMethod(const char* value) { SetMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP version specified in the sampled web request, for example,
     * <code>HTTP/1.1</code>.</p>
     */
    inline const Aws::String& GetHTTPVersion() const{ return m_hTTPVersion; }
    inline bool HTTPVersionHasBeenSet() const { return m_hTTPVersionHasBeenSet; }
    inline void SetHTTPVersion(const Aws::String& value) { m_hTTPVersionHasBeenSet = true; m_hTTPVersion = value; }
    inline void SetHTTPVersion(Aws::String&& value) { m_hTTPVersionHasBeenSet = true; m_hTTPVersion = std::move(value); }
    inline void SetHTTPVersion(const char* value) { m_hTTPVersionHasBeenSet = true; m_hTTPVersion.assign(value); }
    inline HTTPRequest& WithHTTPVersion(const Aws::String& value) { SetHTTPVersion(value); return *this;}
    inline HTTPRequest& WithHTTPVersion(Aws::String&& value) { SetHTTPVersion(std::move(value)); return *this;}
    inline HTTPRequest& WithHTTPVersion(const char* value) { SetHTTPVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains two values for each header in the sampled web
     * request: the name of the header and the value of the header.</p>
     */
    inline const Aws::Vector<HTTPHeader>& GetHeaders() const{ return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    inline void SetHeaders(const Aws::Vector<HTTPHeader>& value) { m_headersHasBeenSet = true; m_headers = value; }
    inline void SetHeaders(Aws::Vector<HTTPHeader>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }
    inline HTTPRequest& WithHeaders(const Aws::Vector<HTTPHeader>& value) { SetHeaders(value); return *this;}
    inline HTTPRequest& WithHeaders(Aws::Vector<HTTPHeader>&& value) { SetHeaders(std::move(value)); return *this;}
    inline HTTPRequest& AddHeaders(const HTTPHeader& value) { m_headersHasBeenSet = true; m_headers.push_back(value); return *this; }
    inline HTTPRequest& AddHeaders(HTTPHeader&& value) { m_headersHasBeenSet = true; m_headers.push_back(std::move(value)); return *this; }
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
} // namespace WAF
} // namespace Aws
