/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snow-device-management/model/UnlockState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/snow-device-management/model/SoftwareInformation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/snow-device-management/model/Capacity.h>
#include <aws/snow-device-management/model/PhysicalNetworkInterface.h>
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
  class DescribeDeviceResult
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API DescribeDeviceResult();
    AWS_SNOWDEVICEMANAGEMENT_API DescribeDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWDEVICEMANAGEMENT_API DescribeDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the job used when ordering the device.</p>
     */
    inline const Aws::String& GetAssociatedWithJob() const{ return m_associatedWithJob; }
    inline void SetAssociatedWithJob(const Aws::String& value) { m_associatedWithJob = value; }
    inline void SetAssociatedWithJob(Aws::String&& value) { m_associatedWithJob = std::move(value); }
    inline void SetAssociatedWithJob(const char* value) { m_associatedWithJob.assign(value); }
    inline DescribeDeviceResult& WithAssociatedWithJob(const Aws::String& value) { SetAssociatedWithJob(value); return *this;}
    inline DescribeDeviceResult& WithAssociatedWithJob(Aws::String&& value) { SetAssociatedWithJob(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithAssociatedWithJob(const char* value) { SetAssociatedWithJob(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hardware specifications of the device. </p>
     */
    inline const Aws::Vector<Capacity>& GetDeviceCapacities() const{ return m_deviceCapacities; }
    inline void SetDeviceCapacities(const Aws::Vector<Capacity>& value) { m_deviceCapacities = value; }
    inline void SetDeviceCapacities(Aws::Vector<Capacity>&& value) { m_deviceCapacities = std::move(value); }
    inline DescribeDeviceResult& WithDeviceCapacities(const Aws::Vector<Capacity>& value) { SetDeviceCapacities(value); return *this;}
    inline DescribeDeviceResult& WithDeviceCapacities(Aws::Vector<Capacity>&& value) { SetDeviceCapacities(std::move(value)); return *this;}
    inline DescribeDeviceResult& AddDeviceCapacities(const Capacity& value) { m_deviceCapacities.push_back(value); return *this; }
    inline DescribeDeviceResult& AddDeviceCapacities(Capacity&& value) { m_deviceCapacities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the device.</p>
     */
    inline const UnlockState& GetDeviceState() const{ return m_deviceState; }
    inline void SetDeviceState(const UnlockState& value) { m_deviceState = value; }
    inline void SetDeviceState(UnlockState&& value) { m_deviceState = std::move(value); }
    inline DescribeDeviceResult& WithDeviceState(const UnlockState& value) { SetDeviceState(value); return *this;}
    inline DescribeDeviceResult& WithDeviceState(UnlockState&& value) { SetDeviceState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services Snow Family device.</p>
     */
    inline const Aws::String& GetDeviceType() const{ return m_deviceType; }
    inline void SetDeviceType(const Aws::String& value) { m_deviceType = value; }
    inline void SetDeviceType(Aws::String&& value) { m_deviceType = std::move(value); }
    inline void SetDeviceType(const char* value) { m_deviceType.assign(value); }
    inline DescribeDeviceResult& WithDeviceType(const Aws::String& value) { SetDeviceType(value); return *this;}
    inline DescribeDeviceResult& WithDeviceType(Aws::String&& value) { SetDeviceType(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithDeviceType(const char* value) { SetDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the device last contacted the Amazon Web Services Cloud. Indicates that
     * the device is online.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReachedOutAt() const{ return m_lastReachedOutAt; }
    inline void SetLastReachedOutAt(const Aws::Utils::DateTime& value) { m_lastReachedOutAt = value; }
    inline void SetLastReachedOutAt(Aws::Utils::DateTime&& value) { m_lastReachedOutAt = std::move(value); }
    inline DescribeDeviceResult& WithLastReachedOutAt(const Aws::Utils::DateTime& value) { SetLastReachedOutAt(value); return *this;}
    inline DescribeDeviceResult& WithLastReachedOutAt(Aws::Utils::DateTime&& value) { SetLastReachedOutAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the device last pushed an update to the Amazon Web Services Cloud.
     * Indicates when the device cache was refreshed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline DescribeDeviceResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline DescribeDeviceResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetManagedDeviceArn() const{ return m_managedDeviceArn; }
    inline void SetManagedDeviceArn(const Aws::String& value) { m_managedDeviceArn = value; }
    inline void SetManagedDeviceArn(Aws::String&& value) { m_managedDeviceArn = std::move(value); }
    inline void SetManagedDeviceArn(const char* value) { m_managedDeviceArn.assign(value); }
    inline DescribeDeviceResult& WithManagedDeviceArn(const Aws::String& value) { SetManagedDeviceArn(value); return *this;}
    inline DescribeDeviceResult& WithManagedDeviceArn(Aws::String&& value) { SetManagedDeviceArn(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithManagedDeviceArn(const char* value) { SetManagedDeviceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the device that you checked the information for.</p>
     */
    inline const Aws::String& GetManagedDeviceId() const{ return m_managedDeviceId; }
    inline void SetManagedDeviceId(const Aws::String& value) { m_managedDeviceId = value; }
    inline void SetManagedDeviceId(Aws::String&& value) { m_managedDeviceId = std::move(value); }
    inline void SetManagedDeviceId(const char* value) { m_managedDeviceId.assign(value); }
    inline DescribeDeviceResult& WithManagedDeviceId(const Aws::String& value) { SetManagedDeviceId(value); return *this;}
    inline DescribeDeviceResult& WithManagedDeviceId(Aws::String&& value) { SetManagedDeviceId(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithManagedDeviceId(const char* value) { SetManagedDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interfaces available on the device.</p>
     */
    inline const Aws::Vector<PhysicalNetworkInterface>& GetPhysicalNetworkInterfaces() const{ return m_physicalNetworkInterfaces; }
    inline void SetPhysicalNetworkInterfaces(const Aws::Vector<PhysicalNetworkInterface>& value) { m_physicalNetworkInterfaces = value; }
    inline void SetPhysicalNetworkInterfaces(Aws::Vector<PhysicalNetworkInterface>&& value) { m_physicalNetworkInterfaces = std::move(value); }
    inline DescribeDeviceResult& WithPhysicalNetworkInterfaces(const Aws::Vector<PhysicalNetworkInterface>& value) { SetPhysicalNetworkInterfaces(value); return *this;}
    inline DescribeDeviceResult& WithPhysicalNetworkInterfaces(Aws::Vector<PhysicalNetworkInterface>&& value) { SetPhysicalNetworkInterfaces(std::move(value)); return *this;}
    inline DescribeDeviceResult& AddPhysicalNetworkInterfaces(const PhysicalNetworkInterface& value) { m_physicalNetworkInterfaces.push_back(value); return *this; }
    inline DescribeDeviceResult& AddPhysicalNetworkInterfaces(PhysicalNetworkInterface&& value) { m_physicalNetworkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The software installed on the device.</p>
     */
    inline const SoftwareInformation& GetSoftware() const{ return m_software; }
    inline void SetSoftware(const SoftwareInformation& value) { m_software = value; }
    inline void SetSoftware(SoftwareInformation&& value) { m_software = std::move(value); }
    inline DescribeDeviceResult& WithSoftware(const SoftwareInformation& value) { SetSoftware(value); return *this;}
    inline DescribeDeviceResult& WithSoftware(SoftwareInformation&& value) { SetSoftware(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeDeviceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeDeviceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeDeviceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeDeviceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeDeviceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeDeviceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeDeviceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeDeviceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeDeviceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_associatedWithJob;

    Aws::Vector<Capacity> m_deviceCapacities;

    UnlockState m_deviceState;

    Aws::String m_deviceType;

    Aws::Utils::DateTime m_lastReachedOutAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_managedDeviceArn;

    Aws::String m_managedDeviceId;

    Aws::Vector<PhysicalNetworkInterface> m_physicalNetworkInterfaces;

    SoftwareInformation m_software;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
