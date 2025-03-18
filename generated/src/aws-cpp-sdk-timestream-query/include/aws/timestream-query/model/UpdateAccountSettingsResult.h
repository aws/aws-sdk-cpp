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
    AWS_TIMESTREAMQUERY_API UpdateAccountSettingsResult() = default;
    AWS_TIMESTREAMQUERY_API UpdateAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API UpdateAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configured maximum number of compute units the service will use at any
     * point in time to serve your queries.</p>
     */
    inline int GetMaxQueryTCU() const { return m_maxQueryTCU; }
    inline void SetMaxQueryTCU(int value) { m_maxQueryTCUHasBeenSet = true; m_maxQueryTCU = value; }
    inline UpdateAccountSettingsResult& WithMaxQueryTCU(int value) { SetMaxQueryTCU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing model for an account.</p>
     */
    inline QueryPricingModel GetQueryPricingModel() const { return m_queryPricingModel; }
    inline void SetQueryPricingModel(QueryPricingModel value) { m_queryPricingModelHasBeenSet = true; m_queryPricingModel = value; }
    inline UpdateAccountSettingsResult& WithQueryPricingModel(QueryPricingModel value) { SetQueryPricingModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Confirms the updated account settings for querying data in your account.</p>
     */
    inline const QueryComputeResponse& GetQueryCompute() const { return m_queryCompute; }
    template<typename QueryComputeT = QueryComputeResponse>
    void SetQueryCompute(QueryComputeT&& value) { m_queryComputeHasBeenSet = true; m_queryCompute = std::forward<QueryComputeT>(value); }
    template<typename QueryComputeT = QueryComputeResponse>
    UpdateAccountSettingsResult& WithQueryCompute(QueryComputeT&& value) { SetQueryCompute(std::forward<QueryComputeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAccountSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
