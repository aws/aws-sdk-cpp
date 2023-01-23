/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The names of the segments in a core network.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }

    /**
     * <p>The names of the segments in a core network.</p>
     */
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }

    /**
     * <p>The names of the segments in a core network.</p>
     */
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }

    /**
     * <p>The names of the segments in a core network.</p>
     */
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }

    /**
     * <p>The names of the segments in a core network.</p>
     */
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }

    /**
     * <p>The names of the segments in a core network.</p>
     */
    inline CoreNetworkChangeValues& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}

    /**
     * <p>The names of the segments in a core network.</p>
     */
    inline CoreNetworkChangeValues& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}

    /**
     * <p>The names of the segments in a core network.</p>
     */
    inline CoreNetworkChangeValues& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}


    /**
     * <p>The Regions where edges are located in a core network. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const{ return m_edgeLocations; }

    /**
     * <p>The Regions where edges are located in a core network. </p>
     */
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }

    /**
     * <p>The Regions where edges are located in a core network. </p>
     */
    inline void SetEdgeLocations(const Aws::Vector<Aws::String>& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = value; }

    /**
     * <p>The Regions where edges are located in a core network. </p>
     */
    inline void SetEdgeLocations(Aws::Vector<Aws::String>&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::move(value); }

    /**
     * <p>The Regions where edges are located in a core network. </p>
     */
    inline CoreNetworkChangeValues& WithEdgeLocations(const Aws::Vector<Aws::String>& value) { SetEdgeLocations(value); return *this;}

    /**
     * <p>The Regions where edges are located in a core network. </p>
     */
    inline CoreNetworkChangeValues& WithEdgeLocations(Aws::Vector<Aws::String>&& value) { SetEdgeLocations(std::move(value)); return *this;}

    /**
     * <p>The Regions where edges are located in a core network. </p>
     */
    inline CoreNetworkChangeValues& AddEdgeLocations(const Aws::String& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }

    /**
     * <p>The Regions where edges are located in a core network. </p>
     */
    inline CoreNetworkChangeValues& AddEdgeLocations(Aws::String&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(std::move(value)); return *this; }

    /**
     * <p>The Regions where edges are located in a core network. </p>
     */
    inline CoreNetworkChangeValues& AddEdgeLocations(const char* value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.push_back(value); return *this; }


    /**
     * <p>The ASN of a core network.</p>
     */
    inline long long GetAsn() const{ return m_asn; }

    /**
     * <p>The ASN of a core network.</p>
     */
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }

    /**
     * <p>The ASN of a core network.</p>
     */
    inline void SetAsn(long long value) { m_asnHasBeenSet = true; m_asn = value; }

    /**
     * <p>The ASN of a core network.</p>
     */
    inline CoreNetworkChangeValues& WithAsn(long long value) { SetAsn(value); return *this;}


    /**
     * <p>The IP addresses used for a core network.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The IP addresses used for a core network.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The IP addresses used for a core network.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The IP addresses used for a core network.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The IP addresses used for a core network.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The IP addresses used for a core network.</p>
     */
    inline CoreNetworkChangeValues& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The IP addresses used for a core network.</p>
     */
    inline CoreNetworkChangeValues& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The IP addresses used for a core network.</p>
     */
    inline CoreNetworkChangeValues& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The ID of the destination.</p>
     */
    inline const Aws::String& GetDestinationIdentifier() const{ return m_destinationIdentifier; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline bool DestinationIdentifierHasBeenSet() const { return m_destinationIdentifierHasBeenSet; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationIdentifier(const Aws::String& value) { m_destinationIdentifierHasBeenSet = true; m_destinationIdentifier = value; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationIdentifier(Aws::String&& value) { m_destinationIdentifierHasBeenSet = true; m_destinationIdentifier = std::move(value); }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationIdentifier(const char* value) { m_destinationIdentifierHasBeenSet = true; m_destinationIdentifier.assign(value); }

    /**
     * <p>The ID of the destination.</p>
     */
    inline CoreNetworkChangeValues& WithDestinationIdentifier(const Aws::String& value) { SetDestinationIdentifier(value); return *this;}

    /**
     * <p>The ID of the destination.</p>
     */
    inline CoreNetworkChangeValues& WithDestinationIdentifier(Aws::String&& value) { SetDestinationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the destination.</p>
     */
    inline CoreNetworkChangeValues& WithDestinationIdentifier(const char* value) { SetDestinationIdentifier(value); return *this;}


    /**
     * <p>The inside IP addresses used for core network change values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const{ return m_insideCidrBlocks; }

    /**
     * <p>The inside IP addresses used for core network change values.</p>
     */
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }

    /**
     * <p>The inside IP addresses used for core network change values.</p>
     */
    inline void SetInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = value; }

    /**
     * <p>The inside IP addresses used for core network change values.</p>
     */
    inline void SetInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::move(value); }

    /**
     * <p>The inside IP addresses used for core network change values.</p>
     */
    inline CoreNetworkChangeValues& WithInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { SetInsideCidrBlocks(value); return *this;}

    /**
     * <p>The inside IP addresses used for core network change values.</p>
     */
    inline CoreNetworkChangeValues& WithInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { SetInsideCidrBlocks(std::move(value)); return *this;}

    /**
     * <p>The inside IP addresses used for core network change values.</p>
     */
    inline CoreNetworkChangeValues& AddInsideCidrBlocks(const Aws::String& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }

    /**
     * <p>The inside IP addresses used for core network change values.</p>
     */
    inline CoreNetworkChangeValues& AddInsideCidrBlocks(Aws::String&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(std::move(value)); return *this; }

    /**
     * <p>The inside IP addresses used for core network change values.</p>
     */
    inline CoreNetworkChangeValues& AddInsideCidrBlocks(const char* value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }


    /**
     * <p>The shared segments for a core network change value. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedSegments() const{ return m_sharedSegments; }

    /**
     * <p>The shared segments for a core network change value. </p>
     */
    inline bool SharedSegmentsHasBeenSet() const { return m_sharedSegmentsHasBeenSet; }

    /**
     * <p>The shared segments for a core network change value. </p>
     */
    inline void SetSharedSegments(const Aws::Vector<Aws::String>& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments = value; }

    /**
     * <p>The shared segments for a core network change value. </p>
     */
    inline void SetSharedSegments(Aws::Vector<Aws::String>&& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments = std::move(value); }

    /**
     * <p>The shared segments for a core network change value. </p>
     */
    inline CoreNetworkChangeValues& WithSharedSegments(const Aws::Vector<Aws::String>& value) { SetSharedSegments(value); return *this;}

    /**
     * <p>The shared segments for a core network change value. </p>
     */
    inline CoreNetworkChangeValues& WithSharedSegments(Aws::Vector<Aws::String>&& value) { SetSharedSegments(std::move(value)); return *this;}

    /**
     * <p>The shared segments for a core network change value. </p>
     */
    inline CoreNetworkChangeValues& AddSharedSegments(const Aws::String& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments.push_back(value); return *this; }

    /**
     * <p>The shared segments for a core network change value. </p>
     */
    inline CoreNetworkChangeValues& AddSharedSegments(Aws::String&& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments.push_back(std::move(value)); return *this; }

    /**
     * <p>The shared segments for a core network change value. </p>
     */
    inline CoreNetworkChangeValues& AddSharedSegments(const char* value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments.push_back(value); return *this; }

  private:

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;

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
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
