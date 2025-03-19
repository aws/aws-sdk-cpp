/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class DeleteAlarmsRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API DeleteAlarmsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAlarms"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The alarms to be deleted. Do not enclose the alarm names in quote marks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmNames() const { return m_alarmNames; }
    inline bool AlarmNamesHasBeenSet() const { return m_alarmNamesHasBeenSet; }
    template<typename AlarmNamesT = Aws::Vector<Aws::String>>
    void SetAlarmNames(AlarmNamesT&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = std::forward<AlarmNamesT>(value); }
    template<typename AlarmNamesT = Aws::Vector<Aws::String>>
    DeleteAlarmsRequest& WithAlarmNames(AlarmNamesT&& value) { SetAlarmNames(std::forward<AlarmNamesT>(value)); return *this;}
    template<typename AlarmNamesT = Aws::String>
    DeleteAlarmsRequest& AddAlarmNames(AlarmNamesT&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.emplace_back(std::forward<AlarmNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_alarmNames;
    bool m_alarmNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
