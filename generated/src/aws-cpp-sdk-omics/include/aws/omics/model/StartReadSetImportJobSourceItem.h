/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/FileType.h>
#include <aws/omics/model/SourceFiles.h>
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


    /**
     * <p>The source's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The source's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The source's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The source's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The source's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The source's description.</p>
     */
    inline StartReadSetImportJobSourceItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The source's description.</p>
     */
    inline StartReadSetImportJobSourceItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The source's description.</p>
     */
    inline StartReadSetImportJobSourceItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Where the source originated.</p>
     */
    inline const Aws::String& GetGeneratedFrom() const{ return m_generatedFrom; }

    /**
     * <p>Where the source originated.</p>
     */
    inline bool GeneratedFromHasBeenSet() const { return m_generatedFromHasBeenSet; }

    /**
     * <p>Where the source originated.</p>
     */
    inline void SetGeneratedFrom(const Aws::String& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = value; }

    /**
     * <p>Where the source originated.</p>
     */
    inline void SetGeneratedFrom(Aws::String&& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = std::move(value); }

    /**
     * <p>Where the source originated.</p>
     */
    inline void SetGeneratedFrom(const char* value) { m_generatedFromHasBeenSet = true; m_generatedFrom.assign(value); }

    /**
     * <p>Where the source originated.</p>
     */
    inline StartReadSetImportJobSourceItem& WithGeneratedFrom(const Aws::String& value) { SetGeneratedFrom(value); return *this;}

    /**
     * <p>Where the source originated.</p>
     */
    inline StartReadSetImportJobSourceItem& WithGeneratedFrom(Aws::String&& value) { SetGeneratedFrom(std::move(value)); return *this;}

    /**
     * <p>Where the source originated.</p>
     */
    inline StartReadSetImportJobSourceItem& WithGeneratedFrom(const char* value) { SetGeneratedFrom(value); return *this;}


    /**
     * <p>The source's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The source's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The source's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The source's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The source's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The source's name.</p>
     */
    inline StartReadSetImportJobSourceItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The source's name.</p>
     */
    inline StartReadSetImportJobSourceItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The source's name.</p>
     */
    inline StartReadSetImportJobSourceItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The source's reference ARN.</p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }

    /**
     * <p>The source's reference ARN.</p>
     */
    inline bool ReferenceArnHasBeenSet() const { return m_referenceArnHasBeenSet; }

    /**
     * <p>The source's reference ARN.</p>
     */
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArnHasBeenSet = true; m_referenceArn = value; }

    /**
     * <p>The source's reference ARN.</p>
     */
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::move(value); }

    /**
     * <p>The source's reference ARN.</p>
     */
    inline void SetReferenceArn(const char* value) { m_referenceArnHasBeenSet = true; m_referenceArn.assign(value); }

    /**
     * <p>The source's reference ARN.</p>
     */
    inline StartReadSetImportJobSourceItem& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}

    /**
     * <p>The source's reference ARN.</p>
     */
    inline StartReadSetImportJobSourceItem& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}

    /**
     * <p>The source's reference ARN.</p>
     */
    inline StartReadSetImportJobSourceItem& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}


    /**
     * <p>The source's sample ID.</p>
     */
    inline const Aws::String& GetSampleId() const{ return m_sampleId; }

    /**
     * <p>The source's sample ID.</p>
     */
    inline bool SampleIdHasBeenSet() const { return m_sampleIdHasBeenSet; }

    /**
     * <p>The source's sample ID.</p>
     */
    inline void SetSampleId(const Aws::String& value) { m_sampleIdHasBeenSet = true; m_sampleId = value; }

    /**
     * <p>The source's sample ID.</p>
     */
    inline void SetSampleId(Aws::String&& value) { m_sampleIdHasBeenSet = true; m_sampleId = std::move(value); }

    /**
     * <p>The source's sample ID.</p>
     */
    inline void SetSampleId(const char* value) { m_sampleIdHasBeenSet = true; m_sampleId.assign(value); }

    /**
     * <p>The source's sample ID.</p>
     */
    inline StartReadSetImportJobSourceItem& WithSampleId(const Aws::String& value) { SetSampleId(value); return *this;}

    /**
     * <p>The source's sample ID.</p>
     */
    inline StartReadSetImportJobSourceItem& WithSampleId(Aws::String&& value) { SetSampleId(std::move(value)); return *this;}

    /**
     * <p>The source's sample ID.</p>
     */
    inline StartReadSetImportJobSourceItem& WithSampleId(const char* value) { SetSampleId(value); return *this;}


    /**
     * <p>The source's file type.</p>
     */
    inline const FileType& GetSourceFileType() const{ return m_sourceFileType; }

    /**
     * <p>The source's file type.</p>
     */
    inline bool SourceFileTypeHasBeenSet() const { return m_sourceFileTypeHasBeenSet; }

    /**
     * <p>The source's file type.</p>
     */
    inline void SetSourceFileType(const FileType& value) { m_sourceFileTypeHasBeenSet = true; m_sourceFileType = value; }

    /**
     * <p>The source's file type.</p>
     */
    inline void SetSourceFileType(FileType&& value) { m_sourceFileTypeHasBeenSet = true; m_sourceFileType = std::move(value); }

    /**
     * <p>The source's file type.</p>
     */
    inline StartReadSetImportJobSourceItem& WithSourceFileType(const FileType& value) { SetSourceFileType(value); return *this;}

    /**
     * <p>The source's file type.</p>
     */
    inline StartReadSetImportJobSourceItem& WithSourceFileType(FileType&& value) { SetSourceFileType(std::move(value)); return *this;}


    /**
     * <p>The source files' location in Amazon S3.</p>
     */
    inline const SourceFiles& GetSourceFiles() const{ return m_sourceFiles; }

    /**
     * <p>The source files' location in Amazon S3.</p>
     */
    inline bool SourceFilesHasBeenSet() const { return m_sourceFilesHasBeenSet; }

    /**
     * <p>The source files' location in Amazon S3.</p>
     */
    inline void SetSourceFiles(const SourceFiles& value) { m_sourceFilesHasBeenSet = true; m_sourceFiles = value; }

    /**
     * <p>The source files' location in Amazon S3.</p>
     */
    inline void SetSourceFiles(SourceFiles&& value) { m_sourceFilesHasBeenSet = true; m_sourceFiles = std::move(value); }

    /**
     * <p>The source files' location in Amazon S3.</p>
     */
    inline StartReadSetImportJobSourceItem& WithSourceFiles(const SourceFiles& value) { SetSourceFiles(value); return *this;}

    /**
     * <p>The source files' location in Amazon S3.</p>
     */
    inline StartReadSetImportJobSourceItem& WithSourceFiles(SourceFiles&& value) { SetSourceFiles(std::move(value)); return *this;}


    /**
     * <p>The source's subject ID.</p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }

    /**
     * <p>The source's subject ID.</p>
     */
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }

    /**
     * <p>The source's subject ID.</p>
     */
    inline void SetSubjectId(const Aws::String& value) { m_subjectIdHasBeenSet = true; m_subjectId = value; }

    /**
     * <p>The source's subject ID.</p>
     */
    inline void SetSubjectId(Aws::String&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::move(value); }

    /**
     * <p>The source's subject ID.</p>
     */
    inline void SetSubjectId(const char* value) { m_subjectIdHasBeenSet = true; m_subjectId.assign(value); }

    /**
     * <p>The source's subject ID.</p>
     */
    inline StartReadSetImportJobSourceItem& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}

    /**
     * <p>The source's subject ID.</p>
     */
    inline StartReadSetImportJobSourceItem& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}

    /**
     * <p>The source's subject ID.</p>
     */
    inline StartReadSetImportJobSourceItem& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}


    /**
     * <p>The source's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The source's tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The source's tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The source's tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The source's tags.</p>
     */
    inline StartReadSetImportJobSourceItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The source's tags.</p>
     */
    inline StartReadSetImportJobSourceItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The source's tags.</p>
     */
    inline StartReadSetImportJobSourceItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline StartReadSetImportJobSourceItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline StartReadSetImportJobSourceItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline StartReadSetImportJobSourceItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline StartReadSetImportJobSourceItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline StartReadSetImportJobSourceItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The source's tags.</p>
     */
    inline StartReadSetImportJobSourceItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_generatedFrom;
    bool m_generatedFromHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_referenceArn;
    bool m_referenceArnHasBeenSet = false;

    Aws::String m_sampleId;
    bool m_sampleIdHasBeenSet = false;

    FileType m_sourceFileType;
    bool m_sourceFileTypeHasBeenSet = false;

    SourceFiles m_sourceFiles;
    bool m_sourceFilesHasBeenSet = false;

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
