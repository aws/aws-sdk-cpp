/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/SourceFiles.h>
#include <aws/omics/model/FileType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A source for a read set import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartReadSetImportJobSourceItem">AWS
   * API Reference</a></p>
   */
  class StartReadSetImportJobSourceItem
  {
  public:
    AWS_OMICS_API StartReadSetImportJobSourceItem();
    AWS_OMICS_API StartReadSetImportJobSourceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API StartReadSetImportJobSourceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source files' location in Amazon S3.</p>
     */
    inline const SourceFiles& GetSourceFiles() const{ return m_sourceFiles; }
    inline bool SourceFilesHasBeenSet() const { return m_sourceFilesHasBeenSet; }
    inline void SetSourceFiles(const SourceFiles& value) { m_sourceFilesHasBeenSet = true; m_sourceFiles = value; }
    inline void SetSourceFiles(SourceFiles&& value) { m_sourceFilesHasBeenSet = true; m_sourceFiles = std::move(value); }
    inline StartReadSetImportJobSourceItem& WithSourceFiles(const SourceFiles& value) { SetSourceFiles(value); return *this;}
    inline StartReadSetImportJobSourceItem& WithSourceFiles(SourceFiles&& value) { SetSourceFiles(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's file type.</p>
     */
    inline const FileType& GetSourceFileType() const{ return m_sourceFileType; }
    inline bool SourceFileTypeHasBeenSet() const { return m_sourceFileTypeHasBeenSet; }
    inline void SetSourceFileType(const FileType& value) { m_sourceFileTypeHasBeenSet = true; m_sourceFileType = value; }
    inline void SetSourceFileType(FileType&& value) { m_sourceFileTypeHasBeenSet = true; m_sourceFileType = std::move(value); }
    inline StartReadSetImportJobSourceItem& WithSourceFileType(const FileType& value) { SetSourceFileType(value); return *this;}
    inline StartReadSetImportJobSourceItem& WithSourceFileType(FileType&& value) { SetSourceFileType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's subject ID.</p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }
    inline void SetSubjectId(const Aws::String& value) { m_subjectIdHasBeenSet = true; m_subjectId = value; }
    inline void SetSubjectId(Aws::String&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::move(value); }
    inline void SetSubjectId(const char* value) { m_subjectIdHasBeenSet = true; m_subjectId.assign(value); }
    inline StartReadSetImportJobSourceItem& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}
    inline StartReadSetImportJobSourceItem& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}
    inline StartReadSetImportJobSourceItem& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's sample ID.</p>
     */
    inline const Aws::String& GetSampleId() const{ return m_sampleId; }
    inline bool SampleIdHasBeenSet() const { return m_sampleIdHasBeenSet; }
    inline void SetSampleId(const Aws::String& value) { m_sampleIdHasBeenSet = true; m_sampleId = value; }
    inline void SetSampleId(Aws::String&& value) { m_sampleIdHasBeenSet = true; m_sampleId = std::move(value); }
    inline void SetSampleId(const char* value) { m_sampleIdHasBeenSet = true; m_sampleId.assign(value); }
    inline StartReadSetImportJobSourceItem& WithSampleId(const Aws::String& value) { SetSampleId(value); return *this;}
    inline StartReadSetImportJobSourceItem& WithSampleId(Aws::String&& value) { SetSampleId(std::move(value)); return *this;}
    inline StartReadSetImportJobSourceItem& WithSampleId(const char* value) { SetSampleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where the source originated.</p>
     */
    inline const Aws::String& GetGeneratedFrom() const{ return m_generatedFrom; }
    inline bool GeneratedFromHasBeenSet() const { return m_generatedFromHasBeenSet; }
    inline void SetGeneratedFrom(const Aws::String& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = value; }
    inline void SetGeneratedFrom(Aws::String&& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = std::move(value); }
    inline void SetGeneratedFrom(const char* value) { m_generatedFromHasBeenSet = true; m_generatedFrom.assign(value); }
    inline StartReadSetImportJobSourceItem& WithGeneratedFrom(const Aws::String& value) { SetGeneratedFrom(value); return *this;}
    inline StartReadSetImportJobSourceItem& WithGeneratedFrom(Aws::String&& value) { SetGeneratedFrom(std::move(value)); return *this;}
    inline StartReadSetImportJobSourceItem& WithGeneratedFrom(const char* value) { SetGeneratedFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's reference ARN.</p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }
    inline bool ReferenceArnHasBeenSet() const { return m_referenceArnHasBeenSet; }
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArnHasBeenSet = true; m_referenceArn = value; }
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::move(value); }
    inline void SetReferenceArn(const char* value) { m_referenceArnHasBeenSet = true; m_referenceArn.assign(value); }
    inline StartReadSetImportJobSourceItem& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}
    inline StartReadSetImportJobSourceItem& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}
    inline StartReadSetImportJobSourceItem& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartReadSetImportJobSourceItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartReadSetImportJobSourceItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartReadSetImportJobSourceItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StartReadSetImportJobSourceItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StartReadSetImportJobSourceItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StartReadSetImportJobSourceItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartReadSetImportJobSourceItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StartReadSetImportJobSourceItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StartReadSetImportJobSourceItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline StartReadSetImportJobSourceItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartReadSetImportJobSourceItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartReadSetImportJobSourceItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StartReadSetImportJobSourceItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartReadSetImportJobSourceItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartReadSetImportJobSourceItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    SourceFiles m_sourceFiles;
    bool m_sourceFilesHasBeenSet = false;

    FileType m_sourceFileType;
    bool m_sourceFileTypeHasBeenSet = false;

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;

    Aws::String m_sampleId;
    bool m_sampleIdHasBeenSet = false;

    Aws::String m_generatedFrom;
    bool m_generatedFromHasBeenSet = false;

    Aws::String m_referenceArn;
    bool m_referenceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
