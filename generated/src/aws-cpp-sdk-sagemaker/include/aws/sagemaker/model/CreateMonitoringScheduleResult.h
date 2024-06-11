﻿/**
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
    AWS_SAGEMAKER_API CreateMonitoringScheduleResult();
    AWS_SAGEMAKER_API CreateMonitoringScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateMonitoringScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const{ return m_monitoringScheduleArn; }
    inline void SetMonitoringScheduleArn(const Aws::String& value) { m_monitoringScheduleArn = value; }
    inline void SetMonitoringScheduleArn(Aws::String&& value) { m_monitoringScheduleArn = std::move(value); }
    inline void SetMonitoringScheduleArn(const char* value) { m_monitoringScheduleArn.assign(value); }
    inline CreateMonitoringScheduleResult& WithMonitoringScheduleArn(const Aws::String& value) { SetMonitoringScheduleArn(value); return *this;}
    inline CreateMonitoringScheduleResult& WithMonitoringScheduleArn(Aws::String&& value) { SetMonitoringScheduleArn(std::move(value)); return *this;}
    inline CreateMonitoringScheduleResult& WithMonitoringScheduleArn(const char* value) { SetMonitoringScheduleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMonitoringScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMonitoringScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMonitoringScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
