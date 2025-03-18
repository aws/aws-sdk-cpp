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
    AWS_TIMESTREAMQUERY_API UpdateScheduledQueryRequest() = default;

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
    inline const Aws::String& GetScheduledQueryArn() const { return m_scheduledQueryArn; }
    inline bool ScheduledQueryArnHasBeenSet() const { return m_scheduledQueryArnHasBeenSet; }
    template<typename ScheduledQueryArnT = Aws::String>
    void SetScheduledQueryArn(ScheduledQueryArnT&& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = std::forward<ScheduledQueryArnT>(value); }
    template<typename ScheduledQueryArnT = Aws::String>
    UpdateScheduledQueryRequest& WithScheduledQueryArn(ScheduledQueryArnT&& value) { SetScheduledQueryArn(std::forward<ScheduledQueryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the scheduled query. </p>
     */
    inline ScheduledQueryState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ScheduledQueryState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateScheduledQueryRequest& WithState(ScheduledQueryState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_scheduledQueryArn;
    bool m_scheduledQueryArnHasBeenSet = false;

    ScheduledQueryState m_state{ScheduledQueryState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
