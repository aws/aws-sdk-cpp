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
    AWS_SSM_API Node();
    AWS_SSM_API Node(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Node& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The UTC timestamp for when the managed node data was last captured.</p>
     */
    inline const Aws::Utils::DateTime& GetCaptureTime() const{ return m_captureTime; }
    inline bool CaptureTimeHasBeenSet() const { return m_captureTimeHasBeenSet; }
    inline void SetCaptureTime(const Aws::Utils::DateTime& value) { m_captureTimeHasBeenSet = true; m_captureTime = value; }
    inline void SetCaptureTime(Aws::Utils::DateTime&& value) { m_captureTimeHasBeenSet = true; m_captureTime = std::move(value); }
    inline Node& WithCaptureTime(const Aws::Utils::DateTime& value) { SetCaptureTime(value); return *this;}
    inline Node& WithCaptureTime(Aws::Utils::DateTime&& value) { SetCaptureTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the managed node.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Node& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Node& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Node& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ownership of the managed node.</p>
     */
    inline const NodeOwnerInfo& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const NodeOwnerInfo& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(NodeOwnerInfo&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline Node& WithOwner(const NodeOwnerInfo& value) { SetOwner(value); return *this;}
    inline Node& WithOwner(NodeOwnerInfo&& value) { SetOwner(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that a managed node was created in or assigned
     * to.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline Node& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline Node& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline Node& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the type of node.</p>
     */
    inline const NodeType& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const NodeType& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(NodeType&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline Node& WithNodeType(const NodeType& value) { SetNodeType(value); return *this;}
    inline Node& WithNodeType(NodeType&& value) { SetNodeType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_captureTime;
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
