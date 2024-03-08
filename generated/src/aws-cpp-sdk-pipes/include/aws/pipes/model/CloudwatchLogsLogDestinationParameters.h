/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The Amazon CloudWatch Logs logging configuration settings for the
   * pipe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/CloudwatchLogsLogDestinationParameters">AWS
   * API Reference</a></p>
   */
  class CloudwatchLogsLogDestinationParameters
  {
  public:
    AWS_PIPES_API CloudwatchLogsLogDestinationParameters();
    AWS_PIPES_API CloudwatchLogsLogDestinationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API CloudwatchLogsLogDestinationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services Resource Name (ARN) for the CloudWatch log group to
     * which EventBridge sends the log records.</p>
     */
    inline const Aws::String& GetLogGroupArn() const{ return m_logGroupArn; }

    /**
     * <p>The Amazon Web Services Resource Name (ARN) for the CloudWatch log group to
     * which EventBridge sends the log records.</p>
     */
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Web Services Resource Name (ARN) for the CloudWatch log group to
     * which EventBridge sends the log records.</p>
     */
    inline void SetLogGroupArn(const Aws::String& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = value; }

    /**
     * <p>The Amazon Web Services Resource Name (ARN) for the CloudWatch log group to
     * which EventBridge sends the log records.</p>
     */
    inline void SetLogGroupArn(Aws::String&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::move(value); }

    /**
     * <p>The Amazon Web Services Resource Name (ARN) for the CloudWatch log group to
     * which EventBridge sends the log records.</p>
     */
    inline void SetLogGroupArn(const char* value) { m_logGroupArnHasBeenSet = true; m_logGroupArn.assign(value); }

    /**
     * <p>The Amazon Web Services Resource Name (ARN) for the CloudWatch log group to
     * which EventBridge sends the log records.</p>
     */
    inline CloudwatchLogsLogDestinationParameters& WithLogGroupArn(const Aws::String& value) { SetLogGroupArn(value); return *this;}

    /**
     * <p>The Amazon Web Services Resource Name (ARN) for the CloudWatch log group to
     * which EventBridge sends the log records.</p>
     */
    inline CloudwatchLogsLogDestinationParameters& WithLogGroupArn(Aws::String&& value) { SetLogGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Resource Name (ARN) for the CloudWatch log group to
     * which EventBridge sends the log records.</p>
     */
    inline CloudwatchLogsLogDestinationParameters& WithLogGroupArn(const char* value) { SetLogGroupArn(value); return *this;}

  private:

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
