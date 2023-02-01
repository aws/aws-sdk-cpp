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
   * <p>Describes a core network edge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkEdge">AWS
   * API Reference</a></p>
   */
  class CoreNetworkEdge
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkEdge();
    AWS_NETWORKMANAGER_API CoreNetworkEdge(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkEdge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Region where a core network edge is located.</p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }

    /**
     * <p>The Region where a core network edge is located.</p>
     */
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }

    /**
     * <p>The Region where a core network edge is located.</p>
     */
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }

    /**
     * <p>The Region where a core network edge is located.</p>
     */
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }

    /**
     * <p>The Region where a core network edge is located.</p>
     */
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }

    /**
     * <p>The Region where a core network edge is located.</p>
     */
    inline CoreNetworkEdge& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}

    /**
     * <p>The Region where a core network edge is located.</p>
     */
    inline CoreNetworkEdge& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}

    /**
     * <p>The Region where a core network edge is located.</p>
     */
    inline CoreNetworkEdge& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}


    /**
     * <p>The ASN of a core network edge.</p>
     */
    inline long long GetAsn() const{ return m_asn; }

    /**
     * <p>The ASN of a core network edge.</p>
     */
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }

    /**
     * <p>The ASN of a core network edge.</p>
     */
    inline void SetAsn(long long value) { m_asnHasBeenSet = true; m_asn = value; }

    /**
     * <p>The ASN of a core network edge.</p>
     */
    inline CoreNetworkEdge& WithAsn(long long value) { SetAsn(value); return *this;}


    /**
     * <p>The inside IP addresses used for core network edges.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const{ return m_insideCidrBlocks; }

    /**
     * <p>The inside IP addresses used for core network edges.</p>
     */
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }

    /**
     * <p>The inside IP addresses used for core network edges.</p>
     */
    inline void SetInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = value; }

    /**
     * <p>The inside IP addresses used for core network edges.</p>
     */
    inline void SetInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::move(value); }

    /**
     * <p>The inside IP addresses used for core network edges.</p>
     */
    inline CoreNetworkEdge& WithInsideCidrBlocks(const Aws::Vector<Aws::String>& value) { SetInsideCidrBlocks(value); return *this;}

    /**
     * <p>The inside IP addresses used for core network edges.</p>
     */
    inline CoreNetworkEdge& WithInsideCidrBlocks(Aws::Vector<Aws::String>&& value) { SetInsideCidrBlocks(std::move(value)); return *this;}

    /**
     * <p>The inside IP addresses used for core network edges.</p>
     */
    inline CoreNetworkEdge& AddInsideCidrBlocks(const Aws::String& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }

    /**
     * <p>The inside IP addresses used for core network edges.</p>
     */
    inline CoreNetworkEdge& AddInsideCidrBlocks(Aws::String&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(std::move(value)); return *this; }

    /**
     * <p>The inside IP addresses used for core network edges.</p>
     */
    inline CoreNetworkEdge& AddInsideCidrBlocks(const char* value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.push_back(value); return *this; }

  private:

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    long long m_asn;
    bool m_asnHasBeenSet = false;

    Aws::Vector<Aws::String> m_insideCidrBlocks;
    bool m_insideCidrBlocksHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
