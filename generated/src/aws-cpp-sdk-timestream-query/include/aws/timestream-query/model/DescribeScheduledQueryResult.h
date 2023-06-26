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
    AWS_TIMESTREAMQUERY_API DescribeScheduledQueryResult();
    AWS_TIMESTREAMQUERY_API DescribeScheduledQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API DescribeScheduledQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The scheduled query.</p>
     */
    inline const ScheduledQueryDescription& GetScheduledQuery() const{ return m_scheduledQuery; }

    /**
     * <p>The scheduled query.</p>
     */
    inline void SetScheduledQuery(const ScheduledQueryDescription& value) { m_scheduledQuery = value; }

    /**
     * <p>The scheduled query.</p>
     */
    inline void SetScheduledQuery(ScheduledQueryDescription&& value) { m_scheduledQuery = std::move(value); }

    /**
     * <p>The scheduled query.</p>
     */
    inline DescribeScheduledQueryResult& WithScheduledQuery(const ScheduledQueryDescription& value) { SetScheduledQuery(value); return *this;}

    /**
     * <p>The scheduled query.</p>
     */
    inline DescribeScheduledQueryResult& WithScheduledQuery(ScheduledQueryDescription&& value) { SetScheduledQuery(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeScheduledQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeScheduledQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeScheduledQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ScheduledQueryDescription m_scheduledQuery;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
