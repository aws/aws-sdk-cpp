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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Omics
{
namespace Model
{
  class CreateMultipartReadSetUploadResult
  {
  public:
    AWS_OMICS_API CreateMultipartReadSetUploadResult() = default;
    AWS_OMICS_API CreateMultipartReadSetUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API CreateMultipartReadSetUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The sequence store ID for the store that the read set will be created in.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const { return m_sequenceStoreId; }
    template<typename SequenceStoreIdT = Aws::String>
    void SetSequenceStoreId(SequenceStoreIdT&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::forward<SequenceStoreIdT>(value); }
    template<typename SequenceStoreIdT = Aws::String>
    CreateMultipartReadSetUploadResult& WithSequenceStoreId(SequenceStoreIdT&& value) { SetSequenceStoreId(std::forward<SequenceStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the initiated multipart upload.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    CreateMultipartReadSetUploadResult& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file type of the read set source.</p>
     */
    inline FileType GetSourceFileType() const { return m_sourceFileType; }
    inline void SetSourceFileType(FileType value) { m_sourceFileTypeHasBeenSet = true; m_sourceFileType = value; }
    inline CreateMultipartReadSetUploadResult& WithSourceFileType(FileType value) { SetSourceFileType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's subject ID.</p>
     */
    inline const Aws::String& GetSubjectId() const { return m_subjectId; }
    template<typename SubjectIdT = Aws::String>
    void SetSubjectId(SubjectIdT&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::forward<SubjectIdT>(value); }
    template<typename SubjectIdT = Aws::String>
    CreateMultipartReadSetUploadResult& WithSubjectId(SubjectIdT&& value) { SetSubjectId(std::forward<SubjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's sample ID.</p>
     */
    inline const Aws::String& GetSampleId() const { return m_sampleId; }
    template<typename SampleIdT = Aws::String>
    void SetSampleId(SampleIdT&& value) { m_sampleIdHasBeenSet = true; m_sampleId = std::forward<SampleIdT>(value); }
    template<typename SampleIdT = Aws::String>
    CreateMultipartReadSetUploadResult& WithSampleId(SampleIdT&& value) { SetSampleId(std::forward<SampleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the read set.</p>
     */
    inline const Aws::String& GetGeneratedFrom() const { return m_generatedFrom; }
    template<typename GeneratedFromT = Aws::String>
    void SetGeneratedFrom(GeneratedFromT&& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = std::forward<GeneratedFromT>(value); }
    template<typename GeneratedFromT = Aws::String>
    CreateMultipartReadSetUploadResult& WithGeneratedFrom(GeneratedFromT&& value) { SetGeneratedFrom(std::forward<GeneratedFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set source's reference ARN.</p>
     */
    inline const Aws::String& GetReferenceArn() const { return m_referenceArn; }
    template<typename ReferenceArnT = Aws::String>
    void SetReferenceArn(ReferenceArnT&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::forward<ReferenceArnT>(value); }
    template<typename ReferenceArnT = Aws::String>
    CreateMultipartReadSetUploadResult& WithReferenceArn(ReferenceArnT&& value) { SetReferenceArn(std::forward<ReferenceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the read set.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateMultipartReadSetUploadResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the read set.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateMultipartReadSetUploadResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add to the read set.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateMultipartReadSetUploadResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateMultipartReadSetUploadResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The creation time of the multipart upload.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CreateMultipartReadSetUploadResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMultipartReadSetUploadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    FileType m_sourceFileType{FileType::NOT_SET};
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

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
