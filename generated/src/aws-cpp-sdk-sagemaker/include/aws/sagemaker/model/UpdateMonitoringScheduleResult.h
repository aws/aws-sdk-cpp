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
  class UpdateMonitoringScheduleResult
  {
  public:
    AWS_SAGEMAKER_API UpdateMonitoringScheduleResult();
    AWS_SAGEMAKER_API UpdateMonitoringScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateMonitoringScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const{ return m_monitoringScheduleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(const Aws::String& value) { m_monitoringScheduleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(Aws::String&& value) { m_monitoringScheduleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleArn(const char* value) { m_monitoringScheduleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline UpdateMonitoringScheduleResult& WithMonitoringScheduleArn(const Aws::String& value) { SetMonitoringScheduleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline UpdateMonitoringScheduleResult& WithMonitoringScheduleArn(Aws::String&& value) { SetMonitoringScheduleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline UpdateMonitoringScheduleResult& WithMonitoringScheduleArn(const char* value) { SetMonitoringScheduleArn(value); return *this;}

  private:

    Aws::String m_monitoringScheduleArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
