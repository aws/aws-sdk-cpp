﻿/**
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
    AWS_SAGEMAKER_API UpdateInferenceExperimentRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateInferenceExperimentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateInferenceExperimentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateInferenceExperimentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The duration for which the inference experiment will run. If the status of
     * the inference experiment is <code>Created</code>, then you can update both the
     * start and end dates. If the status of the inference experiment is
     * <code>Running</code>, then you can update only the end date. </p>
     */
    inline const InferenceExperimentSchedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const InferenceExperimentSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(InferenceExperimentSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline UpdateInferenceExperimentRequest& WithSchedule(const InferenceExperimentSchedule& value) { SetSchedule(value); return *this;}
    inline UpdateInferenceExperimentRequest& WithSchedule(InferenceExperimentSchedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the inference experiment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateInferenceExperimentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateInferenceExperimentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateInferenceExperimentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant, whose infrastructure configuration you want to update. </p>
     */
    inline const Aws::Vector<ModelVariantConfig>& GetModelVariants() const{ return m_modelVariants; }
    inline bool ModelVariantsHasBeenSet() const { return m_modelVariantsHasBeenSet; }
    inline void SetModelVariants(const Aws::Vector<ModelVariantConfig>& value) { m_modelVariantsHasBeenSet = true; m_modelVariants = value; }
    inline void SetModelVariants(Aws::Vector<ModelVariantConfig>&& value) { m_modelVariantsHasBeenSet = true; m_modelVariants = std::move(value); }
    inline UpdateInferenceExperimentRequest& WithModelVariants(const Aws::Vector<ModelVariantConfig>& value) { SetModelVariants(value); return *this;}
    inline UpdateInferenceExperimentRequest& WithModelVariants(Aws::Vector<ModelVariantConfig>&& value) { SetModelVariants(std::move(value)); return *this;}
    inline UpdateInferenceExperimentRequest& AddModelVariants(const ModelVariantConfig& value) { m_modelVariantsHasBeenSet = true; m_modelVariants.push_back(value); return *this; }
    inline UpdateInferenceExperimentRequest& AddModelVariants(ModelVariantConfig&& value) { m_modelVariantsHasBeenSet = true; m_modelVariants.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location and configuration for storing inference request and
     * response data.</p>
     */
    inline const InferenceExperimentDataStorageConfig& GetDataStorageConfig() const{ return m_dataStorageConfig; }
    inline bool DataStorageConfigHasBeenSet() const { return m_dataStorageConfigHasBeenSet; }
    inline void SetDataStorageConfig(const InferenceExperimentDataStorageConfig& value) { m_dataStorageConfigHasBeenSet = true; m_dataStorageConfig = value; }
    inline void SetDataStorageConfig(InferenceExperimentDataStorageConfig&& value) { m_dataStorageConfigHasBeenSet = true; m_dataStorageConfig = std::move(value); }
    inline UpdateInferenceExperimentRequest& WithDataStorageConfig(const InferenceExperimentDataStorageConfig& value) { SetDataStorageConfig(value); return *this;}
    inline UpdateInferenceExperimentRequest& WithDataStorageConfig(InferenceExperimentDataStorageConfig&& value) { SetDataStorageConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type. Use
     * this field to specify a production variant which takes all the inference
     * requests, and a shadow variant to which Amazon SageMaker replicates a percentage
     * of the inference requests. For the shadow variant also specify the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline const ShadowModeConfig& GetShadowModeConfig() const{ return m_shadowModeConfig; }
    inline bool ShadowModeConfigHasBeenSet() const { return m_shadowModeConfigHasBeenSet; }
    inline void SetShadowModeConfig(const ShadowModeConfig& value) { m_shadowModeConfigHasBeenSet = true; m_shadowModeConfig = value; }
    inline void SetShadowModeConfig(ShadowModeConfig&& value) { m_shadowModeConfigHasBeenSet = true; m_shadowModeConfig = std::move(value); }
    inline UpdateInferenceExperimentRequest& WithShadowModeConfig(const ShadowModeConfig& value) { SetShadowModeConfig(value); return *this;}
    inline UpdateInferenceExperimentRequest& WithShadowModeConfig(ShadowModeConfig&& value) { SetShadowModeConfig(std::move(value)); return *this;}
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
