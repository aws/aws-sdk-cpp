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
    AWS_SNOWDEVICEMANAGEMENT_API DescribeDeviceResult() = default;
    AWS_SNOWDEVICEMANAGEMENT_API DescribeDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWDEVICEMANAGEMENT_API DescribeDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the job used when ordering the device.</p>
     */
    inline const Aws::String& GetAssociatedWithJob() const { return m_associatedWithJob; }
    template<typename AssociatedWithJobT = Aws::String>
    void SetAssociatedWithJob(AssociatedWithJobT&& value) { m_associatedWithJobHasBeenSet = true; m_associatedWithJob = std::forward<AssociatedWithJobT>(value); }
    template<typename AssociatedWithJobT = Aws::String>
    DescribeDeviceResult& WithAssociatedWithJob(AssociatedWithJobT&& value) { SetAssociatedWithJob(std::forward<AssociatedWithJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hardware specifications of the device. </p>
     */
    inline const Aws::Vector<Capacity>& GetDeviceCapacities() const { return m_deviceCapacities; }
    template<typename DeviceCapacitiesT = Aws::Vector<Capacity>>
    void SetDeviceCapacities(DeviceCapacitiesT&& value) { m_deviceCapacitiesHasBeenSet = true; m_deviceCapacities = std::forward<DeviceCapacitiesT>(value); }
    template<typename DeviceCapacitiesT = Aws::Vector<Capacity>>
    DescribeDeviceResult& WithDeviceCapacities(DeviceCapacitiesT&& value) { SetDeviceCapacities(std::forward<DeviceCapacitiesT>(value)); return *this;}
    template<typename DeviceCapacitiesT = Capacity>
    DescribeDeviceResult& AddDeviceCapacities(DeviceCapacitiesT&& value) { m_deviceCapacitiesHasBeenSet = true; m_deviceCapacities.emplace_back(std::forward<DeviceCapacitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the device.</p>
     */
    inline UnlockState GetDeviceState() const { return m_deviceState; }
    inline void SetDeviceState(UnlockState value) { m_deviceStateHasBeenSet = true; m_deviceState = value; }
    inline DescribeDeviceResult& WithDeviceState(UnlockState value) { SetDeviceState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services Snow Family device.</p>
     */
    inline const Aws::String& GetDeviceType() const { return m_deviceType; }
    template<typename DeviceTypeT = Aws::String>
    void SetDeviceType(DeviceTypeT&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::forward<DeviceTypeT>(value); }
    template<typename DeviceTypeT = Aws::String>
    DescribeDeviceResult& WithDeviceType(DeviceTypeT&& value) { SetDeviceType(std::forward<DeviceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the device last contacted the Amazon Web Services Cloud. Indicates that
     * the device is online.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReachedOutAt() const { return m_lastReachedOutAt; }
    template<typename LastReachedOutAtT = Aws::Utils::DateTime>
    void SetLastReachedOutAt(LastReachedOutAtT&& value) { m_lastReachedOutAtHasBeenSet = true; m_lastReachedOutAt = std::forward<LastReachedOutAtT>(value); }
    template<typename LastReachedOutAtT = Aws::Utils::DateTime>
    DescribeDeviceResult& WithLastReachedOutAt(LastReachedOutAtT&& value) { SetLastReachedOutAt(std::forward<LastReachedOutAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the device last pushed an update to the Amazon Web Services Cloud.
     * Indicates when the device cache was refreshed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    DescribeDeviceResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetManagedDeviceArn() const { return m_managedDeviceArn; }
    template<typename ManagedDeviceArnT = Aws::String>
    void SetManagedDeviceArn(ManagedDeviceArnT&& value) { m_managedDeviceArnHasBeenSet = true; m_managedDeviceArn = std::forward<ManagedDeviceArnT>(value); }
    template<typename ManagedDeviceArnT = Aws::String>
    DescribeDeviceResult& WithManagedDeviceArn(ManagedDeviceArnT&& value) { SetManagedDeviceArn(std::forward<ManagedDeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the device that you checked the information for.</p>
     */
    inline const Aws::String& GetManagedDeviceId() const { return m_managedDeviceId; }
    template<typename ManagedDeviceIdT = Aws::String>
    void SetManagedDeviceId(ManagedDeviceIdT&& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = std::forward<ManagedDeviceIdT>(value); }
    template<typename ManagedDeviceIdT = Aws::String>
    DescribeDeviceResult& WithManagedDeviceId(ManagedDeviceIdT&& value) { SetManagedDeviceId(std::forward<ManagedDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interfaces available on the device.</p>
     */
    inline const Aws::Vector<PhysicalNetworkInterface>& GetPhysicalNetworkInterfaces() const { return m_physicalNetworkInterfaces; }
    template<typename PhysicalNetworkInterfacesT = Aws::Vector<PhysicalNetworkInterface>>
    void SetPhysicalNetworkInterfaces(PhysicalNetworkInterfacesT&& value) { m_physicalNetworkInterfacesHasBeenSet = true; m_physicalNetworkInterfaces = std::forward<PhysicalNetworkInterfacesT>(value); }
    template<typename PhysicalNetworkInterfacesT = Aws::Vector<PhysicalNetworkInterface>>
    DescribeDeviceResult& WithPhysicalNetworkInterfaces(PhysicalNetworkInterfacesT&& value) { SetPhysicalNetworkInterfaces(std::forward<PhysicalNetworkInterfacesT>(value)); return *this;}
    template<typename PhysicalNetworkInterfacesT = PhysicalNetworkInterface>
    DescribeDeviceResult& AddPhysicalNetworkInterfaces(PhysicalNetworkInterfacesT&& value) { m_physicalNetworkInterfacesHasBeenSet = true; m_physicalNetworkInterfaces.emplace_back(std::forward<PhysicalNetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The software installed on the device.</p>
     */
    inline const SoftwareInformation& GetSoftware() const { return m_software; }
    template<typename SoftwareT = SoftwareInformation>
    void SetSoftware(SoftwareT&& value) { m_softwareHasBeenSet = true; m_software = std::forward<SoftwareT>(value); }
    template<typename SoftwareT = SoftwareInformation>
    DescribeDeviceResult& WithSoftware(SoftwareT&& value) { SetSoftware(std::forward<SoftwareT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeDeviceResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeDeviceResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeviceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associatedWithJob;
    bool m_associatedWithJobHasBeenSet = false;

    Aws::Vector<Capacity> m_deviceCapacities;
    bool m_deviceCapacitiesHasBeenSet = false;

    UnlockState m_deviceState{UnlockState::NOT_SET};
    bool m_deviceStateHasBeenSet = false;

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastReachedOutAt{};
    bool m_lastReachedOutAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_managedDeviceArn;
    bool m_managedDeviceArnHasBeenSet = false;

    Aws::String m_managedDeviceId;
    bool m_managedDeviceIdHasBeenSet = false;

    Aws::Vector<PhysicalNetworkInterface> m_physicalNetworkInterfaces;
    bool m_physicalNetworkInterfacesHasBeenSet = false;

    SoftwareInformation m_software;
    bool m_softwareHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
