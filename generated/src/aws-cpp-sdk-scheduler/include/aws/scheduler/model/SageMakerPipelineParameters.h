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
    AWS_SCHEDULER_API SageMakerPipelineParameters();
    AWS_SCHEDULER_API SageMakerPipelineParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API SageMakerPipelineParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of parameter names and values to use when executing the SageMaker Model
     * Building Pipeline.</p>
     */
    inline const Aws::Vector<SageMakerPipelineParameter>& GetPipelineParameterList() const{ return m_pipelineParameterList; }

    /**
     * <p>List of parameter names and values to use when executing the SageMaker Model
     * Building Pipeline.</p>
     */
    inline bool PipelineParameterListHasBeenSet() const { return m_pipelineParameterListHasBeenSet; }

    /**
     * <p>List of parameter names and values to use when executing the SageMaker Model
     * Building Pipeline.</p>
     */
    inline void SetPipelineParameterList(const Aws::Vector<SageMakerPipelineParameter>& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList = value; }

    /**
     * <p>List of parameter names and values to use when executing the SageMaker Model
     * Building Pipeline.</p>
     */
    inline void SetPipelineParameterList(Aws::Vector<SageMakerPipelineParameter>&& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList = std::move(value); }

    /**
     * <p>List of parameter names and values to use when executing the SageMaker Model
     * Building Pipeline.</p>
     */
    inline SageMakerPipelineParameters& WithPipelineParameterList(const Aws::Vector<SageMakerPipelineParameter>& value) { SetPipelineParameterList(value); return *this;}

    /**
     * <p>List of parameter names and values to use when executing the SageMaker Model
     * Building Pipeline.</p>
     */
    inline SageMakerPipelineParameters& WithPipelineParameterList(Aws::Vector<SageMakerPipelineParameter>&& value) { SetPipelineParameterList(std::move(value)); return *this;}

    /**
     * <p>List of parameter names and values to use when executing the SageMaker Model
     * Building Pipeline.</p>
     */
    inline SageMakerPipelineParameters& AddPipelineParameterList(const SageMakerPipelineParameter& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList.push_back(value); return *this; }

    /**
     * <p>List of parameter names and values to use when executing the SageMaker Model
     * Building Pipeline.</p>
     */
    inline SageMakerPipelineParameters& AddPipelineParameterList(SageMakerPipelineParameter&& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SageMakerPipelineParameter> m_pipelineParameterList;
    bool m_pipelineParameterListHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
