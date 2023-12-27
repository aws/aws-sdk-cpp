/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/RelatedItem.h>
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
namespace SSMIncidents
{
namespace Model
{
  class ListRelatedItemsResult
  {
  public:
    AWS_SSMINCIDENTS_API ListRelatedItemsResult();
    AWS_SSMINCIDENTS_API ListRelatedItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListRelatedItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline ListRelatedItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline ListRelatedItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline ListRelatedItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Details about each related item.</p>
     */
    inline const Aws::Vector<RelatedItem>& GetRelatedItems() const{ return m_relatedItems; }

    /**
     * <p>Details about each related item.</p>
     */
    inline void SetRelatedItems(const Aws::Vector<RelatedItem>& value) { m_relatedItems = value; }

    /**
     * <p>Details about each related item.</p>
     */
    inline void SetRelatedItems(Aws::Vector<RelatedItem>&& value) { m_relatedItems = std::move(value); }

    /**
     * <p>Details about each related item.</p>
     */
    inline ListRelatedItemsResult& WithRelatedItems(const Aws::Vector<RelatedItem>& value) { SetRelatedItems(value); return *this;}

    /**
     * <p>Details about each related item.</p>
     */
    inline ListRelatedItemsResult& WithRelatedItems(Aws::Vector<RelatedItem>&& value) { SetRelatedItems(std::move(value)); return *this;}

    /**
     * <p>Details about each related item.</p>
     */
    inline ListRelatedItemsResult& AddRelatedItems(const RelatedItem& value) { m_relatedItems.push_back(value); return *this; }

    /**
     * <p>Details about each related item.</p>
     */
    inline ListRelatedItemsResult& AddRelatedItems(RelatedItem&& value) { m_relatedItems.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRelatedItemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRelatedItemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRelatedItemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<RelatedItem> m_relatedItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
