/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/CustomerManagedPolicyReference.h>
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
namespace SSOAdmin
{
namespace Model
{
  class ListCustomerManagedPolicyReferencesInPermissionSetResult
  {
  public:
    AWS_SSOADMIN_API ListCustomerManagedPolicyReferencesInPermissionSetResult() = default;
    AWS_SSOADMIN_API ListCustomerManagedPolicyReferencesInPermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListCustomerManagedPolicyReferencesInPermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the names and paths of the customer managed policies that you have
     * attached to your permission set.</p>
     */
    inline const Aws::Vector<CustomerManagedPolicyReference>& GetCustomerManagedPolicyReferences() const { return m_customerManagedPolicyReferences; }
    template<typename CustomerManagedPolicyReferencesT = Aws::Vector<CustomerManagedPolicyReference>>
    void SetCustomerManagedPolicyReferences(CustomerManagedPolicyReferencesT&& value) { m_customerManagedPolicyReferencesHasBeenSet = true; m_customerManagedPolicyReferences = std::forward<CustomerManagedPolicyReferencesT>(value); }
    template<typename CustomerManagedPolicyReferencesT = Aws::Vector<CustomerManagedPolicyReference>>
    ListCustomerManagedPolicyReferencesInPermissionSetResult& WithCustomerManagedPolicyReferences(CustomerManagedPolicyReferencesT&& value) { SetCustomerManagedPolicyReferences(std::forward<CustomerManagedPolicyReferencesT>(value)); return *this;}
    template<typename CustomerManagedPolicyReferencesT = CustomerManagedPolicyReference>
    ListCustomerManagedPolicyReferencesInPermissionSetResult& AddCustomerManagedPolicyReferences(CustomerManagedPolicyReferencesT&& value) { m_customerManagedPolicyReferencesHasBeenSet = true; m_customerManagedPolicyReferences.emplace_back(std::forward<CustomerManagedPolicyReferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomerManagedPolicyReferencesInPermissionSetResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomerManagedPolicyReferencesInPermissionSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomerManagedPolicyReference> m_customerManagedPolicyReferences;
    bool m_customerManagedPolicyReferencesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
