/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/InstanceAccessControlAttributeConfiguration.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class UpdateInstanceAccessControlAttributeConfigurationRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API UpdateInstanceAccessControlAttributeConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstanceAccessControlAttributeConfiguration"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    UpdateInstanceAccessControlAttributeConfigurationRequest& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the attributes for your ABAC configuration.</p>
     */
    inline const InstanceAccessControlAttributeConfiguration& GetInstanceAccessControlAttributeConfiguration() const { return m_instanceAccessControlAttributeConfiguration; }
    inline bool InstanceAccessControlAttributeConfigurationHasBeenSet() const { return m_instanceAccessControlAttributeConfigurationHasBeenSet; }
    template<typename InstanceAccessControlAttributeConfigurationT = InstanceAccessControlAttributeConfiguration>
    void SetInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfigurationT&& value) { m_instanceAccessControlAttributeConfigurationHasBeenSet = true; m_instanceAccessControlAttributeConfiguration = std::forward<InstanceAccessControlAttributeConfigurationT>(value); }
    template<typename InstanceAccessControlAttributeConfigurationT = InstanceAccessControlAttributeConfiguration>
    UpdateInstanceAccessControlAttributeConfigurationRequest& WithInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfigurationT&& value) { SetInstanceAccessControlAttributeConfiguration(std::forward<InstanceAccessControlAttributeConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    InstanceAccessControlAttributeConfiguration m_instanceAccessControlAttributeConfiguration;
    bool m_instanceAccessControlAttributeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
