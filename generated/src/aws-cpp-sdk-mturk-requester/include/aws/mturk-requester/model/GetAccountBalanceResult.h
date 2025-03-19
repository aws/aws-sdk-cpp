/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetAccountBalanceResult
  {
  public:
    AWS_MTURK_API GetAccountBalanceResult() = default;
    AWS_MTURK_API GetAccountBalanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API GetAccountBalanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetAvailableBalance() const { return m_availableBalance; }
    template<typename AvailableBalanceT = Aws::String>
    void SetAvailableBalance(AvailableBalanceT&& value) { m_availableBalanceHasBeenSet = true; m_availableBalance = std::forward<AvailableBalanceT>(value); }
    template<typename AvailableBalanceT = Aws::String>
    GetAccountBalanceResult& WithAvailableBalance(AvailableBalanceT&& value) { SetAvailableBalance(std::forward<AvailableBalanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetOnHoldBalance() const { return m_onHoldBalance; }
    template<typename OnHoldBalanceT = Aws::String>
    void SetOnHoldBalance(OnHoldBalanceT&& value) { m_onHoldBalanceHasBeenSet = true; m_onHoldBalance = std::forward<OnHoldBalanceT>(value); }
    template<typename OnHoldBalanceT = Aws::String>
    GetAccountBalanceResult& WithOnHoldBalance(OnHoldBalanceT&& value) { SetOnHoldBalance(std::forward<OnHoldBalanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountBalanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availableBalance;
    bool m_availableBalanceHasBeenSet = false;

    Aws::String m_onHoldBalance;
    bool m_onHoldBalanceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
