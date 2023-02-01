/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/HealthStatus.h>
#include <aws/privatenetworks/model/Position.h>
#include <aws/privatenetworks/model/NetworkResourceStatus.h>
#include <aws/privatenetworks/model/NetworkResourceType.h>
#include <aws/privatenetworks/model/NameValuePair.h>
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
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about a network resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/NetworkResource">AWS
   * API Reference</a></p>
   */
  class NetworkResource
  {
  public:
    AWS_PRIVATENETWORKS_API NetworkResource();
    AWS_PRIVATENETWORKS_API NetworkResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API NetworkResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attributes of the network resource.</p>
     */
    inline const Aws::Vector<NameValuePair>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes of the network resource.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes of the network resource.</p>
     */
    inline void SetAttributes(const Aws::Vector<NameValuePair>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes of the network resource.</p>
     */
    inline void SetAttributes(Aws::Vector<NameValuePair>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes of the network resource.</p>
     */
    inline NetworkResource& WithAttributes(const Aws::Vector<NameValuePair>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes of the network resource.</p>
     */
    inline NetworkResource& WithAttributes(Aws::Vector<NameValuePair>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes of the network resource.</p>
     */
    inline NetworkResource& AddAttributes(const NameValuePair& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes of the network resource.</p>
     */
    inline NetworkResource& AddAttributes(NameValuePair&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The creation time of the network resource.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The creation time of the network resource.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The creation time of the network resource.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The creation time of the network resource.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The creation time of the network resource.</p>
     */
    inline NetworkResource& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The creation time of the network resource.</p>
     */
    inline NetworkResource& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description of the network resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the network resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the network resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the network resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the network resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the network resource.</p>
     */
    inline NetworkResource& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the network resource.</p>
     */
    inline NetworkResource& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the network resource.</p>
     */
    inline NetworkResource& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The health of the network resource.</p>
     */
    inline const HealthStatus& GetHealth() const{ return m_health; }

    /**
     * <p>The health of the network resource.</p>
     */
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }

    /**
     * <p>The health of the network resource.</p>
     */
    inline void SetHealth(const HealthStatus& value) { m_healthHasBeenSet = true; m_health = value; }

    /**
     * <p>The health of the network resource.</p>
     */
    inline void SetHealth(HealthStatus&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }

    /**
     * <p>The health of the network resource.</p>
     */
    inline NetworkResource& WithHealth(const HealthStatus& value) { SetHealth(value); return *this;}

    /**
     * <p>The health of the network resource.</p>
     */
    inline NetworkResource& WithHealth(HealthStatus&& value) { SetHealth(std::move(value)); return *this;}


    /**
     * <p>The model of the network resource.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>The model of the network resource.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>The model of the network resource.</p>
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The model of the network resource.</p>
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>The model of the network resource.</p>
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * <p>The model of the network resource.</p>
     */
    inline NetworkResource& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>The model of the network resource.</p>
     */
    inline NetworkResource& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * <p>The model of the network resource.</p>
     */
    inline NetworkResource& WithModel(const char* value) { SetModel(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network on which this network resource
     * appears.</p>
     */
    inline const Aws::String& GetNetworkArn() const{ return m_networkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which this network resource
     * appears.</p>
     */
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which this network resource
     * appears.</p>
     */
    inline void SetNetworkArn(const Aws::String& value) { m_networkArnHasBeenSet = true; m_networkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which this network resource
     * appears.</p>
     */
    inline void SetNetworkArn(Aws::String&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which this network resource
     * appears.</p>
     */
    inline void SetNetworkArn(const char* value) { m_networkArnHasBeenSet = true; m_networkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which this network resource
     * appears.</p>
     */
    inline NetworkResource& WithNetworkArn(const Aws::String& value) { SetNetworkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which this network resource
     * appears.</p>
     */
    inline NetworkResource& WithNetworkArn(Aws::String&& value) { SetNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network on which this network resource
     * appears.</p>
     */
    inline NetworkResource& WithNetworkArn(const char* value) { SetNetworkArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline const Aws::String& GetNetworkResourceArn() const{ return m_networkResourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline bool NetworkResourceArnHasBeenSet() const { return m_networkResourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetNetworkResourceArn(const Aws::String& value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetNetworkResourceArn(Aws::String&& value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetNetworkResourceArn(const char* value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline NetworkResource& WithNetworkResourceArn(const Aws::String& value) { SetNetworkResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline NetworkResource& WithNetworkResourceArn(Aws::String&& value) { SetNetworkResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline NetworkResource& WithNetworkResourceArn(const char* value) { SetNetworkResourceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network site on which this network
     * resource appears.</p>
     */
    inline const Aws::String& GetNetworkSiteArn() const{ return m_networkSiteArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site on which this network
     * resource appears.</p>
     */
    inline bool NetworkSiteArnHasBeenSet() const { return m_networkSiteArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site on which this network
     * resource appears.</p>
     */
    inline void SetNetworkSiteArn(const Aws::String& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site on which this network
     * resource appears.</p>
     */
    inline void SetNetworkSiteArn(Aws::String&& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site on which this network
     * resource appears.</p>
     */
    inline void SetNetworkSiteArn(const char* value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site on which this network
     * resource appears.</p>
     */
    inline NetworkResource& WithNetworkSiteArn(const Aws::String& value) { SetNetworkSiteArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network site on which this network
     * resource appears.</p>
     */
    inline NetworkResource& WithNetworkSiteArn(Aws::String&& value) { SetNetworkSiteArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network site on which this network
     * resource appears.</p>
     */
    inline NetworkResource& WithNetworkSiteArn(const char* value) { SetNetworkSiteArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase this network
     * resource.</p>
     */
    inline const Aws::String& GetOrderArn() const{ return m_orderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase this network
     * resource.</p>
     */
    inline bool OrderArnHasBeenSet() const { return m_orderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase this network
     * resource.</p>
     */
    inline void SetOrderArn(const Aws::String& value) { m_orderArnHasBeenSet = true; m_orderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase this network
     * resource.</p>
     */
    inline void SetOrderArn(Aws::String&& value) { m_orderArnHasBeenSet = true; m_orderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase this network
     * resource.</p>
     */
    inline void SetOrderArn(const char* value) { m_orderArnHasBeenSet = true; m_orderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase this network
     * resource.</p>
     */
    inline NetworkResource& WithOrderArn(const Aws::String& value) { SetOrderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase this network
     * resource.</p>
     */
    inline NetworkResource& WithOrderArn(Aws::String&& value) { SetOrderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase this network
     * resource.</p>
     */
    inline NetworkResource& WithOrderArn(const char* value) { SetOrderArn(value); return *this;}


    /**
     * <p>The position of the network resource.</p>
     */
    inline const Position& GetPosition() const{ return m_position; }

    /**
     * <p>The position of the network resource.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>The position of the network resource.</p>
     */
    inline void SetPosition(const Position& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The position of the network resource.</p>
     */
    inline void SetPosition(Position&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>The position of the network resource.</p>
     */
    inline NetworkResource& WithPosition(const Position& value) { SetPosition(value); return *this;}

    /**
     * <p>The position of the network resource.</p>
     */
    inline NetworkResource& WithPosition(Position&& value) { SetPosition(std::move(value)); return *this;}


    /**
     * <p>The serial number of the network resource.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>The serial number of the network resource.</p>
     */
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }

    /**
     * <p>The serial number of the network resource.</p>
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * <p>The serial number of the network resource.</p>
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }

    /**
     * <p>The serial number of the network resource.</p>
     */
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }

    /**
     * <p>The serial number of the network resource.</p>
     */
    inline NetworkResource& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The serial number of the network resource.</p>
     */
    inline NetworkResource& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The serial number of the network resource.</p>
     */
    inline NetworkResource& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * <p>The status of the network resource.</p>
     */
    inline const NetworkResourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the network resource.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the network resource.</p>
     */
    inline void SetStatus(const NetworkResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the network resource.</p>
     */
    inline void SetStatus(NetworkResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the network resource.</p>
     */
    inline NetworkResource& WithStatus(const NetworkResourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the network resource.</p>
     */
    inline NetworkResource& WithStatus(NetworkResourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status reason of the network resource.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The status reason of the network resource.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The status reason of the network resource.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The status reason of the network resource.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The status reason of the network resource.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The status reason of the network resource.</p>
     */
    inline NetworkResource& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The status reason of the network resource.</p>
     */
    inline NetworkResource& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The status reason of the network resource.</p>
     */
    inline NetworkResource& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The type of the network resource.</p>
     */
    inline const NetworkResourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the network resource.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the network resource.</p>
     */
    inline void SetType(const NetworkResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the network resource.</p>
     */
    inline void SetType(NetworkResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the network resource.</p>
     */
    inline NetworkResource& WithType(const NetworkResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the network resource.</p>
     */
    inline NetworkResource& WithType(NetworkResourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The vendor of the network resource.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }

    /**
     * <p>The vendor of the network resource.</p>
     */
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }

    /**
     * <p>The vendor of the network resource.</p>
     */
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }

    /**
     * <p>The vendor of the network resource.</p>
     */
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }

    /**
     * <p>The vendor of the network resource.</p>
     */
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }

    /**
     * <p>The vendor of the network resource.</p>
     */
    inline NetworkResource& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}

    /**
     * <p>The vendor of the network resource.</p>
     */
    inline NetworkResource& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}

    /**
     * <p>The vendor of the network resource.</p>
     */
    inline NetworkResource& WithVendor(const char* value) { SetVendor(value); return *this;}

  private:

    Aws::Vector<NameValuePair> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    HealthStatus m_health;
    bool m_healthHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_networkArn;
    bool m_networkArnHasBeenSet = false;

    Aws::String m_networkResourceArn;
    bool m_networkResourceArnHasBeenSet = false;

    Aws::String m_networkSiteArn;
    bool m_networkSiteArnHasBeenSet = false;

    Aws::String m_orderArn;
    bool m_orderArnHasBeenSet = false;

    Position m_position;
    bool m_positionHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    NetworkResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    NetworkResourceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
