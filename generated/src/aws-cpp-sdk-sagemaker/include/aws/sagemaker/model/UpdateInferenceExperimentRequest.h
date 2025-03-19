/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceExperimentSchedule.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceExperimentDataStorageConfig.h>
#include <aws/sagemaker/model/ShadowModeConfig.h>
#include <aws/sagemaker/model/ModelVariantConfig.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateInferenceExperimentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateInferenceExperimentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInferenceExperiment"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the inference experiment to be updated.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateInferenceExperimentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The duration for which the inference experiment will run. If the status of
     * the inference experiment is <code>Created</code>, then you can update both the
     * start and end dates. If the status of the inference experiment is
     * <code>Running</code>, then you can update only the end date. </p>
     */
    inline const InferenceExperimentSchedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = InferenceExperimentSchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = InferenceExperimentSchedule>
    UpdateInferenceExperimentRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the inference experiment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateInferenceExperimentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant, whose infrastructure configuration you want to update. </p>
     */
    inline const Aws::Vector<ModelVariantConfig>& GetModelVariants() const { return m_modelVariants; }
    inline bool ModelVariantsHasBeenSet() const { return m_modelVariantsHasBeenSet; }
    template<typename ModelVariantsT = Aws::Vector<ModelVariantConfig>>
    void SetModelVariants(ModelVariantsT&& value) { m_modelVariantsHasBeenSet = true; m_modelVariants = std::forward<ModelVariantsT>(value); }
    template<typename ModelVariantsT = Aws::Vector<ModelVariantConfig>>
    UpdateInferenceExperimentRequest& WithModelVariants(ModelVariantsT&& value) { SetModelVariants(std::forward<ModelVariantsT>(value)); return *this;}
    template<typename ModelVariantsT = ModelVariantConfig>
    UpdateInferenceExperimentRequest& AddModelVariants(ModelVariantsT&& value) { m_modelVariantsHasBeenSet = true; m_modelVariants.emplace_back(std::forward<ModelVariantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location and configuration for storing inference request and
     * response data.</p>
     */
    inline const InferenceExperimentDataStorageConfig& GetDataStorageConfig() const { return m_dataStorageConfig; }
    inline bool DataStorageConfigHasBeenSet() const { return m_dataStorageConfigHasBeenSet; }
    template<typename DataStorageConfigT = InferenceExperimentDataStorageConfig>
    void SetDataStorageConfig(DataStorageConfigT&& value) { m_dataStorageConfigHasBeenSet = true; m_dataStorageConfig = std::forward<DataStorageConfigT>(value); }
    template<typename DataStorageConfigT = InferenceExperimentDataStorageConfig>
    UpdateInferenceExperimentRequest& WithDataStorageConfig(DataStorageConfigT&& value) { SetDataStorageConfig(std::forward<DataStorageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type. Use
     * this field to specify a production variant which takes all the inference
     * requests, and a shadow variant to which Amazon SageMaker replicates a percentage
     * of the inference requests. For the shadow variant also specify the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline const ShadowModeConfig& GetShadowModeConfig() const { return m_shadowModeConfig; }
    inline bool ShadowModeConfigHasBeenSet() const { return m_shadowModeConfigHasBeenSet; }
    template<typename ShadowModeConfigT = ShadowModeConfig>
    void SetShadowModeConfig(ShadowModeConfigT&& value) { m_shadowModeConfigHasBeenSet = true; m_shadowModeConfig = std::forward<ShadowModeConfigT>(value); }
    template<typename ShadowModeConfigT = ShadowModeConfig>
    UpdateInferenceExperimentRequest& WithShadowModeConfig(ShadowModeConfigT&& value) { SetShadowModeConfig(std::forward<ShadowModeConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InferenceExperimentSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ModelVariantConfig> m_modelVariants;
    bool m_modelVariantsHasBeenSet = false;

    InferenceExperimentDataStorageConfig m_dataStorageConfig;
    bool m_dataStorageConfigHasBeenSet = false;

    ShadowModeConfig m_shadowModeConfig;
    bool m_shadowModeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
