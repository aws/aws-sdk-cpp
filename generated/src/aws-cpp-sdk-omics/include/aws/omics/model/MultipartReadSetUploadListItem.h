/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/FileType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Part of the response to ListMultipartReadSetUploads, excluding completed and
   * aborted multipart uploads. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/MultipartReadSetUploadListItem">AWS
   * API Reference</a></p>
   */
  class MultipartReadSetUploadListItem
  {
  public:
    AWS_OMICS_API MultipartReadSetUploadListItem();
    AWS_OMICS_API MultipartReadSetUploadListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API MultipartReadSetUploadListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The sequence store ID used for the multipart upload. </p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }
    inline MultipartReadSetUploadListItem& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}
    inline MultipartReadSetUploadListItem& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}
    inline MultipartReadSetUploadListItem& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }
    inline MultipartReadSetUploadListItem& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline MultipartReadSetUploadListItem& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline MultipartReadSetUploadListItem& WithUploadId(const char* value) { SetUploadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of file the read set originated from. </p>
     */
    inline const FileType& GetSourceFileType() const{ return m_sourceFileType; }
    inline bool SourceFileTypeHasBeenSet() const { return m_sourceFileTypeHasBeenSet; }
    inline void SetSourceFileType(const FileType& value) { m_sourceFileTypeHasBeenSet = true; m_sourceFileType = value; }
    inline void SetSourceFileType(FileType&& value) { m_sourceFileTypeHasBeenSet = true; m_sourceFileType = std::move(value); }
    inline MultipartReadSetUploadListItem& WithSourceFileType(const FileType& value) { SetSourceFileType(value); return *this;}
    inline MultipartReadSetUploadListItem& WithSourceFileType(FileType&& value) { SetSourceFileType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The read set source's subject ID. </p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }
    inline void SetSubjectId(const Aws::String& value) { m_subjectIdHasBeenSet = true; m_subjectId = value; }
    inline void SetSubjectId(Aws::String&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::move(value); }
    inline void SetSubjectId(const char* value) { m_subjectIdHasBeenSet = true; m_subjectId.assign(value); }
    inline MultipartReadSetUploadListItem& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}
    inline MultipartReadSetUploadListItem& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}
    inline MultipartReadSetUploadListItem& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The read set source's sample ID. </p>
     */
    inline const Aws::String& GetSampleId() const{ return m_sampleId; }
    inline bool SampleIdHasBeenSet() const { return m_sampleIdHasBeenSet; }
    inline void SetSampleId(const Aws::String& value) { m_sampleIdHasBeenSet = true; m_sampleId = value; }
    inline void SetSampleId(Aws::String&& value) { m_sampleIdHasBeenSet = true; m_sampleId = std::move(value); }
    inline void SetSampleId(const char* value) { m_sampleIdHasBeenSet = true; m_sampleId.assign(value); }
    inline MultipartReadSetUploadListItem& WithSampleId(const Aws::String& value) { SetSampleId(value); return *this;}
    inline MultipartReadSetUploadListItem& WithSampleId(Aws::String&& value) { SetSampleId(std::move(value)); return *this;}
    inline MultipartReadSetUploadListItem& WithSampleId(const char* value) { SetSampleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source of an uploaded part. </p>
     */
    inline const Aws::String& GetGeneratedFrom() const{ return m_generatedFrom; }
    inline bool GeneratedFromHasBeenSet() const { return m_generatedFromHasBeenSet; }
    inline void SetGeneratedFrom(const Aws::String& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = value; }
    inline void SetGeneratedFrom(Aws::String&& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = std::move(value); }
    inline void SetGeneratedFrom(const char* value) { m_generatedFromHasBeenSet = true; m_generatedFrom.assign(value); }
    inline MultipartReadSetUploadListItem& WithGeneratedFrom(const Aws::String& value) { SetGeneratedFrom(value); return *this;}
    inline MultipartReadSetUploadListItem& WithGeneratedFrom(Aws::String&& value) { SetGeneratedFrom(std::move(value)); return *this;}
    inline MultipartReadSetUploadListItem& WithGeneratedFrom(const char* value) { SetGeneratedFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source's reference ARN. </p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }
    inline bool ReferenceArnHasBeenSet() const { return m_referenceArnHasBeenSet; }
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArnHasBeenSet = true; m_referenceArn = value; }
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::move(value); }
    inline void SetReferenceArn(const char* value) { m_referenceArnHasBeenSet = true; m_referenceArn.assign(value); }
    inline MultipartReadSetUploadListItem& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}
    inline MultipartReadSetUploadListItem& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}
    inline MultipartReadSetUploadListItem& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of a read set. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MultipartReadSetUploadListItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MultipartReadSetUploadListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MultipartReadSetUploadListItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of a read set. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline MultipartReadSetUploadListItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline MultipartReadSetUploadListItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline MultipartReadSetUploadListItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Any tags you wish to add to a read set. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline MultipartReadSetUploadListItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline MultipartReadSetUploadListItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline MultipartReadSetUploadListItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline MultipartReadSetUploadListItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline MultipartReadSetUploadListItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline MultipartReadSetUploadListItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline MultipartReadSetUploadListItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline MultipartReadSetUploadListItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline MultipartReadSetUploadListItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The time stamp for when a direct upload was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline MultipartReadSetUploadListItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline MultipartReadSetUploadListItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
