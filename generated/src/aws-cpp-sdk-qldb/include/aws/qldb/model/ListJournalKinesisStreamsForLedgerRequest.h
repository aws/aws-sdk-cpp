/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QLDB
{
namespace Model
{

  /**
   */
  class ListJournalKinesisStreamsForLedgerRequest : public QLDBRequest
  {
  public:
    AWS_QLDB_API ListJournalKinesisStreamsForLedgerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJournalKinesisStreamsForLedger"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;

    AWS_QLDB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetLedgerName() const { return m_ledgerName; }
    inline bool LedgerNameHasBeenSet() const { return m_ledgerNameHasBeenSet; }
    template<typename LedgerNameT = Aws::String>
    void SetLedgerName(LedgerNameT&& value) { m_ledgerNameHasBeenSet = true; m_ledgerName = std::forward<LedgerNameT>(value); }
    template<typename LedgerNameT = Aws::String>
    ListJournalKinesisStreamsForLedgerRequest& WithLedgerName(LedgerNameT&& value) { SetLedgerName(std::forward<LedgerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single
     * <code>ListJournalKinesisStreamsForLedger</code> request. (The actual number of
     * results returned might be fewer.)</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListJournalKinesisStreamsForLedgerRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token, indicating that you want to retrieve the next page of
     * results. If you received a value for <code>NextToken</code> in the response from
     * a previous <code>ListJournalKinesisStreamsForLedger</code> call, you should use
     * that value as input here.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJournalKinesisStreamsForLedgerRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ledgerName;
    bool m_ledgerNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
