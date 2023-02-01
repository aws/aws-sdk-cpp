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
  class DeleteScheduledQueryRequest : public TimestreamQueryRequest
  {
  public:
    AWS_TIMESTREAMQUERY_API DeleteScheduledQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteScheduledQuery"; }

    AWS_TIMESTREAMQUERY_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMQUERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the scheduled query. </p>
     */
    inline const Aws::String& GetScheduledQueryArn() const{ return m_scheduledQueryArn; }

    /**
     * <p>The ARN of the scheduled query. </p>
     */
    inline bool ScheduledQueryArnHasBeenSet() const { return m_scheduledQueryArnHasBeenSet; }

    /**
     * <p>The ARN of the scheduled query. </p>
     */
    inline void SetScheduledQueryArn(const Aws::String& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = value; }

    /**
     * <p>The ARN of the scheduled query. </p>
     */
    inline void SetScheduledQueryArn(Aws::String&& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = std::move(value); }

    /**
     * <p>The ARN of the scheduled query. </p>
     */
    inline void SetScheduledQueryArn(const char* value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn.assign(value); }

    /**
     * <p>The ARN of the scheduled query. </p>
     */
    inline DeleteScheduledQueryRequest& WithScheduledQueryArn(const Aws::String& value) { SetScheduledQueryArn(value); return *this;}

    /**
     * <p>The ARN of the scheduled query. </p>
     */
    inline DeleteScheduledQueryRequest& WithScheduledQueryArn(Aws::String&& value) { SetScheduledQueryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the scheduled query. </p>
     */
    inline DeleteScheduledQueryRequest& WithScheduledQueryArn(const char* value) { SetScheduledQueryArn(value); return *this;}

  private:

    Aws::String m_scheduledQueryArn;
    bool m_scheduledQueryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
