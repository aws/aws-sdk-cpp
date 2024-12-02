/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/security-ir/model/ListMembershipItem.h>
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
  class ListMembershipsResult
  {
  public:
    AWS_SECURITYIR_API ListMembershipsResult();
    AWS_SECURITYIR_API ListMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API ListMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Optional element.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMembershipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMembershipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMembershipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Request element for ListMemberships including the accountID, membershipARN,
     * membershipID, membershipStatus, and region for each response. </p>
     */
    inline const Aws::Vector<ListMembershipItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ListMembershipItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ListMembershipItem>&& value) { m_items = std::move(value); }
    inline ListMembershipsResult& WithItems(const Aws::Vector<ListMembershipItem>& value) { SetItems(value); return *this;}
    inline ListMembershipsResult& WithItems(Aws::Vector<ListMembershipItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListMembershipsResult& AddItems(const ListMembershipItem& value) { m_items.push_back(value); return *this; }
    inline ListMembershipsResult& AddItems(ListMembershipItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMembershipsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMembershipsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMembershipsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ListMembershipItem> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
