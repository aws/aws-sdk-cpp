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
    AWS_OMICS_API GetReadSetMetadataResult();
    AWS_OMICS_API GetReadSetMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetReadSetMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The read set's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetReadSetMetadataResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetReadSetMetadataResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetReadSetMetadataResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetReadSetMetadataResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetReadSetMetadataResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetReadSetMetadataResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreId = value; }
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreId = std::move(value); }
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreId.assign(value); }
    inline GetReadSetMetadataResult& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}
    inline GetReadSetMetadataResult& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}
    inline GetReadSetMetadataResult& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's subject ID.</p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }
    inline void SetSubjectId(const Aws::String& value) { m_subjectId = value; }
    inline void SetSubjectId(Aws::String&& value) { m_subjectId = std::move(value); }
    inline void SetSubjectId(const char* value) { m_subjectId.assign(value); }
    inline GetReadSetMetadataResult& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}
    inline GetReadSetMetadataResult& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}
    inline GetReadSetMetadataResult& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's sample ID.</p>
     */
    inline const Aws::String& GetSampleId() const{ return m_sampleId; }
    inline void SetSampleId(const Aws::String& value) { m_sampleId = value; }
    inline void SetSampleId(Aws::String&& value) { m_sampleId = std::move(value); }
    inline void SetSampleId(const char* value) { m_sampleId.assign(value); }
    inline GetReadSetMetadataResult& WithSampleId(const Aws::String& value) { SetSampleId(value); return *this;}
    inline GetReadSetMetadataResult& WithSampleId(Aws::String&& value) { SetSampleId(std::move(value)); return *this;}
    inline GetReadSetMetadataResult& WithSampleId(const char* value) { SetSampleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's status.</p>
     */
    inline const ReadSetStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ReadSetStatus& value) { m_status = value; }
    inline void SetStatus(ReadSetStatus&& value) { m_status = std::move(value); }
    inline GetReadSetMetadataResult& WithStatus(const ReadSetStatus& value) { SetStatus(value); return *this;}
    inline GetReadSetMetadataResult& WithStatus(ReadSetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetReadSetMetadataResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetReadSetMetadataResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetReadSetMetadataResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetReadSetMetadataResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetReadSetMetadataResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetReadSetMetadataResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's file type.</p>
     */
    inline const FileType& GetFileType() const{ return m_fileType; }
    inline void SetFileType(const FileType& value) { m_fileType = value; }
    inline void SetFileType(FileType&& value) { m_fileType = std::move(value); }
    inline GetReadSetMetadataResult& WithFileType(const FileType& value) { SetFileType(value); return *this;}
    inline GetReadSetMetadataResult& WithFileType(FileType&& value) { SetFileType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the read set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetReadSetMetadataResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetReadSetMetadataResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's sequence information.</p>
     */
    inline const SequenceInformation& GetSequenceInformation() const{ return m_sequenceInformation; }
    inline void SetSequenceInformation(const SequenceInformation& value) { m_sequenceInformation = value; }
    inline void SetSequenceInformation(SequenceInformation&& value) { m_sequenceInformation = std::move(value); }
    inline GetReadSetMetadataResult& WithSequenceInformation(const SequenceInformation& value) { SetSequenceInformation(value); return *this;}
    inline GetReadSetMetadataResult& WithSequenceInformation(SequenceInformation&& value) { SetSequenceInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArn = value; }
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArn = std::move(value); }
    inline void SetReferenceArn(const char* value) { m_referenceArn.assign(value); }
    inline GetReadSetMetadataResult& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}
    inline GetReadSetMetadataResult& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}
    inline GetReadSetMetadataResult& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's files.</p>
     */
    inline const ReadSetFiles& GetFiles() const{ return m_files; }
    inline void SetFiles(const ReadSetFiles& value) { m_files = value; }
    inline void SetFiles(ReadSetFiles&& value) { m_files = std::move(value); }
    inline GetReadSetMetadataResult& WithFiles(const ReadSetFiles& value) { SetFiles(value); return *this;}
    inline GetReadSetMetadataResult& WithFiles(ReadSetFiles&& value) { SetFiles(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for a read set. It provides more detail as to why the read
     * set has a status. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetReadSetMetadataResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetReadSetMetadataResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetReadSetMetadataResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The creation type of the read set. </p>
     */
    inline const CreationType& GetCreationType() const{ return m_creationType; }
    inline void SetCreationType(const CreationType& value) { m_creationType = value; }
    inline void SetCreationType(CreationType&& value) { m_creationType = std::move(value); }
    inline GetReadSetMetadataResult& WithCreationType(const CreationType& value) { SetCreationType(value); return *this;}
    inline GetReadSetMetadataResult& WithCreationType(CreationType&& value) { SetCreationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity tag (ETag) is a hash of the object meant to represent its semantic
     * content.</p>
     */
    inline const ETag& GetEtag() const{ return m_etag; }
    inline void SetEtag(const ETag& value) { m_etag = value; }
    inline void SetEtag(ETag&& value) { m_etag = std::move(value); }
    inline GetReadSetMetadataResult& WithEtag(const ETag& value) { SetEtag(value); return *this;}
    inline GetReadSetMetadataResult& WithEtag(ETag&& value) { SetEtag(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's creation job ID.</p>
     */
    inline const Aws::String& GetCreationJobId() const{ return m_creationJobId; }
    inline void SetCreationJobId(const Aws::String& value) { m_creationJobId = value; }
    inline void SetCreationJobId(Aws::String&& value) { m_creationJobId = std::move(value); }
    inline void SetCreationJobId(const char* value) { m_creationJobId.assign(value); }
    inline GetReadSetMetadataResult& WithCreationJobId(const Aws::String& value) { SetCreationJobId(value); return *this;}
    inline GetReadSetMetadataResult& WithCreationJobId(Aws::String&& value) { SetCreationJobId(std::move(value)); return *this;}
    inline GetReadSetMetadataResult& WithCreationJobId(const char* value) { SetCreationJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReadSetMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReadSetMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReadSetMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_sequenceStoreId;

    Aws::String m_subjectId;

    Aws::String m_sampleId;

    ReadSetStatus m_status;

    Aws::String m_name;

    Aws::String m_description;

    FileType m_fileType;

    Aws::Utils::DateTime m_creationTime;

    SequenceInformation m_sequenceInformation;

    Aws::String m_referenceArn;

    ReadSetFiles m_files;

    Aws::String m_statusMessage;

    CreationType m_creationType;

    ETag m_etag;

    Aws::String m_creationJobId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
