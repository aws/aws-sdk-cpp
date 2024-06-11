/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/GetResourcePoliciesResponseEntry.h>
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
namespace SSM
{
namespace Model
{
  class GetResourcePoliciesResult
  {
  public:
    AWS_SSM_API GetResourcePoliciesResult();
    AWS_SSM_API GetResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetResourcePoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetResourcePoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetResourcePoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of the <code>Policy</code> object.</p>
     */
    inline const Aws::Vector<GetResourcePoliciesResponseEntry>& GetPolicies() const{ return m_policies; }
    inline void SetPolicies(const Aws::Vector<GetResourcePoliciesResponseEntry>& value) { m_policies = value; }
    inline void SetPolicies(Aws::Vector<GetResourcePoliciesResponseEntry>&& value) { m_policies = std::move(value); }
    inline GetResourcePoliciesResult& WithPolicies(const Aws::Vector<GetResourcePoliciesResponseEntry>& value) { SetPolicies(value); return *this;}
    inline GetResourcePoliciesResult& WithPolicies(Aws::Vector<GetResourcePoliciesResponseEntry>&& value) { SetPolicies(std::move(value)); return *this;}
    inline GetResourcePoliciesResult& AddPolicies(const GetResourcePoliciesResponseEntry& value) { m_policies.push_back(value); return *this; }
    inline GetResourcePoliciesResult& AddPolicies(GetResourcePoliciesResponseEntry&& value) { m_policies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourcePoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourcePoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourcePoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<GetResourcePoliciesResponseEntry> m_policies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
