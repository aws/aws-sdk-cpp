﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/oam/model/ListAttachedLinksItem.h>
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
namespace OAM
{
namespace Model
{
  class ListAttachedLinksResult
  {
  public:
    AWS_OAM_API ListAttachedLinksResult();
    AWS_OAM_API ListAttachedLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OAM_API ListAttachedLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that contain the information about the attached
     * links.</p>
     */
    inline const Aws::Vector<ListAttachedLinksItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ListAttachedLinksItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ListAttachedLinksItem>&& value) { m_items = std::move(value); }
    inline ListAttachedLinksResult& WithItems(const Aws::Vector<ListAttachedLinksItem>& value) { SetItems(value); return *this;}
    inline ListAttachedLinksResult& WithItems(Aws::Vector<ListAttachedLinksItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListAttachedLinksResult& AddItems(const ListAttachedLinksItem& value) { m_items.push_back(value); return *this; }
    inline ListAttachedLinksResult& AddItems(ListAttachedLinksItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of links.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAttachedLinksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAttachedLinksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAttachedLinksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAttachedLinksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAttachedLinksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAttachedLinksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ListAttachedLinksItem> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
