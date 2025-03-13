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
    AWS_NEPTUNEDATA_API GetSparqlStreamResult() = default;
    AWS_NEPTUNEDATA_API GetSparqlStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetSparqlStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLastEventId() const { return m_lastEventId; }
    template<typename LastEventIdT = Aws::Map<Aws::String, Aws::String>>
    void SetLastEventId(LastEventIdT&& value) { m_lastEventIdHasBeenSet = true; m_lastEventId = std::forward<LastEventIdT>(value); }
    template<typename LastEventIdT = Aws::Map<Aws::String, Aws::String>>
    GetSparqlStreamResult& WithLastEventId(LastEventIdT&& value) { SetLastEventId(std::forward<LastEventIdT>(value)); return *this;}
    template<typename LastEventIdKeyT = Aws::String, typename LastEventIdValueT = Aws::String>
    GetSparqlStreamResult& AddLastEventId(LastEventIdKeyT&& key, LastEventIdValueT&& value) {
      m_lastEventIdHasBeenSet = true; m_lastEventId.emplace(std::forward<LastEventIdKeyT>(key), std::forward<LastEventIdValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The time at which the commit for the transaction was requested, in
     * milliseconds from the Unix epoch.</p>
     */
    inline long long GetLastTrxTimestampInMillis() const { return m_lastTrxTimestampInMillis; }
    inline void SetLastTrxTimestampInMillis(long long value) { m_lastTrxTimestampInMillisHasBeenSet = true; m_lastTrxTimestampInMillis = value; }
    inline GetSparqlStreamResult& WithLastTrxTimestampInMillis(long long value) { SetLastTrxTimestampInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Serialization format for the change records being returned. Currently, the
     * only supported value is <code>NQUADS</code>.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    GetSparqlStreamResult& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of serialized change-log stream records included in the
     * response.</p>
     */
    inline const Aws::Vector<SparqlRecord>& GetRecords() const { return m_records; }
    template<typename RecordsT = Aws::Vector<SparqlRecord>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<SparqlRecord>>
    GetSparqlStreamResult& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = SparqlRecord>
    GetSparqlStreamResult& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of records in the response.</p>
     */
    inline int GetTotalRecords() const { return m_totalRecords; }
    inline void SetTotalRecords(int value) { m_totalRecordsHasBeenSet = true; m_totalRecords = value; }
    inline GetSparqlStreamResult& WithTotalRecords(int value) { SetTotalRecords(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSparqlStreamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_lastEventId;
    bool m_lastEventIdHasBeenSet = false;

    long long m_lastTrxTimestampInMillis{0};
    bool m_lastTrxTimestampInMillisHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::Vector<SparqlRecord> m_records;
    bool m_recordsHasBeenSet = false;

    int m_totalRecords{0};
    bool m_totalRecordsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
