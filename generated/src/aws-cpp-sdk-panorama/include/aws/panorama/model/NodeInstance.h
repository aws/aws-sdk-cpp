/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/NodeInstanceStatus.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A node instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NodeInstance">AWS
   * API Reference</a></p>
   */
  class NodeInstance
  {
  public:
    AWS_PANORAMA_API NodeInstance() = default;
    AWS_PANORAMA_API NodeInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NodeInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance's current status.</p>
     */
    inline NodeInstanceStatus GetCurrentStatus() const { return m_currentStatus; }
    inline bool CurrentStatusHasBeenSet() const { return m_currentStatusHasBeenSet; }
    inline void SetCurrentStatus(NodeInstanceStatus value) { m_currentStatusHasBeenSet = true; m_currentStatus = value; }
    inline NodeInstance& WithCurrentStatus(NodeInstanceStatus value) { SetCurrentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's ID.</p>
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    NodeInstance& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's ID.</p>
     */
    inline const Aws::String& GetNodeInstanceId() const { return m_nodeInstanceId; }
    inline bool NodeInstanceIdHasBeenSet() const { return m_nodeInstanceIdHasBeenSet; }
    template<typename NodeInstanceIdT = Aws::String>
    void SetNodeInstanceId(NodeInstanceIdT&& value) { m_nodeInstanceIdHasBeenSet = true; m_nodeInstanceId = std::forward<NodeInstanceIdT>(value); }
    template<typename NodeInstanceIdT = Aws::String>
    NodeInstance& WithNodeInstanceId(NodeInstanceIdT&& value) { SetNodeInstanceId(std::forward<NodeInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's name.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    NodeInstance& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's package name.</p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    NodeInstance& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's package patch version.</p>
     */
    inline const Aws::String& GetPackagePatchVersion() const { return m_packagePatchVersion; }
    inline bool PackagePatchVersionHasBeenSet() const { return m_packagePatchVersionHasBeenSet; }
    template<typename PackagePatchVersionT = Aws::String>
    void SetPackagePatchVersion(PackagePatchVersionT&& value) { m_packagePatchVersionHasBeenSet = true; m_packagePatchVersion = std::forward<PackagePatchVersionT>(value); }
    template<typename PackagePatchVersionT = Aws::String>
    NodeInstance& WithPackagePatchVersion(PackagePatchVersionT&& value) { SetPackagePatchVersion(std::forward<PackagePatchVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's package version.</p>
     */
    inline const Aws::String& GetPackageVersion() const { return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    template<typename PackageVersionT = Aws::String>
    void SetPackageVersion(PackageVersionT&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::forward<PackageVersionT>(value); }
    template<typename PackageVersionT = Aws::String>
    NodeInstance& WithPackageVersion(PackageVersionT&& value) { SetPackageVersion(std::forward<PackageVersionT>(value)); return *this;}
    ///@}
  private:

    NodeInstanceStatus m_currentStatus{NodeInstanceStatus::NOT_SET};
    bool m_currentStatusHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::String m_nodeInstanceId;
    bool m_nodeInstanceIdHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_packagePatchVersion;
    bool m_packagePatchVersionHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
