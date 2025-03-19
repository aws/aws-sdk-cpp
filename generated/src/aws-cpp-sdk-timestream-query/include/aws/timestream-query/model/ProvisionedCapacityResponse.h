/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/AccountSettingsNotificationConfiguration.h>
#include <aws/timestream-query/model/LastUpdate.h>
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
   * <p>The response to a request to update the provisioned capacity settings for
   * querying data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ProvisionedCapacityResponse">AWS
   * API Reference</a></p>
   */
  class ProvisionedCapacityResponse
  {
  public:
    AWS_TIMESTREAMQUERY_API ProvisionedCapacityResponse() = default;
    AWS_TIMESTREAMQUERY_API ProvisionedCapacityResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ProvisionedCapacityResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of Timestream Compute Units (TCUs) provisioned in the account.
     * This field is only visible when the compute mode is
     * <code>PROVISIONED</code>.</p>
     */
    inline int GetActiveQueryTCU() const { return m_activeQueryTCU; }
    inline bool ActiveQueryTCUHasBeenSet() const { return m_activeQueryTCUHasBeenSet; }
    inline void SetActiveQueryTCU(int value) { m_activeQueryTCUHasBeenSet = true; m_activeQueryTCU = value; }
    inline ProvisionedCapacityResponse& WithActiveQueryTCU(int value) { SetActiveQueryTCU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains settings for notifications that are sent whenever the
     * provisioned capacity settings are modified. This field is only visible when the
     * compute mode is <code>PROVISIONED</code>.</p>
     */
    inline const AccountSettingsNotificationConfiguration& GetNotificationConfiguration() const { return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    template<typename NotificationConfigurationT = AccountSettingsNotificationConfiguration>
    void SetNotificationConfiguration(NotificationConfigurationT&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::forward<NotificationConfigurationT>(value); }
    template<typename NotificationConfigurationT = AccountSettingsNotificationConfiguration>
    ProvisionedCapacityResponse& WithNotificationConfiguration(NotificationConfigurationT&& value) { SetNotificationConfiguration(std::forward<NotificationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the last update to the provisioned capacity settings.</p>
     */
    inline const LastUpdate& GetLastUpdate() const { return m_lastUpdate; }
    inline bool LastUpdateHasBeenSet() const { return m_lastUpdateHasBeenSet; }
    template<typename LastUpdateT = LastUpdate>
    void SetLastUpdate(LastUpdateT&& value) { m_lastUpdateHasBeenSet = true; m_lastUpdate = std::forward<LastUpdateT>(value); }
    template<typename LastUpdateT = LastUpdate>
    ProvisionedCapacityResponse& WithLastUpdate(LastUpdateT&& value) { SetLastUpdate(std::forward<LastUpdateT>(value)); return *this;}
    ///@}
  private:

    int m_activeQueryTCU{0};
    bool m_activeQueryTCUHasBeenSet = false;

    AccountSettingsNotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet = false;

    LastUpdate m_lastUpdate;
    bool m_lastUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
