/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
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
namespace Scheduler
{
namespace Model
{
  class CreateScheduleGroupResult
  {
  public:
    AWS_SCHEDULER_API CreateScheduleGroupResult();
    AWS_SCHEDULER_API CreateScheduleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEDULER_API CreateScheduleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline const Aws::String& GetScheduleGroupArn() const{ return m_scheduleGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline void SetScheduleGroupArn(const Aws::String& value) { m_scheduleGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline void SetScheduleGroupArn(Aws::String&& value) { m_scheduleGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline void SetScheduleGroupArn(const char* value) { m_scheduleGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline CreateScheduleGroupResult& WithScheduleGroupArn(const Aws::String& value) { SetScheduleGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline CreateScheduleGroupResult& WithScheduleGroupArn(Aws::String&& value) { SetScheduleGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline CreateScheduleGroupResult& WithScheduleGroupArn(const char* value) { SetScheduleGroupArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateScheduleGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateScheduleGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateScheduleGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_scheduleGroupArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
