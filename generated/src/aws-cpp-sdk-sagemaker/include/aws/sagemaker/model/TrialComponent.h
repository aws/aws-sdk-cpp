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
    AWS_SAGEMAKER_API TrialComponent() = default;
    AWS_SAGEMAKER_API TrialComponent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentName() const { return m_trialComponentName; }
    inline bool TrialComponentNameHasBeenSet() const { return m_trialComponentNameHasBeenSet; }
    template<typename TrialComponentNameT = Aws::String>
    void SetTrialComponentName(TrialComponentNameT&& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = std::forward<TrialComponentNameT>(value); }
    template<typename TrialComponentNameT = Aws::String>
    TrialComponent& WithTrialComponentName(TrialComponentNameT&& value) { SetTrialComponentName(std::forward<TrialComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    TrialComponent& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentArn() const { return m_trialComponentArn; }
    inline bool TrialComponentArnHasBeenSet() const { return m_trialComponentArnHasBeenSet; }
    template<typename TrialComponentArnT = Aws::String>
    void SetTrialComponentArn(TrialComponentArnT&& value) { m_trialComponentArnHasBeenSet = true; m_trialComponentArn = std::forward<TrialComponentArnT>(value); }
    template<typename TrialComponentArnT = Aws::String>
    TrialComponent& WithTrialComponentArn(TrialComponentArnT&& value) { SetTrialComponentArn(std::forward<TrialComponentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) and job type of the source of the
     * component.</p>
     */
    inline const TrialComponentSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = TrialComponentSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = TrialComponentSource>
    TrialComponent& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TrialComponentStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = TrialComponentStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = TrialComponentStatus>
    TrialComponent& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    TrialComponent& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    TrialComponent& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TrialComponent& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who created the trial component.</p>
     */
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    TrialComponent& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    TrialComponent& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    TrialComponent& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentParameterValue>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, TrialComponentParameterValue>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, TrialComponentParameterValue>>
    TrialComponent& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = TrialComponentParameterValue>
    TrialComponent& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The input artifacts of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetInputArtifacts() const { return m_inputArtifacts; }
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }
    template<typename InputArtifactsT = Aws::Map<Aws::String, TrialComponentArtifact>>
    void SetInputArtifacts(InputArtifactsT&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::forward<InputArtifactsT>(value); }
    template<typename InputArtifactsT = Aws::Map<Aws::String, TrialComponentArtifact>>
    TrialComponent& WithInputArtifacts(InputArtifactsT&& value) { SetInputArtifacts(std::forward<InputArtifactsT>(value)); return *this;}
    template<typename InputArtifactsKeyT = Aws::String, typename InputArtifactsValueT = TrialComponentArtifact>
    TrialComponent& AddInputArtifacts(InputArtifactsKeyT&& key, InputArtifactsValueT&& value) {
      m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(std::forward<InputArtifactsKeyT>(key), std::forward<InputArtifactsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The output artifacts of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetOutputArtifacts() const { return m_outputArtifacts; }
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }
    template<typename OutputArtifactsT = Aws::Map<Aws::String, TrialComponentArtifact>>
    void SetOutputArtifacts(OutputArtifactsT&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::forward<OutputArtifactsT>(value); }
    template<typename OutputArtifactsT = Aws::Map<Aws::String, TrialComponentArtifact>>
    TrialComponent& WithOutputArtifacts(OutputArtifactsT&& value) { SetOutputArtifacts(std::forward<OutputArtifactsT>(value)); return *this;}
    template<typename OutputArtifactsKeyT = Aws::String, typename OutputArtifactsValueT = TrialComponentArtifact>
    TrialComponent& AddOutputArtifacts(OutputArtifactsKeyT&& key, OutputArtifactsValueT&& value) {
      m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(std::forward<OutputArtifactsKeyT>(key), std::forward<OutputArtifactsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The metrics for the component.</p>
     */
    inline const Aws::Vector<TrialComponentMetricSummary>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<TrialComponentMetricSummary>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<TrialComponentMetricSummary>>
    TrialComponent& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = TrialComponentMetricSummary>
    TrialComponent& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const { return m_metadataProperties; }
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }
    template<typename MetadataPropertiesT = MetadataProperties>
    void SetMetadataProperties(MetadataPropertiesT&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::forward<MetadataPropertiesT>(value); }
    template<typename MetadataPropertiesT = MetadataProperties>
    TrialComponent& WithMetadataProperties(MetadataPropertiesT&& value) { SetMetadataProperties(std::forward<MetadataPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the source of the component.</p>
     */
    inline const TrialComponentSourceDetail& GetSourceDetail() const { return m_sourceDetail; }
    inline bool SourceDetailHasBeenSet() const { return m_sourceDetailHasBeenSet; }
    template<typename SourceDetailT = TrialComponentSourceDetail>
    void SetSourceDetail(SourceDetailT&& value) { m_sourceDetailHasBeenSet = true; m_sourceDetail = std::forward<SourceDetailT>(value); }
    template<typename SourceDetailT = TrialComponentSourceDetail>
    TrialComponent& WithSourceDetail(SourceDetailT&& value) { SetSourceDetail(std::forward<SourceDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline const Aws::String& GetLineageGroupArn() const { return m_lineageGroupArn; }
    inline bool LineageGroupArnHasBeenSet() const { return m_lineageGroupArnHasBeenSet; }
    template<typename LineageGroupArnT = Aws::String>
    void SetLineageGroupArn(LineageGroupArnT&& value) { m_lineageGroupArnHasBeenSet = true; m_lineageGroupArn = std::forward<LineageGroupArnT>(value); }
    template<typename LineageGroupArnT = Aws::String>
    TrialComponent& WithLineageGroupArn(LineageGroupArnT&& value) { SetLineageGroupArn(std::forward<LineageGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags that are associated with the component. You can use <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
     * API to search on the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TrialComponent& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TrialComponent& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of the parents of the component. A parent is a trial the component
     * is associated with and the experiment the trial is part of. A component might
     * not have any parents.</p>
     */
    inline const Aws::Vector<Parent>& GetParents() const { return m_parents; }
    inline bool ParentsHasBeenSet() const { return m_parentsHasBeenSet; }
    template<typename ParentsT = Aws::Vector<Parent>>
    void SetParents(ParentsT&& value) { m_parentsHasBeenSet = true; m_parents = std::forward<ParentsT>(value); }
    template<typename ParentsT = Aws::Vector<Parent>>
    TrialComponent& WithParents(ParentsT&& value) { SetParents(std::forward<ParentsT>(value)); return *this;}
    template<typename ParentsT = Parent>
    TrialComponent& AddParents(ParentsT&& value) { m_parentsHasBeenSet = true; m_parents.emplace_back(std::forward<ParentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the experiment run.</p>
     */
    inline const Aws::String& GetRunName() const { return m_runName; }
    inline bool RunNameHasBeenSet() const { return m_runNameHasBeenSet; }
    template<typename RunNameT = Aws::String>
    void SetRunName(RunNameT&& value) { m_runNameHasBeenSet = true; m_runName = std::forward<RunNameT>(value); }
    template<typename RunNameT = Aws::String>
    TrialComponent& WithRunName(RunNameT&& value) { SetRunName(std::forward<RunNameT>(value)); return *this;}
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

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
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
