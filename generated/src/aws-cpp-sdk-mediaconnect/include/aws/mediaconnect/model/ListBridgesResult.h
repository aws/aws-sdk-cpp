/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/ListedBridge.h>
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
namespace MediaConnect
{
namespace Model
{
  class ListBridgesResult
  {
  public:
    AWS_MEDIACONNECT_API ListBridgesResult();
    AWS_MEDIACONNECT_API ListBridgesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListBridgesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of bridge summaries.
     */
    inline const Aws::Vector<ListedBridge>& GetBridges() const{ return m_bridges; }

    /**
     * A list of bridge summaries.
     */
    inline void SetBridges(const Aws::Vector<ListedBridge>& value) { m_bridges = value; }

    /**
     * A list of bridge summaries.
     */
    inline void SetBridges(Aws::Vector<ListedBridge>&& value) { m_bridges = std::move(value); }

    /**
     * A list of bridge summaries.
     */
    inline ListBridgesResult& WithBridges(const Aws::Vector<ListedBridge>& value) { SetBridges(value); return *this;}

    /**
     * A list of bridge summaries.
     */
    inline ListBridgesResult& WithBridges(Aws::Vector<ListedBridge>&& value) { SetBridges(std::move(value)); return *this;}

    /**
     * A list of bridge summaries.
     */
    inline ListBridgesResult& AddBridges(const ListedBridge& value) { m_bridges.push_back(value); return *this; }

    /**
     * A list of bridge summaries.
     */
    inline ListBridgesResult& AddBridges(ListedBridge&& value) { m_bridges.push_back(std::move(value)); return *this; }


    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListBridges request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListBridges request a second time and
     * specify the NextToken value.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListBridges request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListBridges request a second time and
     * specify the NextToken value.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListBridges request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListBridges request a second time and
     * specify the NextToken value.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListBridges request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListBridges request a second time and
     * specify the NextToken value.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListBridges request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListBridges request a second time and
     * specify the NextToken value.
     */
    inline ListBridgesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListBridges request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListBridges request a second time and
     * specify the NextToken value.
     */
    inline ListBridgesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListBridges request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListBridges request a second time and
     * specify the NextToken value.
     */
    inline ListBridgesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListBridgesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListBridgesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListBridgesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListedBridge> m_bridges;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
