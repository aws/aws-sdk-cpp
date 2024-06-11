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
    AWS_PANORAMA_API Device();
    AWS_PANORAMA_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device's maker.</p>
     */
    inline const DeviceBrand& GetBrand() const{ return m_brand; }
    inline bool BrandHasBeenSet() const { return m_brandHasBeenSet; }
    inline void SetBrand(const DeviceBrand& value) { m_brandHasBeenSet = true; m_brand = value; }
    inline void SetBrand(DeviceBrand&& value) { m_brandHasBeenSet = true; m_brand = std::move(value); }
    inline Device& WithBrand(const DeviceBrand& value) { SetBrand(value); return *this;}
    inline Device& WithBrand(DeviceBrand&& value) { SetBrand(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the device was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Device& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Device& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A device's current software.</p>
     */
    inline const Aws::String& GetCurrentSoftware() const{ return m_currentSoftware; }
    inline bool CurrentSoftwareHasBeenSet() const { return m_currentSoftwareHasBeenSet; }
    inline void SetCurrentSoftware(const Aws::String& value) { m_currentSoftwareHasBeenSet = true; m_currentSoftware = value; }
    inline void SetCurrentSoftware(Aws::String&& value) { m_currentSoftwareHasBeenSet = true; m_currentSoftware = std::move(value); }
    inline void SetCurrentSoftware(const char* value) { m_currentSoftwareHasBeenSet = true; m_currentSoftware.assign(value); }
    inline Device& WithCurrentSoftware(const Aws::String& value) { SetCurrentSoftware(value); return *this;}
    inline Device& WithCurrentSoftware(Aws::String&& value) { SetCurrentSoftware(std::move(value)); return *this;}
    inline Device& WithCurrentSoftware(const char* value) { SetCurrentSoftware(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the device.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Device& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Device& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Device& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline const DeviceAggregatedStatus& GetDeviceAggregatedStatus() const{ return m_deviceAggregatedStatus; }
    inline bool DeviceAggregatedStatusHasBeenSet() const { return m_deviceAggregatedStatusHasBeenSet; }
    inline void SetDeviceAggregatedStatus(const DeviceAggregatedStatus& value) { m_deviceAggregatedStatusHasBeenSet = true; m_deviceAggregatedStatus = value; }
    inline void SetDeviceAggregatedStatus(DeviceAggregatedStatus&& value) { m_deviceAggregatedStatusHasBeenSet = true; m_deviceAggregatedStatus = std::move(value); }
    inline Device& WithDeviceAggregatedStatus(const DeviceAggregatedStatus& value) { SetDeviceAggregatedStatus(value); return *this;}
    inline Device& WithDeviceAggregatedStatus(DeviceAggregatedStatus&& value) { SetDeviceAggregatedStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline Device& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline Device& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline Device& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the device was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline Device& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline Device& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A device's latest job. Includes the target image version, and the update job
     * status.</p>
     */
    inline const LatestDeviceJob& GetLatestDeviceJob() const{ return m_latestDeviceJob; }
    inline bool LatestDeviceJobHasBeenSet() const { return m_latestDeviceJobHasBeenSet; }
    inline void SetLatestDeviceJob(const LatestDeviceJob& value) { m_latestDeviceJobHasBeenSet = true; m_latestDeviceJob = value; }
    inline void SetLatestDeviceJob(LatestDeviceJob&& value) { m_latestDeviceJobHasBeenSet = true; m_latestDeviceJob = std::move(value); }
    inline Device& WithLatestDeviceJob(const LatestDeviceJob& value) { SetLatestDeviceJob(value); return *this;}
    inline Device& WithLatestDeviceJob(LatestDeviceJob&& value) { SetLatestDeviceJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's lease expiration time.</p>
     */
    inline const Aws::Utils::DateTime& GetLeaseExpirationTime() const{ return m_leaseExpirationTime; }
    inline bool LeaseExpirationTimeHasBeenSet() const { return m_leaseExpirationTimeHasBeenSet; }
    inline void SetLeaseExpirationTime(const Aws::Utils::DateTime& value) { m_leaseExpirationTimeHasBeenSet = true; m_leaseExpirationTime = value; }
    inline void SetLeaseExpirationTime(Aws::Utils::DateTime&& value) { m_leaseExpirationTimeHasBeenSet = true; m_leaseExpirationTime = std::move(value); }
    inline Device& WithLeaseExpirationTime(const Aws::Utils::DateTime& value) { SetLeaseExpirationTime(value); return *this;}
    inline Device& WithLeaseExpirationTime(Aws::Utils::DateTime&& value) { SetLeaseExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Device& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Device& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Device& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's provisioning status.</p>
     */
    inline const DeviceStatus& GetProvisioningStatus() const{ return m_provisioningStatus; }
    inline bool ProvisioningStatusHasBeenSet() const { return m_provisioningStatusHasBeenSet; }
    inline void SetProvisioningStatus(const DeviceStatus& value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = value; }
    inline void SetProvisioningStatus(DeviceStatus&& value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = std::move(value); }
    inline Device& WithProvisioningStatus(const DeviceStatus& value) { SetProvisioningStatus(value); return *this;}
    inline Device& WithProvisioningStatus(DeviceStatus&& value) { SetProvisioningStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Device& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Device& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Device& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Device& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Device& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Device& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Device& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Device& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Device& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The device's type.</p>
     */
    inline const DeviceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DeviceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DeviceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Device& WithType(const DeviceType& value) { SetType(value); return *this;}
    inline Device& WithType(DeviceType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    DeviceBrand m_brand;
    bool m_brandHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_currentSoftware;
    bool m_currentSoftwareHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DeviceAggregatedStatus m_deviceAggregatedStatus;
    bool m_deviceAggregatedStatusHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    LatestDeviceJob m_latestDeviceJob;
    bool m_latestDeviceJobHasBeenSet = false;

    Aws::Utils::DateTime m_leaseExpirationTime;
    bool m_leaseExpirationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DeviceStatus m_provisioningStatus;
    bool m_provisioningStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DeviceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
