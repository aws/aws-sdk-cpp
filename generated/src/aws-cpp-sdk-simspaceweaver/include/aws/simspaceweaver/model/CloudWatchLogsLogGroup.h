/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>The Amazon CloudWatch Logs log group for the simulation. For more information
   * about log groups, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
   * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/CloudWatchLogsLogGroup">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsLogGroup
  {
  public:
    AWS_SIMSPACEWEAVER_API CloudWatchLogsLogGroup();
    AWS_SIMSPACEWEAVER_API CloudWatchLogsLogGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API CloudWatchLogsLogGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group for
     * the simulation. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group for
     * the simulation. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group for
     * the simulation. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group for
     * the simulation. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group for
     * the simulation. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline void SetLogGroupArn(const char* value) { m_logGroupArnHasBeenSet = true; m_logGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group for
     * the simulation. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline CloudWatchLogsLogGroup& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group for
     * the simulation. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline CloudWatchLogsLogGroup& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log group for
     * the simulation. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General Reference</i>.
     * For more information about log groups, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Working-with-log-groups-and-streams.html">Working
     * with log groups and log streams</a> in the <i>Amazon CloudWatch Logs User
     * Guide</i>.</p>
     */
    inline CloudWatchLogsLogGroup& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}

  private:

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
