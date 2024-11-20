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
  class UpdateAccountSettingsResult
  {
  public:
    AWS_TIMESTREAMQUERY_API UpdateAccountSettingsResult();
    AWS_TIMESTREAMQUERY_API UpdateAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API UpdateAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configured maximum number of compute units the service will use at any
     * point in time to serve your queries.</p>
     */
    inline int GetMaxQueryTCU() const{ return m_maxQueryTCU; }
    inline void SetMaxQueryTCU(int value) { m_maxQueryTCU = value; }
    inline UpdateAccountSettingsResult& WithMaxQueryTCU(int value) { SetMaxQueryTCU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing model for an account.</p>
     */
    inline const QueryPricingModel& GetQueryPricingModel() const{ return m_queryPricingModel; }
    inline void SetQueryPricingModel(const QueryPricingModel& value) { m_queryPricingModel = value; }
    inline void SetQueryPricingModel(QueryPricingModel&& value) { m_queryPricingModel = std::move(value); }
    inline UpdateAccountSettingsResult& WithQueryPricingModel(const QueryPricingModel& value) { SetQueryPricingModel(value); return *this;}
    inline UpdateAccountSettingsResult& WithQueryPricingModel(QueryPricingModel&& value) { SetQueryPricingModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Confirms the updated account settings for querying data in your account.</p>
     */
    inline const QueryComputeResponse& GetQueryCompute() const{ return m_queryCompute; }
    inline void SetQueryCompute(const QueryComputeResponse& value) { m_queryCompute = value; }
    inline void SetQueryCompute(QueryComputeResponse&& value) { m_queryCompute = std::move(value); }
    inline UpdateAccountSettingsResult& WithQueryCompute(const QueryComputeResponse& value) { SetQueryCompute(value); return *this;}
    inline UpdateAccountSettingsResult& WithQueryCompute(QueryComputeResponse&& value) { SetQueryCompute(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAccountSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAccountSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAccountSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
