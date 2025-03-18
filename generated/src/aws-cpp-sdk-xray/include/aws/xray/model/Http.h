/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about an HTTP request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/Http">AWS API
   * Reference</a></p>
   */
  class Http
  {
  public:
    AWS_XRAY_API Http() = default;
    AWS_XRAY_API Http(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Http& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request URL.</p>
     */
    inline const Aws::String& GetHttpURL() const { return m_httpURL; }
    inline bool HttpURLHasBeenSet() const { return m_httpURLHasBeenSet; }
    template<typename HttpURLT = Aws::String>
    void SetHttpURL(HttpURLT&& value) { m_httpURLHasBeenSet = true; m_httpURL = std::forward<HttpURLT>(value); }
    template<typename HttpURLT = Aws::String>
    Http& WithHttpURL(HttpURLT&& value) { SetHttpURL(std::forward<HttpURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response status.</p>
     */
    inline int GetHttpStatus() const { return m_httpStatus; }
    inline bool HttpStatusHasBeenSet() const { return m_httpStatusHasBeenSet; }
    inline void SetHttpStatus(int value) { m_httpStatusHasBeenSet = true; m_httpStatus = value; }
    inline Http& WithHttpStatus(int value) { SetHttpStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request method.</p>
     */
    inline const Aws::String& GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    template<typename HttpMethodT = Aws::String>
    void SetHttpMethod(HttpMethodT&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::forward<HttpMethodT>(value); }
    template<typename HttpMethodT = Aws::String>
    Http& WithHttpMethod(HttpMethodT&& value) { SetHttpMethod(std::forward<HttpMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request's user agent string.</p>
     */
    inline const Aws::String& GetUserAgent() const { return m_userAgent; }
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
    template<typename UserAgentT = Aws::String>
    void SetUserAgent(UserAgentT&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::forward<UserAgentT>(value); }
    template<typename UserAgentT = Aws::String>
    Http& WithUserAgent(UserAgentT&& value) { SetUserAgent(std::forward<UserAgentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the requestor.</p>
     */
    inline const Aws::String& GetClientIp() const { return m_clientIp; }
    inline bool ClientIpHasBeenSet() const { return m_clientIpHasBeenSet; }
    template<typename ClientIpT = Aws::String>
    void SetClientIp(ClientIpT&& value) { m_clientIpHasBeenSet = true; m_clientIp = std::forward<ClientIpT>(value); }
    template<typename ClientIpT = Aws::String>
    Http& WithClientIp(ClientIpT&& value) { SetClientIp(std::forward<ClientIpT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_httpURL;
    bool m_httpURLHasBeenSet = false;

    int m_httpStatus{0};
    bool m_httpStatusHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    Aws::String m_userAgent;
    bool m_userAgentHasBeenSet = false;

    Aws::String m_clientIp;
    bool m_clientIpHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
