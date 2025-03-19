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
   * <p>Describes a core network segment, which are dedicated routes. Only
   * attachments within this segment can communicate with each other.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkSegment">AWS
   * API Reference</a></p>
   */
  class CoreNetworkSegment
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkSegment() = default;
    AWS_NETWORKMANAGER_API CoreNetworkSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a core network segment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CoreNetworkSegment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Regions where the edges are located.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const { return m_edgeLocations; }
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
    template<typename EdgeLocationsT = Aws::Vector<Aws::String>>
    void SetEdgeLocations(EdgeLocationsT&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::forward<EdgeLocationsT>(value); }
    template<typename EdgeLocationsT = Aws::Vector<Aws::String>>
    CoreNetworkSegment& WithEdgeLocations(EdgeLocationsT&& value) { SetEdgeLocations(std::forward<EdgeLocationsT>(value)); return *this;}
    template<typename EdgeLocationsT = Aws::String>
    CoreNetworkSegment& AddEdgeLocations(EdgeLocationsT&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.emplace_back(std::forward<EdgeLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shared segments of a core network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedSegments() const { return m_sharedSegments; }
    inline bool SharedSegmentsHasBeenSet() const { return m_sharedSegmentsHasBeenSet; }
    template<typename SharedSegmentsT = Aws::Vector<Aws::String>>
    void SetSharedSegments(SharedSegmentsT&& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments = std::forward<SharedSegmentsT>(value); }
    template<typename SharedSegmentsT = Aws::Vector<Aws::String>>
    CoreNetworkSegment& WithSharedSegments(SharedSegmentsT&& value) { SetSharedSegments(std::forward<SharedSegmentsT>(value)); return *this;}
    template<typename SharedSegmentsT = Aws::String>
    CoreNetworkSegment& AddSharedSegments(SharedSegmentsT&& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments.emplace_back(std::forward<SharedSegmentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLocations;
    bool m_edgeLocationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sharedSegments;
    bool m_sharedSegmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
