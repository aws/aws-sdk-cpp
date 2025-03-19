/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/AttachedManagedPolicy.h>
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
  class ListManagedPoliciesInPermissionSetResult
  {
  public:
    AWS_SSOADMIN_API ListManagedPoliciesInPermissionSetResult() = default;
    AWS_SSOADMIN_API ListManagedPoliciesInPermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListManagedPoliciesInPermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of the <a>AttachedManagedPolicy</a> data type object.</p>
     */
    inline const Aws::Vector<AttachedManagedPolicy>& GetAttachedManagedPolicies() const { return m_attachedManagedPolicies; }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AttachedManagedPolicy>>
    void SetAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies = std::forward<AttachedManagedPoliciesT>(value); }
    template<typename AttachedManagedPoliciesT = Aws::Vector<AttachedManagedPolicy>>
    ListManagedPoliciesInPermissionSetResult& WithAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { SetAttachedManagedPolicies(std::forward<AttachedManagedPoliciesT>(value)); return *this;}
    template<typename AttachedManagedPoliciesT = AttachedManagedPolicy>
    ListManagedPoliciesInPermissionSetResult& AddAttachedManagedPolicies(AttachedManagedPoliciesT&& value) { m_attachedManagedPoliciesHasBeenSet = true; m_attachedManagedPolicies.emplace_back(std::forward<AttachedManagedPoliciesT>(value)); return *this; }
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
    ListManagedPoliciesInPermissionSetResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListManagedPoliciesInPermissionSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttachedManagedPolicy> m_attachedManagedPolicies;
    bool m_attachedManagedPoliciesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
