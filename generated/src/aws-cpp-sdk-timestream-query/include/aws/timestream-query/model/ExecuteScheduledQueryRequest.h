/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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


    /**
     * <p>ARN of the scheduled query.</p>
     */
    inline const Aws::String& GetScheduledQueryArn() const{ return m_scheduledQueryArn; }

    /**
     * <p>ARN of the scheduled query.</p>
     */
    inline bool ScheduledQueryArnHasBeenSet() const { return m_scheduledQueryArnHasBeenSet; }

    /**
     * <p>ARN of the scheduled query.</p>
     */
    inline void SetScheduledQueryArn(const Aws::String& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = value; }

    /**
     * <p>ARN of the scheduled query.</p>
     */
    inline void SetScheduledQueryArn(Aws::String&& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = std::move(value); }

    /**
     * <p>ARN of the scheduled query.</p>
     */
    inline void SetScheduledQueryArn(const char* value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn.assign(value); }

    /**
     * <p>ARN of the scheduled query.</p>
     */
    inline ExecuteScheduledQueryRequest& WithScheduledQueryArn(const Aws::String& value) { SetScheduledQueryArn(value); return *this;}

    /**
     * <p>ARN of the scheduled query.</p>
     */
    inline ExecuteScheduledQueryRequest& WithScheduledQueryArn(Aws::String&& value) { SetScheduledQueryArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the scheduled query.</p>
     */
    inline ExecuteScheduledQueryRequest& WithScheduledQueryArn(const char* value) { SetScheduledQueryArn(value); return *this;}


    /**
     * <p>The timestamp in UTC. Query will be run as if it was invoked at this
     * timestamp. </p>
     */
    inline const Aws::Utils::DateTime& GetInvocationTime() const{ return m_invocationTime; }

    /**
     * <p>The timestamp in UTC. Query will be run as if it was invoked at this
     * timestamp. </p>
     */
    inline bool InvocationTimeHasBeenSet() const { return m_invocationTimeHasBeenSet; }

    /**
     * <p>The timestamp in UTC. Query will be run as if it was invoked at this
     * timestamp. </p>
     */
    inline void SetInvocationTime(const Aws::Utils::DateTime& value) { m_invocationTimeHasBeenSet = true; m_invocationTime = value; }

    /**
     * <p>The timestamp in UTC. Query will be run as if it was invoked at this
     * timestamp. </p>
     */
    inline void SetInvocationTime(Aws::Utils::DateTime&& value) { m_invocationTimeHasBeenSet = true; m_invocationTime = std::move(value); }

    /**
     * <p>The timestamp in UTC. Query will be run as if it was invoked at this
     * timestamp. </p>
     */
    inline ExecuteScheduledQueryRequest& WithInvocationTime(const Aws::Utils::DateTime& value) { SetInvocationTime(value); return *this;}

    /**
     * <p>The timestamp in UTC. Query will be run as if it was invoked at this
     * timestamp. </p>
     */
    inline ExecuteScheduledQueryRequest& WithInvocationTime(Aws::Utils::DateTime&& value) { SetInvocationTime(std::move(value)); return *this;}


    /**
     * <p>Not used. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Not used. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Not used. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Not used. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Not used. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Not used. </p>
     */
    inline ExecuteScheduledQueryRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Not used. </p>
     */
    inline ExecuteScheduledQueryRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Not used. </p>
     */
    inline ExecuteScheduledQueryRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_scheduledQueryArn;
    bool m_scheduledQueryArnHasBeenSet = false;

    Aws::Utils::DateTime m_invocationTime;
    bool m_invocationTimeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
