/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/security-ir/model/ListCasesItem.h>
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
  class ListCasesResult
  {
  public:
    AWS_SECURITYIR_API ListCasesResult();
    AWS_SECURITYIR_API ListCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API ListCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Optional element.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for ListCases that includes caseARN, caseID, caseStatus,
     * closedDate, createdDate, engagementType, lastUpdatedDate, pendingAction,
     * resolverType, and title for each response. </p>
     */
    inline const Aws::Vector<ListCasesItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ListCasesItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ListCasesItem>&& value) { m_items = std::move(value); }
    inline ListCasesResult& WithItems(const Aws::Vector<ListCasesItem>& value) { SetItems(value); return *this;}
    inline ListCasesResult& WithItems(Aws::Vector<ListCasesItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListCasesResult& AddItems(const ListCasesItem& value) { m_items.push_back(value); return *this; }
    inline ListCasesResult& AddItems(ListCasesItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for ListCases providing the total number of responses.</p>
     */
    inline long long GetTotal() const{ return m_total; }
    inline void SetTotal(long long value) { m_total = value; }
    inline ListCasesResult& WithTotal(long long value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ListCasesItem> m_items;

    long long m_total;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
