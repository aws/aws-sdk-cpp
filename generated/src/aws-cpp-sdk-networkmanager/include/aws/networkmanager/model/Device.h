/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/AWSLocation.h>
#include <aws/networkmanager/model/Location.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/DeviceState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/Tag.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Device">AWS
   * API Reference</a></p>
   */
  class Device
  {
  public:
    AWS_NETWORKMANAGER_API Device();
    AWS_NETWORKMANAGER_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The ID of the device.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The ID of the device.</p>
     */
    inline Device& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline Device& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline Device& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline Device& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline Device& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline Device& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline Device& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline Device& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline Device& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The Amazon Web Services location of the device.</p>
     */
    inline const AWSLocation& GetAWSLocation() const{ return m_aWSLocation; }

    /**
     * <p>The Amazon Web Services location of the device.</p>
     */
    inline bool AWSLocationHasBeenSet() const { return m_aWSLocationHasBeenSet; }

    /**
     * <p>The Amazon Web Services location of the device.</p>
     */
    inline void SetAWSLocation(const AWSLocation& value) { m_aWSLocationHasBeenSet = true; m_aWSLocation = value; }

    /**
     * <p>The Amazon Web Services location of the device.</p>
     */
    inline void SetAWSLocation(AWSLocation&& value) { m_aWSLocationHasBeenSet = true; m_aWSLocation = std::move(value); }

    /**
     * <p>The Amazon Web Services location of the device.</p>
     */
    inline Device& WithAWSLocation(const AWSLocation& value) { SetAWSLocation(value); return *this;}

    /**
     * <p>The Amazon Web Services location of the device.</p>
     */
    inline Device& WithAWSLocation(AWSLocation&& value) { SetAWSLocation(std::move(value)); return *this;}


    /**
     * <p>The description of the device.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the device.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the device.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the device.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the device.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the device.</p>
     */
    inline Device& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the device.</p>
     */
    inline Device& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the device.</p>
     */
    inline Device& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The device type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The device type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The device type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The device type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The device type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The device type.</p>
     */
    inline Device& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The device type.</p>
     */
    inline Device& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The device type.</p>
     */
    inline Device& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The device vendor.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }

    /**
     * <p>The device vendor.</p>
     */
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }

    /**
     * <p>The device vendor.</p>
     */
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }

    /**
     * <p>The device vendor.</p>
     */
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }

    /**
     * <p>The device vendor.</p>
     */
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }

    /**
     * <p>The device vendor.</p>
     */
    inline Device& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}

    /**
     * <p>The device vendor.</p>
     */
    inline Device& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}

    /**
     * <p>The device vendor.</p>
     */
    inline Device& WithVendor(const char* value) { SetVendor(value); return *this;}


    /**
     * <p>The device model.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>The device model.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>The device model.</p>
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The device model.</p>
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>The device model.</p>
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * <p>The device model.</p>
     */
    inline Device& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>The device model.</p>
     */
    inline Device& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * <p>The device model.</p>
     */
    inline Device& WithModel(const char* value) { SetModel(value); return *this;}


    /**
     * <p>The device serial number.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>The device serial number.</p>
     */
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }

    /**
     * <p>The device serial number.</p>
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * <p>The device serial number.</p>
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }

    /**
     * <p>The device serial number.</p>
     */
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }

    /**
     * <p>The device serial number.</p>
     */
    inline Device& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The device serial number.</p>
     */
    inline Device& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The device serial number.</p>
     */
    inline Device& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * <p>The site location.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>The site location.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The site location.</p>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The site location.</p>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The site location.</p>
     */
    inline Device& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>The site location.</p>
     */
    inline Device& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The site ID.</p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    /**
     * <p>The site ID.</p>
     */
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    /**
     * <p>The site ID.</p>
     */
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    /**
     * <p>The site ID.</p>
     */
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    /**
     * <p>The site ID.</p>
     */
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    /**
     * <p>The site ID.</p>
     */
    inline Device& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p>The site ID.</p>
     */
    inline Device& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p>The site ID.</p>
     */
    inline Device& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    /**
     * <p>The date and time that the site was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the site was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the site was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the site was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the site was created.</p>
     */
    inline Device& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the site was created.</p>
     */
    inline Device& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The device state.</p>
     */
    inline const DeviceState& GetState() const{ return m_state; }

    /**
     * <p>The device state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The device state.</p>
     */
    inline void SetState(const DeviceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The device state.</p>
     */
    inline void SetState(DeviceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The device state.</p>
     */
    inline Device& WithState(const DeviceState& value) { SetState(value); return *this;}

    /**
     * <p>The device state.</p>
     */
    inline Device& WithState(DeviceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags for the device.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the device.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the device.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the device.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the device.</p>
     */
    inline Device& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the device.</p>
     */
    inline Device& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the device.</p>
     */
    inline Device& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the device.</p>
     */
    inline Device& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    AWSLocation m_aWSLocation;
    bool m_aWSLocationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    DeviceState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
