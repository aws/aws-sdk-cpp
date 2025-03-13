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
    AWS_SSOADMIN_API GetApplicationGrantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApplicationGrant"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the application that contains the grant.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    GetApplicationGrantRequest& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of grant.</p>
     */
    inline GrantType GetGrantType() const { return m_grantType; }
    inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
    inline void SetGrantType(GrantType value) { m_grantTypeHasBeenSet = true; m_grantType = value; }
    inline GetApplicationGrantRequest& WithGrantType(GrantType value) { SetGrantType(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    GrantType m_grantType{GrantType::NOT_SET};
    bool m_grantTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
