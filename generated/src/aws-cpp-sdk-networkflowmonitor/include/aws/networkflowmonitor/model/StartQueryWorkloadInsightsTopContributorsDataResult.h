/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{
  class StartQueryWorkloadInsightsTopContributorsDataResult
  {
  public:
    AWS_NETWORKFLOWMONITOR_API StartQueryWorkloadInsightsTopContributorsDataResult();
    AWS_NETWORKFLOWMONITOR_API StartQueryWorkloadInsightsTopContributorsDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API StartQueryWorkloadInsightsTopContributorsDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the query. A query ID is an internally-generated
     * identifier for a specific query returned from an API call to start a query.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }
    inline void SetQueryId(const Aws::String& value) { m_queryId = value; }
    inline void SetQueryId(Aws::String&& value) { m_queryId = std::move(value); }
    inline void SetQueryId(const char* value) { m_queryId.assign(value); }
    inline StartQueryWorkloadInsightsTopContributorsDataResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}
    inline StartQueryWorkloadInsightsTopContributorsDataResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}
    inline StartQueryWorkloadInsightsTopContributorsDataResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartQueryWorkloadInsightsTopContributorsDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartQueryWorkloadInsightsTopContributorsDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartQueryWorkloadInsightsTopContributorsDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_queryId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
