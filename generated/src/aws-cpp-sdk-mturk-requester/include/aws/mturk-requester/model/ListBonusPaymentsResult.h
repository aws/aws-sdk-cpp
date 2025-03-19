/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/BonusPayment.h>
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
namespace MTurk
{
namespace Model
{
  class ListBonusPaymentsResult
  {
  public:
    AWS_MTURK_API ListBonusPaymentsResult() = default;
    AWS_MTURK_API ListBonusPaymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListBonusPaymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of bonus payments on this page in the filtered results list,
     * equivalent to the number of bonus payments being returned by this call. </p>
     */
    inline int GetNumResults() const { return m_numResults; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline ListBonusPaymentsResult& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBonusPaymentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A successful request to the ListBonusPayments operation returns a list of
     * BonusPayment objects. </p>
     */
    inline const Aws::Vector<BonusPayment>& GetBonusPayments() const { return m_bonusPayments; }
    template<typename BonusPaymentsT = Aws::Vector<BonusPayment>>
    void SetBonusPayments(BonusPaymentsT&& value) { m_bonusPaymentsHasBeenSet = true; m_bonusPayments = std::forward<BonusPaymentsT>(value); }
    template<typename BonusPaymentsT = Aws::Vector<BonusPayment>>
    ListBonusPaymentsResult& WithBonusPayments(BonusPaymentsT&& value) { SetBonusPayments(std::forward<BonusPaymentsT>(value)); return *this;}
    template<typename BonusPaymentsT = BonusPayment>
    ListBonusPaymentsResult& AddBonusPayments(BonusPaymentsT&& value) { m_bonusPaymentsHasBeenSet = true; m_bonusPayments.emplace_back(std::forward<BonusPaymentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBonusPaymentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_numResults{0};
    bool m_numResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<BonusPayment> m_bonusPayments;
    bool m_bonusPaymentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
