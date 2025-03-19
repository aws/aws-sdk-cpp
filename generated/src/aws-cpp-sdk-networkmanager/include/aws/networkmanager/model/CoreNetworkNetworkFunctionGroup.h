/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/ServiceInsertionSegments.h>
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
   * <p>Describes a network function group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkNetworkFunctionGroup">AWS
   * API Reference</a></p>
   */
  class CoreNetworkNetworkFunctionGroup
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroup() = default;
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the network function group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CoreNetworkNetworkFunctionGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The core network edge locations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const { return m_edgeLocations; }
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
    template<typename EdgeLocationsT = Aws::Vector<Aws::String>>
    void SetEdgeLocations(EdgeLocationsT&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::forward<EdgeLocationsT>(value); }
    template<typename EdgeLocationsT = Aws::Vector<Aws::String>>
    CoreNetworkNetworkFunctionGroup& WithEdgeLocations(EdgeLocationsT&& value) { SetEdgeLocations(std::forward<EdgeLocationsT>(value)); return *this;}
    template<typename EdgeLocationsT = Aws::String>
    CoreNetworkNetworkFunctionGroup& AddEdgeLocations(EdgeLocationsT&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.emplace_back(std::forward<EdgeLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The segments associated with the network function group.</p>
     */
    inline const ServiceInsertionSegments& GetSegments() const { return m_segments; }
    inline bool SegmentsHasBeenSet() const { return m_segmentsHasBeenSet; }
    template<typename SegmentsT = ServiceInsertionSegments>
    void SetSegments(SegmentsT&& value) { m_segmentsHasBeenSet = true; m_segments = std::forward<SegmentsT>(value); }
    template<typename SegmentsT = ServiceInsertionSegments>
    CoreNetworkNetworkFunctionGroup& WithSegments(SegmentsT&& value) { SetSegments(std::forward<SegmentsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLocations;
    bool m_edgeLocationsHasBeenSet = false;

    ServiceInsertionSegments m_segments;
    bool m_segmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
