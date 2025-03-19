/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/DeviceBrand.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/DeviceAggregatedStatus.h>
#include <aws/panorama/model/LatestDeviceJob.h>
#include <aws/panorama/model/DeviceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/panorama/model/DeviceType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Panorama
{
namespace Model
{

  /**
   * <p>A device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/Device">AWS API
   * Reference</a></p>
   */
  class Device
  {
  public:
    AWS_PANORAMA_API Device() = default;
    AWS_PANORAMA_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device's maker.</p>
     */
    inline DeviceBrand GetBrand() const { return m_brand; }
    inline bool BrandHasBeenSet() const { return m_brandHasBeenSet; }
    inline void SetBrand(DeviceBrand value) { m_brandHasBeenSet = true; m_brand = value; }
    inline Device& WithBrand(DeviceBrand value) { SetBrand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the device was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Device& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A device's current software.</p>
     */
    inline const Aws::String& GetCurrentSoftware() const { return m_currentSoftware; }
    inline bool CurrentSoftwareHasBeenSet() const { return m_currentSoftwareHasBeenSet; }
    template<typename CurrentSoftwareT = Aws::String>
    void SetCurrentSoftware(CurrentSoftwareT&& value) { m_currentSoftwareHasBeenSet = true; m_currentSoftware = std::forward<CurrentSoftwareT>(value); }
    template<typename CurrentSoftwareT = Aws::String>
    Device& WithCurrentSoftware(CurrentSoftwareT&& value) { SetCurrentSoftware(std::forward<CurrentSoftwareT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the device.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Device& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline DeviceAggregatedStatus GetDeviceAggregatedStatus() const { return m_deviceAggregatedStatus; }
    inline bool DeviceAggregatedStatusHasBeenSet() const { return m_deviceAggregatedStatusHasBeenSet; }
    inline void SetDeviceAggregatedStatus(DeviceAggregatedStatus value) { m_deviceAggregatedStatusHasBeenSet = true; m_deviceAggregatedStatus = value; }
    inline Device& WithDeviceAggregatedStatus(DeviceAggregatedStatus value) { SetDeviceAggregatedStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    Device& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the device was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Device& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A device's latest job. Includes the target image version, and the update job
     * status.</p>
     */
    inline const LatestDeviceJob& GetLatestDeviceJob() const { return m_latestDeviceJob; }
    inline bool LatestDeviceJobHasBeenSet() const { return m_latestDeviceJobHasBeenSet; }
    template<typename LatestDeviceJobT = LatestDeviceJob>
    void SetLatestDeviceJob(LatestDeviceJobT&& value) { m_latestDeviceJobHasBeenSet = true; m_latestDeviceJob = std::forward<LatestDeviceJobT>(value); }
    template<typename LatestDeviceJobT = LatestDeviceJob>
    Device& WithLatestDeviceJob(LatestDeviceJobT&& value) { SetLatestDeviceJob(std::forward<LatestDeviceJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's lease expiration time.</p>
     */
    inline const Aws::Utils::DateTime& GetLeaseExpirationTime() const { return m_leaseExpirationTime; }
    inline bool LeaseExpirationTimeHasBeenSet() const { return m_leaseExpirationTimeHasBeenSet; }
    template<typename LeaseExpirationTimeT = Aws::Utils::DateTime>
    void SetLeaseExpirationTime(LeaseExpirationTimeT&& value) { m_leaseExpirationTimeHasBeenSet = true; m_leaseExpirationTime = std::forward<LeaseExpirationTimeT>(value); }
    template<typename LeaseExpirationTimeT = Aws::Utils::DateTime>
    Device& WithLeaseExpirationTime(LeaseExpirationTimeT&& value) { SetLeaseExpirationTime(std::forward<LeaseExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Device& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's provisioning status.</p>
     */
    inline DeviceStatus GetProvisioningStatus() const { return m_provisioningStatus; }
    inline bool ProvisioningStatusHasBeenSet() const { return m_provisioningStatusHasBeenSet; }
    inline void SetProvisioningStatus(DeviceStatus value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = value; }
    inline Device& WithProvisioningStatus(DeviceStatus value) { SetProvisioningStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Device& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Device& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The device's type.</p>
     */
    inline DeviceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DeviceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Device& WithType(DeviceType value) { SetType(value); return *this;}
    ///@}
  private:

    DeviceBrand m_brand{DeviceBrand::NOT_SET};
    bool m_brandHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_currentSoftware;
    bool m_currentSoftwareHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DeviceAggregatedStatus m_deviceAggregatedStatus{DeviceAggregatedStatus::NOT_SET};
    bool m_deviceAggregatedStatusHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    LatestDeviceJob m_latestDeviceJob;
    bool m_latestDeviceJobHasBeenSet = false;

    Aws::Utils::DateTime m_leaseExpirationTime{};
    bool m_leaseExpirationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DeviceStatus m_provisioningStatus{DeviceStatus::NOT_SET};
    bool m_provisioningStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DeviceType m_type{DeviceType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
