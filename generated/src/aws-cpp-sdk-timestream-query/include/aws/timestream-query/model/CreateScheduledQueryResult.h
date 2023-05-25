/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
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
  class CreateScheduledQueryResult
  {
  public:
    AWS_TIMESTREAMQUERY_API CreateScheduledQueryResult();
    AWS_TIMESTREAMQUERY_API CreateScheduledQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API CreateScheduledQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ARN for the created scheduled query.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>ARN for the created scheduled query.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>ARN for the created scheduled query.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>ARN for the created scheduled query.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>ARN for the created scheduled query.</p>
     */
    inline CreateScheduledQueryResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>ARN for the created scheduled query.</p>
     */
    inline CreateScheduledQueryResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>ARN for the created scheduled query.</p>
     */
    inline CreateScheduledQueryResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateScheduledQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateScheduledQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateScheduledQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
