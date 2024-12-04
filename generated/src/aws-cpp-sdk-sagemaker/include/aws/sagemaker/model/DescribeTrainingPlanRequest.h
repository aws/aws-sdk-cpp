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
  class DescribeTrainingPlanRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeTrainingPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrainingPlan"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the training plan to describe.</p>
     */
    inline const Aws::String& GetTrainingPlanName() const{ return m_trainingPlanName; }
    inline bool TrainingPlanNameHasBeenSet() const { return m_trainingPlanNameHasBeenSet; }
    inline void SetTrainingPlanName(const Aws::String& value) { m_trainingPlanNameHasBeenSet = true; m_trainingPlanName = value; }
    inline void SetTrainingPlanName(Aws::String&& value) { m_trainingPlanNameHasBeenSet = true; m_trainingPlanName = std::move(value); }
    inline void SetTrainingPlanName(const char* value) { m_trainingPlanNameHasBeenSet = true; m_trainingPlanName.assign(value); }
    inline DescribeTrainingPlanRequest& WithTrainingPlanName(const Aws::String& value) { SetTrainingPlanName(value); return *this;}
    inline DescribeTrainingPlanRequest& WithTrainingPlanName(Aws::String&& value) { SetTrainingPlanName(std::move(value)); return *this;}
    inline DescribeTrainingPlanRequest& WithTrainingPlanName(const char* value) { SetTrainingPlanName(value); return *this;}
    ///@}
  private:

    Aws::String m_trainingPlanName;
    bool m_trainingPlanNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
