/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/model/LedgerSummary.h>
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
  class ListLedgersResult
  {
  public:
    AWS_QLDB_API ListLedgersResult();
    AWS_QLDB_API ListLedgersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API ListLedgersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The array of ledger summaries that are associated with the current Amazon Web
     * Services account and Region.</p>
     */
    inline const Aws::Vector<LedgerSummary>& GetLedgers() const{ return m_ledgers; }

    /**
     * <p>The array of ledger summaries that are associated with the current Amazon Web
     * Services account and Region.</p>
     */
    inline void SetLedgers(const Aws::Vector<LedgerSummary>& value) { m_ledgers = value; }

    /**
     * <p>The array of ledger summaries that are associated with the current Amazon Web
     * Services account and Region.</p>
     */
    inline void SetLedgers(Aws::Vector<LedgerSummary>&& value) { m_ledgers = std::move(value); }

    /**
     * <p>The array of ledger summaries that are associated with the current Amazon Web
     * Services account and Region.</p>
     */
    inline ListLedgersResult& WithLedgers(const Aws::Vector<LedgerSummary>& value) { SetLedgers(value); return *this;}

    /**
     * <p>The array of ledger summaries that are associated with the current Amazon Web
     * Services account and Region.</p>
     */
    inline ListLedgersResult& WithLedgers(Aws::Vector<LedgerSummary>&& value) { SetLedgers(std::move(value)); return *this;}

    /**
     * <p>The array of ledger summaries that are associated with the current Amazon Web
     * Services account and Region.</p>
     */
    inline ListLedgersResult& AddLedgers(const LedgerSummary& value) { m_ledgers.push_back(value); return *this; }

    /**
     * <p>The array of ledger summaries that are associated with the current Amazon Web
     * Services account and Region.</p>
     */
    inline ListLedgersResult& AddLedgers(LedgerSummary&& value) { m_ledgers.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token, indicating whether there are more results available:</p>
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent <code>ListLedgers</code> call.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token, indicating whether there are more results available:</p>
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent <code>ListLedgers</code> call.</p> </li>
     * </ul>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token, indicating whether there are more results available:</p>
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent <code>ListLedgers</code> call.</p> </li>
     * </ul>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token, indicating whether there are more results available:</p>
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent <code>ListLedgers</code> call.</p> </li>
     * </ul>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token, indicating whether there are more results available:</p>
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent <code>ListLedgers</code> call.</p> </li>
     * </ul>
     */
    inline ListLedgersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token, indicating whether there are more results available:</p>
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent <code>ListLedgers</code> call.</p> </li>
     * </ul>
     */
    inline ListLedgersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token, indicating whether there are more results available:</p>
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent <code>ListLedgers</code> call.</p> </li>
     * </ul>
     */
    inline ListLedgersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LedgerSummary> m_ledgers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
