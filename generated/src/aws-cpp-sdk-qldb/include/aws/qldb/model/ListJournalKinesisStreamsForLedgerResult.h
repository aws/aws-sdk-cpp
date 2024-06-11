﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/JournalKinesisStreamDescription.h>
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
namespace QLDB
{
namespace Model
{
  class ListJournalKinesisStreamsForLedgerResult
  {
  public:
    AWS_QLDB_API ListJournalKinesisStreamsForLedgerResult();
    AWS_QLDB_API ListJournalKinesisStreamsForLedgerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API ListJournalKinesisStreamsForLedgerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The QLDB journal streams that are currently associated with the given
     * ledger.</p>
     */
    inline const Aws::Vector<JournalKinesisStreamDescription>& GetStreams() const{ return m_streams; }
    inline void SetStreams(const Aws::Vector<JournalKinesisStreamDescription>& value) { m_streams = value; }
    inline void SetStreams(Aws::Vector<JournalKinesisStreamDescription>&& value) { m_streams = std::move(value); }
    inline ListJournalKinesisStreamsForLedgerResult& WithStreams(const Aws::Vector<JournalKinesisStreamDescription>& value) { SetStreams(value); return *this;}
    inline ListJournalKinesisStreamsForLedgerResult& WithStreams(Aws::Vector<JournalKinesisStreamDescription>&& value) { SetStreams(std::move(value)); return *this;}
    inline ListJournalKinesisStreamsForLedgerResult& AddStreams(const JournalKinesisStreamDescription& value) { m_streams.push_back(value); return *this; }
    inline ListJournalKinesisStreamsForLedgerResult& AddStreams(JournalKinesisStreamDescription&& value) { m_streams.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <ul> <li> <p>If <code>NextToken</code> is empty, the last page of results has
     * been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, more results are available. To
     * retrieve the next page of results, use the value of <code>NextToken</code> in a
     * subsequent <code>ListJournalKinesisStreamsForLedger</code> call.</p> </li> </ul>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListJournalKinesisStreamsForLedgerResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJournalKinesisStreamsForLedgerResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJournalKinesisStreamsForLedgerResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListJournalKinesisStreamsForLedgerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListJournalKinesisStreamsForLedgerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListJournalKinesisStreamsForLedgerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JournalKinesisStreamDescription> m_streams;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
