/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/OriginEndpointListConfiguration.h>
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
  class ListOriginEndpointsResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API ListOriginEndpointsResult();
    AWS_MEDIAPACKAGEV2_API ListOriginEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API ListOriginEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The objects being returned.</p>
     */
    inline const Aws::Vector<OriginEndpointListConfiguration>& GetItems() const{ return m_items; }

    /**
     * <p>The objects being returned.</p>
     */
    inline void SetItems(const Aws::Vector<OriginEndpointListConfiguration>& value) { m_items = value; }

    /**
     * <p>The objects being returned.</p>
     */
    inline void SetItems(Aws::Vector<OriginEndpointListConfiguration>&& value) { m_items = std::move(value); }

    /**
     * <p>The objects being returned.</p>
     */
    inline ListOriginEndpointsResult& WithItems(const Aws::Vector<OriginEndpointListConfiguration>& value) { SetItems(value); return *this;}

    /**
     * <p>The objects being returned.</p>
     */
    inline ListOriginEndpointsResult& WithItems(Aws::Vector<OriginEndpointListConfiguration>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The objects being returned.</p>
     */
    inline ListOriginEndpointsResult& AddItems(const OriginEndpointListConfiguration& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The objects being returned.</p>
     */
    inline ListOriginEndpointsResult& AddItems(OriginEndpointListConfiguration&& value) { m_items.push_back(std::move(value)); return *this; }


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
    inline ListOriginEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the GET list request. Use the token to fetch the
     * next page of results.</p>
     */
    inline ListOriginEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the GET list request. Use the token to fetch the
     * next page of results.</p>
     */
    inline ListOriginEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListOriginEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListOriginEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListOriginEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<OriginEndpointListConfiguration> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
