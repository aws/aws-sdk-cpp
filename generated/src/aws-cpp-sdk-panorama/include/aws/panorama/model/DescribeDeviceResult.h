/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/DeviceBrand.h>
#include <aws/core/utils/DateTime.h>
#include <aws/panorama/model/NetworkStatus.h>
#include <aws/panorama/model/DeviceAggregatedStatus.h>
#include <aws/panorama/model/DeviceConnectionStatus.h>
#include <aws/panorama/model/LatestDeviceJob.h>
#include <aws/panorama/model/NetworkPayload.h>
#include <aws/panorama/model/DeviceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/panorama/model/DeviceType.h>
#include <aws/panorama/model/AlternateSoftwareMetadata.h>
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
namespace Panorama
{
namespace Model
{
  class DescribeDeviceResult
  {
  public:
    AWS_PANORAMA_API DescribeDeviceResult() = default;
    AWS_PANORAMA_API DescribeDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Beta software releases available for the device.</p>
     */
    inline const Aws::Vector<AlternateSoftwareMetadata>& GetAlternateSoftwares() const { return m_alternateSoftwares; }
    template<typename AlternateSoftwaresT = Aws::Vector<AlternateSoftwareMetadata>>
    void SetAlternateSoftwares(AlternateSoftwaresT&& value) { m_alternateSoftwaresHasBeenSet = true; m_alternateSoftwares = std::forward<AlternateSoftwaresT>(value); }
    template<typename AlternateSoftwaresT = Aws::Vector<AlternateSoftwareMetadata>>
    DescribeDeviceResult& WithAlternateSoftwares(AlternateSoftwaresT&& value) { SetAlternateSoftwares(std::forward<AlternateSoftwaresT>(value)); return *this;}
    template<typename AlternateSoftwaresT = AlternateSoftwareMetadata>
    DescribeDeviceResult& AddAlternateSoftwares(AlternateSoftwaresT&& value) { m_alternateSoftwaresHasBeenSet = true; m_alternateSoftwares.emplace_back(std::forward<AlternateSoftwaresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The device's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeDeviceResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's maker.</p>
     */
    inline DeviceBrand GetBrand() const { return m_brand; }
    inline void SetBrand(DeviceBrand value) { m_brandHasBeenSet = true; m_brand = value; }
    inline DescribeDeviceResult& WithBrand(DeviceBrand value) { SetBrand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the device was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DescribeDeviceResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's networking status.</p>
     */
    inline const NetworkStatus& GetCurrentNetworkingStatus() const { return m_currentNetworkingStatus; }
    template<typename CurrentNetworkingStatusT = NetworkStatus>
    void SetCurrentNetworkingStatus(CurrentNetworkingStatusT&& value) { m_currentNetworkingStatusHasBeenSet = true; m_currentNetworkingStatus = std::forward<CurrentNetworkingStatusT>(value); }
    template<typename CurrentNetworkingStatusT = NetworkStatus>
    DescribeDeviceResult& WithCurrentNetworkingStatus(CurrentNetworkingStatusT&& value) { SetCurrentNetworkingStatus(std::forward<CurrentNetworkingStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's current software version.</p>
     */
    inline const Aws::String& GetCurrentSoftware() const { return m_currentSoftware; }
    template<typename CurrentSoftwareT = Aws::String>
    void SetCurrentSoftware(CurrentSoftwareT&& value) { m_currentSoftwareHasBeenSet = true; m_currentSoftware = std::forward<CurrentSoftwareT>(value); }
    template<typename CurrentSoftwareT = Aws::String>
    DescribeDeviceResult& WithCurrentSoftware(CurrentSoftwareT&& value) { SetCurrentSoftware(std::forward<CurrentSoftwareT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeDeviceResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A device's aggregated status. Including the device's connection status,
     * provisioning status, and lease status.</p>
     */
    inline DeviceAggregatedStatus GetDeviceAggregatedStatus() const { return m_deviceAggregatedStatus; }
    inline void SetDeviceAggregatedStatus(DeviceAggregatedStatus value) { m_deviceAggregatedStatusHasBeenSet = true; m_deviceAggregatedStatus = value; }
    inline DescribeDeviceResult& WithDeviceAggregatedStatus(DeviceAggregatedStatus value) { SetDeviceAggregatedStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's connection status.</p>
     */
    inline DeviceConnectionStatus GetDeviceConnectionStatus() const { return m_deviceConnectionStatus; }
    inline void SetDeviceConnectionStatus(DeviceConnectionStatus value) { m_deviceConnectionStatusHasBeenSet = true; m_deviceConnectionStatus = value; }
    inline DescribeDeviceResult& WithDeviceConnectionStatus(DeviceConnectionStatus value) { SetDeviceConnectionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    DescribeDeviceResult& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent beta software release.</p>
     */
    inline const Aws::String& GetLatestAlternateSoftware() const { return m_latestAlternateSoftware; }
    template<typename LatestAlternateSoftwareT = Aws::String>
    void SetLatestAlternateSoftware(LatestAlternateSoftwareT&& value) { m_latestAlternateSoftwareHasBeenSet = true; m_latestAlternateSoftware = std::forward<LatestAlternateSoftwareT>(value); }
    template<typename LatestAlternateSoftwareT = Aws::String>
    DescribeDeviceResult& WithLatestAlternateSoftware(LatestAlternateSoftwareT&& value) { SetLatestAlternateSoftware(std::forward<LatestAlternateSoftwareT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A device's latest job. Includes the target image version, and the job
     * status.</p>
     */
    inline const LatestDeviceJob& GetLatestDeviceJob() const { return m_latestDeviceJob; }
    template<typename LatestDeviceJobT = LatestDeviceJob>
    void SetLatestDeviceJob(LatestDeviceJobT&& value) { m_latestDeviceJobHasBeenSet = true; m_latestDeviceJob = std::forward<LatestDeviceJobT>(value); }
    template<typename LatestDeviceJobT = LatestDeviceJob>
    DescribeDeviceResult& WithLatestDeviceJob(LatestDeviceJobT&& value) { SetLatestDeviceJob(std::forward<LatestDeviceJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest software version available for the device.</p>
     */
    inline const Aws::String& GetLatestSoftware() const { return m_latestSoftware; }
    template<typename LatestSoftwareT = Aws::String>
    void SetLatestSoftware(LatestSoftwareT&& value) { m_latestSoftwareHasBeenSet = true; m_latestSoftware = std::forward<LatestSoftwareT>(value); }
    template<typename LatestSoftwareT = Aws::String>
    DescribeDeviceResult& WithLatestSoftware(LatestSoftwareT&& value) { SetLatestSoftware(std::forward<LatestSoftwareT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's lease expiration time.</p>
     */
    inline const Aws::Utils::DateTime& GetLeaseExpirationTime() const { return m_leaseExpirationTime; }
    template<typename LeaseExpirationTimeT = Aws::Utils::DateTime>
    void SetLeaseExpirationTime(LeaseExpirationTimeT&& value) { m_leaseExpirationTimeHasBeenSet = true; m_leaseExpirationTime = std::forward<LeaseExpirationTimeT>(value); }
    template<typename LeaseExpirationTimeT = Aws::Utils::DateTime>
    DescribeDeviceResult& WithLeaseExpirationTime(LeaseExpirationTimeT&& value) { SetLeaseExpirationTime(std::forward<LeaseExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeDeviceResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's networking configuration.</p>
     */
    inline const NetworkPayload& GetNetworkingConfiguration() const { return m_networkingConfiguration; }
    template<typename NetworkingConfigurationT = NetworkPayload>
    void SetNetworkingConfiguration(NetworkingConfigurationT&& value) { m_networkingConfigurationHasBeenSet = true; m_networkingConfiguration = std::forward<NetworkingConfigurationT>(value); }
    template<typename NetworkingConfigurationT = NetworkPayload>
    DescribeDeviceResult& WithNetworkingConfiguration(NetworkingConfigurationT&& value) { SetNetworkingConfiguration(std::forward<NetworkingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's provisioning status.</p>
     */
    inline DeviceStatus GetProvisioningStatus() const { return m_provisioningStatus; }
    inline void SetProvisioningStatus(DeviceStatus value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = value; }
    inline DescribeDeviceResult& WithProvisioningStatus(DeviceStatus value) { SetProvisioningStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's serial number.</p>
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    DescribeDeviceResult& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's tags.</p>
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
    /**
     * <p>The device's type.</p>
     */
    inline DeviceType GetType() const { return m_type; }
    inline void SetType(DeviceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeDeviceResult& WithType(DeviceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeviceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AlternateSoftwareMetadata> m_alternateSoftwares;
    bool m_alternateSoftwaresHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DeviceBrand m_brand{DeviceBrand::NOT_SET};
    bool m_brandHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    NetworkStatus m_currentNetworkingStatus;
    bool m_currentNetworkingStatusHasBeenSet = false;

    Aws::String m_currentSoftware;
    bool m_currentSoftwareHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DeviceAggregatedStatus m_deviceAggregatedStatus{DeviceAggregatedStatus::NOT_SET};
    bool m_deviceAggregatedStatusHasBeenSet = false;

    DeviceConnectionStatus m_deviceConnectionStatus{DeviceConnectionStatus::NOT_SET};
    bool m_deviceConnectionStatusHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_latestAlternateSoftware;
    bool m_latestAlternateSoftwareHasBeenSet = false;

    LatestDeviceJob m_latestDeviceJob;
    bool m_latestDeviceJobHasBeenSet = false;

    Aws::String m_latestSoftware;
    bool m_latestSoftwareHasBeenSet = false;

    Aws::Utils::DateTime m_leaseExpirationTime{};
    bool m_leaseExpirationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NetworkPayload m_networkingConfiguration;
    bool m_networkingConfigurationHasBeenSet = false;

    DeviceStatus m_provisioningStatus{DeviceStatus::NOT_SET};
    bool m_provisioningStatusHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    DeviceType m_type{DeviceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
