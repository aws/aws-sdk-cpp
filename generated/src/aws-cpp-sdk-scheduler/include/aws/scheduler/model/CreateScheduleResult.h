﻿/**
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
  class CreateScheduleResult
  {
  public:
    AWS_SCHEDULER_API CreateScheduleResult();
    AWS_SCHEDULER_API CreateScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEDULER_API CreateScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline const Aws::String& GetScheduleArn() const{ return m_scheduleArn; }
    inline void SetScheduleArn(const Aws::String& value) { m_scheduleArn = value; }
    inline void SetScheduleArn(Aws::String&& value) { m_scheduleArn = std::move(value); }
    inline void SetScheduleArn(const char* value) { m_scheduleArn.assign(value); }
    inline CreateScheduleResult& WithScheduleArn(const Aws::String& value) { SetScheduleArn(value); return *this;}
    inline CreateScheduleResult& WithScheduleArn(Aws::String&& value) { SetScheduleArn(std::move(value)); return *this;}
    inline CreateScheduleResult& WithScheduleArn(const char* value) { SetScheduleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_scheduleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
