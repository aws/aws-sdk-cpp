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
    AWS_SAGEMAKER_API CreateTrainingPlanRequest() = default;

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
    inline const Aws::String& GetTrainingPlanName() const { return m_trainingPlanName; }
    inline bool TrainingPlanNameHasBeenSet() const { return m_trainingPlanNameHasBeenSet; }
    template<typename TrainingPlanNameT = Aws::String>
    void SetTrainingPlanName(TrainingPlanNameT&& value) { m_trainingPlanNameHasBeenSet = true; m_trainingPlanName = std::forward<TrainingPlanNameT>(value); }
    template<typename TrainingPlanNameT = Aws::String>
    CreateTrainingPlanRequest& WithTrainingPlanName(TrainingPlanNameT&& value) { SetTrainingPlanName(std::forward<TrainingPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the training plan offering to use for creating this
     * plan.</p>
     */
    inline const Aws::String& GetTrainingPlanOfferingId() const { return m_trainingPlanOfferingId; }
    inline bool TrainingPlanOfferingIdHasBeenSet() const { return m_trainingPlanOfferingIdHasBeenSet; }
    template<typename TrainingPlanOfferingIdT = Aws::String>
    void SetTrainingPlanOfferingId(TrainingPlanOfferingIdT&& value) { m_trainingPlanOfferingIdHasBeenSet = true; m_trainingPlanOfferingId = std::forward<TrainingPlanOfferingIdT>(value); }
    template<typename TrainingPlanOfferingIdT = Aws::String>
    CreateTrainingPlanRequest& WithTrainingPlanOfferingId(TrainingPlanOfferingIdT&& value) { SetTrainingPlanOfferingId(std::forward<TrainingPlanOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of spare instances to reserve per UltraServer for enhanced resiliency.
     * Default is 1.</p>
     */
    inline int GetSpareInstanceCountPerUltraServer() const { return m_spareInstanceCountPerUltraServer; }
    inline bool SpareInstanceCountPerUltraServerHasBeenSet() const { return m_spareInstanceCountPerUltraServerHasBeenSet; }
    inline void SetSpareInstanceCountPerUltraServer(int value) { m_spareInstanceCountPerUltraServerHasBeenSet = true; m_spareInstanceCountPerUltraServer = value; }
    inline CreateTrainingPlanRequest& WithSpareInstanceCountPerUltraServer(int value) { SetSpareInstanceCountPerUltraServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to this training plan.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTrainingPlanRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTrainingPlanRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trainingPlanName;
    bool m_trainingPlanNameHasBeenSet = false;

    Aws::String m_trainingPlanOfferingId;
    bool m_trainingPlanOfferingIdHasBeenSet = false;

    int m_spareInstanceCountPerUltraServer{0};
    bool m_spareInstanceCountPerUltraServerHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
