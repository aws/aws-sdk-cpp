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
    AWS_SAGEMAKER_API StopTrainingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopTrainingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the training job to stop.</p>
     */
    inline const Aws::String& GetTrainingJobName() const{ return m_trainingJobName; }

    /**
     * <p>The name of the training job to stop.</p>
     */
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }

    /**
     * <p>The name of the training job to stop.</p>
     */
    inline void SetTrainingJobName(const Aws::String& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = value; }

    /**
     * <p>The name of the training job to stop.</p>
     */
    inline void SetTrainingJobName(Aws::String&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::move(value); }

    /**
     * <p>The name of the training job to stop.</p>
     */
    inline void SetTrainingJobName(const char* value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName.assign(value); }

    /**
     * <p>The name of the training job to stop.</p>
     */
    inline StopTrainingJobRequest& WithTrainingJobName(const Aws::String& value) { SetTrainingJobName(value); return *this;}

    /**
     * <p>The name of the training job to stop.</p>
     */
    inline StopTrainingJobRequest& WithTrainingJobName(Aws::String&& value) { SetTrainingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the training job to stop.</p>
     */
    inline StopTrainingJobRequest& WithTrainingJobName(const char* value) { SetTrainingJobName(value); return *this;}

  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
