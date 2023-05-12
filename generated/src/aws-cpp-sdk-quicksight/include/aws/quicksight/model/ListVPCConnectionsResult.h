/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VPCConnectionSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class ListVPCConnectionsResult
  {
  public:
    AWS_QUICKSIGHT_API ListVPCConnectionsResult();
    AWS_QUICKSIGHT_API ListVPCConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListVPCConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>VPCConnectionSummaries</code> object that returns a summary of VPC
     * connection objects.</p>
     */
    inline const Aws::Vector<VPCConnectionSummary>& GetVPCConnectionSummaries() const{ return m_vPCConnectionSummaries; }

    /**
     * <p>A <code>VPCConnectionSummaries</code> object that returns a summary of VPC
     * connection objects.</p>
     */
    inline void SetVPCConnectionSummaries(const Aws::Vector<VPCConnectionSummary>& value) { m_vPCConnectionSummaries = value; }

    /**
     * <p>A <code>VPCConnectionSummaries</code> object that returns a summary of VPC
     * connection objects.</p>
     */
    inline void SetVPCConnectionSummaries(Aws::Vector<VPCConnectionSummary>&& value) { m_vPCConnectionSummaries = std::move(value); }

    /**
     * <p>A <code>VPCConnectionSummaries</code> object that returns a summary of VPC
     * connection objects.</p>
     */
    inline ListVPCConnectionsResult& WithVPCConnectionSummaries(const Aws::Vector<VPCConnectionSummary>& value) { SetVPCConnectionSummaries(value); return *this;}

    /**
     * <p>A <code>VPCConnectionSummaries</code> object that returns a summary of VPC
     * connection objects.</p>
     */
    inline ListVPCConnectionsResult& WithVPCConnectionSummaries(Aws::Vector<VPCConnectionSummary>&& value) { SetVPCConnectionSummaries(std::move(value)); return *this;}

    /**
     * <p>A <code>VPCConnectionSummaries</code> object that returns a summary of VPC
     * connection objects.</p>
     */
    inline ListVPCConnectionsResult& AddVPCConnectionSummaries(const VPCConnectionSummary& value) { m_vPCConnectionSummaries.push_back(value); return *this; }

    /**
     * <p>A <code>VPCConnectionSummaries</code> object that returns a summary of VPC
     * connection objects.</p>
     */
    inline ListVPCConnectionsResult& AddVPCConnectionSummaries(VPCConnectionSummary&& value) { m_vPCConnectionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListVPCConnectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListVPCConnectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListVPCConnectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListVPCConnectionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListVPCConnectionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListVPCConnectionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListVPCConnectionsResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::Vector<VPCConnectionSummary> m_vPCConnectionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
