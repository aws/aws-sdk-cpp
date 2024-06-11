﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialComponentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/MetadataProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/TrialComponentParameterValue.h>
#include <aws/sagemaker/model/TrialComponentArtifact.h>
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
  class CreateTrialComponentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateTrialComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrialComponent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the component. The name must be unique in your Amazon Web
     * Services account and is not case-sensitive.</p>
     */
    inline const Aws::String& GetTrialComponentName() const{ return m_trialComponentName; }
    inline bool TrialComponentNameHasBeenSet() const { return m_trialComponentNameHasBeenSet; }
    inline void SetTrialComponentName(const Aws::String& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = value; }
    inline void SetTrialComponentName(Aws::String&& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = std::move(value); }
    inline void SetTrialComponentName(const char* value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName.assign(value); }
    inline CreateTrialComponentRequest& WithTrialComponentName(const Aws::String& value) { SetTrialComponentName(value); return *this;}
    inline CreateTrialComponentRequest& WithTrialComponentName(Aws::String&& value) { SetTrialComponentName(std::move(value)); return *this;}
    inline CreateTrialComponentRequest& WithTrialComponentName(const char* value) { SetTrialComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component as displayed. The name doesn't need to be unique.
     * If <code>DisplayName</code> isn't specified, <code>TrialComponentName</code> is
     * displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateTrialComponentRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateTrialComponentRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateTrialComponentRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the component. States include:</p> <ul> <li> <p>InProgress</p>
     * </li> <li> <p>Completed</p> </li> <li> <p>Failed</p> </li> </ul>
     */
    inline const TrialComponentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TrialComponentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TrialComponentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CreateTrialComponentRequest& WithStatus(const TrialComponentStatus& value) { SetStatus(value); return *this;}
    inline CreateTrialComponentRequest& WithStatus(TrialComponentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline CreateTrialComponentRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline CreateTrialComponentRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline CreateTrialComponentRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline CreateTrialComponentRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameters for the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentParameterValue>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, TrialComponentParameterValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, TrialComponentParameterValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline CreateTrialComponentRequest& WithParameters(const Aws::Map<Aws::String, TrialComponentParameterValue>& value) { SetParameters(value); return *this;}
    inline CreateTrialComponentRequest& WithParameters(Aws::Map<Aws::String, TrialComponentParameterValue>&& value) { SetParameters(std::move(value)); return *this;}
    inline CreateTrialComponentRequest& AddParameters(const Aws::String& key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline CreateTrialComponentRequest& AddParameters(Aws::String&& key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline CreateTrialComponentRequest& AddParameters(const Aws::String& key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CreateTrialComponentRequest& AddParameters(Aws::String&& key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateTrialComponentRequest& AddParameters(const char* key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CreateTrialComponentRequest& AddParameters(const char* key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input artifacts for the component. Examples of input artifacts are
     * datasets, algorithms, hyperparameters, source code, and instance types.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetInputArtifacts() const{ return m_inputArtifacts; }
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }
    inline void SetInputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }
    inline void SetInputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::move(value); }
    inline CreateTrialComponentRequest& WithInputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { SetInputArtifacts(value); return *this;}
    inline CreateTrialComponentRequest& WithInputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { SetInputArtifacts(std::move(value)); return *this;}
    inline CreateTrialComponentRequest& AddInputArtifacts(const Aws::String& key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, value); return *this; }
    inline CreateTrialComponentRequest& AddInputArtifacts(Aws::String&& key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(std::move(key), value); return *this; }
    inline CreateTrialComponentRequest& AddInputArtifacts(const Aws::String& key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, std::move(value)); return *this; }
    inline CreateTrialComponentRequest& AddInputArtifacts(Aws::String&& key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateTrialComponentRequest& AddInputArtifacts(const char* key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, std::move(value)); return *this; }
    inline CreateTrialComponentRequest& AddInputArtifacts(const char* key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output artifacts for the component. Examples of output artifacts are
     * metrics, snapshots, logs, and images.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetOutputArtifacts() const{ return m_outputArtifacts; }
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }
    inline void SetOutputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = value; }
    inline void SetOutputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::move(value); }
    inline CreateTrialComponentRequest& WithOutputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { SetOutputArtifacts(value); return *this;}
    inline CreateTrialComponentRequest& WithOutputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { SetOutputArtifacts(std::move(value)); return *this;}
    inline CreateTrialComponentRequest& AddOutputArtifacts(const Aws::String& key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, value); return *this; }
    inline CreateTrialComponentRequest& AddOutputArtifacts(Aws::String&& key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(std::move(key), value); return *this; }
    inline CreateTrialComponentRequest& AddOutputArtifacts(const Aws::String& key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, std::move(value)); return *this; }
    inline CreateTrialComponentRequest& AddOutputArtifacts(Aws::String&& key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateTrialComponentRequest& AddOutputArtifacts(const char* key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, std::move(value)); return *this; }
    inline CreateTrialComponentRequest& AddOutputArtifacts(const char* key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = value; }
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::move(value); }
    inline CreateTrialComponentRequest& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}
    inline CreateTrialComponentRequest& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to associate with the component. You can use <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
     * API to search on the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTrialComponentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTrialComponentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTrialComponentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTrialComponentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_trialComponentName;
    bool m_trialComponentNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    TrialComponentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentArtifact> m_inputArtifacts;
    bool m_inputArtifactsHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentArtifact> m_outputArtifacts;
    bool m_outputArtifactsHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
