/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/Grant.h>
#include <aws/sso-admin/model/GrantType.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class PutApplicationGrantRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API PutApplicationGrantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutApplicationGrant"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ARN of the application to update.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>Specifies the ARN of the application to update.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the application to update.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>Specifies the ARN of the application to update.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the application to update.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>Specifies the ARN of the application to update.</p>
     */
    inline PutApplicationGrantRequest& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the application to update.</p>
     */
    inline PutApplicationGrantRequest& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the application to update.</p>
     */
    inline PutApplicationGrantRequest& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>Specifies a structure that describes the grant to update.</p>
     */
    inline const Grant& GetGrant() const{ return m_grant; }

    /**
     * <p>Specifies a structure that describes the grant to update.</p>
     */
    inline bool GrantHasBeenSet() const { return m_grantHasBeenSet; }

    /**
     * <p>Specifies a structure that describes the grant to update.</p>
     */
    inline void SetGrant(const Grant& value) { m_grantHasBeenSet = true; m_grant = value; }

    /**
     * <p>Specifies a structure that describes the grant to update.</p>
     */
    inline void SetGrant(Grant&& value) { m_grantHasBeenSet = true; m_grant = std::move(value); }

    /**
     * <p>Specifies a structure that describes the grant to update.</p>
     */
    inline PutApplicationGrantRequest& WithGrant(const Grant& value) { SetGrant(value); return *this;}

    /**
     * <p>Specifies a structure that describes the grant to update.</p>
     */
    inline PutApplicationGrantRequest& WithGrant(Grant&& value) { SetGrant(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of grant to update.</p>
     */
    inline const GrantType& GetGrantType() const{ return m_grantType; }

    /**
     * <p>Specifies the type of grant to update.</p>
     */
    inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }

    /**
     * <p>Specifies the type of grant to update.</p>
     */
    inline void SetGrantType(const GrantType& value) { m_grantTypeHasBeenSet = true; m_grantType = value; }

    /**
     * <p>Specifies the type of grant to update.</p>
     */
    inline void SetGrantType(GrantType&& value) { m_grantTypeHasBeenSet = true; m_grantType = std::move(value); }

    /**
     * <p>Specifies the type of grant to update.</p>
     */
    inline PutApplicationGrantRequest& WithGrantType(const GrantType& value) { SetGrantType(value); return *this;}

    /**
     * <p>Specifies the type of grant to update.</p>
     */
    inline PutApplicationGrantRequest& WithGrantType(GrantType&& value) { SetGrantType(std::move(value)); return *this;}

  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Grant m_grant;
    bool m_grantHasBeenSet = false;

    GrantType m_grantType;
    bool m_grantTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
