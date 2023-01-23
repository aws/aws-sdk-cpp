/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An Amazon SNS data source used for streaming labeling jobs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobSnsDataSource">AWS
   * API Reference</a></p>
   */
  class LabelingJobSnsDataSource
  {
  public:
    AWS_SAGEMAKER_API LabelingJobSnsDataSource();
    AWS_SAGEMAKER_API LabelingJobSnsDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobSnsDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon SNS input topic Amazon Resource Name (ARN). Specify the ARN of the
     * input topic you will use to send new data objects to a streaming labeling
     * job.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The Amazon SNS input topic Amazon Resource Name (ARN). Specify the ARN of the
     * input topic you will use to send new data objects to a streaming labeling
     * job.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The Amazon SNS input topic Amazon Resource Name (ARN). Specify the ARN of the
     * input topic you will use to send new data objects to a streaming labeling
     * job.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The Amazon SNS input topic Amazon Resource Name (ARN). Specify the ARN of the
     * input topic you will use to send new data objects to a streaming labeling
     * job.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The Amazon SNS input topic Amazon Resource Name (ARN). Specify the ARN of the
     * input topic you will use to send new data objects to a streaming labeling
     * job.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The Amazon SNS input topic Amazon Resource Name (ARN). Specify the ARN of the
     * input topic you will use to send new data objects to a streaming labeling
     * job.</p>
     */
    inline LabelingJobSnsDataSource& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The Amazon SNS input topic Amazon Resource Name (ARN). Specify the ARN of the
     * input topic you will use to send new data objects to a streaming labeling
     * job.</p>
     */
    inline LabelingJobSnsDataSource& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon SNS input topic Amazon Resource Name (ARN). Specify the ARN of the
     * input topic you will use to send new data objects to a streaming labeling
     * job.</p>
     */
    inline LabelingJobSnsDataSource& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}

  private:

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
