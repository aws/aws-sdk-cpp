/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetApplicationGrantRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API GetApplicationGrantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApplicationGrant"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ARN of the application that contains the grant.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>Specifies the ARN of the application that contains the grant.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the application that contains the grant.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>Specifies the ARN of the application that contains the grant.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the application that contains the grant.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>Specifies the ARN of the application that contains the grant.</p>
     */
    inline GetApplicationGrantRequest& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the application that contains the grant.</p>
     */
    inline GetApplicationGrantRequest& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the application that contains the grant.</p>
     */
    inline GetApplicationGrantRequest& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>Specifies the type of grant.</p>
     */
    inline const GrantType& GetGrantType() const{ return m_grantType; }

    /**
     * <p>Specifies the type of grant.</p>
     */
    inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }

    /**
     * <p>Specifies the type of grant.</p>
     */
    inline void SetGrantType(const GrantType& value) { m_grantTypeHasBeenSet = true; m_grantType = value; }

    /**
     * <p>Specifies the type of grant.</p>
     */
    inline void SetGrantType(GrantType&& value) { m_grantTypeHasBeenSet = true; m_grantType = std::move(value); }

    /**
     * <p>Specifies the type of grant.</p>
     */
    inline GetApplicationGrantRequest& WithGrantType(const GrantType& value) { SetGrantType(value); return *this;}

    /**
     * <p>Specifies the type of grant.</p>
     */
    inline GetApplicationGrantRequest& WithGrantType(GrantType&& value) { SetGrantType(std::move(value)); return *this;}

  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    GrantType m_grantType;
    bool m_grantTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
