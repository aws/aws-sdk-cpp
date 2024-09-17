/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   * <p>The request body of the UpdateServiceSetting API operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UpdateServiceSettingRequest">AWS
   * API Reference</a></p>
   */
  class UpdateServiceSettingRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateServiceSettingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceSetting"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service setting to update. For example,
     * <code>arn:aws:ssm:us-east-1:111122223333:servicesetting/ssm/parameter-store/high-throughput-enabled</code>.
     * The setting ID can be one of the following.</p> <ul> <li> <p>
     * <code>/ssm/managed-instance/default-ec2-instance-management-role</code> </p>
     * </li> <li> <p> <code>/ssm/automation/customer-script-log-destination</code> </p>
     * </li> <li> <p> <code>/ssm/automation/customer-script-log-group-name</code> </p>
     * </li> <li> <p> <code>/ssm/documents/console/public-sharing-permission</code>
     * </p> </li> <li> <p> <code>/ssm/managed-instance/activation-tier</code> </p>
     * </li> <li> <p> <code>/ssm/opsinsights/opscenter</code> </p> </li> <li> <p>
     * <code>/ssm/parameter-store/default-parameter-tier</code> </p> </li> <li> <p>
     * <code>/ssm/parameter-store/high-throughput-enabled</code> </p> </li> </ul>
     *  <p>Permissions to update the
     * <code>/ssm/managed-instance/default-ec2-instance-management-role</code> setting
     * should only be provided to administrators. Implement least privilege access when
     * allowing individuals to configure or modify the Default Host Management
     * Configuration.</p> 
     */
    inline const Aws::String& GetSettingId() const{ return m_settingId; }
    inline bool SettingIdHasBeenSet() const { return m_settingIdHasBeenSet; }
    inline void SetSettingId(const Aws::String& value) { m_settingIdHasBeenSet = true; m_settingId = value; }
    inline void SetSettingId(Aws::String&& value) { m_settingIdHasBeenSet = true; m_settingId = std::move(value); }
    inline void SetSettingId(const char* value) { m_settingIdHasBeenSet = true; m_settingId.assign(value); }
    inline UpdateServiceSettingRequest& WithSettingId(const Aws::String& value) { SetSettingId(value); return *this;}
    inline UpdateServiceSettingRequest& WithSettingId(Aws::String&& value) { SetSettingId(std::move(value)); return *this;}
    inline UpdateServiceSettingRequest& WithSettingId(const char* value) { SetSettingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value to specify for the service setting. The following list
     * specifies the available values for each setting.</p> <ul> <li> <p>For
     * <code>/ssm/managed-instance/default-ec2-instance-management-role</code>, enter
     * the name of an IAM role. </p> </li> <li> <p>For
     * <code>/ssm/automation/customer-script-log-destination</code>, enter
     * <code>CloudWatch</code>.</p> </li> <li> <p>For
     * <code>/ssm/automation/customer-script-log-group-name</code>, enter the name of
     * an Amazon CloudWatch Logs log group.</p> </li> <li> <p>For
     * <code>/ssm/documents/console/public-sharing-permission</code>, enter
     * <code>Enable</code> or <code>Disable</code>.</p> </li> <li> <p>For
     * <code>/ssm/managed-instance/activation-tier</code>, enter <code>standard</code>
     * or <code>advanced</code>.</p> </li> <li> <p> For
     * <code>/ssm/opsinsights/opscenter</code>, enter <code>Enabled</code> or
     * <code>Disabled</code>. </p> </li> <li> <p>For
     * <code>/ssm/parameter-store/default-parameter-tier</code>, enter
     * <code>Standard</code>, <code>Advanced</code>, or
     * <code>Intelligent-Tiering</code> </p> </li> <li> <p>For
     * <code>/ssm/parameter-store/high-throughput-enabled</code>, enter
     * <code>true</code> or <code>false</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetSettingValue() const{ return m_settingValue; }
    inline bool SettingValueHasBeenSet() const { return m_settingValueHasBeenSet; }
    inline void SetSettingValue(const Aws::String& value) { m_settingValueHasBeenSet = true; m_settingValue = value; }
    inline void SetSettingValue(Aws::String&& value) { m_settingValueHasBeenSet = true; m_settingValue = std::move(value); }
    inline void SetSettingValue(const char* value) { m_settingValueHasBeenSet = true; m_settingValue.assign(value); }
    inline UpdateServiceSettingRequest& WithSettingValue(const Aws::String& value) { SetSettingValue(value); return *this;}
    inline UpdateServiceSettingRequest& WithSettingValue(Aws::String&& value) { SetSettingValue(std::move(value)); return *this;}
    inline UpdateServiceSettingRequest& WithSettingValue(const char* value) { SetSettingValue(value); return *this;}
    ///@}
  private:

    Aws::String m_settingId;
    bool m_settingIdHasBeenSet = false;

    Aws::String m_settingValue;
    bool m_settingValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
