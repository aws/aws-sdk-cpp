/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/ListedGatewayInstance.h>
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
  class ListGatewayInstancesResult
  {
  public:
    AWS_MEDIACONNECT_API ListGatewayInstancesResult();
    AWS_MEDIACONNECT_API ListGatewayInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API ListGatewayInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of instance summaries.
     */
    inline const Aws::Vector<ListedGatewayInstance>& GetInstances() const{ return m_instances; }

    /**
     * A list of instance summaries.
     */
    inline void SetInstances(const Aws::Vector<ListedGatewayInstance>& value) { m_instances = value; }

    /**
     * A list of instance summaries.
     */
    inline void SetInstances(Aws::Vector<ListedGatewayInstance>&& value) { m_instances = std::move(value); }

    /**
     * A list of instance summaries.
     */
    inline ListGatewayInstancesResult& WithInstances(const Aws::Vector<ListedGatewayInstance>& value) { SetInstances(value); return *this;}

    /**
     * A list of instance summaries.
     */
    inline ListGatewayInstancesResult& WithInstances(Aws::Vector<ListedGatewayInstance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * A list of instance summaries.
     */
    inline ListGatewayInstancesResult& AddInstances(const ListedGatewayInstance& value) { m_instances.push_back(value); return *this; }

    /**
     * A list of instance summaries.
     */
    inline ListGatewayInstancesResult& AddInstances(ListedGatewayInstance&& value) { m_instances.push_back(std::move(value)); return *this; }


    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListInstances request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListInstances request a second
     * time and specify the NextToken value.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListInstances request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListInstances request a second
     * time and specify the NextToken value.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListInstances request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListInstances request a second
     * time and specify the NextToken value.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListInstances request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListInstances request a second
     * time and specify the NextToken value.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListInstances request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListInstances request a second
     * time and specify the NextToken value.
     */
    inline ListGatewayInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListInstances request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListInstances request a second
     * time and specify the NextToken value.
     */
    inline ListGatewayInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListInstances request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListInstances request a second
     * time and specify the NextToken value.
     */
    inline ListGatewayInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListGatewayInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListGatewayInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListGatewayInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListedGatewayInstance> m_instances;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
