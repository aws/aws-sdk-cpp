/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/model/SavingsPlan.h>
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
namespace SavingsPlans
{
namespace Model
{
  class DescribeSavingsPlansResult
  {
  public:
    AWS_SAVINGSPLANS_API DescribeSavingsPlansResult() = default;
    AWS_SAVINGSPLANS_API DescribeSavingsPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAVINGSPLANS_API DescribeSavingsPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the Savings Plans.</p>
     */
    inline const Aws::Vector<SavingsPlan>& GetSavingsPlans() const { return m_savingsPlans; }
    template<typename SavingsPlansT = Aws::Vector<SavingsPlan>>
    void SetSavingsPlans(SavingsPlansT&& value) { m_savingsPlansHasBeenSet = true; m_savingsPlans = std::forward<SavingsPlansT>(value); }
    template<typename SavingsPlansT = Aws::Vector<SavingsPlan>>
    DescribeSavingsPlansResult& WithSavingsPlans(SavingsPlansT&& value) { SetSavingsPlans(std::forward<SavingsPlansT>(value)); return *this;}
    template<typename SavingsPlansT = SavingsPlan>
    DescribeSavingsPlansResult& AddSavingsPlans(SavingsPlansT&& value) { m_savingsPlansHasBeenSet = true; m_savingsPlans.emplace_back(std::forward<SavingsPlansT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSavingsPlansResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSavingsPlansResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SavingsPlan> m_savingsPlans;
    bool m_savingsPlansHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
