/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/PolicyTemplateItem.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class ListPolicyTemplatesResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ListPolicyTemplatesResult() = default;
    AWS_VERIFIEDPERMISSIONS_API ListPolicyTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API ListPolicyTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPolicyTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of the policy templates in the specified policy store.</p>
     */
    inline const Aws::Vector<PolicyTemplateItem>& GetPolicyTemplates() const { return m_policyTemplates; }
    template<typename PolicyTemplatesT = Aws::Vector<PolicyTemplateItem>>
    void SetPolicyTemplates(PolicyTemplatesT&& value) { m_policyTemplatesHasBeenSet = true; m_policyTemplates = std::forward<PolicyTemplatesT>(value); }
    template<typename PolicyTemplatesT = Aws::Vector<PolicyTemplateItem>>
    ListPolicyTemplatesResult& WithPolicyTemplates(PolicyTemplatesT&& value) { SetPolicyTemplates(std::forward<PolicyTemplatesT>(value)); return *this;}
    template<typename PolicyTemplatesT = PolicyTemplateItem>
    ListPolicyTemplatesResult& AddPolicyTemplates(PolicyTemplatesT&& value) { m_policyTemplatesHasBeenSet = true; m_policyTemplates.emplace_back(std::forward<PolicyTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPolicyTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PolicyTemplateItem> m_policyTemplates;
    bool m_policyTemplatesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
