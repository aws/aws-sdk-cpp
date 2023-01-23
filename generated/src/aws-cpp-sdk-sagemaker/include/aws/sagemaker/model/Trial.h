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
   * <p>The properties of a trial as returned by the <a>Search</a> API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Trial">AWS API
   * Reference</a></p>
   */
  class Trial
  {
  public:
    AWS_SAGEMAKER_API Trial();
    AWS_SAGEMAKER_API Trial(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Trial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the trial.</p>
     */
    inline const Aws::String& GetTrialName() const{ return m_trialName; }

    /**
     * <p>The name of the trial.</p>
     */
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }

    /**
     * <p>The name of the trial.</p>
     */
    inline void SetTrialName(const Aws::String& value) { m_trialNameHasBeenSet = true; m_trialName = value; }

    /**
     * <p>The name of the trial.</p>
     */
    inline void SetTrialName(Aws::String&& value) { m_trialNameHasBeenSet = true; m_trialName = std::move(value); }

    /**
     * <p>The name of the trial.</p>
     */
    inline void SetTrialName(const char* value) { m_trialNameHasBeenSet = true; m_trialName.assign(value); }

    /**
     * <p>The name of the trial.</p>
     */
    inline Trial& WithTrialName(const Aws::String& value) { SetTrialName(value); return *this;}

    /**
     * <p>The name of the trial.</p>
     */
    inline Trial& WithTrialName(Aws::String&& value) { SetTrialName(std::move(value)); return *this;}

    /**
     * <p>The name of the trial.</p>
     */
    inline Trial& WithTrialName(const char* value) { SetTrialName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline const Aws::String& GetTrialArn() const{ return m_trialArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline bool TrialArnHasBeenSet() const { return m_trialArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline void SetTrialArn(const Aws::String& value) { m_trialArnHasBeenSet = true; m_trialArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline void SetTrialArn(Aws::String&& value) { m_trialArnHasBeenSet = true; m_trialArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline void SetTrialArn(const char* value) { m_trialArnHasBeenSet = true; m_trialArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline Trial& WithTrialArn(const Aws::String& value) { SetTrialArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline Trial& WithTrialArn(Aws::String&& value) { SetTrialArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline Trial& WithTrialArn(const char* value) { SetTrialArn(value); return *this;}


    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline Trial& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline Trial& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline Trial& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The name of the experiment the trial is part of.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }

    /**
     * <p>The name of the experiment the trial is part of.</p>
     */
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }

    /**
     * <p>The name of the experiment the trial is part of.</p>
     */
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }

    /**
     * <p>The name of the experiment the trial is part of.</p>
     */
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }

    /**
     * <p>The name of the experiment the trial is part of.</p>
     */
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }

    /**
     * <p>The name of the experiment the trial is part of.</p>
     */
    inline Trial& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}

    /**
     * <p>The name of the experiment the trial is part of.</p>
     */
    inline Trial& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment the trial is part of.</p>
     */
    inline Trial& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}


    
    inline const TrialSource& GetSource() const{ return m_source; }

    
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    
    inline void SetSource(const TrialSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    
    inline void SetSource(TrialSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    
    inline Trial& WithSource(const TrialSource& value) { SetSource(value); return *this;}

    
    inline Trial& WithSource(TrialSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>When the trial was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the trial was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the trial was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the trial was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the trial was created.</p>
     */
    inline Trial& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the trial was created.</p>
     */
    inline Trial& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Who created the trial.</p>
     */
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Who created the trial.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Who created the trial.</p>
     */
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Who created the trial.</p>
     */
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Who created the trial.</p>
     */
    inline Trial& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Who created the trial.</p>
     */
    inline Trial& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>Who last modified the trial.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>Who last modified the trial.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>Who last modified the trial.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>Who last modified the trial.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>Who last modified the trial.</p>
     */
    inline Trial& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>Who last modified the trial.</p>
     */
    inline Trial& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }

    
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }

    
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }

    
    inline Trial& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}

    
    inline Trial& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}


    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }

    
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }

    
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = value; }

    
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::move(value); }

    
    inline Trial& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}

    
    inline Trial& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}


    /**
     * <p>The list of tags that are associated with the trial. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags that are associated with the trial. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags that are associated with the trial. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags that are associated with the trial. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags that are associated with the trial. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline Trial& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags that are associated with the trial. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline Trial& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags that are associated with the trial. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline Trial& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags that are associated with the trial. You can use
     * <a>Search</a> API to search on the tags.</p>
     */
    inline Trial& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the components associated with the trial. For each component, a
     * summary of the component's properties is included.</p>
     */
    inline const Aws::Vector<TrialComponentSimpleSummary>& GetTrialComponentSummaries() const{ return m_trialComponentSummaries; }

    /**
     * <p>A list of the components associated with the trial. For each component, a
     * summary of the component's properties is included.</p>
     */
    inline bool TrialComponentSummariesHasBeenSet() const { return m_trialComponentSummariesHasBeenSet; }

    /**
     * <p>A list of the components associated with the trial. For each component, a
     * summary of the component's properties is included.</p>
     */
    inline void SetTrialComponentSummaries(const Aws::Vector<TrialComponentSimpleSummary>& value) { m_trialComponentSummariesHasBeenSet = true; m_trialComponentSummaries = value; }

    /**
     * <p>A list of the components associated with the trial. For each component, a
     * summary of the component's properties is included.</p>
     */
    inline void SetTrialComponentSummaries(Aws::Vector<TrialComponentSimpleSummary>&& value) { m_trialComponentSummariesHasBeenSet = true; m_trialComponentSummaries = std::move(value); }

    /**
     * <p>A list of the components associated with the trial. For each component, a
     * summary of the component's properties is included.</p>
     */
    inline Trial& WithTrialComponentSummaries(const Aws::Vector<TrialComponentSimpleSummary>& value) { SetTrialComponentSummaries(value); return *this;}

    /**
     * <p>A list of the components associated with the trial. For each component, a
     * summary of the component's properties is included.</p>
     */
    inline Trial& WithTrialComponentSummaries(Aws::Vector<TrialComponentSimpleSummary>&& value) { SetTrialComponentSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of the components associated with the trial. For each component, a
     * summary of the component's properties is included.</p>
     */
    inline Trial& AddTrialComponentSummaries(const TrialComponentSimpleSummary& value) { m_trialComponentSummariesHasBeenSet = true; m_trialComponentSummaries.push_back(value); return *this; }

    /**
     * <p>A list of the components associated with the trial. For each component, a
     * summary of the component's properties is included.</p>
     */
    inline Trial& AddTrialComponentSummaries(TrialComponentSimpleSummary&& value) { m_trialComponentSummariesHasBeenSet = true; m_trialComponentSummaries.push_back(std::move(value)); return *this; }

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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
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
