/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/privatenetworks/model/CommitmentInformation.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/HealthStatus.h>
#include <aws/privatenetworks/model/Position.h>
#include <aws/privatenetworks/model/ReturnInformation.h>
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


    ///@{
    /**
     * <p>The attributes of the network resource.</p>
     */
    inline const Aws::Vector<NameValuePair>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<NameValuePair>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<NameValuePair>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline NetworkResource& WithAttributes(const Aws::Vector<NameValuePair>& value) { SetAttributes(value); return *this;}
    inline NetworkResource& WithAttributes(Aws::Vector<NameValuePair>&& value) { SetAttributes(std::move(value)); return *this;}
    inline NetworkResource& AddAttributes(const NameValuePair& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline NetworkResource& AddAttributes(NameValuePair&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the commitment period for the radio unit. Shows the
     * duration, the date and time that the contract started and ends, and the renewal
     * status of the commitment period.</p>
     */
    inline const CommitmentInformation& GetCommitmentInformation() const{ return m_commitmentInformation; }
    inline bool CommitmentInformationHasBeenSet() const { return m_commitmentInformationHasBeenSet; }
    inline void SetCommitmentInformation(const CommitmentInformation& value) { m_commitmentInformationHasBeenSet = true; m_commitmentInformation = value; }
    inline void SetCommitmentInformation(CommitmentInformation&& value) { m_commitmentInformationHasBeenSet = true; m_commitmentInformation = std::move(value); }
    inline NetworkResource& WithCommitmentInformation(const CommitmentInformation& value) { SetCommitmentInformation(value); return *this;}
    inline NetworkResource& WithCommitmentInformation(CommitmentInformation&& value) { SetCommitmentInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the network resource.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline NetworkResource& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline NetworkResource& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the network resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline NetworkResource& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline NetworkResource& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline NetworkResource& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health of the network resource.</p>
     */
    inline const HealthStatus& GetHealth() const{ return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    inline void SetHealth(const HealthStatus& value) { m_healthHasBeenSet = true; m_health = value; }
    inline void SetHealth(HealthStatus&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }
    inline NetworkResource& WithHealth(const HealthStatus& value) { SetHealth(value); return *this;}
    inline NetworkResource& WithHealth(HealthStatus&& value) { SetHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model of the network resource.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }
    inline NetworkResource& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline NetworkResource& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline NetworkResource& WithModel(const char* value) { SetModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network on which this network resource
     * appears.</p>
     */
    inline const Aws::String& GetNetworkArn() const{ return m_networkArn; }
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }
    inline void SetNetworkArn(const Aws::String& value) { m_networkArnHasBeenSet = true; m_networkArn = value; }
    inline void SetNetworkArn(Aws::String&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::move(value); }
    inline void SetNetworkArn(const char* value) { m_networkArnHasBeenSet = true; m_networkArn.assign(value); }
    inline NetworkResource& WithNetworkArn(const Aws::String& value) { SetNetworkArn(value); return *this;}
    inline NetworkResource& WithNetworkArn(Aws::String&& value) { SetNetworkArn(std::move(value)); return *this;}
    inline NetworkResource& WithNetworkArn(const char* value) { SetNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline const Aws::String& GetNetworkResourceArn() const{ return m_networkResourceArn; }
    inline bool NetworkResourceArnHasBeenSet() const { return m_networkResourceArnHasBeenSet; }
    inline void SetNetworkResourceArn(const Aws::String& value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn = value; }
    inline void SetNetworkResourceArn(Aws::String&& value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn = std::move(value); }
    inline void SetNetworkResourceArn(const char* value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn.assign(value); }
    inline NetworkResource& WithNetworkResourceArn(const Aws::String& value) { SetNetworkResourceArn(value); return *this;}
    inline NetworkResource& WithNetworkResourceArn(Aws::String&& value) { SetNetworkResourceArn(std::move(value)); return *this;}
    inline NetworkResource& WithNetworkResourceArn(const char* value) { SetNetworkResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network site on which this network
     * resource appears.</p>
     */
    inline const Aws::String& GetNetworkSiteArn() const{ return m_networkSiteArn; }
    inline bool NetworkSiteArnHasBeenSet() const { return m_networkSiteArnHasBeenSet; }
    inline void SetNetworkSiteArn(const Aws::String& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = value; }
    inline void SetNetworkSiteArn(Aws::String&& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = std::move(value); }
    inline void SetNetworkSiteArn(const char* value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn.assign(value); }
    inline NetworkResource& WithNetworkSiteArn(const Aws::String& value) { SetNetworkSiteArn(value); return *this;}
    inline NetworkResource& WithNetworkSiteArn(Aws::String&& value) { SetNetworkSiteArn(std::move(value)); return *this;}
    inline NetworkResource& WithNetworkSiteArn(const char* value) { SetNetworkSiteArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase this network
     * resource.</p>
     */
    inline const Aws::String& GetOrderArn() const{ return m_orderArn; }
    inline bool OrderArnHasBeenSet() const { return m_orderArnHasBeenSet; }
    inline void SetOrderArn(const Aws::String& value) { m_orderArnHasBeenSet = true; m_orderArn = value; }
    inline void SetOrderArn(Aws::String&& value) { m_orderArnHasBeenSet = true; m_orderArn = std::move(value); }
    inline void SetOrderArn(const char* value) { m_orderArnHasBeenSet = true; m_orderArn.assign(value); }
    inline NetworkResource& WithOrderArn(const Aws::String& value) { SetOrderArn(value); return *this;}
    inline NetworkResource& WithOrderArn(Aws::String&& value) { SetOrderArn(std::move(value)); return *this;}
    inline NetworkResource& WithOrderArn(const char* value) { SetOrderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the network resource.</p>
     */
    inline const Position& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Position& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Position&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline NetworkResource& WithPosition(const Position& value) { SetPosition(value); return *this;}
    inline NetworkResource& WithPosition(Position&& value) { SetPosition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a request to return the network resource.</p>
     */
    inline const ReturnInformation& GetReturnInformation() const{ return m_returnInformation; }
    inline bool ReturnInformationHasBeenSet() const { return m_returnInformationHasBeenSet; }
    inline void SetReturnInformation(const ReturnInformation& value) { m_returnInformationHasBeenSet = true; m_returnInformation = value; }
    inline void SetReturnInformation(ReturnInformation&& value) { m_returnInformationHasBeenSet = true; m_returnInformation = std::move(value); }
    inline NetworkResource& WithReturnInformation(const ReturnInformation& value) { SetReturnInformation(value); return *this;}
    inline NetworkResource& WithReturnInformation(ReturnInformation&& value) { SetReturnInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number of the network resource.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }
    inline NetworkResource& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}
    inline NetworkResource& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}
    inline NetworkResource& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the network resource.</p>
     */
    inline const NetworkResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const NetworkResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(NetworkResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline NetworkResource& WithStatus(const NetworkResourceStatus& value) { SetStatus(value); return *this;}
    inline NetworkResource& WithStatus(NetworkResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the network resource.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline NetworkResource& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline NetworkResource& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline NetworkResource& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the network resource.</p>
     */
    inline const NetworkResourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const NetworkResourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(NetworkResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline NetworkResource& WithType(const NetworkResourceType& value) { SetType(value); return *this;}
    inline NetworkResource& WithType(NetworkResourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vendor of the network resource.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }
    inline NetworkResource& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}
    inline NetworkResource& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}
    inline NetworkResource& WithVendor(const char* value) { SetVendor(value); return *this;}
    ///@}
  private:

    Aws::Vector<NameValuePair> m_attributes;
    bool m_attributesHasBeenSet = false;

    CommitmentInformation m_commitmentInformation;
    bool m_commitmentInformationHasBeenSet = false;

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

    ReturnInformation m_returnInformation;
    bool m_returnInformationHasBeenSet = false;

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
