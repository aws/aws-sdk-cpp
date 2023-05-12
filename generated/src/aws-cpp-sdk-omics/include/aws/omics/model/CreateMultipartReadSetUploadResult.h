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
    AWS_OMICS_API CreateMultipartReadSetUploadResult();
    AWS_OMICS_API CreateMultipartReadSetUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API CreateMultipartReadSetUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The sequence store ID for the store that the read set will be created in.
     * </p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }

    /**
     * <p> The sequence store ID for the store that the read set will be created in.
     * </p>
     */
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreId = value; }

    /**
     * <p> The sequence store ID for the store that the read set will be created in.
     * </p>
     */
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreId = std::move(value); }

    /**
     * <p> The sequence store ID for the store that the read set will be created in.
     * </p>
     */
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreId.assign(value); }

    /**
     * <p> The sequence store ID for the store that the read set will be created in.
     * </p>
     */
    inline CreateMultipartReadSetUploadResult& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p> The sequence store ID for the store that the read set will be created in.
     * </p>
     */
    inline CreateMultipartReadSetUploadResult& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p> The sequence store ID for the store that the read set will be created in.
     * </p>
     */
    inline CreateMultipartReadSetUploadResult& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}


    /**
     * <p> he ID for the initiated multipart upload. </p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p> he ID for the initiated multipart upload. </p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }

    /**
     * <p> he ID for the initiated multipart upload. </p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadId = std::move(value); }

    /**
     * <p> he ID for the initiated multipart upload. </p>
     */
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }

    /**
     * <p> he ID for the initiated multipart upload. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p> he ID for the initiated multipart upload. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p> he ID for the initiated multipart upload. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    /**
     * <p> The file type of the read set source. </p>
     */
    inline const FileType& GetSourceFileType() const{ return m_sourceFileType; }

    /**
     * <p> The file type of the read set source. </p>
     */
    inline void SetSourceFileType(const FileType& value) { m_sourceFileType = value; }

    /**
     * <p> The file type of the read set source. </p>
     */
    inline void SetSourceFileType(FileType&& value) { m_sourceFileType = std::move(value); }

    /**
     * <p> The file type of the read set source. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithSourceFileType(const FileType& value) { SetSourceFileType(value); return *this;}

    /**
     * <p> The file type of the read set source. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithSourceFileType(FileType&& value) { SetSourceFileType(std::move(value)); return *this;}


    /**
     * <p> The source's subject ID. </p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }

    /**
     * <p> The source's subject ID. </p>
     */
    inline void SetSubjectId(const Aws::String& value) { m_subjectId = value; }

    /**
     * <p> The source's subject ID. </p>
     */
    inline void SetSubjectId(Aws::String&& value) { m_subjectId = std::move(value); }

    /**
     * <p> The source's subject ID. </p>
     */
    inline void SetSubjectId(const char* value) { m_subjectId.assign(value); }

    /**
     * <p> The source's subject ID. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}

    /**
     * <p> The source's subject ID. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}

    /**
     * <p> The source's subject ID. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}


    /**
     * <p> The source's sample ID. </p>
     */
    inline const Aws::String& GetSampleId() const{ return m_sampleId; }

    /**
     * <p> The source's sample ID. </p>
     */
    inline void SetSampleId(const Aws::String& value) { m_sampleId = value; }

    /**
     * <p> The source's sample ID. </p>
     */
    inline void SetSampleId(Aws::String&& value) { m_sampleId = std::move(value); }

    /**
     * <p> The source's sample ID. </p>
     */
    inline void SetSampleId(const char* value) { m_sampleId.assign(value); }

    /**
     * <p> The source's sample ID. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithSampleId(const Aws::String& value) { SetSampleId(value); return *this;}

    /**
     * <p> The source's sample ID. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithSampleId(Aws::String&& value) { SetSampleId(std::move(value)); return *this;}

    /**
     * <p> The source's sample ID. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithSampleId(const char* value) { SetSampleId(value); return *this;}


    /**
     * <p> The source of the read set. </p>
     */
    inline const Aws::String& GetGeneratedFrom() const{ return m_generatedFrom; }

    /**
     * <p> The source of the read set. </p>
     */
    inline void SetGeneratedFrom(const Aws::String& value) { m_generatedFrom = value; }

    /**
     * <p> The source of the read set. </p>
     */
    inline void SetGeneratedFrom(Aws::String&& value) { m_generatedFrom = std::move(value); }

    /**
     * <p> The source of the read set. </p>
     */
    inline void SetGeneratedFrom(const char* value) { m_generatedFrom.assign(value); }

    /**
     * <p> The source of the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithGeneratedFrom(const Aws::String& value) { SetGeneratedFrom(value); return *this;}

    /**
     * <p> The source of the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithGeneratedFrom(Aws::String&& value) { SetGeneratedFrom(std::move(value)); return *this;}

    /**
     * <p> The source of the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithGeneratedFrom(const char* value) { SetGeneratedFrom(value); return *this;}


    /**
     * <p> The read set source's reference ARN. </p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }

    /**
     * <p> The read set source's reference ARN. </p>
     */
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArn = value; }

    /**
     * <p> The read set source's reference ARN. </p>
     */
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArn = std::move(value); }

    /**
     * <p> The read set source's reference ARN. </p>
     */
    inline void SetReferenceArn(const char* value) { m_referenceArn.assign(value); }

    /**
     * <p> The read set source's reference ARN. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}

    /**
     * <p> The read set source's reference ARN. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}

    /**
     * <p> The read set source's reference ARN. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}


    /**
     * <p> The name of the read set. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the read set. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p> The name of the read set. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p> The name of the read set. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p> The name of the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the read set. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the read set. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> The description of the read set. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> The description of the read set. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> The description of the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The tags to add to the read set. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags to add to the read set. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p> The tags to add to the read set. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p> The tags to add to the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags to add to the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags to add to the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags to add to the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags to add to the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags to add to the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags to add to the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags to add to the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags to add to the read set. </p>
     */
    inline CreateMultipartReadSetUploadResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p> The creation time of the multipart upload. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The creation time of the multipart upload. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p> The creation time of the multipart upload. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p> The creation time of the multipart upload. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The creation time of the multipart upload. </p>
     */
    inline CreateMultipartReadSetUploadResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMultipartReadSetUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMultipartReadSetUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMultipartReadSetUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_sequenceStoreId;

    Aws::String m_uploadId;

    FileType m_sourceFileType;

    Aws::String m_subjectId;

    Aws::String m_sampleId;

    Aws::String m_generatedFrom;

    Aws::String m_referenceArn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
