/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/AcknowledgmentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/privatenetworks/model/Address.h>
#include <aws/privatenetworks/model/OrderedResourceDefinition.h>
#include <aws/privatenetworks/model/TrackingInformation.h>
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
   * <p>Information about an order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/Order">AWS
   * API Reference</a></p>
   */
  class Order
  {
  public:
    AWS_PRIVATENETWORKS_API Order() = default;
    AWS_PRIVATENETWORKS_API Order(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Order& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The acknowledgement status of the order.</p>
     */
    inline AcknowledgmentStatus GetAcknowledgmentStatus() const { return m_acknowledgmentStatus; }
    inline bool AcknowledgmentStatusHasBeenSet() const { return m_acknowledgmentStatusHasBeenSet; }
    inline void SetAcknowledgmentStatus(AcknowledgmentStatus value) { m_acknowledgmentStatusHasBeenSet = true; m_acknowledgmentStatus = value; }
    inline Order& WithAcknowledgmentStatus(AcknowledgmentStatus value) { SetAcknowledgmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the order.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Order& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network associated with this order.</p>
     */
    inline const Aws::String& GetNetworkArn() const { return m_networkArn; }
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }
    template<typename NetworkArnT = Aws::String>
    void SetNetworkArn(NetworkArnT&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::forward<NetworkArnT>(value); }
    template<typename NetworkArnT = Aws::String>
    Order& WithNetworkArn(NetworkArnT&& value) { SetNetworkArn(std::forward<NetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network site associated with this
     * order.</p>
     */
    inline const Aws::String& GetNetworkSiteArn() const { return m_networkSiteArn; }
    inline bool NetworkSiteArnHasBeenSet() const { return m_networkSiteArnHasBeenSet; }
    template<typename NetworkSiteArnT = Aws::String>
    void SetNetworkSiteArn(NetworkSiteArnT&& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = std::forward<NetworkSiteArnT>(value); }
    template<typename NetworkSiteArnT = Aws::String>
    Order& WithNetworkSiteArn(NetworkSiteArnT&& value) { SetNetworkSiteArn(std::forward<NetworkSiteArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the order.</p>
     */
    inline const Aws::String& GetOrderArn() const { return m_orderArn; }
    inline bool OrderArnHasBeenSet() const { return m_orderArnHasBeenSet; }
    template<typename OrderArnT = Aws::String>
    void SetOrderArn(OrderArnT&& value) { m_orderArnHasBeenSet = true; m_orderArn = std::forward<OrderArnT>(value); }
    template<typename OrderArnT = Aws::String>
    Order& WithOrderArn(OrderArnT&& value) { SetOrderArn(std::forward<OrderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the network resources placed in the order.</p>
     */
    inline const Aws::Vector<OrderedResourceDefinition>& GetOrderedResources() const { return m_orderedResources; }
    inline bool OrderedResourcesHasBeenSet() const { return m_orderedResourcesHasBeenSet; }
    template<typename OrderedResourcesT = Aws::Vector<OrderedResourceDefinition>>
    void SetOrderedResources(OrderedResourcesT&& value) { m_orderedResourcesHasBeenSet = true; m_orderedResources = std::forward<OrderedResourcesT>(value); }
    template<typename OrderedResourcesT = Aws::Vector<OrderedResourceDefinition>>
    Order& WithOrderedResources(OrderedResourcesT&& value) { SetOrderedResources(std::forward<OrderedResourcesT>(value)); return *this;}
    template<typename OrderedResourcesT = OrderedResourceDefinition>
    Order& AddOrderedResources(OrderedResourcesT&& value) { m_orderedResourcesHasBeenSet = true; m_orderedResources.emplace_back(std::forward<OrderedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shipping address of the order.</p>
     */
    inline const Address& GetShippingAddress() const { return m_shippingAddress; }
    inline bool ShippingAddressHasBeenSet() const { return m_shippingAddressHasBeenSet; }
    template<typename ShippingAddressT = Address>
    void SetShippingAddress(ShippingAddressT&& value) { m_shippingAddressHasBeenSet = true; m_shippingAddress = std::forward<ShippingAddressT>(value); }
    template<typename ShippingAddressT = Address>
    Order& WithShippingAddress(ShippingAddressT&& value) { SetShippingAddress(std::forward<ShippingAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tracking information of the order.</p>
     */
    inline const Aws::Vector<TrackingInformation>& GetTrackingInformation() const { return m_trackingInformation; }
    inline bool TrackingInformationHasBeenSet() const { return m_trackingInformationHasBeenSet; }
    template<typename TrackingInformationT = Aws::Vector<TrackingInformation>>
    void SetTrackingInformation(TrackingInformationT&& value) { m_trackingInformationHasBeenSet = true; m_trackingInformation = std::forward<TrackingInformationT>(value); }
    template<typename TrackingInformationT = Aws::Vector<TrackingInformation>>
    Order& WithTrackingInformation(TrackingInformationT&& value) { SetTrackingInformation(std::forward<TrackingInformationT>(value)); return *this;}
    template<typename TrackingInformationT = TrackingInformation>
    Order& AddTrackingInformation(TrackingInformationT&& value) { m_trackingInformationHasBeenSet = true; m_trackingInformation.emplace_back(std::forward<TrackingInformationT>(value)); return *this; }
    ///@}
  private:

    AcknowledgmentStatus m_acknowledgmentStatus{AcknowledgmentStatus::NOT_SET};
    bool m_acknowledgmentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_networkArn;
    bool m_networkArnHasBeenSet = false;

    Aws::String m_networkSiteArn;
    bool m_networkSiteArnHasBeenSet = false;

    Aws::String m_orderArn;
    bool m_orderArnHasBeenSet = false;

    Aws::Vector<OrderedResourceDefinition> m_orderedResources;
    bool m_orderedResourcesHasBeenSet = false;

    Address m_shippingAddress;
    bool m_shippingAddressHasBeenSet = false;

    Aws::Vector<TrackingInformation> m_trackingInformation;
    bool m_trackingInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
