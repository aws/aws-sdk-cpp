/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/ScheduledActionResponse.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class GetScheduledActionResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetScheduledActionResult();
    AWS_REDSHIFTSERVERLESS_API GetScheduledActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetScheduledActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned scheduled action object.</p>
     */
    inline const ScheduledActionResponse& GetScheduledAction() const{ return m_scheduledAction; }

    /**
     * <p>The returned scheduled action object.</p>
     */
    inline void SetScheduledAction(const ScheduledActionResponse& value) { m_scheduledAction = value; }

    /**
     * <p>The returned scheduled action object.</p>
     */
    inline void SetScheduledAction(ScheduledActionResponse&& value) { m_scheduledAction = std::move(value); }

    /**
     * <p>The returned scheduled action object.</p>
     */
    inline GetScheduledActionResult& WithScheduledAction(const ScheduledActionResponse& value) { SetScheduledAction(value); return *this;}

    /**
     * <p>The returned scheduled action object.</p>
     */
    inline GetScheduledActionResult& WithScheduledAction(ScheduledActionResponse&& value) { SetScheduledAction(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetScheduledActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetScheduledActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetScheduledActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ScheduledActionResponse m_scheduledAction;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
