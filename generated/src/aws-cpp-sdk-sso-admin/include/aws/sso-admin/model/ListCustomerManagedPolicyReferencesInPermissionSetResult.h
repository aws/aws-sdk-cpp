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
    AWS_SSOADMIN_API ListCustomerManagedPolicyReferencesInPermissionSetResult();
    AWS_SSOADMIN_API ListCustomerManagedPolicyReferencesInPermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListCustomerManagedPolicyReferencesInPermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the names and paths of the customer managed policies that you have
     * attached to your permission set.</p>
     */
    inline const Aws::Vector<CustomerManagedPolicyReference>& GetCustomerManagedPolicyReferences() const{ return m_customerManagedPolicyReferences; }

    /**
     * <p>Specifies the names and paths of the customer managed policies that you have
     * attached to your permission set.</p>
     */
    inline void SetCustomerManagedPolicyReferences(const Aws::Vector<CustomerManagedPolicyReference>& value) { m_customerManagedPolicyReferences = value; }

    /**
     * <p>Specifies the names and paths of the customer managed policies that you have
     * attached to your permission set.</p>
     */
    inline void SetCustomerManagedPolicyReferences(Aws::Vector<CustomerManagedPolicyReference>&& value) { m_customerManagedPolicyReferences = std::move(value); }

    /**
     * <p>Specifies the names and paths of the customer managed policies that you have
     * attached to your permission set.</p>
     */
    inline ListCustomerManagedPolicyReferencesInPermissionSetResult& WithCustomerManagedPolicyReferences(const Aws::Vector<CustomerManagedPolicyReference>& value) { SetCustomerManagedPolicyReferences(value); return *this;}

    /**
     * <p>Specifies the names and paths of the customer managed policies that you have
     * attached to your permission set.</p>
     */
    inline ListCustomerManagedPolicyReferencesInPermissionSetResult& WithCustomerManagedPolicyReferences(Aws::Vector<CustomerManagedPolicyReference>&& value) { SetCustomerManagedPolicyReferences(std::move(value)); return *this;}

    /**
     * <p>Specifies the names and paths of the customer managed policies that you have
     * attached to your permission set.</p>
     */
    inline ListCustomerManagedPolicyReferencesInPermissionSetResult& AddCustomerManagedPolicyReferences(const CustomerManagedPolicyReference& value) { m_customerManagedPolicyReferences.push_back(value); return *this; }

    /**
     * <p>Specifies the names and paths of the customer managed policies that you have
     * attached to your permission set.</p>
     */
    inline ListCustomerManagedPolicyReferencesInPermissionSetResult& AddCustomerManagedPolicyReferences(CustomerManagedPolicyReference&& value) { m_customerManagedPolicyReferences.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListCustomerManagedPolicyReferencesInPermissionSetResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListCustomerManagedPolicyReferencesInPermissionSetResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListCustomerManagedPolicyReferencesInPermissionSetResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CustomerManagedPolicyReference> m_customerManagedPolicyReferences;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
