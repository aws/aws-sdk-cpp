/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryRequest.h>
#include <aws/timestream-query/model/QueryPricingModel.h>
#include <aws/timestream-query/model/QueryComputeRequest.h>
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


    ///@{
    /**
     * <p>The maximum number of compute units the service will use at any point in time
     * to serve your queries. To run queries, you must set a minimum capacity of 4 TCU.
     * You can set the maximum number of TCU in multiples of 4, for example, 4, 8, 16,
     * 32, and so on. The maximum value supported for <code>MaxQueryTCU</code> is 1000.
     * To request an increase to this soft limit, contact Amazon Web Services Support.
     * For information about the default quota for maxQueryTCU, see Default quotas.
     * This configuration is applicable only for on-demand usage of Timestream Compute
     * Units (TCUs).</p> <p>The maximum value supported for <code>MaxQueryTCU</code> is
     * 1000. To request an increase to this soft limit, contact Amazon Web Services
     * Support. For information about the default quota for <code>maxQueryTCU</code>,
     * see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html#limits.default">Default
     * quotas</a>.</p>
     */
    inline int GetMaxQueryTCU() const{ return m_maxQueryTCU; }
    inline bool MaxQueryTCUHasBeenSet() const { return m_maxQueryTCUHasBeenSet; }
    inline void SetMaxQueryTCU(int value) { m_maxQueryTCUHasBeenSet = true; m_maxQueryTCU = value; }
    inline UpdateAccountSettingsRequest& WithMaxQueryTCU(int value) { SetMaxQueryTCU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing model for queries in an account.</p>  <p>The
     * <code>QueryPricingModel</code> parameter is used by several Timestream
     * operations; however, the <code>UpdateAccountSettings</code> API operation
     * doesn't recognize any values other than <code>COMPUTE_UNITS</code>.</p> 
     */
    inline const QueryPricingModel& GetQueryPricingModel() const{ return m_queryPricingModel; }
    inline bool QueryPricingModelHasBeenSet() const { return m_queryPricingModelHasBeenSet; }
    inline void SetQueryPricingModel(const QueryPricingModel& value) { m_queryPricingModelHasBeenSet = true; m_queryPricingModel = value; }
    inline void SetQueryPricingModel(QueryPricingModel&& value) { m_queryPricingModelHasBeenSet = true; m_queryPricingModel = std::move(value); }
    inline UpdateAccountSettingsRequest& WithQueryPricingModel(const QueryPricingModel& value) { SetQueryPricingModel(value); return *this;}
    inline UpdateAccountSettingsRequest& WithQueryPricingModel(QueryPricingModel&& value) { SetQueryPricingModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the query compute settings configured in your account, including the
     * query pricing model and provisioned Timestream Compute Units (TCUs) in your
     * account.</p>  <p>This API is idempotent, meaning that making the same
     * request multiple times will have the same effect as making the request once.</p>
     * 
     */
    inline const QueryComputeRequest& GetQueryCompute() const{ return m_queryCompute; }
    inline bool QueryComputeHasBeenSet() const { return m_queryComputeHasBeenSet; }
    inline void SetQueryCompute(const QueryComputeRequest& value) { m_queryComputeHasBeenSet = true; m_queryCompute = value; }
    inline void SetQueryCompute(QueryComputeRequest&& value) { m_queryComputeHasBeenSet = true; m_queryCompute = std::move(value); }
    inline UpdateAccountSettingsRequest& WithQueryCompute(const QueryComputeRequest& value) { SetQueryCompute(value); return *this;}
    inline UpdateAccountSettingsRequest& WithQueryCompute(QueryComputeRequest&& value) { SetQueryCompute(std::move(value)); return *this;}
    ///@}
  private:

    int m_maxQueryTCU;
    bool m_maxQueryTCUHasBeenSet = false;

    QueryPricingModel m_queryPricingModel;
    bool m_queryPricingModelHasBeenSet = false;

    QueryComputeRequest m_queryCompute;
    bool m_queryComputeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
