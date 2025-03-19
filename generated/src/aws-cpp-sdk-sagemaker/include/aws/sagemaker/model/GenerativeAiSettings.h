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
   * <p>The generative AI settings for the SageMaker Canvas application.</p>
   * <p>Configure these settings for Canvas users starting chats with generative AI
   * foundation models. For more information, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/canvas-fm-chat.html"> Use
   * generative AI with foundation models</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GenerativeAiSettings">AWS
   * API Reference</a></p>
   */
  class GenerativeAiSettings
  {
  public:
    AWS_SAGEMAKER_API GenerativeAiSettings() = default;
    AWS_SAGEMAKER_API GenerativeAiSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API GenerativeAiSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of an Amazon Web Services IAM role that allows fine-tuning of large
     * language models (LLMs) in Amazon Bedrock. The IAM role should have Amazon S3
     * read and write permissions, as well as a trust relationship that establishes
     * <code>bedrock.amazonaws.com</code> as a service principal.</p>
     */
    inline const Aws::String& GetAmazonBedrockRoleArn() const { return m_amazonBedrockRoleArn; }
    inline bool AmazonBedrockRoleArnHasBeenSet() const { return m_amazonBedrockRoleArnHasBeenSet; }
    template<typename AmazonBedrockRoleArnT = Aws::String>
    void SetAmazonBedrockRoleArn(AmazonBedrockRoleArnT&& value) { m_amazonBedrockRoleArnHasBeenSet = true; m_amazonBedrockRoleArn = std::forward<AmazonBedrockRoleArnT>(value); }
    template<typename AmazonBedrockRoleArnT = Aws::String>
    GenerativeAiSettings& WithAmazonBedrockRoleArn(AmazonBedrockRoleArnT&& value) { SetAmazonBedrockRoleArn(std::forward<AmazonBedrockRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_amazonBedrockRoleArn;
    bool m_amazonBedrockRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
