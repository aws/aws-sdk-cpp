/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ListSolNetworkInstanceInfo.h>
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
namespace tnb
{
namespace Model
{
  class ListSolNetworkInstancesResult
  {
  public:
    AWS_TNB_API ListSolNetworkInstancesResult();
    AWS_TNB_API ListSolNetworkInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ListSolNetworkInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists network instances.</p>
     */
    inline const Aws::Vector<ListSolNetworkInstanceInfo>& GetNetworkInstances() const{ return m_networkInstances; }

    /**
     * <p>Lists network instances.</p>
     */
    inline void SetNetworkInstances(const Aws::Vector<ListSolNetworkInstanceInfo>& value) { m_networkInstances = value; }

    /**
     * <p>Lists network instances.</p>
     */
    inline void SetNetworkInstances(Aws::Vector<ListSolNetworkInstanceInfo>&& value) { m_networkInstances = std::move(value); }

    /**
     * <p>Lists network instances.</p>
     */
    inline ListSolNetworkInstancesResult& WithNetworkInstances(const Aws::Vector<ListSolNetworkInstanceInfo>& value) { SetNetworkInstances(value); return *this;}

    /**
     * <p>Lists network instances.</p>
     */
    inline ListSolNetworkInstancesResult& WithNetworkInstances(Aws::Vector<ListSolNetworkInstanceInfo>&& value) { SetNetworkInstances(std::move(value)); return *this;}

    /**
     * <p>Lists network instances.</p>
     */
    inline ListSolNetworkInstancesResult& AddNetworkInstances(const ListSolNetworkInstanceInfo& value) { m_networkInstances.push_back(value); return *this; }

    /**
     * <p>Lists network instances.</p>
     */
    inline ListSolNetworkInstancesResult& AddNetworkInstances(ListSolNetworkInstanceInfo&& value) { m_networkInstances.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolNetworkInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolNetworkInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSolNetworkInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSolNetworkInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSolNetworkInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSolNetworkInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListSolNetworkInstanceInfo> m_networkInstances;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
