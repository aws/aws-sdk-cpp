/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/security-ir/model/ListCommentsItem.h>
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
  class ListCommentsResult
  {
  public:
    AWS_SECURITYIR_API ListCommentsResult();
    AWS_SECURITYIR_API ListCommentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API ListCommentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Optional request elements.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCommentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCommentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCommentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response element for ListComments providing the body, commentID, createDate,
     * creator, lastUpdatedBy and lastUpdatedDate for each response. </p>
     */
    inline const Aws::Vector<ListCommentsItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ListCommentsItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ListCommentsItem>&& value) { m_items = std::move(value); }
    inline ListCommentsResult& WithItems(const Aws::Vector<ListCommentsItem>& value) { SetItems(value); return *this;}
    inline ListCommentsResult& WithItems(Aws::Vector<ListCommentsItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListCommentsResult& AddItems(const ListCommentsItem& value) { m_items.push_back(value); return *this; }
    inline ListCommentsResult& AddItems(ListCommentsItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response element for ListComments identifying the number of responses.</p>
     */
    inline int GetTotal() const{ return m_total; }
    inline void SetTotal(int value) { m_total = value; }
    inline ListCommentsResult& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCommentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCommentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCommentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ListCommentsItem> m_items;

    int m_total;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
