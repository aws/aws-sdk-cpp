/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
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
  class DescribeAlarmContributorsRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API DescribeAlarmContributorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlarmContributors"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the alarm for which to retrieve contributor information.</p>
     */
    inline const Aws::String& GetAlarmName() const { return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    template<typename AlarmNameT = Aws::String>
    void SetAlarmName(AlarmNameT&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::forward<AlarmNameT>(value); }
    template<typename AlarmNameT = Aws::String>
    DescribeAlarmContributorsRequest& WithAlarmName(AlarmNameT&& value) { SetAlarmName(std::forward<AlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAlarmContributorsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
