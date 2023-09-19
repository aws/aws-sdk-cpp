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
   * <p>The input for the model quality monitoring job. Currently endponts are
   * supported for input for model quality monitoring jobs.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelQualityJobInput">AWS
   * API Reference</a></p>
   */
  class ModelQualityJobInput
  {
  public:
    AWS_SAGEMAKER_API ModelQualityJobInput();
    AWS_SAGEMAKER_API ModelQualityJobInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelQualityJobInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const EndpointInput& GetEndpointInput() const{ return m_endpointInput; }

    
    inline bool EndpointInputHasBeenSet() const { return m_endpointInputHasBeenSet; }

    
    inline void SetEndpointInput(const EndpointInput& value) { m_endpointInputHasBeenSet = true; m_endpointInput = value; }

    
    inline void SetEndpointInput(EndpointInput&& value) { m_endpointInputHasBeenSet = true; m_endpointInput = std::move(value); }

    
    inline ModelQualityJobInput& WithEndpointInput(const EndpointInput& value) { SetEndpointInput(value); return *this;}

    
    inline ModelQualityJobInput& WithEndpointInput(EndpointInput&& value) { SetEndpointInput(std::move(value)); return *this;}


    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline const BatchTransformInput& GetBatchTransformInput() const{ return m_batchTransformInput; }

    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline bool BatchTransformInputHasBeenSet() const { return m_batchTransformInputHasBeenSet; }

    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline void SetBatchTransformInput(const BatchTransformInput& value) { m_batchTransformInputHasBeenSet = true; m_batchTransformInput = value; }

    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline void SetBatchTransformInput(BatchTransformInput&& value) { m_batchTransformInputHasBeenSet = true; m_batchTransformInput = std::move(value); }

    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline ModelQualityJobInput& WithBatchTransformInput(const BatchTransformInput& value) { SetBatchTransformInput(value); return *this;}

    /**
     * <p>Input object for the batch transform job.</p>
     */
    inline ModelQualityJobInput& WithBatchTransformInput(BatchTransformInput&& value) { SetBatchTransformInput(std::move(value)); return *this;}


    /**
     * <p>The ground truth label provided for the model.</p>
     */
    inline const MonitoringGroundTruthS3Input& GetGroundTruthS3Input() const{ return m_groundTruthS3Input; }

    /**
     * <p>The ground truth label provided for the model.</p>
     */
    inline bool GroundTruthS3InputHasBeenSet() const { return m_groundTruthS3InputHasBeenSet; }

    /**
     * <p>The ground truth label provided for the model.</p>
     */
    inline void SetGroundTruthS3Input(const MonitoringGroundTruthS3Input& value) { m_groundTruthS3InputHasBeenSet = true; m_groundTruthS3Input = value; }

    /**
     * <p>The ground truth label provided for the model.</p>
     */
    inline void SetGroundTruthS3Input(MonitoringGroundTruthS3Input&& value) { m_groundTruthS3InputHasBeenSet = true; m_groundTruthS3Input = std::move(value); }

    /**
     * <p>The ground truth label provided for the model.</p>
     */
    inline ModelQualityJobInput& WithGroundTruthS3Input(const MonitoringGroundTruthS3Input& value) { SetGroundTruthS3Input(value); return *this;}

    /**
     * <p>The ground truth label provided for the model.</p>
     */
    inline ModelQualityJobInput& WithGroundTruthS3Input(MonitoringGroundTruthS3Input&& value) { SetGroundTruthS3Input(std::move(value)); return *this;}

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
