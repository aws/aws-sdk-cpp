/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/CoreNetworkState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/CoreNetworkSegment.h>
#include <aws/networkmanager/model/CoreNetworkNetworkFunctionGroup.h>
#include <aws/networkmanager/model/CoreNetworkEdge.h>
#include <aws/networkmanager/model/Tag.h>
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
   * <p>Describes a core network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetwork">AWS
   * API Reference</a></p>
   */
  class CoreNetwork
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetwork() = default;
    AWS_NETWORKMANAGER_API CoreNetwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the global network that your core network is a part of. </p>
     */
    inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    template<typename GlobalNetworkIdT = Aws::String>
    void SetGlobalNetworkId(GlobalNetworkIdT&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::forward<GlobalNetworkIdT>(value); }
    template<typename GlobalNetworkIdT = Aws::String>
    CoreNetwork& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    template<typename CoreNetworkIdT = Aws::String>
    void SetCoreNetworkId(CoreNetworkIdT&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::forward<CoreNetworkIdT>(value); }
    template<typename CoreNetworkIdT = Aws::String>
    CoreNetwork& WithCoreNetworkId(CoreNetworkIdT&& value) { SetCoreNetworkId(std::forward<CoreNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkArn() const { return m_coreNetworkArn; }
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }
    template<typename CoreNetworkArnT = Aws::String>
    void SetCoreNetworkArn(CoreNetworkArnT&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::forward<CoreNetworkArnT>(value); }
    template<typename CoreNetworkArnT = Aws::String>
    CoreNetwork& WithCoreNetworkArn(CoreNetworkArnT&& value) { SetCoreNetworkArn(std::forward<CoreNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a core network.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CoreNetwork& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when a core network was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CoreNetwork& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of a core network.</p>
     */
    inline CoreNetworkState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CoreNetworkState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CoreNetwork& WithState(CoreNetworkState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segments within a core network.</p>
     */
    inline const Aws::Vector<CoreNetworkSegment>& GetSegments() const { return m_segments; }
    inline bool SegmentsHasBeenSet() const { return m_segmentsHasBeenSet; }
    template<typename SegmentsT = Aws::Vector<CoreNetworkSegment>>
    void SetSegments(SegmentsT&& value) { m_segmentsHasBeenSet = true; m_segments = std::forward<SegmentsT>(value); }
    template<typename SegmentsT = Aws::Vector<CoreNetworkSegment>>
    CoreNetwork& WithSegments(SegmentsT&& value) { SetSegments(std::forward<SegmentsT>(value)); return *this;}
    template<typename SegmentsT = CoreNetworkSegment>
    CoreNetwork& AddSegments(SegmentsT&& value) { m_segmentsHasBeenSet = true; m_segments.emplace_back(std::forward<SegmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network function groups associated with a core network.</p>
     */
    inline const Aws::Vector<CoreNetworkNetworkFunctionGroup>& GetNetworkFunctionGroups() const { return m_networkFunctionGroups; }
    inline bool NetworkFunctionGroupsHasBeenSet() const { return m_networkFunctionGroupsHasBeenSet; }
    template<typename NetworkFunctionGroupsT = Aws::Vector<CoreNetworkNetworkFunctionGroup>>
    void SetNetworkFunctionGroups(NetworkFunctionGroupsT&& value) { m_networkFunctionGroupsHasBeenSet = true; m_networkFunctionGroups = std::forward<NetworkFunctionGroupsT>(value); }
    template<typename NetworkFunctionGroupsT = Aws::Vector<CoreNetworkNetworkFunctionGroup>>
    CoreNetwork& WithNetworkFunctionGroups(NetworkFunctionGroupsT&& value) { SetNetworkFunctionGroups(std::forward<NetworkFunctionGroupsT>(value)); return *this;}
    template<typename NetworkFunctionGroupsT = CoreNetworkNetworkFunctionGroup>
    CoreNetwork& AddNetworkFunctionGroups(NetworkFunctionGroupsT&& value) { m_networkFunctionGroupsHasBeenSet = true; m_networkFunctionGroups.emplace_back(std::forward<NetworkFunctionGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The edges within a core network.</p>
     */
    inline const Aws::Vector<CoreNetworkEdge>& GetEdges() const { return m_edges; }
    inline bool EdgesHasBeenSet() const { return m_edgesHasBeenSet; }
    template<typename EdgesT = Aws::Vector<CoreNetworkEdge>>
    void SetEdges(EdgesT&& value) { m_edgesHasBeenSet = true; m_edges = std::forward<EdgesT>(value); }
    template<typename EdgesT = Aws::Vector<CoreNetworkEdge>>
    CoreNetwork& WithEdges(EdgesT&& value) { SetEdges(std::forward<EdgesT>(value)); return *this;}
    template<typename EdgesT = CoreNetworkEdge>
    CoreNetwork& AddEdges(EdgesT&& value) { m_edgesHasBeenSet = true; m_edges.emplace_back(std::forward<EdgesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of key-value tags associated with a core network.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CoreNetwork& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CoreNetwork& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_coreNetworkArn;
    bool m_coreNetworkArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    CoreNetworkState m_state{CoreNetworkState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<CoreNetworkSegment> m_segments;
    bool m_segmentsHasBeenSet = false;

    Aws::Vector<CoreNetworkNetworkFunctionGroup> m_networkFunctionGroups;
    bool m_networkFunctionGroupsHasBeenSet = false;

    Aws::Vector<CoreNetworkEdge> m_edges;
    bool m_edgesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
