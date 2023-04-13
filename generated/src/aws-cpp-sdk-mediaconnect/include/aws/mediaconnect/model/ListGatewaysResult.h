/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/ListedGateway.h>
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
  class ListGatewaysResult
  {
  public:
    AWS_MEDIACONNECT_API ListGatewaysResult();
    AWS_MEDIACONNECT_API ListGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of gateway summaries.
     */
    inline const Aws::Vector<ListedGateway>& GetGateways() const{ return m_gateways; }

    /**
     * A list of gateway summaries.
     */
    inline void SetGateways(const Aws::Vector<ListedGateway>& value) { m_gateways = value; }

    /**
     * A list of gateway summaries.
     */
    inline void SetGateways(Aws::Vector<ListedGateway>&& value) { m_gateways = std::move(value); }

    /**
     * A list of gateway summaries.
     */
    inline ListGatewaysResult& WithGateways(const Aws::Vector<ListedGateway>& value) { SetGateways(value); return *this;}

    /**
     * A list of gateway summaries.
     */
    inline ListGatewaysResult& WithGateways(Aws::Vector<ListedGateway>&& value) { SetGateways(std::move(value)); return *this;}

    /**
     * A list of gateway summaries.
     */
    inline ListGatewaysResult& AddGateways(const ListedGateway& value) { m_gateways.push_back(value); return *this; }

    /**
     * A list of gateway summaries.
     */
    inline ListGatewaysResult& AddGateways(ListedGateway&& value) { m_gateways.push_back(std::move(value)); return *this; }


    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListGateways request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListGateways request a second time and
     * specify the NextToken value.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListGateways request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListGateways request a second time and
     * specify the NextToken value.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListGateways request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListGateways request a second time and
     * specify the NextToken value.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListGateways request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListGateways request a second time and
     * specify the NextToken value.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListGateways request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListGateways request a second time and
     * specify the NextToken value.
     */
    inline ListGatewaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListGateways request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListGateways request a second time and
     * specify the NextToken value.
     */
    inline ListGatewaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListGateways request with MaxResults set at 5. The service
     * returns the first batch of results (up to 5) and a NextToken value. To see the
     * next batch of results, you can submit the ListGateways request a second time and
     * specify the NextToken value.
     */
    inline ListGatewaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListGatewaysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListGatewaysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListGatewaysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListedGateway> m_gateways;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
