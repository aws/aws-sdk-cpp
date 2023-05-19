/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/ChannelGroupListConfiguration.h>
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
namespace mediapackagev2
{
namespace Model
{
  class ListChannelGroupsResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API ListChannelGroupsResult();
    AWS_MEDIAPACKAGEV2_API ListChannelGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API ListChannelGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The objects being returned.</p>
     */
    inline const Aws::Vector<ChannelGroupListConfiguration>& GetItems() const{ return m_items; }

    /**
     * <p>The objects being returned.</p>
     */
    inline void SetItems(const Aws::Vector<ChannelGroupListConfiguration>& value) { m_items = value; }

    /**
     * <p>The objects being returned.</p>
     */
    inline void SetItems(Aws::Vector<ChannelGroupListConfiguration>&& value) { m_items = std::move(value); }

    /**
     * <p>The objects being returned.</p>
     */
    inline ListChannelGroupsResult& WithItems(const Aws::Vector<ChannelGroupListConfiguration>& value) { SetItems(value); return *this;}

    /**
     * <p>The objects being returned.</p>
     */
    inline ListChannelGroupsResult& WithItems(Aws::Vector<ChannelGroupListConfiguration>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The objects being returned.</p>
     */
    inline ListChannelGroupsResult& AddItems(const ChannelGroupListConfiguration& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The objects being returned.</p>
     */
    inline ListChannelGroupsResult& AddItems(ChannelGroupListConfiguration&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token from the GET list request. Use the token to fetch the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the GET list request. Use the token to fetch the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the GET list request. Use the token to fetch the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the GET list request. Use the token to fetch the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the GET list request. Use the token to fetch the
     * next page of results.</p>
     */
    inline ListChannelGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the GET list request. Use the token to fetch the
     * next page of results.</p>
     */
    inline ListChannelGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the GET list request. Use the token to fetch the
     * next page of results.</p>
     */
    inline ListChannelGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListChannelGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListChannelGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListChannelGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ChannelGroupListConfiguration> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
