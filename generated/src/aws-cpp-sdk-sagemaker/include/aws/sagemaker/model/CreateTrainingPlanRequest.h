/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateTrainingPlanRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateTrainingPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrainingPlan"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the training plan to create.</p>
     */
    inline const Aws::String& GetTrainingPlanName() const{ return m_trainingPlanName; }
    inline bool TrainingPlanNameHasBeenSet() const { return m_trainingPlanNameHasBeenSet; }
    inline void SetTrainingPlanName(const Aws::String& value) { m_trainingPlanNameHasBeenSet = true; m_trainingPlanName = value; }
    inline void SetTrainingPlanName(Aws::String&& value) { m_trainingPlanNameHasBeenSet = true; m_trainingPlanName = std::move(value); }
    inline void SetTrainingPlanName(const char* value) { m_trainingPlanNameHasBeenSet = true; m_trainingPlanName.assign(value); }
    inline CreateTrainingPlanRequest& WithTrainingPlanName(const Aws::String& value) { SetTrainingPlanName(value); return *this;}
    inline CreateTrainingPlanRequest& WithTrainingPlanName(Aws::String&& value) { SetTrainingPlanName(std::move(value)); return *this;}
    inline CreateTrainingPlanRequest& WithTrainingPlanName(const char* value) { SetTrainingPlanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the training plan offering to use for creating this
     * plan.</p>
     */
    inline const Aws::String& GetTrainingPlanOfferingId() const{ return m_trainingPlanOfferingId; }
    inline bool TrainingPlanOfferingIdHasBeenSet() const { return m_trainingPlanOfferingIdHasBeenSet; }
    inline void SetTrainingPlanOfferingId(const Aws::String& value) { m_trainingPlanOfferingIdHasBeenSet = true; m_trainingPlanOfferingId = value; }
    inline void SetTrainingPlanOfferingId(Aws::String&& value) { m_trainingPlanOfferingIdHasBeenSet = true; m_trainingPlanOfferingId = std::move(value); }
    inline void SetTrainingPlanOfferingId(const char* value) { m_trainingPlanOfferingIdHasBeenSet = true; m_trainingPlanOfferingId.assign(value); }
    inline CreateTrainingPlanRequest& WithTrainingPlanOfferingId(const Aws::String& value) { SetTrainingPlanOfferingId(value); return *this;}
    inline CreateTrainingPlanRequest& WithTrainingPlanOfferingId(Aws::String&& value) { SetTrainingPlanOfferingId(std::move(value)); return *this;}
    inline CreateTrainingPlanRequest& WithTrainingPlanOfferingId(const char* value) { SetTrainingPlanOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to this training plan.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTrainingPlanRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTrainingPlanRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTrainingPlanRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTrainingPlanRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_trainingPlanName;
    bool m_trainingPlanNameHasBeenSet = false;

    Aws::String m_trainingPlanOfferingId;
    bool m_trainingPlanOfferingIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
