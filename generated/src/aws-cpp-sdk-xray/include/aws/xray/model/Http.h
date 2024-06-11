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
    AWS_XRAY_API Http();
    AWS_XRAY_API Http(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Http& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request URL.</p>
     */
    inline const Aws::String& GetHttpURL() const{ return m_httpURL; }
    inline bool HttpURLHasBeenSet() const { return m_httpURLHasBeenSet; }
    inline void SetHttpURL(const Aws::String& value) { m_httpURLHasBeenSet = true; m_httpURL = value; }
    inline void SetHttpURL(Aws::String&& value) { m_httpURLHasBeenSet = true; m_httpURL = std::move(value); }
    inline void SetHttpURL(const char* value) { m_httpURLHasBeenSet = true; m_httpURL.assign(value); }
    inline Http& WithHttpURL(const Aws::String& value) { SetHttpURL(value); return *this;}
    inline Http& WithHttpURL(Aws::String&& value) { SetHttpURL(std::move(value)); return *this;}
    inline Http& WithHttpURL(const char* value) { SetHttpURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response status.</p>
     */
    inline int GetHttpStatus() const{ return m_httpStatus; }
    inline bool HttpStatusHasBeenSet() const { return m_httpStatusHasBeenSet; }
    inline void SetHttpStatus(int value) { m_httpStatusHasBeenSet = true; m_httpStatus = value; }
    inline Http& WithHttpStatus(int value) { SetHttpStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request method.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }
    inline Http& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}
    inline Http& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}
    inline Http& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request's user agent string.</p>
     */
    inline const Aws::String& GetUserAgent() const{ return m_userAgent; }
    inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
    inline void SetUserAgent(const Aws::String& value) { m_userAgentHasBeenSet = true; m_userAgent = value; }
    inline void SetUserAgent(Aws::String&& value) { m_userAgentHasBeenSet = true; m_userAgent = std::move(value); }
    inline void SetUserAgent(const char* value) { m_userAgentHasBeenSet = true; m_userAgent.assign(value); }
    inline Http& WithUserAgent(const Aws::String& value) { SetUserAgent(value); return *this;}
    inline Http& WithUserAgent(Aws::String&& value) { SetUserAgent(std::move(value)); return *this;}
    inline Http& WithUserAgent(const char* value) { SetUserAgent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the requestor.</p>
     */
    inline const Aws::String& GetClientIp() const{ return m_clientIp; }
    inline bool ClientIpHasBeenSet() const { return m_clientIpHasBeenSet; }
    inline void SetClientIp(const Aws::String& value) { m_clientIpHasBeenSet = true; m_clientIp = value; }
    inline void SetClientIp(Aws::String&& value) { m_clientIpHasBeenSet = true; m_clientIp = std::move(value); }
    inline void SetClientIp(const char* value) { m_clientIpHasBeenSet = true; m_clientIp.assign(value); }
    inline Http& WithClientIp(const Aws::String& value) { SetClientIp(value); return *this;}
    inline Http& WithClientIp(Aws::String&& value) { SetClientIp(std::move(value)); return *this;}
    inline Http& WithClientIp(const char* value) { SetClientIp(value); return *this;}
    ///@}
  private:

    Aws::String m_httpURL;
    bool m_httpURLHasBeenSet = false;

    int m_httpStatus;
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
