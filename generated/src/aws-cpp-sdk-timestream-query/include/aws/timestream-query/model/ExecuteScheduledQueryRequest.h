/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/timestream-query/model/ScheduledQueryInsights.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

  /**
   */
  class ExecuteScheduledQueryRequest : public TimestreamQueryRequest
  {
  public:
    AWS_TIMESTREAMQUERY_API ExecuteScheduledQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteScheduledQuery"; }

    AWS_TIMESTREAMQUERY_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMQUERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ARN of the scheduled query.</p>
     */
    inline const Aws::String& GetScheduledQueryArn() const { return m_scheduledQueryArn; }
    inline bool ScheduledQueryArnHasBeenSet() const { return m_scheduledQueryArnHasBeenSet; }
    template<typename ScheduledQueryArnT = Aws::String>
    void SetScheduledQueryArn(ScheduledQueryArnT&& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = std::forward<ScheduledQueryArnT>(value); }
    template<typename ScheduledQueryArnT = Aws::String>
    ExecuteScheduledQueryRequest& WithScheduledQueryArn(ScheduledQueryArnT&& value) { SetScheduledQueryArn(std::forward<ScheduledQueryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp in UTC. Query will be run as if it was invoked at this
     * timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetInvocationTime() const { return m_invocationTime; }
    inline bool InvocationTimeHasBeenSet() const { return m_invocationTimeHasBeenSet; }
    template<typename InvocationTimeT = Aws::Utils::DateTime>
    void SetInvocationTime(InvocationTimeT&& value) { m_invocationTimeHasBeenSet = true; m_invocationTime = std::forward<InvocationTimeT>(value); }
    template<typename InvocationTimeT = Aws::Utils::DateTime>
    ExecuteScheduledQueryRequest& WithInvocationTime(InvocationTimeT&& value) { SetInvocationTime(std::forward<InvocationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not used. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ExecuteScheduledQueryRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encapsulates settings for enabling <code>QueryInsights</code>.</p>
     * <p>Enabling <code>QueryInsights</code> returns insights and metrics as a part of
     * the Amazon SNS notification for the query that you executed. You can use
     * <code>QueryInsights</code> to tune your query performance and cost.</p>
     */
    inline const ScheduledQueryInsights& GetQueryInsights() const { return m_queryInsights; }
    inline bool QueryInsightsHasBeenSet() const { return m_queryInsightsHasBeenSet; }
    template<typename QueryInsightsT = ScheduledQueryInsights>
    void SetQueryInsights(QueryInsightsT&& value) { m_queryInsightsHasBeenSet = true; m_queryInsights = std::forward<QueryInsightsT>(value); }
    template<typename QueryInsightsT = ScheduledQueryInsights>
    ExecuteScheduledQueryRequest& WithQueryInsights(QueryInsightsT&& value) { SetQueryInsights(std::forward<QueryInsightsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduledQueryArn;
    bool m_scheduledQueryArnHasBeenSet = false;

    Aws::Utils::DateTime m_invocationTime{};
    bool m_invocationTimeHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    ScheduledQueryInsights m_queryInsights;
    bool m_queryInsightsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
