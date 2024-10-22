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
    AWS_TIMESTREAMQUERY_API ExecuteScheduledQueryRequest();

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
    inline const Aws::String& GetScheduledQueryArn() const{ return m_scheduledQueryArn; }
    inline bool ScheduledQueryArnHasBeenSet() const { return m_scheduledQueryArnHasBeenSet; }
    inline void SetScheduledQueryArn(const Aws::String& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = value; }
    inline void SetScheduledQueryArn(Aws::String&& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = std::move(value); }
    inline void SetScheduledQueryArn(const char* value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn.assign(value); }
    inline ExecuteScheduledQueryRequest& WithScheduledQueryArn(const Aws::String& value) { SetScheduledQueryArn(value); return *this;}
    inline ExecuteScheduledQueryRequest& WithScheduledQueryArn(Aws::String&& value) { SetScheduledQueryArn(std::move(value)); return *this;}
    inline ExecuteScheduledQueryRequest& WithScheduledQueryArn(const char* value) { SetScheduledQueryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp in UTC. Query will be run as if it was invoked at this
     * timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetInvocationTime() const{ return m_invocationTime; }
    inline bool InvocationTimeHasBeenSet() const { return m_invocationTimeHasBeenSet; }
    inline void SetInvocationTime(const Aws::Utils::DateTime& value) { m_invocationTimeHasBeenSet = true; m_invocationTime = value; }
    inline void SetInvocationTime(Aws::Utils::DateTime&& value) { m_invocationTimeHasBeenSet = true; m_invocationTime = std::move(value); }
    inline ExecuteScheduledQueryRequest& WithInvocationTime(const Aws::Utils::DateTime& value) { SetInvocationTime(value); return *this;}
    inline ExecuteScheduledQueryRequest& WithInvocationTime(Aws::Utils::DateTime&& value) { SetInvocationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not used. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ExecuteScheduledQueryRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ExecuteScheduledQueryRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ExecuteScheduledQueryRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encapsulates settings for enabling <code>QueryInsights</code>.</p>
     * <p>Enabling <code>QueryInsights</code> returns insights and metrics as a part of
     * the Amazon SNS notification for the query that you executed. You can use
     * <code>QueryInsights</code> to tune your query performance and cost.</p>
     */
    inline const ScheduledQueryInsights& GetQueryInsights() const{ return m_queryInsights; }
    inline bool QueryInsightsHasBeenSet() const { return m_queryInsightsHasBeenSet; }
    inline void SetQueryInsights(const ScheduledQueryInsights& value) { m_queryInsightsHasBeenSet = true; m_queryInsights = value; }
    inline void SetQueryInsights(ScheduledQueryInsights&& value) { m_queryInsightsHasBeenSet = true; m_queryInsights = std::move(value); }
    inline ExecuteScheduledQueryRequest& WithQueryInsights(const ScheduledQueryInsights& value) { SetQueryInsights(value); return *this;}
    inline ExecuteScheduledQueryRequest& WithQueryInsights(ScheduledQueryInsights&& value) { SetQueryInsights(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduledQueryArn;
    bool m_scheduledQueryArnHasBeenSet = false;

    Aws::Utils::DateTime m_invocationTime;
    bool m_invocationTimeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ScheduledQueryInsights m_queryInsights;
    bool m_queryInsightsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
