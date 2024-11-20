/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/AccountSettingsNotificationConfiguration.h>
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
   * <p>A request to update the provisioned capacity settings for querying
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ProvisionedCapacityRequest">AWS
   * API Reference</a></p>
   */
  class ProvisionedCapacityRequest
  {
  public:
    AWS_TIMESTREAMQUERY_API ProvisionedCapacityRequest();
    AWS_TIMESTREAMQUERY_API ProvisionedCapacityRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ProvisionedCapacityRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target compute capacity for querying data, specified in Timestream
     * Compute Units (TCUs).</p>
     */
    inline int GetTargetQueryTCU() const{ return m_targetQueryTCU; }
    inline bool TargetQueryTCUHasBeenSet() const { return m_targetQueryTCUHasBeenSet; }
    inline void SetTargetQueryTCU(int value) { m_targetQueryTCUHasBeenSet = true; m_targetQueryTCU = value; }
    inline ProvisionedCapacityRequest& WithTargetQueryTCU(int value) { SetTargetQueryTCU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for notifications related to the provisioned capacity
     * update.</p>
     */
    inline const AccountSettingsNotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    inline void SetNotificationConfiguration(const AccountSettingsNotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }
    inline void SetNotificationConfiguration(AccountSettingsNotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }
    inline ProvisionedCapacityRequest& WithNotificationConfiguration(const AccountSettingsNotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}
    inline ProvisionedCapacityRequest& WithNotificationConfiguration(AccountSettingsNotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    int m_targetQueryTCU;
    bool m_targetQueryTCUHasBeenSet = false;

    AccountSettingsNotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
