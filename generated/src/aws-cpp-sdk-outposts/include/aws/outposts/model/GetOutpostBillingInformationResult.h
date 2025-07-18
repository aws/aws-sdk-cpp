/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/Subscription.h>
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
namespace Outposts
{
namespace Model
{
  class GetOutpostBillingInformationResult
  {
  public:
    AWS_OUTPOSTS_API GetOutpostBillingInformationResult() = default;
    AWS_OUTPOSTS_API GetOutpostBillingInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetOutpostBillingInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetOutpostBillingInformationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription details for the specified Outpost.</p>
     */
    inline const Aws::Vector<Subscription>& GetSubscriptions() const { return m_subscriptions; }
    template<typename SubscriptionsT = Aws::Vector<Subscription>>
    void SetSubscriptions(SubscriptionsT&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions = std::forward<SubscriptionsT>(value); }
    template<typename SubscriptionsT = Aws::Vector<Subscription>>
    GetOutpostBillingInformationResult& WithSubscriptions(SubscriptionsT&& value) { SetSubscriptions(std::forward<SubscriptionsT>(value)); return *this;}
    template<typename SubscriptionsT = Subscription>
    GetOutpostBillingInformationResult& AddSubscriptions(SubscriptionsT&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions.emplace_back(std::forward<SubscriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the current contract term ends for the specified Outpost. You must
     * start the renewal or decommission process at least 5 business days before the
     * current term for your Amazon Web Services Outposts ends. Failing to complete
     * these steps at least 5 business days before the current term ends might result
     * in unanticipated charges.</p>
     */
    inline const Aws::String& GetContractEndDate() const { return m_contractEndDate; }
    template<typename ContractEndDateT = Aws::String>
    void SetContractEndDate(ContractEndDateT&& value) { m_contractEndDateHasBeenSet = true; m_contractEndDate = std::forward<ContractEndDateT>(value); }
    template<typename ContractEndDateT = Aws::String>
    GetOutpostBillingInformationResult& WithContractEndDate(ContractEndDateT&& value) { SetContractEndDate(std::forward<ContractEndDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOutpostBillingInformationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Subscription> m_subscriptions;
    bool m_subscriptionsHasBeenSet = false;

    Aws::String m_contractEndDate;
    bool m_contractEndDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
