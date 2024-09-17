/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetActivationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ActivateReadSetSourceItem.h>
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
  class GetReadSetActivationJobResult
  {
  public:
    AWS_OMICS_API GetReadSetActivationJobResult();
    AWS_OMICS_API GetReadSetActivationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetReadSetActivationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetReadSetActivationJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetReadSetActivationJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetReadSetActivationJobResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreId = value; }
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreId = std::move(value); }
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreId.assign(value); }
    inline GetReadSetActivationJobResult& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}
    inline GetReadSetActivationJobResult& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}
    inline GetReadSetActivationJobResult& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline const ReadSetActivationJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ReadSetActivationJobStatus& value) { m_status = value; }
    inline void SetStatus(ReadSetActivationJobStatus&& value) { m_status = std::move(value); }
    inline GetReadSetActivationJobResult& WithStatus(const ReadSetActivationJobStatus& value) { SetStatus(value); return *this;}
    inline GetReadSetActivationJobResult& WithStatus(ReadSetActivationJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetReadSetActivationJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetReadSetActivationJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetReadSetActivationJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetReadSetActivationJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetReadSetActivationJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }
    inline GetReadSetActivationJobResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline GetReadSetActivationJobResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's source files.</p>
     */
    inline const Aws::Vector<ActivateReadSetSourceItem>& GetSources() const{ return m_sources; }
    inline void SetSources(const Aws::Vector<ActivateReadSetSourceItem>& value) { m_sources = value; }
    inline void SetSources(Aws::Vector<ActivateReadSetSourceItem>&& value) { m_sources = std::move(value); }
    inline GetReadSetActivationJobResult& WithSources(const Aws::Vector<ActivateReadSetSourceItem>& value) { SetSources(value); return *this;}
    inline GetReadSetActivationJobResult& WithSources(Aws::Vector<ActivateReadSetSourceItem>&& value) { SetSources(std::move(value)); return *this;}
    inline GetReadSetActivationJobResult& AddSources(const ActivateReadSetSourceItem& value) { m_sources.push_back(value); return *this; }
    inline GetReadSetActivationJobResult& AddSources(ActivateReadSetSourceItem&& value) { m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReadSetActivationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReadSetActivationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReadSetActivationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_sequenceStoreId;

    ReadSetActivationJobStatus m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_completionTime;

    Aws::Vector<ActivateReadSetSourceItem> m_sources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
