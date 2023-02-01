/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pipes/model/SageMakerPipelineParameter.h>
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
   * <p>The parameters for using a SageMaker pipeline as a target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetSageMakerPipelineParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetSageMakerPipelineParameters
  {
  public:
    AWS_PIPES_API PipeTargetSageMakerPipelineParameters();
    AWS_PIPES_API PipeTargetSageMakerPipelineParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetSageMakerPipelineParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline const Aws::Vector<SageMakerPipelineParameter>& GetPipelineParameterList() const{ return m_pipelineParameterList; }

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline bool PipelineParameterListHasBeenSet() const { return m_pipelineParameterListHasBeenSet; }

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline void SetPipelineParameterList(const Aws::Vector<SageMakerPipelineParameter>& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList = value; }

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline void SetPipelineParameterList(Aws::Vector<SageMakerPipelineParameter>&& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList = std::move(value); }

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline PipeTargetSageMakerPipelineParameters& WithPipelineParameterList(const Aws::Vector<SageMakerPipelineParameter>& value) { SetPipelineParameterList(value); return *this;}

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline PipeTargetSageMakerPipelineParameters& WithPipelineParameterList(Aws::Vector<SageMakerPipelineParameter>&& value) { SetPipelineParameterList(std::move(value)); return *this;}

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline PipeTargetSageMakerPipelineParameters& AddPipelineParameterList(const SageMakerPipelineParameter& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList.push_back(value); return *this; }

    /**
     * <p>List of Parameter names and values for SageMaker Model Building Pipeline
     * execution.</p>
     */
    inline PipeTargetSageMakerPipelineParameters& AddPipelineParameterList(SageMakerPipelineParameter&& value) { m_pipelineParameterListHasBeenSet = true; m_pipelineParameterList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SageMakerPipelineParameter> m_pipelineParameterList;
    bool m_pipelineParameterListHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
