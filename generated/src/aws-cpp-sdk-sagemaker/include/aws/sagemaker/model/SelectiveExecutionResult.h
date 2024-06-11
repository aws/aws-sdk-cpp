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
    AWS_SAGEMAKER_API SelectiveExecutionResult();
    AWS_SAGEMAKER_API SelectiveExecutionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SelectiveExecutionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN from an execution of the current pipeline.</p>
     */
    inline const Aws::String& GetSourcePipelineExecutionArn() const{ return m_sourcePipelineExecutionArn; }
    inline bool SourcePipelineExecutionArnHasBeenSet() const { return m_sourcePipelineExecutionArnHasBeenSet; }
    inline void SetSourcePipelineExecutionArn(const Aws::String& value) { m_sourcePipelineExecutionArnHasBeenSet = true; m_sourcePipelineExecutionArn = value; }
    inline void SetSourcePipelineExecutionArn(Aws::String&& value) { m_sourcePipelineExecutionArnHasBeenSet = true; m_sourcePipelineExecutionArn = std::move(value); }
    inline void SetSourcePipelineExecutionArn(const char* value) { m_sourcePipelineExecutionArnHasBeenSet = true; m_sourcePipelineExecutionArn.assign(value); }
    inline SelectiveExecutionResult& WithSourcePipelineExecutionArn(const Aws::String& value) { SetSourcePipelineExecutionArn(value); return *this;}
    inline SelectiveExecutionResult& WithSourcePipelineExecutionArn(Aws::String&& value) { SetSourcePipelineExecutionArn(std::move(value)); return *this;}
    inline SelectiveExecutionResult& WithSourcePipelineExecutionArn(const char* value) { SetSourcePipelineExecutionArn(value); return *this;}
    ///@}
  private:

    Aws::String m_sourcePipelineExecutionArn;
    bool m_sourcePipelineExecutionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
