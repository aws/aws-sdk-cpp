/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EndpointInput.h>
#include <aws/sagemaker/model/BatchTransformInput.h>
#include <aws/sagemaker/model/MonitoringGroundTruthS3Input.h>
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
   * <p>Inputs for the model bias job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelBiasJobInput">AWS
   * API Reference</a></p>
   */
  class ModelBiasJobInput
  {
  public:
    AWS_SAGEMAKER_API ModelBiasJobInput() = default;
    AWS_SAGEMAKER_API ModelBiasJobInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelBiasJobInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const EndpointInput& GetEndpointInput() const { return m_endpointInput; }
    inline bool EndpointInputHasBeenSet() const { return m_endpointInputHasBeenSet; }
    template<typename EndpointInputT = EndpointInput>
    void SetEndpointInput(EndpointInputT&& value) { m_endpointInputHasBeenSet = true; m_endpointInput = std::forward<EndpointInputT>(value); }
    template<typename EndpointInputT = EndpointInput>
    ModelBiasJobInput& WithEndpointInput(EndpointInputT&& value) { SetEndpointInput(std::forward<EndpointInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline const BatchTransformInput& GetBatchTransformInput() const { return m_batchTransformInput; }
    inline bool BatchTransformInputHasBeenSet() const { return m_batchTransformInputHasBeenSet; }
    template<typename BatchTransformInputT = BatchTransformInput>
    void SetBatchTransformInput(BatchTransformInputT&& value) { m_batchTransformInputHasBeenSet = true; m_batchTransformInput = std::forward<BatchTransformInputT>(value); }
    template<typename BatchTransformInputT = BatchTransformInput>
    ModelBiasJobInput& WithBatchTransformInput(BatchTransformInputT&& value) { SetBatchTransformInput(std::forward<BatchTransformInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of ground truth labels to use in model bias job.</p>
     */
    inline const MonitoringGroundTruthS3Input& GetGroundTruthS3Input() const { return m_groundTruthS3Input; }
    inline bool GroundTruthS3InputHasBeenSet() const { return m_groundTruthS3InputHasBeenSet; }
    template<typename GroundTruthS3InputT = MonitoringGroundTruthS3Input>
    void SetGroundTruthS3Input(GroundTruthS3InputT&& value) { m_groundTruthS3InputHasBeenSet = true; m_groundTruthS3Input = std::forward<GroundTruthS3InputT>(value); }
    template<typename GroundTruthS3InputT = MonitoringGroundTruthS3Input>
    ModelBiasJobInput& WithGroundTruthS3Input(GroundTruthS3InputT&& value) { SetGroundTruthS3Input(std::forward<GroundTruthS3InputT>(value)); return *this;}
    ///@}
  private:

    EndpointInput m_endpointInput;
    bool m_endpointInputHasBeenSet = false;

    BatchTransformInput m_batchTransformInput;
    bool m_batchTransformInputHasBeenSet = false;

    MonitoringGroundTruthS3Input m_groundTruthS3Input;
    bool m_groundTruthS3InputHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
