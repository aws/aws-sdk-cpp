/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Capabilities.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateCustomPermissionsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateCustomPermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomPermissions"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the custom
     * permissions profile that you want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateCustomPermissionsRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom permissions profile that you want to update.</p>
     */
    inline const Aws::String& GetCustomPermissionsName() const { return m_customPermissionsName; }
    inline bool CustomPermissionsNameHasBeenSet() const { return m_customPermissionsNameHasBeenSet; }
    template<typename CustomPermissionsNameT = Aws::String>
    void SetCustomPermissionsName(CustomPermissionsNameT&& value) { m_customPermissionsNameHasBeenSet = true; m_customPermissionsName = std::forward<CustomPermissionsNameT>(value); }
    template<typename CustomPermissionsNameT = Aws::String>
    UpdateCustomPermissionsRequest& WithCustomPermissionsName(CustomPermissionsNameT&& value) { SetCustomPermissionsName(std::forward<CustomPermissionsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of actions to include in the custom permissions profile.</p>
     */
    inline const Capabilities& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Capabilities>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Capabilities>
    UpdateCustomPermissionsRequest& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_customPermissionsName;
    bool m_customPermissionsNameHasBeenSet = false;

    Capabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
