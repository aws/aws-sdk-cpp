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
    AWS_TIMESTREAMQUERY_API DescribeAccountSettingsResult();
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
    inline int GetMaxQueryTCU() const{ return m_maxQueryTCU; }
    inline void SetMaxQueryTCU(int value) { m_maxQueryTCU = value; }
    inline DescribeAccountSettingsResult& WithMaxQueryTCU(int value) { SetMaxQueryTCU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing model for queries in your account.</p>  <p>The
     * <code>QueryPricingModel</code> parameter is used by several Timestream
     * operations; however, the <code>UpdateAccountSettings</code> API operation
     * doesn't recognize any values other than <code>COMPUTE_UNITS</code>.</p> 
     */
    inline const QueryPricingModel& GetQueryPricingModel() const{ return m_queryPricingModel; }
    inline void SetQueryPricingModel(const QueryPricingModel& value) { m_queryPricingModel = value; }
    inline void SetQueryPricingModel(QueryPricingModel&& value) { m_queryPricingModel = std::move(value); }
    inline DescribeAccountSettingsResult& WithQueryPricingModel(const QueryPricingModel& value) { SetQueryPricingModel(value); return *this;}
    inline DescribeAccountSettingsResult& WithQueryPricingModel(QueryPricingModel&& value) { SetQueryPricingModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the usage settings for Timestream Compute Units
     * (TCUs) in your account for the query workload. </p>
     */
    inline const QueryComputeResponse& GetQueryCompute() const{ return m_queryCompute; }
    inline void SetQueryCompute(const QueryComputeResponse& value) { m_queryCompute = value; }
    inline void SetQueryCompute(QueryComputeResponse&& value) { m_queryCompute = std::move(value); }
    inline DescribeAccountSettingsResult& WithQueryCompute(const QueryComputeResponse& value) { SetQueryCompute(value); return *this;}
    inline DescribeAccountSettingsResult& WithQueryCompute(QueryComputeResponse&& value) { SetQueryCompute(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAccountSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAccountSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAccountSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_maxQueryTCU;

    QueryPricingModel m_queryPricingModel;

    QueryComputeResponse m_queryCompute;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
