/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   */
  class StopQueryWorkloadInsightsTopContributorsRequest : public NetworkFlowMonitorRequest
  {
  public:
    AWS_NETWORKFLOWMONITOR_API StopQueryWorkloadInsightsTopContributorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopQueryWorkloadInsightsTopContributors"; }

    AWS_NETWORKFLOWMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the scope that includes the resources you want to get data
     * results for. A scope ID is an internally-generated identifier that includes all
     * the resources for a specific root account.</p>
     */
    inline const Aws::String& GetScopeId() const{ return m_scopeId; }
    inline bool ScopeIdHasBeenSet() const { return m_scopeIdHasBeenSet; }
    inline void SetScopeId(const Aws::String& value) { m_scopeIdHasBeenSet = true; m_scopeId = value; }
    inline void SetScopeId(Aws::String&& value) { m_scopeIdHasBeenSet = true; m_scopeId = std::move(value); }
    inline void SetScopeId(const char* value) { m_scopeIdHasBeenSet = true; m_scopeId.assign(value); }
    inline StopQueryWorkloadInsightsTopContributorsRequest& WithScopeId(const Aws::String& value) { SetScopeId(value); return *this;}
    inline StopQueryWorkloadInsightsTopContributorsRequest& WithScopeId(Aws::String&& value) { SetScopeId(std::move(value)); return *this;}
    inline StopQueryWorkloadInsightsTopContributorsRequest& WithScopeId(const char* value) { SetScopeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the query. A query ID is an internally-generated
     * identifier for a specific query returned from an API call to start a query.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }
    inline StopQueryWorkloadInsightsTopContributorsRequest& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}
    inline StopQueryWorkloadInsightsTopContributorsRequest& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}
    inline StopQueryWorkloadInsightsTopContributorsRequest& WithQueryId(const char* value) { SetQueryId(value); return *this;}
    ///@}
  private:

    Aws::String m_scopeId;
    bool m_scopeIdHasBeenSet = false;

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
