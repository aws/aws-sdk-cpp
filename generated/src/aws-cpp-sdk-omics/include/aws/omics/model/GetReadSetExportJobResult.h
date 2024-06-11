﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetExportJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ExportReadSetDetail.h>
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
  class GetReadSetExportJobResult
  {
  public:
    AWS_OMICS_API GetReadSetExportJobResult();
    AWS_OMICS_API GetReadSetExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetReadSetExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetReadSetExportJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetReadSetExportJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetReadSetExportJobResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreId = value; }
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreId = std::move(value); }
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreId.assign(value); }
    inline GetReadSetExportJobResult& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}
    inline GetReadSetExportJobResult& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}
    inline GetReadSetExportJobResult& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's destination in Amazon S3.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline void SetDestination(const Aws::String& value) { m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destination.assign(value); }
    inline GetReadSetExportJobResult& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline GetReadSetExportJobResult& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline GetReadSetExportJobResult& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline const ReadSetExportJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ReadSetExportJobStatus& value) { m_status = value; }
    inline void SetStatus(ReadSetExportJobStatus&& value) { m_status = std::move(value); }
    inline GetReadSetExportJobResult& WithStatus(const ReadSetExportJobStatus& value) { SetStatus(value); return *this;}
    inline GetReadSetExportJobResult& WithStatus(ReadSetExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetReadSetExportJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetReadSetExportJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetReadSetExportJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetReadSetExportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetReadSetExportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }
    inline GetReadSetExportJobResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline GetReadSetExportJobResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's read sets.</p>
     */
    inline const Aws::Vector<ExportReadSetDetail>& GetReadSets() const{ return m_readSets; }
    inline void SetReadSets(const Aws::Vector<ExportReadSetDetail>& value) { m_readSets = value; }
    inline void SetReadSets(Aws::Vector<ExportReadSetDetail>&& value) { m_readSets = std::move(value); }
    inline GetReadSetExportJobResult& WithReadSets(const Aws::Vector<ExportReadSetDetail>& value) { SetReadSets(value); return *this;}
    inline GetReadSetExportJobResult& WithReadSets(Aws::Vector<ExportReadSetDetail>&& value) { SetReadSets(std::move(value)); return *this;}
    inline GetReadSetExportJobResult& AddReadSets(const ExportReadSetDetail& value) { m_readSets.push_back(value); return *this; }
    inline GetReadSetExportJobResult& AddReadSets(ExportReadSetDetail&& value) { m_readSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReadSetExportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReadSetExportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReadSetExportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_sequenceStoreId;

    Aws::String m_destination;

    ReadSetExportJobStatus m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_completionTime;

    Aws::Vector<ExportReadSetDetail> m_readSets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
