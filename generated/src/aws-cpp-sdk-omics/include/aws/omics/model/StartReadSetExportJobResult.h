/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetExportJobStatus.h>
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
  class StartReadSetExportJobResult
  {
  public:
    AWS_OMICS_API StartReadSetExportJobResult();
    AWS_OMICS_API StartReadSetExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API StartReadSetExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline StartReadSetExportJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline StartReadSetExportJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline StartReadSetExportJobResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreId = value; }
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreId = std::move(value); }
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreId.assign(value); }
    inline StartReadSetExportJobResult& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}
    inline StartReadSetExportJobResult& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}
    inline StartReadSetExportJobResult& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's output location.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline void SetDestination(const Aws::String& value) { m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destination.assign(value); }
    inline StartReadSetExportJobResult& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline StartReadSetExportJobResult& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline StartReadSetExportJobResult& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline const ReadSetExportJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ReadSetExportJobStatus& value) { m_status = value; }
    inline void SetStatus(ReadSetExportJobStatus&& value) { m_status = std::move(value); }
    inline StartReadSetExportJobResult& WithStatus(const ReadSetExportJobStatus& value) { SetStatus(value); return *this;}
    inline StartReadSetExportJobResult& WithStatus(ReadSetExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline StartReadSetExportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline StartReadSetExportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartReadSetExportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartReadSetExportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartReadSetExportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_sequenceStoreId;

    Aws::String m_destination;

    ReadSetExportJobStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
