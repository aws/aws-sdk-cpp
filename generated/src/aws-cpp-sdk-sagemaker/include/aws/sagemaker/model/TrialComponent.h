/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialComponentSource.h>
#include <aws/sagemaker/model/TrialComponentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/MetadataProperties.h>
#include <aws/sagemaker/model/TrialComponentSourceDetail.h>
#include <aws/sagemaker/model/TrialComponentParameterValue.h>
#include <aws/sagemaker/model/TrialComponentArtifact.h>
#include <aws/sagemaker/model/TrialComponentMetricSummary.h>
#include <aws/sagemaker/model/Tag.h>
#include <aws/sagemaker/model/Parent.h>
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
   * <p>The properties of a trial component as returned by the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponent">AWS
   * API Reference</a></p>
   */
  class TrialComponent
  {
  public:
    AWS_SAGEMAKER_API TrialComponent();
    AWS_SAGEMAKER_API TrialComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentName() const{ return m_trialComponentName; }
    inline bool TrialComponentNameHasBeenSet() const { return m_trialComponentNameHasBeenSet; }
    inline void SetTrialComponentName(const Aws::String& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = value; }
    inline void SetTrialComponentName(Aws::String&& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = std::move(value); }
    inline void SetTrialComponentName(const char* value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName.assign(value); }
    inline TrialComponent& WithTrialComponentName(const Aws::String& value) { SetTrialComponentName(value); return *this;}
    inline TrialComponent& WithTrialComponentName(Aws::String&& value) { SetTrialComponentName(std::move(value)); return *this;}
    inline TrialComponent& WithTrialComponentName(const char* value) { SetTrialComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline TrialComponent& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline TrialComponent& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline TrialComponent& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentArn() const{ return m_trialComponentArn; }
    inline bool TrialComponentArnHasBeenSet() const { return m_trialComponentArnHasBeenSet; }
    inline void SetTrialComponentArn(const Aws::String& value) { m_trialComponentArnHasBeenSet = true; m_trialComponentArn = value; }
    inline void SetTrialComponentArn(Aws::String&& value) { m_trialComponentArnHasBeenSet = true; m_trialComponentArn = std::move(value); }
    inline void SetTrialComponentArn(const char* value) { m_trialComponentArnHasBeenSet = true; m_trialComponentArn.assign(value); }
    inline TrialComponent& WithTrialComponentArn(const Aws::String& value) { SetTrialComponentArn(value); return *this;}
    inline TrialComponent& WithTrialComponentArn(Aws::String&& value) { SetTrialComponentArn(std::move(value)); return *this;}
    inline TrialComponent& WithTrialComponentArn(const char* value) { SetTrialComponentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) and job type of the source of the
     * component.</p>
     */
    inline const TrialComponentSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const TrialComponentSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(TrialComponentSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline TrialComponent& WithSource(const TrialComponentSource& value) { SetSource(value); return *this;}
    inline TrialComponent& WithSource(TrialComponentSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TrialComponentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TrialComponentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TrialComponentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TrialComponent& WithStatus(const TrialComponentStatus& value) { SetStatus(value); return *this;}
    inline TrialComponent& WithStatus(TrialComponentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline TrialComponent& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline TrialComponent& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline TrialComponent& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline TrialComponent& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TrialComponent& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TrialComponent& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who created the trial component.</p>
     */
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline TrialComponent& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline TrialComponent& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline TrialComponent& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline TrialComponent& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline TrialComponent& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline TrialComponent& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentParameterValue>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, TrialComponentParameterValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, TrialComponentParameterValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline TrialComponent& WithParameters(const Aws::Map<Aws::String, TrialComponentParameterValue>& value) { SetParameters(value); return *this;}
    inline TrialComponent& WithParameters(Aws::Map<Aws::String, TrialComponentParameterValue>&& value) { SetParameters(std::move(value)); return *this;}
    inline TrialComponent& AddParameters(const Aws::String& key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline TrialComponent& AddParameters(Aws::String&& key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline TrialComponent& AddParameters(const Aws::String& key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TrialComponent& AddParameters(Aws::String&& key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline TrialComponent& AddParameters(const char* key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TrialComponent& AddParameters(const char* key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input artifacts of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetInputArtifacts() const{ return m_inputArtifacts; }
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }
    inline void SetInputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }
    inline void SetInputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::move(value); }
    inline TrialComponent& WithInputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { SetInputArtifacts(value); return *this;}
    inline TrialComponent& WithInputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { SetInputArtifacts(std::move(value)); return *this;}
    inline TrialComponent& AddInputArtifacts(const Aws::String& key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, value); return *this; }
    inline TrialComponent& AddInputArtifacts(Aws::String&& key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(std::move(key), value); return *this; }
    inline TrialComponent& AddInputArtifacts(const Aws::String& key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, std::move(value)); return *this; }
    inline TrialComponent& AddInputArtifacts(Aws::String&& key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(std::move(key), std::move(value)); return *this; }
    inline TrialComponent& AddInputArtifacts(const char* key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, std::move(value)); return *this; }
    inline TrialComponent& AddInputArtifacts(const char* key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output artifacts of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetOutputArtifacts() const{ return m_outputArtifacts; }
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }
    inline void SetOutputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = value; }
    inline void SetOutputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::move(value); }
    inline TrialComponent& WithOutputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { SetOutputArtifacts(value); return *this;}
    inline TrialComponent& WithOutputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { SetOutputArtifacts(std::move(value)); return *this;}
    inline TrialComponent& AddOutputArtifacts(const Aws::String& key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, value); return *this; }
    inline TrialComponent& AddOutputArtifacts(Aws::String&& key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(std::move(key), value); return *this; }
    inline TrialComponent& AddOutputArtifacts(const Aws::String& key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, std::move(value)); return *this; }
    inline TrialComponent& AddOutputArtifacts(Aws::String&& key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(std::move(key), std::move(value)); return *this; }
    inline TrialComponent& AddOutputArtifacts(const char* key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, std::move(value)); return *this; }
    inline TrialComponent& AddOutputArtifacts(const char* key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metrics for the component.</p>
     */
    inline const Aws::Vector<TrialComponentMetricSummary>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Vector<TrialComponentMetricSummary>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Vector<TrialComponentMetricSummary>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline TrialComponent& WithMetrics(const Aws::Vector<TrialComponentMetricSummary>& value) { SetMetrics(value); return *this;}
    inline TrialComponent& WithMetrics(Aws::Vector<TrialComponentMetricSummary>&& value) { SetMetrics(std::move(value)); return *this;}
    inline TrialComponent& AddMetrics(const TrialComponentMetricSummary& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }
    inline TrialComponent& AddMetrics(TrialComponentMetricSummary&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = value; }
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::move(value); }
    inline TrialComponent& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}
    inline TrialComponent& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the source of the component.</p>
     */
    inline const TrialComponentSourceDetail& GetSourceDetail() const{ return m_sourceDetail; }
    inline bool SourceDetailHasBeenSet() const { return m_sourceDetailHasBeenSet; }
    inline void SetSourceDetail(const TrialComponentSourceDetail& value) { m_sourceDetailHasBeenSet = true; m_sourceDetail = value; }
    inline void SetSourceDetail(TrialComponentSourceDetail&& value) { m_sourceDetailHasBeenSet = true; m_sourceDetail = std::move(value); }
    inline TrialComponent& WithSourceDetail(const TrialComponentSourceDetail& value) { SetSourceDetail(value); return *this;}
    inline TrialComponent& WithSourceDetail(TrialComponentSourceDetail&& value) { SetSourceDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline const Aws::String& GetLineageGroupArn() const{ return m_lineageGroupArn; }
    inline bool LineageGroupArnHasBeenSet() const { return m_lineageGroupArnHasBeenSet; }
    inline void SetLineageGroupArn(const Aws::String& value) { m_lineageGroupArnHasBeenSet = true; m_lineageGroupArn = value; }
    inline void SetLineageGroupArn(Aws::String&& value) { m_lineageGroupArnHasBeenSet = true; m_lineageGroupArn = std::move(value); }
    inline void SetLineageGroupArn(const char* value) { m_lineageGroupArnHasBeenSet = true; m_lineageGroupArn.assign(value); }
    inline TrialComponent& WithLineageGroupArn(const Aws::String& value) { SetLineageGroupArn(value); return *this;}
    inline TrialComponent& WithLineageGroupArn(Aws::String&& value) { SetLineageGroupArn(std::move(value)); return *this;}
    inline TrialComponent& WithLineageGroupArn(const char* value) { SetLineageGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags that are associated with the component. You can use <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
     * API to search on the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TrialComponent& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TrialComponent& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TrialComponent& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TrialComponent& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of the parents of the component. A parent is a trial the component
     * is associated with and the experiment the trial is part of. A component might
     * not have any parents.</p>
     */
    inline const Aws::Vector<Parent>& GetParents() const{ return m_parents; }
    inline bool ParentsHasBeenSet() const { return m_parentsHasBeenSet; }
    inline void SetParents(const Aws::Vector<Parent>& value) { m_parentsHasBeenSet = true; m_parents = value; }
    inline void SetParents(Aws::Vector<Parent>&& value) { m_parentsHasBeenSet = true; m_parents = std::move(value); }
    inline TrialComponent& WithParents(const Aws::Vector<Parent>& value) { SetParents(value); return *this;}
    inline TrialComponent& WithParents(Aws::Vector<Parent>&& value) { SetParents(std::move(value)); return *this;}
    inline TrialComponent& AddParents(const Parent& value) { m_parentsHasBeenSet = true; m_parents.push_back(value); return *this; }
    inline TrialComponent& AddParents(Parent&& value) { m_parentsHasBeenSet = true; m_parents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the experiment run.</p>
     */
    inline const Aws::String& GetRunName() const{ return m_runName; }
    inline bool RunNameHasBeenSet() const { return m_runNameHasBeenSet; }
    inline void SetRunName(const Aws::String& value) { m_runNameHasBeenSet = true; m_runName = value; }
    inline void SetRunName(Aws::String&& value) { m_runNameHasBeenSet = true; m_runName = std::move(value); }
    inline void SetRunName(const char* value) { m_runNameHasBeenSet = true; m_runName.assign(value); }
    inline TrialComponent& WithRunName(const Aws::String& value) { SetRunName(value); return *this;}
    inline TrialComponent& WithRunName(Aws::String&& value) { SetRunName(std::move(value)); return *this;}
    inline TrialComponent& WithRunName(const char* value) { SetRunName(value); return *this;}
    ///@}
  private:

    Aws::String m_trialComponentName;
    bool m_trialComponentNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_trialComponentArn;
    bool m_trialComponentArnHasBeenSet = false;

    TrialComponentSource m_source;
    bool m_sourceHasBeenSet = false;

    TrialComponentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentArtifact> m_inputArtifacts;
    bool m_inputArtifactsHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentArtifact> m_outputArtifacts;
    bool m_outputArtifactsHasBeenSet = false;

    Aws::Vector<TrialComponentMetricSummary> m_metrics;
    bool m_metricsHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    TrialComponentSourceDetail m_sourceDetail;
    bool m_sourceDetailHasBeenSet = false;

    Aws::String m_lineageGroupArn;
    bool m_lineageGroupArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Parent> m_parents;
    bool m_parentsHasBeenSet = false;

    Aws::String m_runName;
    bool m_runNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
