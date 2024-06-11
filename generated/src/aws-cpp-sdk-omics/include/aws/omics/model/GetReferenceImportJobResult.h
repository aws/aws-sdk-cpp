/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceImportJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ImportReferenceSourceItem.h>
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
  class GetReferenceImportJobResult
  {
  public:
    AWS_OMICS_API GetReferenceImportJobResult();
    AWS_OMICS_API GetReferenceImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetReferenceImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetReferenceImportJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetReferenceImportJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetReferenceImportJobResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's reference store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const{ return m_referenceStoreId; }
    inline void SetReferenceStoreId(const Aws::String& value) { m_referenceStoreId = value; }
    inline void SetReferenceStoreId(Aws::String&& value) { m_referenceStoreId = std::move(value); }
    inline void SetReferenceStoreId(const char* value) { m_referenceStoreId.assign(value); }
    inline GetReferenceImportJobResult& WithReferenceStoreId(const Aws::String& value) { SetReferenceStoreId(value); return *this;}
    inline GetReferenceImportJobResult& WithReferenceStoreId(Aws::String&& value) { SetReferenceStoreId(std::move(value)); return *this;}
    inline GetReferenceImportJobResult& WithReferenceStoreId(const char* value) { SetReferenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's service role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetReferenceImportJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetReferenceImportJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetReferenceImportJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline const ReferenceImportJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ReferenceImportJobStatus& value) { m_status = value; }
    inline void SetStatus(ReferenceImportJobStatus&& value) { m_status = std::move(value); }
    inline GetReferenceImportJobResult& WithStatus(const ReferenceImportJobStatus& value) { SetStatus(value); return *this;}
    inline GetReferenceImportJobResult& WithStatus(ReferenceImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetReferenceImportJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetReferenceImportJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetReferenceImportJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetReferenceImportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetReferenceImportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }
    inline GetReferenceImportJobResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline GetReferenceImportJobResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's source files.</p>
     */
    inline const Aws::Vector<ImportReferenceSourceItem>& GetSources() const{ return m_sources; }
    inline void SetSources(const Aws::Vector<ImportReferenceSourceItem>& value) { m_sources = value; }
    inline void SetSources(Aws::Vector<ImportReferenceSourceItem>&& value) { m_sources = std::move(value); }
    inline GetReferenceImportJobResult& WithSources(const Aws::Vector<ImportReferenceSourceItem>& value) { SetSources(value); return *this;}
    inline GetReferenceImportJobResult& WithSources(Aws::Vector<ImportReferenceSourceItem>&& value) { SetSources(std::move(value)); return *this;}
    inline GetReferenceImportJobResult& AddSources(const ImportReferenceSourceItem& value) { m_sources.push_back(value); return *this; }
    inline GetReferenceImportJobResult& AddSources(ImportReferenceSourceItem&& value) { m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReferenceImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReferenceImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReferenceImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_referenceStoreId;

    Aws::String m_roleArn;

    ReferenceImportJobStatus m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_completionTime;

    Aws::Vector<ImportReferenceSourceItem> m_sources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
