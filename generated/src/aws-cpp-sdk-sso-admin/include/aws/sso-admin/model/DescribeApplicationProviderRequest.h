/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class DescribeApplicationProviderRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API DescribeApplicationProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplicationProvider"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the application provider for which you want details.</p>
     */
    inline const Aws::String& GetApplicationProviderArn() const { return m_applicationProviderArn; }
    inline bool ApplicationProviderArnHasBeenSet() const { return m_applicationProviderArnHasBeenSet; }
    template<typename ApplicationProviderArnT = Aws::String>
    void SetApplicationProviderArn(ApplicationProviderArnT&& value) { m_applicationProviderArnHasBeenSet = true; m_applicationProviderArn = std::forward<ApplicationProviderArnT>(value); }
    template<typename ApplicationProviderArnT = Aws::String>
    DescribeApplicationProviderRequest& WithApplicationProviderArn(ApplicationProviderArnT&& value) { SetApplicationProviderArn(std::forward<ApplicationProviderArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationProviderArn;
    bool m_applicationProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
