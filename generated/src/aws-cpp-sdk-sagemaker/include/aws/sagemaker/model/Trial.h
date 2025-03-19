/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/MetadataProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <aws/sagemaker/model/TrialComponentSimpleSummary.h>
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
   * <p>The properties of a trial as returned by the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Trial">AWS API
   * Reference</a></p>
   */
  class Trial
  {
  public:
    AWS_SAGEMAKER_API Trial() = default;
    AWS_SAGEMAKER_API Trial(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Trial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the trial.</p>
     */
    inline const Aws::String& GetTrialName() const { return m_trialName; }
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }
    template<typename TrialNameT = Aws::String>
    void SetTrialName(TrialNameT&& value) { m_trialNameHasBeenSet = true; m_trialName = std::forward<TrialNameT>(value); }
    template<typename TrialNameT = Aws::String>
    Trial& WithTrialName(TrialNameT&& value) { SetTrialName(std::forward<TrialNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline const Aws::String& GetTrialArn() const { return m_trialArn; }
    inline bool TrialArnHasBeenSet() const { return m_trialArnHasBeenSet; }
    template<typename TrialArnT = Aws::String>
    void SetTrialArn(TrialArnT&& value) { m_trialArnHasBeenSet = true; m_trialArn = std::forward<TrialArnT>(value); }
    template<typename TrialArnT = Aws::String>
    Trial& WithTrialArn(TrialArnT&& value) { SetTrialArn(std::forward<TrialArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Trial& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment the trial is part of.</p>
     */
    inline const Aws::String& GetExperimentName() const { return m_experimentName; }
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }
    template<typename ExperimentNameT = Aws::String>
    void SetExperimentName(ExperimentNameT&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::forward<ExperimentNameT>(value); }
    template<typename ExperimentNameT = Aws::String>
    Trial& WithExperimentName(ExperimentNameT&& value) { SetExperimentName(std::forward<ExperimentNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TrialSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = TrialSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = TrialSource>
    Trial& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the trial was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Trial& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who created the trial.</p>
     */
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    Trial& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who last modified the trial.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    Trial& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    Trial& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const { return m_metadataProperties; }
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }
    template<typename MetadataPropertiesT = MetadataProperties>
    void SetMetadataProperties(MetadataPropertiesT&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::forward<MetadataPropertiesT>(value); }
    template<typename MetadataPropertiesT = MetadataProperties>
    Trial& WithMetadataProperties(MetadataPropertiesT&& value) { SetMetadataProperties(std::forward<MetadataPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags that are associated with the trial. You can use <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
     * API to search on the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Trial& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Trial& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the components associated with the trial. For each component, a
     * summary of the component's properties is included.</p>
     */
    inline const Aws::Vector<TrialComponentSimpleSummary>& GetTrialComponentSummaries() const { return m_trialComponentSummaries; }
    inline bool TrialComponentSummariesHasBeenSet() const { return m_trialComponentSummariesHasBeenSet; }
    template<typename TrialComponentSummariesT = Aws::Vector<TrialComponentSimpleSummary>>
    void SetTrialComponentSummaries(TrialComponentSummariesT&& value) { m_trialComponentSummariesHasBeenSet = true; m_trialComponentSummaries = std::forward<TrialComponentSummariesT>(value); }
    template<typename TrialComponentSummariesT = Aws::Vector<TrialComponentSimpleSummary>>
    Trial& WithTrialComponentSummaries(TrialComponentSummariesT&& value) { SetTrialComponentSummaries(std::forward<TrialComponentSummariesT>(value)); return *this;}
    template<typename TrialComponentSummariesT = TrialComponentSimpleSummary>
    Trial& AddTrialComponentSummaries(TrialComponentSummariesT&& value) { m_trialComponentSummariesHasBeenSet = true; m_trialComponentSummaries.emplace_back(std::forward<TrialComponentSummariesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet = false;

    Aws::String m_trialArn;
    bool m_trialArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet = false;

    TrialSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<TrialComponentSimpleSummary> m_trialComponentSummaries;
    bool m_trialComponentSummariesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
