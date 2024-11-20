/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/SnsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Configuration settings for notifications related to account
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/AccountSettingsNotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class AccountSettingsNotificationConfiguration
  {
  public:
    AWS_TIMESTREAMQUERY_API AccountSettingsNotificationConfiguration();
    AWS_TIMESTREAMQUERY_API AccountSettingsNotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API AccountSettingsNotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SnsConfiguration& GetSnsConfiguration() const{ return m_snsConfiguration; }
    inline bool SnsConfigurationHasBeenSet() const { return m_snsConfigurationHasBeenSet; }
    inline void SetSnsConfiguration(const SnsConfiguration& value) { m_snsConfigurationHasBeenSet = true; m_snsConfiguration = value; }
    inline void SetSnsConfiguration(SnsConfiguration&& value) { m_snsConfigurationHasBeenSet = true; m_snsConfiguration = std::move(value); }
    inline AccountSettingsNotificationConfiguration& WithSnsConfiguration(const SnsConfiguration& value) { SetSnsConfiguration(value); return *this;}
    inline AccountSettingsNotificationConfiguration& WithSnsConfiguration(SnsConfiguration&& value) { SetSnsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that grants Timestream permission to publish
     * notifications. This field is only visible if SNS Topic is provided when updating
     * the account settings.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline AccountSettingsNotificationConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline AccountSettingsNotificationConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline AccountSettingsNotificationConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    SnsConfiguration m_snsConfiguration;
    bool m_snsConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
