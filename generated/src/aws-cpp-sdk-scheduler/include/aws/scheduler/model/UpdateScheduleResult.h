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
  class UpdateScheduleResult
  {
  public:
    AWS_SCHEDULER_API UpdateScheduleResult() = default;
    AWS_SCHEDULER_API UpdateScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEDULER_API UpdateScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schedule that you updated.</p>
     */
    inline const Aws::String& GetScheduleArn() const { return m_scheduleArn; }
    template<typename ScheduleArnT = Aws::String>
    void SetScheduleArn(ScheduleArnT&& value) { m_scheduleArnHasBeenSet = true; m_scheduleArn = std::forward<ScheduleArnT>(value); }
    template<typename ScheduleArnT = Aws::String>
    UpdateScheduleResult& WithScheduleArn(ScheduleArnT&& value) { SetScheduleArn(std::forward<ScheduleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduleArn;
    bool m_scheduleArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
