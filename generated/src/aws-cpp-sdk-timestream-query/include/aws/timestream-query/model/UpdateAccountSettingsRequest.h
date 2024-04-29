/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryRequest.h>
#include <aws/timestream-query/model/QueryPricingModel.h>
#include <utility>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

  /**
   */
  class UpdateAccountSettingsRequest : public TimestreamQueryRequest
  {
  public:
    AWS_TIMESTREAMQUERY_API UpdateAccountSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

    AWS_TIMESTREAMQUERY_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMQUERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of compute units the service will use at any point in time
     * to serve your queries. To run queries, you must set a minimum capacity of 4 TCU.
     * You can set the maximum number of TCU in multiples of 4, for example, 4, 8, 16,
     * 32, and so on.</p> <p>The maximum value supported for <code>MaxQueryTCU</code>
     * is 1000. To request an increase to this soft limit, contact Amazon Web Services
     * Support. For information about the default quota for maxQueryTCU, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.default">Default
     * quotas</a>.</p>
     */
    inline int GetMaxQueryTCU() const{ return m_maxQueryTCU; }

    /**
     * <p>The maximum number of compute units the service will use at any point in time
     * to serve your queries. To run queries, you must set a minimum capacity of 4 TCU.
     * You can set the maximum number of TCU in multiples of 4, for example, 4, 8, 16,
     * 32, and so on.</p> <p>The maximum value supported for <code>MaxQueryTCU</code>
     * is 1000. To request an increase to this soft limit, contact Amazon Web Services
     * Support. For information about the default quota for maxQueryTCU, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.default">Default
     * quotas</a>.</p>
     */
    inline bool MaxQueryTCUHasBeenSet() const { return m_maxQueryTCUHasBeenSet; }

    /**
     * <p>The maximum number of compute units the service will use at any point in time
     * to serve your queries. To run queries, you must set a minimum capacity of 4 TCU.
     * You can set the maximum number of TCU in multiples of 4, for example, 4, 8, 16,
     * 32, and so on.</p> <p>The maximum value supported for <code>MaxQueryTCU</code>
     * is 1000. To request an increase to this soft limit, contact Amazon Web Services
     * Support. For information about the default quota for maxQueryTCU, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.default">Default
     * quotas</a>.</p>
     */
    inline void SetMaxQueryTCU(int value) { m_maxQueryTCUHasBeenSet = true; m_maxQueryTCU = value; }

    /**
     * <p>The maximum number of compute units the service will use at any point in time
     * to serve your queries. To run queries, you must set a minimum capacity of 4 TCU.
     * You can set the maximum number of TCU in multiples of 4, for example, 4, 8, 16,
     * 32, and so on.</p> <p>The maximum value supported for <code>MaxQueryTCU</code>
     * is 1000. To request an increase to this soft limit, contact Amazon Web Services
     * Support. For information about the default quota for maxQueryTCU, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.default">Default
     * quotas</a>.</p>
     */
    inline UpdateAccountSettingsRequest& WithMaxQueryTCU(int value) { SetMaxQueryTCU(value); return *this;}


    /**
     * <p>The pricing model for queries in an account.</p>
     */
    inline const QueryPricingModel& GetQueryPricingModel() const{ return m_queryPricingModel; }

    /**
     * <p>The pricing model for queries in an account.</p>
     */
    inline bool QueryPricingModelHasBeenSet() const { return m_queryPricingModelHasBeenSet; }

    /**
     * <p>The pricing model for queries in an account.</p>
     */
    inline void SetQueryPricingModel(const QueryPricingModel& value) { m_queryPricingModelHasBeenSet = true; m_queryPricingModel = value; }

    /**
     * <p>The pricing model for queries in an account.</p>
     */
    inline void SetQueryPricingModel(QueryPricingModel&& value) { m_queryPricingModelHasBeenSet = true; m_queryPricingModel = std::move(value); }

    /**
     * <p>The pricing model for queries in an account.</p>
     */
    inline UpdateAccountSettingsRequest& WithQueryPricingModel(const QueryPricingModel& value) { SetQueryPricingModel(value); return *this;}

    /**
     * <p>The pricing model for queries in an account.</p>
     */
    inline UpdateAccountSettingsRequest& WithQueryPricingModel(QueryPricingModel&& value) { SetQueryPricingModel(std::move(value)); return *this;}

  private:

    int m_maxQueryTCU;
    bool m_maxQueryTCUHasBeenSet = false;

    QueryPricingModel m_queryPricingModel;
    bool m_queryPricingModelHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
