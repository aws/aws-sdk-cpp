/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/ScheduledQueryDescription.h>
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
  class DescribeScheduledQueryResult
  {
  public:
    AWS_TIMESTREAMQUERY_API DescribeScheduledQueryResult() = default;
    AWS_TIMESTREAMQUERY_API DescribeScheduledQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API DescribeScheduledQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The scheduled query.</p>
     */
    inline const ScheduledQueryDescription& GetScheduledQuery() const { return m_scheduledQuery; }
    template<typename ScheduledQueryT = ScheduledQueryDescription>
    void SetScheduledQuery(ScheduledQueryT&& value) { m_scheduledQueryHasBeenSet = true; m_scheduledQuery = std::forward<ScheduledQueryT>(value); }
    template<typename ScheduledQueryT = ScheduledQueryDescription>
    DescribeScheduledQueryResult& WithScheduledQuery(ScheduledQueryT&& value) { SetScheduledQuery(std::forward<ScheduledQueryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeScheduledQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ScheduledQueryDescription m_scheduledQuery;
    bool m_scheduledQueryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
