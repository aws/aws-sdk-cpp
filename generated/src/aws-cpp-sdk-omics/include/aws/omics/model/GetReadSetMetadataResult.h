/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/FileType.h>
#include <aws/omics/model/ReadSetFiles.h>
#include <aws/omics/model/SequenceInformation.h>
#include <aws/omics/model/ReadSetStatus.h>
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


    /**
     * <p>The read set's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The read set's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The read set's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The read set's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The read set's ARN.</p>
     */
    inline GetReadSetMetadataResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The read set's ARN.</p>
     */
    inline GetReadSetMetadataResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The read set's ARN.</p>
     */
    inline GetReadSetMetadataResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the read set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the read set was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the read set was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the read set was created.</p>
     */
    inline GetReadSetMetadataResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the read set was created.</p>
     */
    inline GetReadSetMetadataResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The read set's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The read set's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The read set's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The read set's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The read set's description.</p>
     */
    inline GetReadSetMetadataResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The read set's description.</p>
     */
    inline GetReadSetMetadataResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The read set's description.</p>
     */
    inline GetReadSetMetadataResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The read set's file type.</p>
     */
    inline const FileType& GetFileType() const{ return m_fileType; }

    /**
     * <p>The read set's file type.</p>
     */
    inline void SetFileType(const FileType& value) { m_fileType = value; }

    /**
     * <p>The read set's file type.</p>
     */
    inline void SetFileType(FileType&& value) { m_fileType = std::move(value); }

    /**
     * <p>The read set's file type.</p>
     */
    inline GetReadSetMetadataResult& WithFileType(const FileType& value) { SetFileType(value); return *this;}

    /**
     * <p>The read set's file type.</p>
     */
    inline GetReadSetMetadataResult& WithFileType(FileType&& value) { SetFileType(std::move(value)); return *this;}


    /**
     * <p>The read set's files.</p>
     */
    inline const ReadSetFiles& GetFiles() const{ return m_files; }

    /**
     * <p>The read set's files.</p>
     */
    inline void SetFiles(const ReadSetFiles& value) { m_files = value; }

    /**
     * <p>The read set's files.</p>
     */
    inline void SetFiles(ReadSetFiles&& value) { m_files = std::move(value); }

    /**
     * <p>The read set's files.</p>
     */
    inline GetReadSetMetadataResult& WithFiles(const ReadSetFiles& value) { SetFiles(value); return *this;}

    /**
     * <p>The read set's files.</p>
     */
    inline GetReadSetMetadataResult& WithFiles(ReadSetFiles&& value) { SetFiles(std::move(value)); return *this;}


    /**
     * <p>The read set's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The read set's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The read set's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The read set's ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The read set's ID.</p>
     */
    inline GetReadSetMetadataResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The read set's ID.</p>
     */
    inline GetReadSetMetadataResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The read set's ID.</p>
     */
    inline GetReadSetMetadataResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The read set's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The read set's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The read set's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The read set's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The read set's name.</p>
     */
    inline GetReadSetMetadataResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The read set's name.</p>
     */
    inline GetReadSetMetadataResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The read set's name.</p>
     */
    inline GetReadSetMetadataResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArn = value; }

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArn = std::move(value); }

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline void SetReferenceArn(const char* value) { m_referenceArn.assign(value); }

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline GetReadSetMetadataResult& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline GetReadSetMetadataResult& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline GetReadSetMetadataResult& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}


    /**
     * <p>The read set's sample ID.</p>
     */
    inline const Aws::String& GetSampleId() const{ return m_sampleId; }

    /**
     * <p>The read set's sample ID.</p>
     */
    inline void SetSampleId(const Aws::String& value) { m_sampleId = value; }

    /**
     * <p>The read set's sample ID.</p>
     */
    inline void SetSampleId(Aws::String&& value) { m_sampleId = std::move(value); }

    /**
     * <p>The read set's sample ID.</p>
     */
    inline void SetSampleId(const char* value) { m_sampleId.assign(value); }

    /**
     * <p>The read set's sample ID.</p>
     */
    inline GetReadSetMetadataResult& WithSampleId(const Aws::String& value) { SetSampleId(value); return *this;}

    /**
     * <p>The read set's sample ID.</p>
     */
    inline GetReadSetMetadataResult& WithSampleId(Aws::String&& value) { SetSampleId(std::move(value)); return *this;}

    /**
     * <p>The read set's sample ID.</p>
     */
    inline GetReadSetMetadataResult& WithSampleId(const char* value) { SetSampleId(value); return *this;}


    /**
     * <p>The read set's sequence information.</p>
     */
    inline const SequenceInformation& GetSequenceInformation() const{ return m_sequenceInformation; }

    /**
     * <p>The read set's sequence information.</p>
     */
    inline void SetSequenceInformation(const SequenceInformation& value) { m_sequenceInformation = value; }

    /**
     * <p>The read set's sequence information.</p>
     */
    inline void SetSequenceInformation(SequenceInformation&& value) { m_sequenceInformation = std::move(value); }

    /**
     * <p>The read set's sequence information.</p>
     */
    inline GetReadSetMetadataResult& WithSequenceInformation(const SequenceInformation& value) { SetSequenceInformation(value); return *this;}

    /**
     * <p>The read set's sequence information.</p>
     */
    inline GetReadSetMetadataResult& WithSequenceInformation(SequenceInformation&& value) { SetSequenceInformation(std::move(value)); return *this;}


    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreId = value; }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreId = std::move(value); }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreId.assign(value); }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline GetReadSetMetadataResult& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline GetReadSetMetadataResult& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline GetReadSetMetadataResult& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}


    /**
     * <p>The read set's status.</p>
     */
    inline const ReadSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The read set's status.</p>
     */
    inline void SetStatus(const ReadSetStatus& value) { m_status = value; }

    /**
     * <p>The read set's status.</p>
     */
    inline void SetStatus(ReadSetStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The read set's status.</p>
     */
    inline GetReadSetMetadataResult& WithStatus(const ReadSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The read set's status.</p>
     */
    inline GetReadSetMetadataResult& WithStatus(ReadSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The read set's subject ID.</p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }

    /**
     * <p>The read set's subject ID.</p>
     */
    inline void SetSubjectId(const Aws::String& value) { m_subjectId = value; }

    /**
     * <p>The read set's subject ID.</p>
     */
    inline void SetSubjectId(Aws::String&& value) { m_subjectId = std::move(value); }

    /**
     * <p>The read set's subject ID.</p>
     */
    inline void SetSubjectId(const char* value) { m_subjectId.assign(value); }

    /**
     * <p>The read set's subject ID.</p>
     */
    inline GetReadSetMetadataResult& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}

    /**
     * <p>The read set's subject ID.</p>
     */
    inline GetReadSetMetadataResult& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}

    /**
     * <p>The read set's subject ID.</p>
     */
    inline GetReadSetMetadataResult& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    FileType m_fileType;

    ReadSetFiles m_files;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_referenceArn;

    Aws::String m_sampleId;

    SequenceInformation m_sequenceInformation;

    Aws::String m_sequenceStoreId;

    ReadSetStatus m_status;

    Aws::String m_subjectId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
