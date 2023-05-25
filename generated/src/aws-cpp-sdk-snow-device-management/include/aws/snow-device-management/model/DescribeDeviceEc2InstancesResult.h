/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/InstanceSummary.h>
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
namespace SnowDeviceManagement
{
namespace Model
{
  class DescribeDeviceEc2InstancesResult
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API DescribeDeviceEc2InstancesResult();
    AWS_SNOWDEVICEMANAGEMENT_API DescribeDeviceEc2InstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWDEVICEMANAGEMENT_API DescribeDeviceEc2InstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of structures containing information about each instance. </p>
     */
    inline const Aws::Vector<InstanceSummary>& GetInstances() const{ return m_instances; }

    /**
     * <p>A list of structures containing information about each instance. </p>
     */
    inline void SetInstances(const Aws::Vector<InstanceSummary>& value) { m_instances = value; }

    /**
     * <p>A list of structures containing information about each instance. </p>
     */
    inline void SetInstances(Aws::Vector<InstanceSummary>&& value) { m_instances = std::move(value); }

    /**
     * <p>A list of structures containing information about each instance. </p>
     */
    inline DescribeDeviceEc2InstancesResult& WithInstances(const Aws::Vector<InstanceSummary>& value) { SetInstances(value); return *this;}

    /**
     * <p>A list of structures containing information about each instance. </p>
     */
    inline DescribeDeviceEc2InstancesResult& WithInstances(Aws::Vector<InstanceSummary>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>A list of structures containing information about each instance. </p>
     */
    inline DescribeDeviceEc2InstancesResult& AddInstances(const InstanceSummary& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>A list of structures containing information about each instance. </p>
     */
    inline DescribeDeviceEc2InstancesResult& AddInstances(InstanceSummary&& value) { m_instances.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDeviceEc2InstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDeviceEc2InstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDeviceEc2InstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<InstanceSummary> m_instances;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
