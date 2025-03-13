/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetStatus.h>
#include <aws/omics/model/FileType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/SequenceInformation.h>
#include <aws/omics/model/ReadSetFiles.h>
#include <aws/omics/model/CreationType.h>
#include <aws/omics/model/ETag.h>
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
  class GetReadSetMetadataResult
  {
  public:
    AWS_OMICS_API GetReadSetMetadataResult() = default;
    AWS_OMICS_API GetReadSetMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetReadSetMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The read set's ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetReadSetMetadataResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetReadSetMetadataResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const { return m_sequenceStoreId; }
    template<typename SequenceStoreIdT = Aws::String>
    void SetSequenceStoreId(SequenceStoreIdT&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::forward<SequenceStoreIdT>(value); }
    template<typename SequenceStoreIdT = Aws::String>
    GetReadSetMetadataResult& WithSequenceStoreId(SequenceStoreIdT&& value) { SetSequenceStoreId(std::forward<SequenceStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's subject ID.</p>
     */
    inline const Aws::String& GetSubjectId() const { return m_subjectId; }
    template<typename SubjectIdT = Aws::String>
    void SetSubjectId(SubjectIdT&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::forward<SubjectIdT>(value); }
    template<typename SubjectIdT = Aws::String>
    GetReadSetMetadataResult& WithSubjectId(SubjectIdT&& value) { SetSubjectId(std::forward<SubjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's sample ID.</p>
     */
    inline const Aws::String& GetSampleId() const { return m_sampleId; }
    template<typename SampleIdT = Aws::String>
    void SetSampleId(SampleIdT&& value) { m_sampleIdHasBeenSet = true; m_sampleId = std::forward<SampleIdT>(value); }
    template<typename SampleIdT = Aws::String>
    GetReadSetMetadataResult& WithSampleId(SampleIdT&& value) { SetSampleId(std::forward<SampleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's status.</p>
     */
    inline ReadSetStatus GetStatus() const { return m_status; }
    inline void SetStatus(ReadSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetReadSetMetadataResult& WithStatus(ReadSetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetReadSetMetadataResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetReadSetMetadataResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's file type.</p>
     */
    inline FileType GetFileType() const { return m_fileType; }
    inline void SetFileType(FileType value) { m_fileTypeHasBeenSet = true; m_fileType = value; }
    inline GetReadSetMetadataResult& WithFileType(FileType value) { SetFileType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the read set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetReadSetMetadataResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's sequence information.</p>
     */
    inline const SequenceInformation& GetSequenceInformation() const { return m_sequenceInformation; }
    template<typename SequenceInformationT = SequenceInformation>
    void SetSequenceInformation(SequenceInformationT&& value) { m_sequenceInformationHasBeenSet = true; m_sequenceInformation = std::forward<SequenceInformationT>(value); }
    template<typename SequenceInformationT = SequenceInformation>
    GetReadSetMetadataResult& WithSequenceInformation(SequenceInformationT&& value) { SetSequenceInformation(std::forward<SequenceInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline const Aws::String& GetReferenceArn() const { return m_referenceArn; }
    template<typename ReferenceArnT = Aws::String>
    void SetReferenceArn(ReferenceArnT&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::forward<ReferenceArnT>(value); }
    template<typename ReferenceArnT = Aws::String>
    GetReadSetMetadataResult& WithReferenceArn(ReferenceArnT&& value) { SetReferenceArn(std::forward<ReferenceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's files.</p>
     */
    inline const ReadSetFiles& GetFiles() const { return m_files; }
    template<typename FilesT = ReadSetFiles>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = ReadSetFiles>
    GetReadSetMetadataResult& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for a read set. It provides more detail as to why the read
     * set has a status. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetReadSetMetadataResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The creation type of the read set. </p>
     */
    inline CreationType GetCreationType() const { return m_creationType; }
    inline void SetCreationType(CreationType value) { m_creationTypeHasBeenSet = true; m_creationType = value; }
    inline GetReadSetMetadataResult& WithCreationType(CreationType value) { SetCreationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity tag (ETag) is a hash of the object meant to represent its semantic
     * content.</p>
     */
    inline const ETag& GetEtag() const { return m_etag; }
    template<typename EtagT = ETag>
    void SetEtag(EtagT&& value) { m_etagHasBeenSet = true; m_etag = std::forward<EtagT>(value); }
    template<typename EtagT = ETag>
    GetReadSetMetadataResult& WithEtag(EtagT&& value) { SetEtag(std::forward<EtagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's creation job ID.</p>
     */
    inline const Aws::String& GetCreationJobId() const { return m_creationJobId; }
    template<typename CreationJobIdT = Aws::String>
    void SetCreationJobId(CreationJobIdT&& value) { m_creationJobIdHasBeenSet = true; m_creationJobId = std::forward<CreationJobIdT>(value); }
    template<typename CreationJobIdT = Aws::String>
    GetReadSetMetadataResult& WithCreationJobId(CreationJobIdT&& value) { SetCreationJobId(std::forward<CreationJobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReadSetMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;

    Aws::String m_sampleId;
    bool m_sampleIdHasBeenSet = false;

    ReadSetStatus m_status{ReadSetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FileType m_fileType{FileType::NOT_SET};
    bool m_fileTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    SequenceInformation m_sequenceInformation;
    bool m_sequenceInformationHasBeenSet = false;

    Aws::String m_referenceArn;
    bool m_referenceArnHasBeenSet = false;

    ReadSetFiles m_files;
    bool m_filesHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    CreationType m_creationType{CreationType::NOT_SET};
    bool m_creationTypeHasBeenSet = false;

    ETag m_etag;
    bool m_etagHasBeenSet = false;

    Aws::String m_creationJobId;
    bool m_creationJobIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
