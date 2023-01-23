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
    AWS_NETWORKMANAGER_API CoreNetwork();
    AWS_NETWORKMANAGER_API CoreNetwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the global network that your core network is a part of. </p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network that your core network is a part of. </p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network that your core network is a part of. </p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network that your core network is a part of. </p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network that your core network is a part of. </p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network that your core network is a part of. </p>
     */
    inline CoreNetwork& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network that your core network is a part of. </p>
     */
    inline CoreNetwork& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network that your core network is a part of. </p>
     */
    inline CoreNetwork& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline CoreNetwork& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline CoreNetwork& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline CoreNetwork& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ARN of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkArn() const{ return m_coreNetworkArn; }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline void SetCoreNetworkArn(const Aws::String& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = value; }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline void SetCoreNetworkArn(Aws::String&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::move(value); }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline void SetCoreNetworkArn(const char* value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn.assign(value); }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline CoreNetwork& WithCoreNetworkArn(const Aws::String& value) { SetCoreNetworkArn(value); return *this;}

    /**
     * <p>The ARN of a core network.</p>
     */
    inline CoreNetwork& WithCoreNetworkArn(Aws::String&& value) { SetCoreNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a core network.</p>
     */
    inline CoreNetwork& WithCoreNetworkArn(const char* value) { SetCoreNetworkArn(value); return *this;}


    /**
     * <p>The description of a core network.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of a core network.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of a core network.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of a core network.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of a core network.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of a core network.</p>
     */
    inline CoreNetwork& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a core network.</p>
     */
    inline CoreNetwork& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of a core network.</p>
     */
    inline CoreNetwork& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp when a core network was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when a core network was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when a core network was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when a core network was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when a core network was created.</p>
     */
    inline CoreNetwork& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when a core network was created.</p>
     */
    inline CoreNetwork& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The current state of a core network.</p>
     */
    inline const CoreNetworkState& GetState() const{ return m_state; }

    /**
     * <p>The current state of a core network.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of a core network.</p>
     */
    inline void SetState(const CoreNetworkState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of a core network.</p>
     */
    inline void SetState(CoreNetworkState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of a core network.</p>
     */
    inline CoreNetwork& WithState(const CoreNetworkState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of a core network.</p>
     */
    inline CoreNetwork& WithState(CoreNetworkState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The segments within a core network.</p>
     */
    inline const Aws::Vector<CoreNetworkSegment>& GetSegments() const{ return m_segments; }

    /**
     * <p>The segments within a core network.</p>
     */
    inline bool SegmentsHasBeenSet() const { return m_segmentsHasBeenSet; }

    /**
     * <p>The segments within a core network.</p>
     */
    inline void SetSegments(const Aws::Vector<CoreNetworkSegment>& value) { m_segmentsHasBeenSet = true; m_segments = value; }

    /**
     * <p>The segments within a core network.</p>
     */
    inline void SetSegments(Aws::Vector<CoreNetworkSegment>&& value) { m_segmentsHasBeenSet = true; m_segments = std::move(value); }

    /**
     * <p>The segments within a core network.</p>
     */
    inline CoreNetwork& WithSegments(const Aws::Vector<CoreNetworkSegment>& value) { SetSegments(value); return *this;}

    /**
     * <p>The segments within a core network.</p>
     */
    inline CoreNetwork& WithSegments(Aws::Vector<CoreNetworkSegment>&& value) { SetSegments(std::move(value)); return *this;}

    /**
     * <p>The segments within a core network.</p>
     */
    inline CoreNetwork& AddSegments(const CoreNetworkSegment& value) { m_segmentsHasBeenSet = true; m_segments.push_back(value); return *this; }

    /**
     * <p>The segments within a core network.</p>
     */
    inline CoreNetwork& AddSegments(CoreNetworkSegment&& value) { m_segmentsHasBeenSet = true; m_segments.push_back(std::move(value)); return *this; }


    /**
     * <p>The edges within a core network.</p>
     */
    inline const Aws::Vector<CoreNetworkEdge>& GetEdges() const{ return m_edges; }

    /**
     * <p>The edges within a core network.</p>
     */
    inline bool EdgesHasBeenSet() const { return m_edgesHasBeenSet; }

    /**
     * <p>The edges within a core network.</p>
     */
    inline void SetEdges(const Aws::Vector<CoreNetworkEdge>& value) { m_edgesHasBeenSet = true; m_edges = value; }

    /**
     * <p>The edges within a core network.</p>
     */
    inline void SetEdges(Aws::Vector<CoreNetworkEdge>&& value) { m_edgesHasBeenSet = true; m_edges = std::move(value); }

    /**
     * <p>The edges within a core network.</p>
     */
    inline CoreNetwork& WithEdges(const Aws::Vector<CoreNetworkEdge>& value) { SetEdges(value); return *this;}

    /**
     * <p>The edges within a core network.</p>
     */
    inline CoreNetwork& WithEdges(Aws::Vector<CoreNetworkEdge>&& value) { SetEdges(std::move(value)); return *this;}

    /**
     * <p>The edges within a core network.</p>
     */
    inline CoreNetwork& AddEdges(const CoreNetworkEdge& value) { m_edgesHasBeenSet = true; m_edges.push_back(value); return *this; }

    /**
     * <p>The edges within a core network.</p>
     */
    inline CoreNetwork& AddEdges(CoreNetworkEdge&& value) { m_edgesHasBeenSet = true; m_edges.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of key-value tags associated with a core network.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value tags associated with a core network.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of key-value tags associated with a core network.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of key-value tags associated with a core network.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of key-value tags associated with a core network.</p>
     */
    inline CoreNetwork& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value tags associated with a core network.</p>
     */
    inline CoreNetwork& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value tags associated with a core network.</p>
     */
    inline CoreNetwork& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of key-value tags associated with a core network.</p>
     */
    inline CoreNetwork& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_coreNetworkArn;
    bool m_coreNetworkArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    CoreNetworkState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<CoreNetworkSegment> m_segments;
    bool m_segmentsHasBeenSet = false;

    Aws::Vector<CoreNetworkEdge> m_edges;
    bool m_edgesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
