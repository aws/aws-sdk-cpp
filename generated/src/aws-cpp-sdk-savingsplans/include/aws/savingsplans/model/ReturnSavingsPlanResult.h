/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
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
namespace SavingsPlans
{
namespace Model
{
  class ReturnSavingsPlanResult
  {
  public:
    AWS_SAVINGSPLANS_API ReturnSavingsPlanResult() = default;
    AWS_SAVINGSPLANS_API ReturnSavingsPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAVINGSPLANS_API ReturnSavingsPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Savings Plan.</p>
     */
    inline const Aws::String& GetSavingsPlanId() const { return m_savingsPlanId; }
    template<typename SavingsPlanIdT = Aws::String>
    void SetSavingsPlanId(SavingsPlanIdT&& value) { m_savingsPlanIdHasBeenSet = true; m_savingsPlanId = std::forward<SavingsPlanIdT>(value); }
    template<typename SavingsPlanIdT = Aws::String>
    ReturnSavingsPlanResult& WithSavingsPlanId(SavingsPlanIdT&& value) { SetSavingsPlanId(std::forward<SavingsPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ReturnSavingsPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_savingsPlanId;
    bool m_savingsPlanIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
