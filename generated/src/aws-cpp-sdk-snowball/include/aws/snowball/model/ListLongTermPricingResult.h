/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/LongTermPricingListEntry.h>
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
namespace Snowball
{
namespace Model
{
  class ListLongTermPricingResult
  {
  public:
    AWS_SNOWBALL_API ListLongTermPricingResult() = default;
    AWS_SNOWBALL_API ListLongTermPricingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API ListLongTermPricingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Each <code>LongTermPricingEntry</code> object contains a status, ID, and
     * other information about the <code>LongTermPricing</code> type. </p>
     */
    inline const Aws::Vector<LongTermPricingListEntry>& GetLongTermPricingEntries() const { return m_longTermPricingEntries; }
    template<typename LongTermPricingEntriesT = Aws::Vector<LongTermPricingListEntry>>
    void SetLongTermPricingEntries(LongTermPricingEntriesT&& value) { m_longTermPricingEntriesHasBeenSet = true; m_longTermPricingEntries = std::forward<LongTermPricingEntriesT>(value); }
    template<typename LongTermPricingEntriesT = Aws::Vector<LongTermPricingListEntry>>
    ListLongTermPricingResult& WithLongTermPricingEntries(LongTermPricingEntriesT&& value) { SetLongTermPricingEntries(std::forward<LongTermPricingEntriesT>(value)); return *this;}
    template<typename LongTermPricingEntriesT = LongTermPricingListEntry>
    ListLongTermPricingResult& AddLongTermPricingEntries(LongTermPricingEntriesT&& value) { m_longTermPricingEntriesHasBeenSet = true; m_longTermPricingEntries.emplace_back(std::forward<LongTermPricingEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Because HTTP requests are stateless, this is the starting point for your next
     * list of returned <code>ListLongTermPricing</code> list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLongTermPricingResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLongTermPricingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LongTermPricingListEntry> m_longTermPricingEntries;
    bool m_longTermPricingEntriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
