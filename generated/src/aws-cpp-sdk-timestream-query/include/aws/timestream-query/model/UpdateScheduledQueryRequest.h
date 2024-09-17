/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-query/model/ScheduledQueryState.h>
#include <utility>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

  /**
   */
  class UpdateScheduledQueryRequest : public TimestreamQueryRequest
  {
  public:
    AWS_TIMESTREAMQUERY_API UpdateScheduledQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScheduledQuery"; }

    AWS_TIMESTREAMQUERY_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMQUERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ARN of the scheuled query.</p>
     */
    inline const Aws::String& GetScheduledQueryArn() const{ return m_scheduledQueryArn; }
    inline bool ScheduledQueryArnHasBeenSet() const { return m_scheduledQueryArnHasBeenSet; }
    inline void SetScheduledQueryArn(const Aws::String& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = value; }
    inline void SetScheduledQueryArn(Aws::String&& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = std::move(value); }
    inline void SetScheduledQueryArn(const char* value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn.assign(value); }
    inline UpdateScheduledQueryRequest& WithScheduledQueryArn(const Aws::String& value) { SetScheduledQueryArn(value); return *this;}
    inline UpdateScheduledQueryRequest& WithScheduledQueryArn(Aws::String&& value) { SetScheduledQueryArn(std::move(value)); return *this;}
    inline UpdateScheduledQueryRequest& WithScheduledQueryArn(const char* value) { SetScheduledQueryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the scheduled query. </p>
     */
    inline const ScheduledQueryState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ScheduledQueryState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ScheduledQueryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline UpdateScheduledQueryRequest& WithState(const ScheduledQueryState& value) { SetState(value); return *this;}
    inline UpdateScheduledQueryRequest& WithState(ScheduledQueryState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduledQueryArn;
    bool m_scheduledQueryArnHasBeenSet = false;

    ScheduledQueryState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
