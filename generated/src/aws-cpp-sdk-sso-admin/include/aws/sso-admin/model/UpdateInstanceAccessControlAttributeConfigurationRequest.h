﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/sso-admin/model/InstanceAccessControlAttributeConfiguration.h>
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
  class UpdateInstanceAccessControlAttributeConfigurationRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API UpdateInstanceAccessControlAttributeConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstanceAccessControlAttributeConfiguration"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Updates the attributes for your ABAC configuration.</p>
     */
    inline const InstanceAccessControlAttributeConfiguration& GetInstanceAccessControlAttributeConfiguration() const{ return m_instanceAccessControlAttributeConfiguration; }
    inline bool InstanceAccessControlAttributeConfigurationHasBeenSet() const { return m_instanceAccessControlAttributeConfigurationHasBeenSet; }
    inline void SetInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfiguration& value) { m_instanceAccessControlAttributeConfigurationHasBeenSet = true; m_instanceAccessControlAttributeConfiguration = value; }
    inline void SetInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfiguration&& value) { m_instanceAccessControlAttributeConfigurationHasBeenSet = true; m_instanceAccessControlAttributeConfiguration = std::move(value); }
    inline UpdateInstanceAccessControlAttributeConfigurationRequest& WithInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfiguration& value) { SetInstanceAccessControlAttributeConfiguration(value); return *this;}
    inline UpdateInstanceAccessControlAttributeConfigurationRequest& WithInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfiguration&& value) { SetInstanceAccessControlAttributeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline UpdateInstanceAccessControlAttributeConfigurationRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline UpdateInstanceAccessControlAttributeConfigurationRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline UpdateInstanceAccessControlAttributeConfigurationRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}
  private:

    InstanceAccessControlAttributeConfiguration m_instanceAccessControlAttributeConfiguration;
    bool m_instanceAccessControlAttributeConfigurationHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
