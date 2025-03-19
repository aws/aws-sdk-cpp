/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class StopTrainingJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API StopTrainingJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopTrainingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the training job to stop.</p>
     */
    inline const Aws::String& GetTrainingJobName() const { return m_trainingJobName; }
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }
    template<typename TrainingJobNameT = Aws::String>
    void SetTrainingJobName(TrainingJobNameT&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::forward<TrainingJobNameT>(value); }
    template<typename TrainingJobNameT = Aws::String>
    StopTrainingJobRequest& WithTrainingJobName(TrainingJobNameT&& value) { SetTrainingJobName(std::forward<TrainingJobNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
