/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SelectedStep.h>
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
   * <p>The selective execution configuration applied to the pipeline
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SelectiveExecutionConfig">AWS
   * API Reference</a></p>
   */
  class SelectiveExecutionConfig
  {
  public:
    AWS_SAGEMAKER_API SelectiveExecutionConfig();
    AWS_SAGEMAKER_API SelectiveExecutionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SelectiveExecutionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN from a reference execution of the current pipeline. Used to copy
     * input collaterals needed for the selected steps to run. The execution status of
     * the pipeline can be either <code>Failed</code> or <code>Success</code>.</p>
     * <p>This field is required if the steps you specify for
     * <code>SelectedSteps</code> depend on output collaterals from any non-specified
     * pipeline steps. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-selective-ex.html">Selective
     * Execution for Pipeline Steps</a>.</p>
     */
    inline const Aws::String& GetSourcePipelineExecutionArn() const{ return m_sourcePipelineExecutionArn; }

    /**
     * <p>The ARN from a reference execution of the current pipeline. Used to copy
     * input collaterals needed for the selected steps to run. The execution status of
     * the pipeline can be either <code>Failed</code> or <code>Success</code>.</p>
     * <p>This field is required if the steps you specify for
     * <code>SelectedSteps</code> depend on output collaterals from any non-specified
     * pipeline steps. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-selective-ex.html">Selective
     * Execution for Pipeline Steps</a>.</p>
     */
    inline bool SourcePipelineExecutionArnHasBeenSet() const { return m_sourcePipelineExecutionArnHasBeenSet; }

    /**
     * <p>The ARN from a reference execution of the current pipeline. Used to copy
     * input collaterals needed for the selected steps to run. The execution status of
     * the pipeline can be either <code>Failed</code> or <code>Success</code>.</p>
     * <p>This field is required if the steps you specify for
     * <code>SelectedSteps</code> depend on output collaterals from any non-specified
     * pipeline steps. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-selective-ex.html">Selective
     * Execution for Pipeline Steps</a>.</p>
     */
    inline void SetSourcePipelineExecutionArn(const Aws::String& value) { m_sourcePipelineExecutionArnHasBeenSet = true; m_sourcePipelineExecutionArn = value; }

    /**
     * <p>The ARN from a reference execution of the current pipeline. Used to copy
     * input collaterals needed for the selected steps to run. The execution status of
     * the pipeline can be either <code>Failed</code> or <code>Success</code>.</p>
     * <p>This field is required if the steps you specify for
     * <code>SelectedSteps</code> depend on output collaterals from any non-specified
     * pipeline steps. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-selective-ex.html">Selective
     * Execution for Pipeline Steps</a>.</p>
     */
    inline void SetSourcePipelineExecutionArn(Aws::String&& value) { m_sourcePipelineExecutionArnHasBeenSet = true; m_sourcePipelineExecutionArn = std::move(value); }

    /**
     * <p>The ARN from a reference execution of the current pipeline. Used to copy
     * input collaterals needed for the selected steps to run. The execution status of
     * the pipeline can be either <code>Failed</code> or <code>Success</code>.</p>
     * <p>This field is required if the steps you specify for
     * <code>SelectedSteps</code> depend on output collaterals from any non-specified
     * pipeline steps. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-selective-ex.html">Selective
     * Execution for Pipeline Steps</a>.</p>
     */
    inline void SetSourcePipelineExecutionArn(const char* value) { m_sourcePipelineExecutionArnHasBeenSet = true; m_sourcePipelineExecutionArn.assign(value); }

    /**
     * <p>The ARN from a reference execution of the current pipeline. Used to copy
     * input collaterals needed for the selected steps to run. The execution status of
     * the pipeline can be either <code>Failed</code> or <code>Success</code>.</p>
     * <p>This field is required if the steps you specify for
     * <code>SelectedSteps</code> depend on output collaterals from any non-specified
     * pipeline steps. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-selective-ex.html">Selective
     * Execution for Pipeline Steps</a>.</p>
     */
    inline SelectiveExecutionConfig& WithSourcePipelineExecutionArn(const Aws::String& value) { SetSourcePipelineExecutionArn(value); return *this;}

    /**
     * <p>The ARN from a reference execution of the current pipeline. Used to copy
     * input collaterals needed for the selected steps to run. The execution status of
     * the pipeline can be either <code>Failed</code> or <code>Success</code>.</p>
     * <p>This field is required if the steps you specify for
     * <code>SelectedSteps</code> depend on output collaterals from any non-specified
     * pipeline steps. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-selective-ex.html">Selective
     * Execution for Pipeline Steps</a>.</p>
     */
    inline SelectiveExecutionConfig& WithSourcePipelineExecutionArn(Aws::String&& value) { SetSourcePipelineExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN from a reference execution of the current pipeline. Used to copy
     * input collaterals needed for the selected steps to run. The execution status of
     * the pipeline can be either <code>Failed</code> or <code>Success</code>.</p>
     * <p>This field is required if the steps you specify for
     * <code>SelectedSteps</code> depend on output collaterals from any non-specified
     * pipeline steps. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-selective-ex.html">Selective
     * Execution for Pipeline Steps</a>.</p>
     */
    inline SelectiveExecutionConfig& WithSourcePipelineExecutionArn(const char* value) { SetSourcePipelineExecutionArn(value); return *this;}


    /**
     * <p>A list of pipeline steps to run. All step(s) in all path(s) between two
     * selected steps should be included.</p>
     */
    inline const Aws::Vector<SelectedStep>& GetSelectedSteps() const{ return m_selectedSteps; }

    /**
     * <p>A list of pipeline steps to run. All step(s) in all path(s) between two
     * selected steps should be included.</p>
     */
    inline bool SelectedStepsHasBeenSet() const { return m_selectedStepsHasBeenSet; }

    /**
     * <p>A list of pipeline steps to run. All step(s) in all path(s) between two
     * selected steps should be included.</p>
     */
    inline void SetSelectedSteps(const Aws::Vector<SelectedStep>& value) { m_selectedStepsHasBeenSet = true; m_selectedSteps = value; }

    /**
     * <p>A list of pipeline steps to run. All step(s) in all path(s) between two
     * selected steps should be included.</p>
     */
    inline void SetSelectedSteps(Aws::Vector<SelectedStep>&& value) { m_selectedStepsHasBeenSet = true; m_selectedSteps = std::move(value); }

    /**
     * <p>A list of pipeline steps to run. All step(s) in all path(s) between two
     * selected steps should be included.</p>
     */
    inline SelectiveExecutionConfig& WithSelectedSteps(const Aws::Vector<SelectedStep>& value) { SetSelectedSteps(value); return *this;}

    /**
     * <p>A list of pipeline steps to run. All step(s) in all path(s) between two
     * selected steps should be included.</p>
     */
    inline SelectiveExecutionConfig& WithSelectedSteps(Aws::Vector<SelectedStep>&& value) { SetSelectedSteps(std::move(value)); return *this;}

    /**
     * <p>A list of pipeline steps to run. All step(s) in all path(s) between two
     * selected steps should be included.</p>
     */
    inline SelectiveExecutionConfig& AddSelectedSteps(const SelectedStep& value) { m_selectedStepsHasBeenSet = true; m_selectedSteps.push_back(value); return *this; }

    /**
     * <p>A list of pipeline steps to run. All step(s) in all path(s) between two
     * selected steps should be included.</p>
     */
    inline SelectiveExecutionConfig& AddSelectedSteps(SelectedStep&& value) { m_selectedStepsHasBeenSet = true; m_selectedSteps.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourcePipelineExecutionArn;
    bool m_sourcePipelineExecutionArnHasBeenSet = false;

    Aws::Vector<SelectedStep> m_selectedSteps;
    bool m_selectedStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
