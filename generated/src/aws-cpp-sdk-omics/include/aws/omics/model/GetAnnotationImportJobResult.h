﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/FormatOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/AnnotationImportItemDetail.h>
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
  class GetAnnotationImportJobResult
  {
  public:
    AWS_OMICS_API GetAnnotationImportJobResult();
    AWS_OMICS_API GetAnnotationImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetAnnotationImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetAnnotationImportJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetAnnotationImportJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetAnnotationImportJobResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's destination annotation store.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }
    inline void SetDestinationName(const Aws::String& value) { m_destinationName = value; }
    inline void SetDestinationName(Aws::String&& value) { m_destinationName = std::move(value); }
    inline void SetDestinationName(const char* value) { m_destinationName.assign(value); }
    inline GetAnnotationImportJobResult& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}
    inline GetAnnotationImportJobResult& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}
    inline GetAnnotationImportJobResult& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the annotation store version. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline void SetVersionName(const Aws::String& value) { m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionName.assign(value); }
    inline GetAnnotationImportJobResult& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline GetAnnotationImportJobResult& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline GetAnnotationImportJobResult& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's service role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetAnnotationImportJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetAnnotationImportJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetAnnotationImportJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const JobStatus& value) { m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_status = std::move(value); }
    inline GetAnnotationImportJobResult& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline GetAnnotationImportJobResult& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetAnnotationImportJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetAnnotationImportJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetAnnotationImportJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetAnnotationImportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetAnnotationImportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetAnnotationImportJobResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetAnnotationImportJobResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }
    inline GetAnnotationImportJobResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline GetAnnotationImportJobResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's imported items.</p>
     */
    inline const Aws::Vector<AnnotationImportItemDetail>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<AnnotationImportItemDetail>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<AnnotationImportItemDetail>&& value) { m_items = std::move(value); }
    inline GetAnnotationImportJobResult& WithItems(const Aws::Vector<AnnotationImportItemDetail>& value) { SetItems(value); return *this;}
    inline GetAnnotationImportJobResult& WithItems(Aws::Vector<AnnotationImportItemDetail>&& value) { SetItems(std::move(value)); return *this;}
    inline GetAnnotationImportJobResult& AddItems(const AnnotationImportItemDetail& value) { m_items.push_back(value); return *this; }
    inline GetAnnotationImportJobResult& AddItems(AnnotationImportItemDetail&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The job's left normalization setting.</p>
     */
    inline bool GetRunLeftNormalization() const{ return m_runLeftNormalization; }
    inline void SetRunLeftNormalization(bool value) { m_runLeftNormalization = value; }
    inline GetAnnotationImportJobResult& WithRunLeftNormalization(bool value) { SetRunLeftNormalization(value); return *this;}
    ///@}

    ///@{
    
    inline const FormatOptions& GetFormatOptions() const{ return m_formatOptions; }
    inline void SetFormatOptions(const FormatOptions& value) { m_formatOptions = value; }
    inline void SetFormatOptions(FormatOptions&& value) { m_formatOptions = std::move(value); }
    inline GetAnnotationImportJobResult& WithFormatOptions(const FormatOptions& value) { SetFormatOptions(value); return *this;}
    inline GetAnnotationImportJobResult& WithFormatOptions(FormatOptions&& value) { SetFormatOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The annotation schema generated by the parsed annotation data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAnnotationFields() const{ return m_annotationFields; }
    inline void SetAnnotationFields(const Aws::Map<Aws::String, Aws::String>& value) { m_annotationFields = value; }
    inline void SetAnnotationFields(Aws::Map<Aws::String, Aws::String>&& value) { m_annotationFields = std::move(value); }
    inline GetAnnotationImportJobResult& WithAnnotationFields(const Aws::Map<Aws::String, Aws::String>& value) { SetAnnotationFields(value); return *this;}
    inline GetAnnotationImportJobResult& WithAnnotationFields(Aws::Map<Aws::String, Aws::String>&& value) { SetAnnotationFields(std::move(value)); return *this;}
    inline GetAnnotationImportJobResult& AddAnnotationFields(const Aws::String& key, const Aws::String& value) { m_annotationFields.emplace(key, value); return *this; }
    inline GetAnnotationImportJobResult& AddAnnotationFields(Aws::String&& key, const Aws::String& value) { m_annotationFields.emplace(std::move(key), value); return *this; }
    inline GetAnnotationImportJobResult& AddAnnotationFields(const Aws::String& key, Aws::String&& value) { m_annotationFields.emplace(key, std::move(value)); return *this; }
    inline GetAnnotationImportJobResult& AddAnnotationFields(Aws::String&& key, Aws::String&& value) { m_annotationFields.emplace(std::move(key), std::move(value)); return *this; }
    inline GetAnnotationImportJobResult& AddAnnotationFields(const char* key, Aws::String&& value) { m_annotationFields.emplace(key, std::move(value)); return *this; }
    inline GetAnnotationImportJobResult& AddAnnotationFields(Aws::String&& key, const char* value) { m_annotationFields.emplace(std::move(key), value); return *this; }
    inline GetAnnotationImportJobResult& AddAnnotationFields(const char* key, const char* value) { m_annotationFields.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAnnotationImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAnnotationImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAnnotationImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_destinationName;

    Aws::String m_versionName;

    Aws::String m_roleArn;

    JobStatus m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::Utils::DateTime m_completionTime;

    Aws::Vector<AnnotationImportItemDetail> m_items;

    bool m_runLeftNormalization;

    FormatOptions m_formatOptions;

    Aws::Map<Aws::String, Aws::String> m_annotationFields;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
