/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/ServiceInsertionAction.h>
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
   * <p>Describes a core network change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkChangeValues">AWS
   * API Reference</a></p>
   */
  class CoreNetworkChangeValues
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkChangeValues();
    AWS_NETWORKMANAGER_API CoreNetworkChangeValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkChangeValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The names of the segments in a core network.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }
    inline CoreNetworkChangeValues& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}
    inline CoreNetworkChangeValues& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}
    inline CoreNetworkChangeValues& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network function group name if the change event is associated with a
     * network function group.</p>
     */
    inline const Aws::String& GetNetworkFunctionGroupName() const{ return m_networkFunctionGroupName; }
    inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
    inline void SetNetworkFunctionGroupName(const Aws::String& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = value; }
    inline void SetNetworkFunctionGroupName(Aws::String&& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = std::move(value); }
    inline void SetNetworkFunctionGroupName(const char* value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName.assign(value); }
    inline CoreNetworkChangeValues& WithNetworkFunctionGroupName(const Aws::String& value) { SetNetworkFunctionGroupName(value); return *this;}
    inline CoreNetworkChangeValues& WithNetworkFunctionGroupName(Aws::String&& value) { SetNetworkFunctionGroupName(std::move(value)); return *this;}
    inline CoreNetworkChangeValues& WithNetworkFunctionGroupName(const char* value) { SetNetworkFunctionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Regions where edges are located in a core network. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const{ return m_edgeLocations; }
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
    inline void SetEdgeLocations(const Aws::Vector<Aws::String>& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = value; }
    inline void SetEdgeLocations(Aws::Vector<Aws::String>&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::move(value); }
    inline CoreNetworkChangeValues& WithEdgeLocations(const Aws::Vector<Aws::String>& value) { SetEdgeLocations(value); return *this;}
    inline CoreNetworkChangeValues& WithEdgeLocations(Aws::Vector<Aws::String>&& value) { SetEdgeLocations(std::move(value)); return *this;}
    inline CoreNetworkChangeValues& AddEdgeLocations(const Aws::String& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }
    inline CoreNetworkChangeValues& AddEdgeLocations(Aws::String&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(std::move(value)); return *this; }
    inline CoreNetworkChangeValues& AddEdgeLocations(const char* value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ASN of a core network.</p>
     */
    inline long long GetAsn() const{ return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    inline void SetAsn(long long value) { m_asnHasBeenSet = true; m_asn = value; }
    inline CoreNetworkChangeValues& WithAsn(long long value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses used for a core network.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline CoreNetworkChangeValues& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline CoreNetworkChangeValues& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline CoreNetworkChangeValues& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the destination.</p>
     */
    inline const Aws::String& GetDestinationIdentifier() const{ return m_destinationIdentifier; }
    inline bool DestinationIdentifierHasBeenSet() const { return m_destinationIdentifierHasBeenSet; }
    inline void SetDestinationIdentifier(const Aws::String& value) { m_destinationIdentifierHasBeenSet = true; m_destinationIdentifier = value; }
    inline void SetDestinationIdentifier(Aws::String&& value) { m_destinationIdentifierHasBeenSet = true; m_destinationIdentifier = std::move(value); }
    inline void SetDestinationIdentifier(const char* value) { m_destinationIdentifierHasBeenSet = true; m_destinationIdentifier.assign(value); }
    inline CoreNetworkChangeValues& WithDestinationIdentifier(const Aws::String& value) { SetDestinationIdentifier(value); return *this;}
    inline CoreNetworkChangeValues& WithDestinationIdentifier(Aws::String&& value) { SetDestinationIdentifier(std::move(value)); return *this;}
    inline CoreNetworkChangeValues& WithDestinationIdentifier(const char* value) { SetDestinationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inside IP addresses used for core network change values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const{ return m_insideCidrBlocks; }
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }
    inline void SetInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = value; }
    inline void SetInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::move(value); }
    inline CoreNetworkChangeValues& WithInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { SetInsideCidrBlocks(value); return *this;}
    inline CoreNetworkChangeValues& WithInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { SetInsideCidrBlocks(std::move(value)); return *this;}
    inline CoreNetworkChangeValues& AddInsideCidrBlocks(const Aws::String& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }
    inline CoreNetworkChangeValues& AddInsideCidrBlocks(Aws::String&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(std::move(value)); return *this; }
    inline CoreNetworkChangeValues& AddInsideCidrBlocks(const char* value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shared segments for a core network change value. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedSegments() const{ return m_sharedSegments; }
    inline bool SharedSegmentsHasBeenSet() const { return m_sharedSegmentsHasBeenSet; }
    inline void SetSharedSegments(const Aws::Vector<Aws::String>& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments = value; }
    inline void SetSharedSegments(Aws::Vector<Aws::String>&& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments = std::move(value); }
    inline CoreNetworkChangeValues& WithSharedSegments(const Aws::Vector<Aws::String>& value) { SetSharedSegments(value); return *this;}
    inline CoreNetworkChangeValues& WithSharedSegments(Aws::Vector<Aws::String>&& value) { SetSharedSegments(std::move(value)); return *this;}
    inline CoreNetworkChangeValues& AddSharedSegments(const Aws::String& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments.push_back(value); return *this; }
    inline CoreNetworkChangeValues& AddSharedSegments(Aws::String&& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments.push_back(std::move(value)); return *this; }
    inline CoreNetworkChangeValues& AddSharedSegments(const char* value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the service insertion action. </p>
     */
    inline const Aws::Vector<ServiceInsertionAction>& GetServiceInsertionActions() const{ return m_serviceInsertionActions; }
    inline bool ServiceInsertionActionsHasBeenSet() const { return m_serviceInsertionActionsHasBeenSet; }
    inline void SetServiceInsertionActions(const Aws::Vector<ServiceInsertionAction>& value) { m_serviceInsertionActionsHasBeenSet = true; m_serviceInsertionActions = value; }
    inline void SetServiceInsertionActions(Aws::Vector<ServiceInsertionAction>&& value) { m_serviceInsertionActionsHasBeenSet = true; m_serviceInsertionActions = std::move(value); }
    inline CoreNetworkChangeValues& WithServiceInsertionActions(const Aws::Vector<ServiceInsertionAction>& value) { SetServiceInsertionActions(value); return *this;}
    inline CoreNetworkChangeValues& WithServiceInsertionActions(Aws::Vector<ServiceInsertionAction>&& value) { SetServiceInsertionActions(std::move(value)); return *this;}
    inline CoreNetworkChangeValues& AddServiceInsertionActions(const ServiceInsertionAction& value) { m_serviceInsertionActionsHasBeenSet = true; m_serviceInsertionActions.push_back(value); return *this; }
    inline CoreNetworkChangeValues& AddServiceInsertionActions(ServiceInsertionAction&& value) { m_serviceInsertionActionsHasBeenSet = true; m_serviceInsertionActions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;

    Aws::String m_networkFunctionGroupName;
    bool m_networkFunctionGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLocations;
    bool m_edgeLocationsHasBeenSet = false;

    long long m_asn;
    bool m_asnHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_destinationIdentifier;
    bool m_destinationIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_insideCidrBlocks;
    bool m_insideCidrBlocksHasBeenSet = false;

    Aws::Vector<Aws::String> m_sharedSegments;
    bool m_sharedSegmentsHasBeenSet = false;

    Aws::Vector<ServiceInsertionAction> m_serviceInsertionActions;
    bool m_serviceInsertionActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
