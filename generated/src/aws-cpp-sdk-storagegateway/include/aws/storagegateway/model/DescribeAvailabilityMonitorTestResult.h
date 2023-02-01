/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/AvailabilityMonitorTestStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace StorageGateway
{
namespace Model
{
  class DescribeAvailabilityMonitorTestResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeAvailabilityMonitorTestResult();
    AWS_STORAGEGATEWAY_API DescribeAvailabilityMonitorTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeAvailabilityMonitorTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeAvailabilityMonitorTestResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeAvailabilityMonitorTestResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline DescribeAvailabilityMonitorTestResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The status of the high availability monitoring test. If a test hasn't been
     * performed, the value of this field is null.</p>
     */
    inline const AvailabilityMonitorTestStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the high availability monitoring test. If a test hasn't been
     * performed, the value of this field is null.</p>
     */
    inline void SetStatus(const AvailabilityMonitorTestStatus& value) { m_status = value; }

    /**
     * <p>The status of the high availability monitoring test. If a test hasn't been
     * performed, the value of this field is null.</p>
     */
    inline void SetStatus(AvailabilityMonitorTestStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the high availability monitoring test. If a test hasn't been
     * performed, the value of this field is null.</p>
     */
    inline DescribeAvailabilityMonitorTestResult& WithStatus(const AvailabilityMonitorTestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the high availability monitoring test. If a test hasn't been
     * performed, the value of this field is null.</p>
     */
    inline DescribeAvailabilityMonitorTestResult& WithStatus(AvailabilityMonitorTestStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time the high availability monitoring test was started. If a test hasn't
     * been performed, the value of this field is null.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the high availability monitoring test was started. If a test hasn't
     * been performed, the value of this field is null.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The time the high availability monitoring test was started. If a test hasn't
     * been performed, the value of this field is null.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The time the high availability monitoring test was started. If a test hasn't
     * been performed, the value of this field is null.</p>
     */
    inline DescribeAvailabilityMonitorTestResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the high availability monitoring test was started. If a test hasn't
     * been performed, the value of this field is null.</p>
     */
    inline DescribeAvailabilityMonitorTestResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_gatewayARN;

    AvailabilityMonitorTestStatus m_status;

    Aws::Utils::DateTime m_startTime;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
