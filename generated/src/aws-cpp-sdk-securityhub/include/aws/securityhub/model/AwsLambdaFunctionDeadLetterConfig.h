/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The dead-letter queue for failed asynchronous invocations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsLambdaFunctionDeadLetterConfig">AWS
   * API Reference</a></p>
   */
  class AwsLambdaFunctionDeadLetterConfig
  {
  public:
    AWS_SECURITYHUB_API AwsLambdaFunctionDeadLetterConfig();
    AWS_SECURITYHUB_API AwsLambdaFunctionDeadLetterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsLambdaFunctionDeadLetterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of an SQS queue or SNS topic.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The ARN of an SQS queue or SNS topic.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The ARN of an SQS queue or SNS topic.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The ARN of an SQS queue or SNS topic.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The ARN of an SQS queue or SNS topic.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The ARN of an SQS queue or SNS topic.</p>
     */
    inline AwsLambdaFunctionDeadLetterConfig& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The ARN of an SQS queue or SNS topic.</p>
     */
    inline AwsLambdaFunctionDeadLetterConfig& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an SQS queue or SNS topic.</p>
     */
    inline AwsLambdaFunctionDeadLetterConfig& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}

  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
