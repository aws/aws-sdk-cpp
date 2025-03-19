/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/QueryPricingModel.h>
#include <aws/timestream-query/model/QueryComputeResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace TimestreamQuery
{
namespace Model
{
  class DescribeAccountSettingsResult
  {
  public:
    AWS_TIMESTREAMQUERY_API DescribeAccountSettingsResult() = default;
    AWS_TIMESTREAMQUERY_API DescribeAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API DescribeAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The maximum number of <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/tcu.html">Timestream
     * compute units</a> (TCUs) the service will use at any point in time to serve your
     * queries. To run queries, you must set a minimum capacity of 4 TCU. You can set
     * the maximum number of TCU in multiples of 4, for example, 4, 8, 16, 32, and so
     * on. This configuration is applicable only for on-demand usage of (TCUs). </p>
     */
    inline int GetMaxQueryTCU() const { return m_maxQueryTCU; }
    inline void SetMaxQueryTCU(int value) { m_maxQueryTCUHasBeenSet = true; m_maxQueryTCU = value; }
    inline DescribeAccountSettingsResult& WithMaxQueryTCU(int value) { SetMaxQueryTCU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing model for queries in your account.</p>  <p>The
     * <code>QueryPricingModel</code> parameter is used by several Timestream
     * operations; however, the <code>UpdateAccountSettings</code> API operation
     * doesn't recognize any values other than <code>COMPUTE_UNITS</code>.</p> 
     */
    inline QueryPricingModel GetQueryPricingModel() const { return m_queryPricingModel; }
    inline void SetQueryPricingModel(QueryPricingModel value) { m_queryPricingModelHasBeenSet = true; m_queryPricingModel = value; }
    inline DescribeAccountSettingsResult& WithQueryPricingModel(QueryPricingModel value) { SetQueryPricingModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the usage settings for Timestream Compute Units
     * (TCUs) in your account for the query workload. </p>
     */
    inline const QueryComputeResponse& GetQueryCompute() const { return m_queryCompute; }
    template<typename QueryComputeT = QueryComputeResponse>
    void SetQueryCompute(QueryComputeT&& value) { m_queryComputeHasBeenSet = true; m_queryCompute = std::forward<QueryComputeT>(value); }
    template<typename QueryComputeT = QueryComputeResponse>
    DescribeAccountSettingsResult& WithQueryCompute(QueryComputeT&& value) { SetQueryCompute(std::forward<QueryComputeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_maxQueryTCU{0};
    bool m_maxQueryTCUHasBeenSet = false;

    QueryPricingModel m_queryPricingModel{QueryPricingModel::NOT_SET};
    bool m_queryPricingModelHasBeenSet = false;

    QueryComputeResponse m_queryCompute;
    bool m_queryComputeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
