/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class CreateMonitoringScheduleResult
  {
  public:
    AWS_SAGEMAKER_API CreateMonitoringScheduleResult() = default;
    AWS_SAGEMAKER_API CreateMonitoringScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateMonitoringScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const { return m_monitoringScheduleArn; }
    template<typename MonitoringScheduleArnT = Aws::String>
    void SetMonitoringScheduleArn(MonitoringScheduleArnT&& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = std::forward<MonitoringScheduleArnT>(value); }
    template<typename MonitoringScheduleArnT = Aws::String>
    CreateMonitoringScheduleResult& WithMonitoringScheduleArn(MonitoringScheduleArnT&& value) { SetMonitoringScheduleArn(std::forward<MonitoringScheduleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMonitoringScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleArn;
    bool m_monitoringScheduleArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
