/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/NodeOwnerInfo.h>
#include <aws/ssm/model/NodeType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Details about an individual managed node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/Node">AWS API
   * Reference</a></p>
   */
  class Node
  {
  public:
    AWS_SSM_API Node() = default;
    AWS_SSM_API Node(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Node& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The UTC timestamp for when the managed node data was last captured.</p>
     */
    inline const Aws::Utils::DateTime& GetCaptureTime() const { return m_captureTime; }
    inline bool CaptureTimeHasBeenSet() const { return m_captureTimeHasBeenSet; }
    template<typename CaptureTimeT = Aws::Utils::DateTime>
    void SetCaptureTime(CaptureTimeT&& value) { m_captureTimeHasBeenSet = true; m_captureTime = std::forward<CaptureTimeT>(value); }
    template<typename CaptureTimeT = Aws::Utils::DateTime>
    Node& WithCaptureTime(CaptureTimeT&& value) { SetCaptureTime(std::forward<CaptureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the managed node.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Node& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ownership of the managed node.</p>
     */
    inline const NodeOwnerInfo& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = NodeOwnerInfo>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = NodeOwnerInfo>
    Node& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that a managed node was created in or assigned
     * to.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Node& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the type of node.</p>
     */
    inline const NodeType& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = NodeType>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = NodeType>
    Node& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_captureTime{};
    bool m_captureTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    NodeOwnerInfo m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    NodeType m_nodeType;
    bool m_nodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
