﻿/**
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
    AWS_VERIFIEDPERMISSIONS_API ListPolicyTemplatesResult();
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPolicyTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPolicyTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPolicyTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of the policy templates in the specified policy store.</p>
     */
    inline const Aws::Vector<PolicyTemplateItem>& GetPolicyTemplates() const{ return m_policyTemplates; }
    inline void SetPolicyTemplates(const Aws::Vector<PolicyTemplateItem>& value) { m_policyTemplates = value; }
    inline void SetPolicyTemplates(Aws::Vector<PolicyTemplateItem>&& value) { m_policyTemplates = std::move(value); }
    inline ListPolicyTemplatesResult& WithPolicyTemplates(const Aws::Vector<PolicyTemplateItem>& value) { SetPolicyTemplates(value); return *this;}
    inline ListPolicyTemplatesResult& WithPolicyTemplates(Aws::Vector<PolicyTemplateItem>&& value) { SetPolicyTemplates(std::move(value)); return *this;}
    inline ListPolicyTemplatesResult& AddPolicyTemplates(const PolicyTemplateItem& value) { m_policyTemplates.push_back(value); return *this; }
    inline ListPolicyTemplatesResult& AddPolicyTemplates(PolicyTemplateItem&& value) { m_policyTemplates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPolicyTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPolicyTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPolicyTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<PolicyTemplateItem> m_policyTemplates;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
