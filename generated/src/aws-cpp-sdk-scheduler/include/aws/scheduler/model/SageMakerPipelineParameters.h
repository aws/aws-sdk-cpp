/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/scheduler/model/SageMakerPipelineParameter.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>The templated target type for the Amazon SageMaker <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StartPipelineExecution.html">
   * <code>StartPipelineExecution</code> </a> API operation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/SageMakerPipelineParameters">AWS
   * API Reference</a></p>
   */
  class SageMakerPipelineParameters
  {
  public:
    AWS_SCHEDULER_API SageMakerPipelineParameters() = default;
    AWS_SCHEDULER_API SageMakerPipelineParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API SageMakerPipelineParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of parameter names and values to use when executing the SageMaker Model
     * Building Pipeline.</p>
     */
    inline const Aws::Vector<SageMakerPipelineParameter>& GetPipelineParameterList() const { return m_pipelineParameterList; }
    inline bool PipelineParameterListHasBeenSet() const { return m_pipelineParameterListHasBeenSet; }
    template<typename PipelineParameterListT = Aws::Vector<SageMakerPipelineParameter>>
    void SetPipelineParameterList(PipelineParameterListT&& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList = std::forward<PipelineParameterListT>(value); }
    template<typename PipelineParameterListT = Aws::Vector<SageMakerPipelineParameter>>
    SageMakerPipelineParameters& WithPipelineParameterList(PipelineParameterListT&& value) { SetPipelineParameterList(std::forward<PipelineParameterListT>(value)); return *this;}
    template<typename PipelineParameterListT = SageMakerPipelineParameter>
    SageMakerPipelineParameters& AddPipelineParameterList(PipelineParameterListT&& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList.emplace_back(std::forward<PipelineParameterListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SageMakerPipelineParameter> m_pipelineParameterList;
    bool m_pipelineParameterListHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
