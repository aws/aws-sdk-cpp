/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

  /**
   */
  class DescribeScheduledQueryRequest : public TimestreamQueryRequest
  {
  public:
    AWS_TIMESTREAMQUERY_API DescribeScheduledQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScheduledQuery"; }

    AWS_TIMESTREAMQUERY_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMQUERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the scheduled query.</p>
     */
    inline const Aws::String& GetScheduledQueryArn() const { return m_scheduledQueryArn; }
    inline bool ScheduledQueryArnHasBeenSet() const { return m_scheduledQueryArnHasBeenSet; }
    template<typename ScheduledQueryArnT = Aws::String>
    void SetScheduledQueryArn(ScheduledQueryArnT&& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = std::forward<ScheduledQueryArnT>(value); }
    template<typename ScheduledQueryArnT = Aws::String>
    DescribeScheduledQueryRequest& WithScheduledQueryArn(ScheduledQueryArnT&& value) { SetScheduledQueryArn(std::forward<ScheduledQueryArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduledQueryArn;
    bool m_scheduledQueryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
