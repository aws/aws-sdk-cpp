/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Returns details about a core network edge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkSegmentEdgeIdentifier">AWS
   * API Reference</a></p>
   */
  class CoreNetworkSegmentEdgeIdentifier
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkSegmentEdgeIdentifier();
    AWS_NETWORKMANAGER_API CoreNetworkSegmentEdgeIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkSegmentEdgeIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }
    inline CoreNetworkSegmentEdgeIdentifier& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}
    inline CoreNetworkSegmentEdgeIdentifier& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}
    inline CoreNetworkSegmentEdgeIdentifier& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the segment edge.</p>
     */
    inline const Aws::String& GetSegmentName() const{ return m_segmentName; }
    inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
    inline void SetSegmentName(const Aws::String& value) { m_segmentNameHasBeenSet = true; m_segmentName = value; }
    inline void SetSegmentName(Aws::String&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::move(value); }
    inline void SetSegmentName(const char* value) { m_segmentNameHasBeenSet = true; m_segmentName.assign(value); }
    inline CoreNetworkSegmentEdgeIdentifier& WithSegmentName(const Aws::String& value) { SetSegmentName(value); return *this;}
    inline CoreNetworkSegmentEdgeIdentifier& WithSegmentName(Aws::String&& value) { SetSegmentName(std::move(value)); return *this;}
    inline CoreNetworkSegmentEdgeIdentifier& WithSegmentName(const char* value) { SetSegmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where the segment edge is located.</p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }
    inline CoreNetworkSegmentEdgeIdentifier& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}
    inline CoreNetworkSegmentEdgeIdentifier& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}
    inline CoreNetworkSegmentEdgeIdentifier& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
