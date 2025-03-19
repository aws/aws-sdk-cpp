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
    AWS_PRIVATENETWORKS_API NetworkResource() = default;
    AWS_PRIVATENETWORKS_API NetworkResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API NetworkResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attributes of the network resource.</p>
     */
    inline const Aws::Vector<NameValuePair>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<NameValuePair>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<NameValuePair>>
    NetworkResource& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = NameValuePair>
    NetworkResource& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the commitment period for the radio unit. Shows the
     * duration, the date and time that the contract started and ends, and the renewal
     * status of the commitment period.</p>
     */
    inline const CommitmentInformation& GetCommitmentInformation() const { return m_commitmentInformation; }
    inline bool CommitmentInformationHasBeenSet() const { return m_commitmentInformationHasBeenSet; }
    template<typename CommitmentInformationT = CommitmentInformation>
    void SetCommitmentInformation(CommitmentInformationT&& value) { m_commitmentInformationHasBeenSet = true; m_commitmentInformation = std::forward<CommitmentInformationT>(value); }
    template<typename CommitmentInformationT = CommitmentInformation>
    NetworkResource& WithCommitmentInformation(CommitmentInformationT&& value) { SetCommitmentInformation(std::forward<CommitmentInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the network resource.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    NetworkResource& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the network resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    NetworkResource& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health of the network resource.</p>
     */
    inline HealthStatus GetHealth() const { return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    inline void SetHealth(HealthStatus value) { m_healthHasBeenSet = true; m_health = value; }
    inline NetworkResource& WithHealth(HealthStatus value) { SetHealth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model of the network resource.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    NetworkResource& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network on which this network resource
     * appears.</p>
     */
    inline const Aws::String& GetNetworkArn() const { return m_networkArn; }
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }
    template<typename NetworkArnT = Aws::String>
    void SetNetworkArn(NetworkArnT&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::forward<NetworkArnT>(value); }
    template<typename NetworkArnT = Aws::String>
    NetworkResource& WithNetworkArn(NetworkArnT&& value) { SetNetworkArn(std::forward<NetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline const Aws::String& GetNetworkResourceArn() const { return m_networkResourceArn; }
    inline bool NetworkResourceArnHasBeenSet() const { return m_networkResourceArnHasBeenSet; }
    template<typename NetworkResourceArnT = Aws::String>
    void SetNetworkResourceArn(NetworkResourceArnT&& value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn = std::forward<NetworkResourceArnT>(value); }
    template<typename NetworkResourceArnT = Aws::String>
    NetworkResource& WithNetworkResourceArn(NetworkResourceArnT&& value) { SetNetworkResourceArn(std::forward<NetworkResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network site on which this network
     * resource appears.</p>
     */
    inline const Aws::String& GetNetworkSiteArn() const { return m_networkSiteArn; }
    inline bool NetworkSiteArnHasBeenSet() const { return m_networkSiteArnHasBeenSet; }
    template<typename NetworkSiteArnT = Aws::String>
    void SetNetworkSiteArn(NetworkSiteArnT&& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = std::forward<NetworkSiteArnT>(value); }
    template<typename NetworkSiteArnT = Aws::String>
    NetworkResource& WithNetworkSiteArn(NetworkSiteArnT&& value) { SetNetworkSiteArn(std::forward<NetworkSiteArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the order used to purchase this network
     * resource.</p>
     */
    inline const Aws::String& GetOrderArn() const { return m_orderArn; }
    inline bool OrderArnHasBeenSet() const { return m_orderArnHasBeenSet; }
    template<typename OrderArnT = Aws::String>
    void SetOrderArn(OrderArnT&& value) { m_orderArnHasBeenSet = true; m_orderArn = std::forward<OrderArnT>(value); }
    template<typename OrderArnT = Aws::String>
    NetworkResource& WithOrderArn(OrderArnT&& value) { SetOrderArn(std::forward<OrderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the network resource.</p>
     */
    inline const Position& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Position>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Position>
    NetworkResource& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a request to return the network resource.</p>
     */
    inline const ReturnInformation& GetReturnInformation() const { return m_returnInformation; }
    inline bool ReturnInformationHasBeenSet() const { return m_returnInformationHasBeenSet; }
    template<typename ReturnInformationT = ReturnInformation>
    void SetReturnInformation(ReturnInformationT&& value) { m_returnInformationHasBeenSet = true; m_returnInformation = std::forward<ReturnInformationT>(value); }
    template<typename ReturnInformationT = ReturnInformation>
    NetworkResource& WithReturnInformation(ReturnInformationT&& value) { SetReturnInformation(std::forward<ReturnInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number of the network resource.</p>
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    NetworkResource& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the network resource.</p>
     */
    inline NetworkResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(NetworkResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NetworkResource& WithStatus(NetworkResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the network resource.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    NetworkResource& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the network resource.</p>
     */
    inline NetworkResourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(NetworkResourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline NetworkResource& WithType(NetworkResourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vendor of the network resource.</p>
     */
    inline const Aws::String& GetVendor() const { return m_vendor; }
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }
    template<typename VendorT = Aws::String>
    void SetVendor(VendorT&& value) { m_vendorHasBeenSet = true; m_vendor = std::forward<VendorT>(value); }
    template<typename VendorT = Aws::String>
    NetworkResource& WithVendor(VendorT&& value) { SetVendor(std::forward<VendorT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NameValuePair> m_attributes;
    bool m_attributesHasBeenSet = false;

    CommitmentInformation m_commitmentInformation;
    bool m_commitmentInformationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    HealthStatus m_health{HealthStatus::NOT_SET};
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

    NetworkResourceStatus m_status{NetworkResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    NetworkResourceType m_type{NetworkResourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
