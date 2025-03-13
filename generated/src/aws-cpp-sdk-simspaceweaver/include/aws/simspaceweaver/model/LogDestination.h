/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/model/CloudWatchLogsLogGroup.h>
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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>The location where SimSpace Weaver sends simulation log data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/LogDestination">AWS
   * API Reference</a></p>
   */
  class LogDestination
  {
  public:
    AWS_SIMSPACEWEAVER_API LogDestination() = default;
    AWS_SIMSPACEWEAVER_API LogDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API LogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon CloudWatch Logs log group that stores simulation log data. For more
     * information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline const CloudWatchLogsLogGroup& GetCloudWatchLogsLogGroup() const { return m_cloudWatchLogsLogGroup; }
    inline bool CloudWatchLogsLogGroupHasBeenSet() const { return m_cloudWatchLogsLogGroupHasBeenSet; }
    template<typename CloudWatchLogsLogGroupT = CloudWatchLogsLogGroup>
    void SetCloudWatchLogsLogGroup(CloudWatchLogsLogGroupT&& value) { m_cloudWatchLogsLogGroupHasBeenSet = true; m_cloudWatchLogsLogGroup = std::forward<CloudWatchLogsLogGroupT>(value); }
    template<typename CloudWatchLogsLogGroupT = CloudWatchLogsLogGroup>
    LogDestination& WithCloudWatchLogsLogGroup(CloudWatchLogsLogGroupT&& value) { SetCloudWatchLogsLogGroup(std::forward<CloudWatchLogsLogGroupT>(value)); return *this;}
    ///@}
  private:

    CloudWatchLogsLogGroup m_cloudWatchLogsLogGroup;
    bool m_cloudWatchLogsLogGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
