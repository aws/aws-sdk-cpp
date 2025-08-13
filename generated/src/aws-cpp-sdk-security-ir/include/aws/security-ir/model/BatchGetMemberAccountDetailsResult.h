/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/GetMembershipAccountDetailItem.h>
#include <aws/security-ir/model/GetMembershipAccountDetailError.h>
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
namespace SecurityIR
{
namespace Model
{
  class BatchGetMemberAccountDetailsResult
  {
  public:
    AWS_SECURITYIR_API BatchGetMemberAccountDetailsResult() = default;
    AWS_SECURITYIR_API BatchGetMemberAccountDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API BatchGetMemberAccountDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response element providing responses for requests to
     * GetMembershipAccountDetails.</p>
     */
    inline const Aws::Vector<GetMembershipAccountDetailItem>& GetItems() const { return m_items; }
    template<typename ItemsT = Aws::Vector<GetMembershipAccountDetailItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<GetMembershipAccountDetailItem>>
    BatchGetMemberAccountDetailsResult& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = GetMembershipAccountDetailItem>
    BatchGetMemberAccountDetailsResult& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The response element providing error messages for requests to
     * GetMembershipAccountDetails.</p>
     */
    inline const Aws::Vector<GetMembershipAccountDetailError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<GetMembershipAccountDetailError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<GetMembershipAccountDetailError>>
    BatchGetMemberAccountDetailsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = GetMembershipAccountDetailError>
    BatchGetMemberAccountDetailsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetMemberAccountDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GetMembershipAccountDetailItem> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::Vector<GetMembershipAccountDetailError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
