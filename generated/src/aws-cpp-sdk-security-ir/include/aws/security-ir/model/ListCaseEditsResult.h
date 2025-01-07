/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/security-ir/model/CaseEditItem.h>
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
  class ListCaseEditsResult
  {
  public:
    AWS_SECURITYIR_API ListCaseEditsResult();
    AWS_SECURITYIR_API ListCaseEditsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API ListCaseEditsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Optional element.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCaseEditsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCaseEditsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCaseEditsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for ListCaseEdits that includes the action, eventtimestamp,
     * message, and principal for the response. </p>
     */
    inline const Aws::Vector<CaseEditItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<CaseEditItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<CaseEditItem>&& value) { m_items = std::move(value); }
    inline ListCaseEditsResult& WithItems(const Aws::Vector<CaseEditItem>& value) { SetItems(value); return *this;}
    inline ListCaseEditsResult& WithItems(Aws::Vector<CaseEditItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListCaseEditsResult& AddItems(const CaseEditItem& value) { m_items.push_back(value); return *this; }
    inline ListCaseEditsResult& AddItems(CaseEditItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for ListCaseEdits that identifies the total number of
     * edits.</p>
     */
    inline int GetTotal() const{ return m_total; }
    inline void SetTotal(int value) { m_total = value; }
    inline ListCaseEditsResult& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCaseEditsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCaseEditsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCaseEditsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CaseEditItem> m_items;

    int m_total;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
