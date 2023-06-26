/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/sso-oidc/SSOOIDCRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSOOIDC
{
namespace Model
{

  /**
   */
  class StartDeviceAuthorizationRequest : public SSOOIDCRequest
  {
  public:
    AWS_SSOOIDC_API StartDeviceAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDeviceAuthorization"; }

    AWS_SSOOIDC_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier string for the client that is registered with IAM
     * Identity Center. This value should come from the persisted result of the
     * <a>RegisterClient</a> API operation.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The unique identifier string for the client that is registered with IAM
     * Identity Center. This value should come from the persisted result of the
     * <a>RegisterClient</a> API operation.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The unique identifier string for the client that is registered with IAM
     * Identity Center. This value should come from the persisted result of the
     * <a>RegisterClient</a> API operation.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The unique identifier string for the client that is registered with IAM
     * Identity Center. This value should come from the persisted result of the
     * <a>RegisterClient</a> API operation.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The unique identifier string for the client that is registered with IAM
     * Identity Center. This value should come from the persisted result of the
     * <a>RegisterClient</a> API operation.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The unique identifier string for the client that is registered with IAM
     * Identity Center. This value should come from the persisted result of the
     * <a>RegisterClient</a> API operation.</p>
     */
    inline StartDeviceAuthorizationRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The unique identifier string for the client that is registered with IAM
     * Identity Center. This value should come from the persisted result of the
     * <a>RegisterClient</a> API operation.</p>
     */
    inline StartDeviceAuthorizationRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier string for the client that is registered with IAM
     * Identity Center. This value should come from the persisted result of the
     * <a>RegisterClient</a> API operation.</p>
     */
    inline StartDeviceAuthorizationRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>A secret string that is generated for the client. This value should come from
     * the persisted result of the <a>RegisterClient</a> API operation.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * <p>A secret string that is generated for the client. This value should come from
     * the persisted result of the <a>RegisterClient</a> API operation.</p>
     */
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }

    /**
     * <p>A secret string that is generated for the client. This value should come from
     * the persisted result of the <a>RegisterClient</a> API operation.</p>
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }

    /**
     * <p>A secret string that is generated for the client. This value should come from
     * the persisted result of the <a>RegisterClient</a> API operation.</p>
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }

    /**
     * <p>A secret string that is generated for the client. This value should come from
     * the persisted result of the <a>RegisterClient</a> API operation.</p>
     */
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }

    /**
     * <p>A secret string that is generated for the client. This value should come from
     * the persisted result of the <a>RegisterClient</a> API operation.</p>
     */
    inline StartDeviceAuthorizationRequest& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * <p>A secret string that is generated for the client. This value should come from
     * the persisted result of the <a>RegisterClient</a> API operation.</p>
     */
    inline StartDeviceAuthorizationRequest& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * <p>A secret string that is generated for the client. This value should come from
     * the persisted result of the <a>RegisterClient</a> API operation.</p>
     */
    inline StartDeviceAuthorizationRequest& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}


    /**
     * <p>The URL for the AWS access portal. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/using-the-portal.html">Using
     * the AWS access portal</a> in the <i>IAM Identity Center User Guide</i>.</p>
     */
    inline const Aws::String& GetStartUrl() const{ return m_startUrl; }

    /**
     * <p>The URL for the AWS access portal. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/using-the-portal.html">Using
     * the AWS access portal</a> in the <i>IAM Identity Center User Guide</i>.</p>
     */
    inline bool StartUrlHasBeenSet() const { return m_startUrlHasBeenSet; }

    /**
     * <p>The URL for the AWS access portal. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/using-the-portal.html">Using
     * the AWS access portal</a> in the <i>IAM Identity Center User Guide</i>.</p>
     */
    inline void SetStartUrl(const Aws::String& value) { m_startUrlHasBeenSet = true; m_startUrl = value; }

    /**
     * <p>The URL for the AWS access portal. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/using-the-portal.html">Using
     * the AWS access portal</a> in the <i>IAM Identity Center User Guide</i>.</p>
     */
    inline void SetStartUrl(Aws::String&& value) { m_startUrlHasBeenSet = true; m_startUrl = std::move(value); }

    /**
     * <p>The URL for the AWS access portal. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/using-the-portal.html">Using
     * the AWS access portal</a> in the <i>IAM Identity Center User Guide</i>.</p>
     */
    inline void SetStartUrl(const char* value) { m_startUrlHasBeenSet = true; m_startUrl.assign(value); }

    /**
     * <p>The URL for the AWS access portal. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/using-the-portal.html">Using
     * the AWS access portal</a> in the <i>IAM Identity Center User Guide</i>.</p>
     */
    inline StartDeviceAuthorizationRequest& WithStartUrl(const Aws::String& value) { SetStartUrl(value); return *this;}

    /**
     * <p>The URL for the AWS access portal. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/using-the-portal.html">Using
     * the AWS access portal</a> in the <i>IAM Identity Center User Guide</i>.</p>
     */
    inline StartDeviceAuthorizationRequest& WithStartUrl(Aws::String&& value) { SetStartUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the AWS access portal. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/using-the-portal.html">Using
     * the AWS access portal</a> in the <i>IAM Identity Center User Guide</i>.</p>
     */
    inline StartDeviceAuthorizationRequest& WithStartUrl(const char* value) { SetStartUrl(value); return *this;}

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    Aws::String m_startUrl;
    bool m_startUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
