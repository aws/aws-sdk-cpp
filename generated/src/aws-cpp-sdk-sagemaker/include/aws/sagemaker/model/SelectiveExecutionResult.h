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
   * <p>The ARN from an execution of the current pipeline.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SelectiveExecutionResult">AWS
   * API Reference</a></p>
   */
  class SelectiveExecutionResult
  {
  public:
    AWS_SAGEMAKER_API SelectiveExecutionResult() = default;
    AWS_SAGEMAKER_API SelectiveExecutionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SelectiveExecutionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN from an execution of the current pipeline.</p>
     */
    inline const Aws::String& GetSourcePipelineExecutionArn() const { return m_sourcePipelineExecutionArn; }
    inline bool SourcePipelineExecutionArnHasBeenSet() const { return m_sourcePipelineExecutionArnHasBeenSet; }
    template<typename SourcePipelineExecutionArnT = Aws::String>
    void SetSourcePipelineExecutionArn(SourcePipelineExecutionArnT&& value) { m_sourcePipelineExecutionArnHasBeenSet = true; m_sourcePipelineExecutionArn = std::forward<SourcePipelineExecutionArnT>(value); }
    template<typename SourcePipelineExecutionArnT = Aws::String>
    SelectiveExecutionResult& WithSourcePipelineExecutionArn(SourcePipelineExecutionArnT&& value) { SetSourcePipelineExecutionArn(std::forward<SourcePipelineExecutionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourcePipelineExecutionArn;
    bool m_sourcePipelineExecutionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
