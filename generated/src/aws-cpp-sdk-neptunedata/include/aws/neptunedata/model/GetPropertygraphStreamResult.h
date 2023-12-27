/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptunedata/model/PropertygraphRecord.h>
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
  class GetPropertygraphStreamResult
  {
  public:
    AWS_NEPTUNEDATA_API GetPropertygraphStreamResult();
    AWS_NEPTUNEDATA_API GetPropertygraphStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetPropertygraphStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLastEventId() const{ return m_lastEventId; }

    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline void SetLastEventId(const Aws::Map<Aws::String, Aws::String>& value) { m_lastEventId = value; }

    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline void SetLastEventId(Aws::Map<Aws::String, Aws::String>&& value) { m_lastEventId = std::move(value); }

    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline GetPropertygraphStreamResult& WithLastEventId(const Aws::Map<Aws::String, Aws::String>& value) { SetLastEventId(value); return *this;}

    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline GetPropertygraphStreamResult& WithLastEventId(Aws::Map<Aws::String, Aws::String>&& value) { SetLastEventId(std::move(value)); return *this;}

    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline GetPropertygraphStreamResult& AddLastEventId(const Aws::String& key, const Aws::String& value) { m_lastEventId.emplace(key, value); return *this; }

    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline GetPropertygraphStreamResult& AddLastEventId(Aws::String&& key, const Aws::String& value) { m_lastEventId.emplace(std::move(key), value); return *this; }

    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline GetPropertygraphStreamResult& AddLastEventId(const Aws::String& key, Aws::String&& value) { m_lastEventId.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline GetPropertygraphStreamResult& AddLastEventId(Aws::String&& key, Aws::String&& value) { m_lastEventId.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline GetPropertygraphStreamResult& AddLastEventId(const char* key, Aws::String&& value) { m_lastEventId.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline GetPropertygraphStreamResult& AddLastEventId(Aws::String&& key, const char* value) { m_lastEventId.emplace(std::move(key), value); return *this; }

    /**
     * <p>Sequence identifier of the last change in the stream response.</p> <p>An
     * event ID is composed of two fields: a <code>commitNum</code>, which identifies a
     * transaction that changed the graph, and an <code>opNum</code>, which identifies
     * a specific operation within that transaction:</p>
     */
    inline GetPropertygraphStreamResult& AddLastEventId(const char* key, const char* value) { m_lastEventId.emplace(key, value); return *this; }


    /**
     * <p>The time at which the commit for the transaction was requested, in
     * milliseconds from the Unix epoch.</p>
     */
    inline long long GetLastTrxTimestampInMillis() const{ return m_lastTrxTimestampInMillis; }

    /**
     * <p>The time at which the commit for the transaction was requested, in
     * milliseconds from the Unix epoch.</p>
     */
    inline void SetLastTrxTimestampInMillis(long long value) { m_lastTrxTimestampInMillis = value; }

    /**
     * <p>The time at which the commit for the transaction was requested, in
     * milliseconds from the Unix epoch.</p>
     */
    inline GetPropertygraphStreamResult& WithLastTrxTimestampInMillis(long long value) { SetLastTrxTimestampInMillis(value); return *this;}


    /**
     * <p>Serialization format for the change records being returned. Currently, the
     * only supported value is <code>PG_JSON</code>.</p>
     */
    inline const Aws::String& GetFormat() const{ return m_format; }

    /**
     * <p>Serialization format for the change records being returned. Currently, the
     * only supported value is <code>PG_JSON</code>.</p>
     */
    inline void SetFormat(const Aws::String& value) { m_format = value; }

    /**
     * <p>Serialization format for the change records being returned. Currently, the
     * only supported value is <code>PG_JSON</code>.</p>
     */
    inline void SetFormat(Aws::String&& value) { m_format = std::move(value); }

    /**
     * <p>Serialization format for the change records being returned. Currently, the
     * only supported value is <code>PG_JSON</code>.</p>
     */
    inline void SetFormat(const char* value) { m_format.assign(value); }

    /**
     * <p>Serialization format for the change records being returned. Currently, the
     * only supported value is <code>PG_JSON</code>.</p>
     */
    inline GetPropertygraphStreamResult& WithFormat(const Aws::String& value) { SetFormat(value); return *this;}

    /**
     * <p>Serialization format for the change records being returned. Currently, the
     * only supported value is <code>PG_JSON</code>.</p>
     */
    inline GetPropertygraphStreamResult& WithFormat(Aws::String&& value) { SetFormat(std::move(value)); return *this;}

    /**
     * <p>Serialization format for the change records being returned. Currently, the
     * only supported value is <code>PG_JSON</code>.</p>
     */
    inline GetPropertygraphStreamResult& WithFormat(const char* value) { SetFormat(value); return *this;}


    /**
     * <p>An array of serialized change-log stream records included in the
     * response.</p>
     */
    inline const Aws::Vector<PropertygraphRecord>& GetRecords() const{ return m_records; }

    /**
     * <p>An array of serialized change-log stream records included in the
     * response.</p>
     */
    inline void SetRecords(const Aws::Vector<PropertygraphRecord>& value) { m_records = value; }

    /**
     * <p>An array of serialized change-log stream records included in the
     * response.</p>
     */
    inline void SetRecords(Aws::Vector<PropertygraphRecord>&& value) { m_records = std::move(value); }

    /**
     * <p>An array of serialized change-log stream records included in the
     * response.</p>
     */
    inline GetPropertygraphStreamResult& WithRecords(const Aws::Vector<PropertygraphRecord>& value) { SetRecords(value); return *this;}

    /**
     * <p>An array of serialized change-log stream records included in the
     * response.</p>
     */
    inline GetPropertygraphStreamResult& WithRecords(Aws::Vector<PropertygraphRecord>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p>An array of serialized change-log stream records included in the
     * response.</p>
     */
    inline GetPropertygraphStreamResult& AddRecords(const PropertygraphRecord& value) { m_records.push_back(value); return *this; }

    /**
     * <p>An array of serialized change-log stream records included in the
     * response.</p>
     */
    inline GetPropertygraphStreamResult& AddRecords(PropertygraphRecord&& value) { m_records.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of records in the response.</p>
     */
    inline int GetTotalRecords() const{ return m_totalRecords; }

    /**
     * <p>The total number of records in the response.</p>
     */
    inline void SetTotalRecords(int value) { m_totalRecords = value; }

    /**
     * <p>The total number of records in the response.</p>
     */
    inline GetPropertygraphStreamResult& WithTotalRecords(int value) { SetTotalRecords(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPropertygraphStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPropertygraphStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPropertygraphStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_lastEventId;

    long long m_lastTrxTimestampInMillis;

    Aws::String m_format;

    Aws::Vector<PropertygraphRecord> m_records;

    int m_totalRecords;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
