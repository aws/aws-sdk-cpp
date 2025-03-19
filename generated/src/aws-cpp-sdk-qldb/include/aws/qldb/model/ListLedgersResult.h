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
    AWS_QLDB_API ListLedgersResult() = default;
    AWS_QLDB_API ListLedgersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API ListLedgersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ledgers that are associated with the current Amazon Web Services account
     * and Region.</p>
     */
    inline const Aws::Vector<LedgerSummary>& GetLedgers() const { return m_ledgers; }
    template<typename LedgersT = Aws::Vector<LedgerSummary>>
    void SetLedgers(LedgersT&& value) { m_ledgersHasBeenSet = true; m_ledgers = std::forward<LedgersT>(value); }
    template<typename LedgersT = Aws::Vector<LedgerSummary>>
    ListLedgersResult& WithLedgers(LedgersT&& value) { SetLedgers(std::forward<LedgersT>(value)); return *this;}
    template<typename LedgersT = LedgerSummary>
    ListLedgersResult& AddLedgers(LedgersT&& value) { m_ledgersHasBeenSet = true; m_ledgers.emplace_back(std::forward<LedgersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token, indicating whether there are more results available:</p>
     * <ul> <li> <p>If <code>NextToken</code> is empty, then the last page of results
     * has been processed and there are no more results to be retrieved.</p> </li> <li>
     * <p>If <code>NextToken</code> is <i>not</i> empty, then there are more results
     * available. To retrieve the next page of results, use the value of
     * <code>NextToken</code> in a subsequent <code>ListLedgers</code> call.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLedgersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLedgersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LedgerSummary> m_ledgers;
    bool m_ledgersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
