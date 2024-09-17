/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptunedata/model/SparqlRecord.h>
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
namespace neptunedata
{
namespace Model
{
  class GetSparqlStreamResult
  {
  public:
    AWS_NEPTUNEDATA_API GetSparqlStreamResult();
    AWS_NEPTUNEDATA_API GetSparqlStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetSparqlStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLastEventId() const{ return m_lastEventId; }
    inline void SetLastEventId(const Aws::Map<Aws::String, Aws::String>& value) { m_lastEventId = value; }
    inline void SetLastEventId(Aws::Map<Aws::String, Aws::String>&& value) { m_lastEventId = std::move(value); }
    inline GetSparqlStreamResult& WithLastEventId(const Aws::Map<Aws::String, Aws::String>& value) { SetLastEventId(value); return *this;}
    inline GetSparqlStreamResult& WithLastEventId(Aws::Map<Aws::String, Aws::String>&& value) { SetLastEventId(std::move(value)); return *this;}
    inline GetSparqlStreamResult& AddLastEventId(const Aws::String& key, const Aws::String& value) { m_lastEventId.emplace(key, value); return *this; }
    inline GetSparqlStreamResult& AddLastEventId(Aws::String&& key, const Aws::String& value) { m_lastEventId.emplace(std::move(key), value); return *this; }
    inline GetSparqlStreamResult& AddLastEventId(const Aws::String& key, Aws::String&& value) { m_lastEventId.emplace(key, std::move(value)); return *this; }
    inline GetSparqlStreamResult& AddLastEventId(Aws::String&& key, Aws::String&& value) { m_lastEventId.emplace(std::move(key), std::move(value)); return *this; }
    inline GetSparqlStreamResult& AddLastEventId(const char* key, Aws::String&& value) { m_lastEventId.emplace(key, std::move(value)); return *this; }
    inline GetSparqlStreamResult& AddLastEventId(Aws::String&& key, const char* value) { m_lastEventId.emplace(std::move(key), value); return *this; }
    inline GetSparqlStreamResult& AddLastEventId(const char* key, const char* value) { m_lastEventId.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the commit for the transaction was requested, in
     * milliseconds from the Unix epoch.</p>
     */
    inline long long GetLastTrxTimestampInMillis() const{ return m_lastTrxTimestampInMillis; }
    inline void SetLastTrxTimestampInMillis(long long value) { m_lastTrxTimestampInMillis = value; }
    inline GetSparqlStreamResult& WithLastTrxTimestampInMillis(long long value) { SetLastTrxTimestampInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Serialization format for the change records being returned. Currently, the
     * only supported value is <code>NQUADS</code>.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }
    inline void SetFormat(const Aws::String& value) { m_format = value; }
    inline void SetFormat(Aws::String&& value) { m_format = std::move(value); }
    inline void SetFormat(const char* value) { m_format.assign(value); }
    inline GetSparqlStreamResult& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}
    inline GetSparqlStreamResult& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}
    inline GetSparqlStreamResult& WithFormat(const char* value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of serialized change-log stream records included in the
     * response.</p>
     */
    inline const Aws::Vector<SparqlRecord>& GetRecords() const{ return m_records; }
    inline void SetRecords(const Aws::Vector<SparqlRecord>& value) { m_records = value; }
    inline void SetRecords(Aws::Vector<SparqlRecord>&& value) { m_records = std::move(value); }
    inline GetSparqlStreamResult& WithRecords(const Aws::Vector<SparqlRecord>& value) { SetRecords(value); return *this;}
    inline GetSparqlStreamResult& WithRecords(Aws::Vector<SparqlRecord>&& value) { SetRecords(std::move(value)); return *this;}
    inline GetSparqlStreamResult& AddRecords(const SparqlRecord& value) { m_records.push_back(value); return *this; }
    inline GetSparqlStreamResult& AddRecords(SparqlRecord&& value) { m_records.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of records in the response.</p>
     */
    inline int GetTotalRecords() const{ return m_totalRecords; }
    inline void SetTotalRecords(int value) { m_totalRecords = value; }
    inline GetSparqlStreamResult& WithTotalRecords(int value) { SetTotalRecords(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSparqlStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSparqlStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSparqlStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_lastEventId;

    long long m_lastTrxTimestampInMillis;

    Aws::String m_format;

    Aws::Vector<SparqlRecord> m_records;

    int m_totalRecords;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
