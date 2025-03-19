/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes the edge that's used for the override. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/EdgeOverride">AWS
   * API Reference</a></p>
   */
  class EdgeOverride
  {
  public:
    AWS_NETWORKMANAGER_API EdgeOverride() = default;
    AWS_NETWORKMANAGER_API EdgeOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API EdgeOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of edge locations.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetEdgeSets() const { return m_edgeSets; }
    inline bool EdgeSetsHasBeenSet() const { return m_edgeSetsHasBeenSet; }
    template<typename EdgeSetsT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetEdgeSets(EdgeSetsT&& value) { m_edgeSetsHasBeenSet = true; m_edgeSets = std::forward<EdgeSetsT>(value); }
    template<typename EdgeSetsT = Aws::Vector<Aws::Vector<Aws::String>>>
    EdgeOverride& WithEdgeSets(EdgeSetsT&& value) { SetEdgeSets(std::forward<EdgeSetsT>(value)); return *this;}
    template<typename EdgeSetsT = Aws::Vector<Aws::String>>
    EdgeOverride& AddEdgeSets(EdgeSetsT&& value) { m_edgeSetsHasBeenSet = true; m_edgeSets.emplace_back(std::forward<EdgeSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The edge that should be used when overriding the current edge order.</p>
     */
    inline const Aws::String& GetUseEdge() const { return m_useEdge; }
    inline bool UseEdgeHasBeenSet() const { return m_useEdgeHasBeenSet; }
    template<typename UseEdgeT = Aws::String>
    void SetUseEdge(UseEdgeT&& value) { m_useEdgeHasBeenSet = true; m_useEdge = std::forward<UseEdgeT>(value); }
    template<typename UseEdgeT = Aws::String>
    EdgeOverride& WithUseEdge(UseEdgeT&& value) { SetUseEdge(std::forward<UseEdgeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Vector<Aws::String>> m_edgeSets;
    bool m_edgeSetsHasBeenSet = false;

    Aws::String m_useEdge;
    bool m_useEdgeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
