/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSOOIDC
{
namespace Model
{
  class StartDeviceAuthorizationResult
  {
  public:
    AWS_SSOOIDC_API StartDeviceAuthorizationResult() = default;
    AWS_SSOOIDC_API StartDeviceAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOOIDC_API StartDeviceAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The short-lived code that is used by the device when polling for a session
     * token.</p>
     */
    inline const Aws::String& GetDeviceCode() const { return m_deviceCode; }
    template<typename DeviceCodeT = Aws::String>
    void SetDeviceCode(DeviceCodeT&& value) { m_deviceCodeHasBeenSet = true; m_deviceCode = std::forward<DeviceCodeT>(value); }
    template<typename DeviceCodeT = Aws::String>
    StartDeviceAuthorizationResult& WithDeviceCode(DeviceCodeT&& value) { SetDeviceCode(std::forward<DeviceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A one-time user verification code. This is needed to authorize an in-use
     * device.</p>
     */
    inline const Aws::String& GetUserCode() const { return m_userCode; }
    template<typename UserCodeT = Aws::String>
    void SetUserCode(UserCodeT&& value) { m_userCodeHasBeenSet = true; m_userCode = std::forward<UserCodeT>(value); }
    template<typename UserCodeT = Aws::String>
    StartDeviceAuthorizationResult& WithUserCode(UserCodeT&& value) { SetUserCode(std::forward<UserCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the verification page that takes the <code>userCode</code> to
     * authorize the device.</p>
     */
    inline const Aws::String& GetVerificationUri() const { return m_verificationUri; }
    template<typename VerificationUriT = Aws::String>
    void SetVerificationUri(VerificationUriT&& value) { m_verificationUriHasBeenSet = true; m_verificationUri = std::forward<VerificationUriT>(value); }
    template<typename VerificationUriT = Aws::String>
    StartDeviceAuthorizationResult& WithVerificationUri(VerificationUriT&& value) { SetVerificationUri(std::forward<VerificationUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alternate URL that the client can use to automatically launch a browser.
     * This process skips the manual step in which the user visits the verification
     * page and enters their code.</p>
     */
    inline const Aws::String& GetVerificationUriComplete() const { return m_verificationUriComplete; }
    template<typename VerificationUriCompleteT = Aws::String>
    void SetVerificationUriComplete(VerificationUriCompleteT&& value) { m_verificationUriCompleteHasBeenSet = true; m_verificationUriComplete = std::forward<VerificationUriCompleteT>(value); }
    template<typename VerificationUriCompleteT = Aws::String>
    StartDeviceAuthorizationResult& WithVerificationUriComplete(VerificationUriCompleteT&& value) { SetVerificationUriComplete(std::forward<VerificationUriCompleteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the number of seconds in which the verification code will become
     * invalid.</p>
     */
    inline int GetExpiresIn() const { return m_expiresIn; }
    inline void SetExpiresIn(int value) { m_expiresInHasBeenSet = true; m_expiresIn = value; }
    inline StartDeviceAuthorizationResult& WithExpiresIn(int value) { SetExpiresIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the number of seconds the client must wait between attempts when
     * polling for a session.</p>
     */
    inline int GetInterval() const { return m_interval; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline StartDeviceAuthorizationResult& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartDeviceAuthorizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceCode;
    bool m_deviceCodeHasBeenSet = false;

    Aws::String m_userCode;
    bool m_userCodeHasBeenSet = false;

    Aws::String m_verificationUri;
    bool m_verificationUriHasBeenSet = false;

    Aws::String m_verificationUriComplete;
    bool m_verificationUriCompleteHasBeenSet = false;

    int m_expiresIn{0};
    bool m_expiresInHasBeenSet = false;

    int m_interval{0};
    bool m_intervalHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
