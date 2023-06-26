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
    AWS_PANORAMA_API NodeInstance();
    AWS_PANORAMA_API NodeInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NodeInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance's current status.</p>
     */
    inline const NodeInstanceStatus& GetCurrentStatus() const{ return m_currentStatus; }

    /**
     * <p>The instance's current status.</p>
     */
    inline bool CurrentStatusHasBeenSet() const { return m_currentStatusHasBeenSet; }

    /**
     * <p>The instance's current status.</p>
     */
    inline void SetCurrentStatus(const NodeInstanceStatus& value) { m_currentStatusHasBeenSet = true; m_currentStatus = value; }

    /**
     * <p>The instance's current status.</p>
     */
    inline void SetCurrentStatus(NodeInstanceStatus&& value) { m_currentStatusHasBeenSet = true; m_currentStatus = std::move(value); }

    /**
     * <p>The instance's current status.</p>
     */
    inline NodeInstance& WithCurrentStatus(const NodeInstanceStatus& value) { SetCurrentStatus(value); return *this;}

    /**
     * <p>The instance's current status.</p>
     */
    inline NodeInstance& WithCurrentStatus(NodeInstanceStatus&& value) { SetCurrentStatus(std::move(value)); return *this;}


    /**
     * <p>The node's ID.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>The node's ID.</p>
     */
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }

    /**
     * <p>The node's ID.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }

    /**
     * <p>The node's ID.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }

    /**
     * <p>The node's ID.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }

    /**
     * <p>The node's ID.</p>
     */
    inline NodeInstance& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>The node's ID.</p>
     */
    inline NodeInstance& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>The node's ID.</p>
     */
    inline NodeInstance& WithNodeId(const char* value) { SetNodeId(value); return *this;}


    /**
     * <p>The instance's ID.</p>
     */
    inline const Aws::String& GetNodeInstanceId() const{ return m_nodeInstanceId; }

    /**
     * <p>The instance's ID.</p>
     */
    inline bool NodeInstanceIdHasBeenSet() const { return m_nodeInstanceIdHasBeenSet; }

    /**
     * <p>The instance's ID.</p>
     */
    inline void SetNodeInstanceId(const Aws::String& value) { m_nodeInstanceIdHasBeenSet = true; m_nodeInstanceId = value; }

    /**
     * <p>The instance's ID.</p>
     */
    inline void SetNodeInstanceId(Aws::String&& value) { m_nodeInstanceIdHasBeenSet = true; m_nodeInstanceId = std::move(value); }

    /**
     * <p>The instance's ID.</p>
     */
    inline void SetNodeInstanceId(const char* value) { m_nodeInstanceIdHasBeenSet = true; m_nodeInstanceId.assign(value); }

    /**
     * <p>The instance's ID.</p>
     */
    inline NodeInstance& WithNodeInstanceId(const Aws::String& value) { SetNodeInstanceId(value); return *this;}

    /**
     * <p>The instance's ID.</p>
     */
    inline NodeInstance& WithNodeInstanceId(Aws::String&& value) { SetNodeInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance's ID.</p>
     */
    inline NodeInstance& WithNodeInstanceId(const char* value) { SetNodeInstanceId(value); return *this;}


    /**
     * <p>The instance's name.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }

    /**
     * <p>The instance's name.</p>
     */
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }

    /**
     * <p>The instance's name.</p>
     */
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }

    /**
     * <p>The instance's name.</p>
     */
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }

    /**
     * <p>The instance's name.</p>
     */
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }

    /**
     * <p>The instance's name.</p>
     */
    inline NodeInstance& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}

    /**
     * <p>The instance's name.</p>
     */
    inline NodeInstance& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}

    /**
     * <p>The instance's name.</p>
     */
    inline NodeInstance& WithNodeName(const char* value) { SetNodeName(value); return *this;}


    /**
     * <p>The instance's package name.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The instance's package name.</p>
     */
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }

    /**
     * <p>The instance's package name.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }

    /**
     * <p>The instance's package name.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }

    /**
     * <p>The instance's package name.</p>
     */
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }

    /**
     * <p>The instance's package name.</p>
     */
    inline NodeInstance& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The instance's package name.</p>
     */
    inline NodeInstance& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The instance's package name.</p>
     */
    inline NodeInstance& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The instance's package patch version.</p>
     */
    inline const Aws::String& GetPackagePatchVersion() const{ return m_packagePatchVersion; }

    /**
     * <p>The instance's package patch version.</p>
     */
    inline bool PackagePatchVersionHasBeenSet() const { return m_packagePatchVersionHasBeenSet; }

    /**
     * <p>The instance's package patch version.</p>
     */
    inline void SetPackagePatchVersion(const Aws::String& value) { m_packagePatchVersionHasBeenSet = true; m_packagePatchVersion = value; }

    /**
     * <p>The instance's package patch version.</p>
     */
    inline void SetPackagePatchVersion(Aws::String&& value) { m_packagePatchVersionHasBeenSet = true; m_packagePatchVersion = std::move(value); }

    /**
     * <p>The instance's package patch version.</p>
     */
    inline void SetPackagePatchVersion(const char* value) { m_packagePatchVersionHasBeenSet = true; m_packagePatchVersion.assign(value); }

    /**
     * <p>The instance's package patch version.</p>
     */
    inline NodeInstance& WithPackagePatchVersion(const Aws::String& value) { SetPackagePatchVersion(value); return *this;}

    /**
     * <p>The instance's package patch version.</p>
     */
    inline NodeInstance& WithPackagePatchVersion(Aws::String&& value) { SetPackagePatchVersion(std::move(value)); return *this;}

    /**
     * <p>The instance's package patch version.</p>
     */
    inline NodeInstance& WithPackagePatchVersion(const char* value) { SetPackagePatchVersion(value); return *this;}


    /**
     * <p>The instance's package version.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }

    /**
     * <p>The instance's package version.</p>
     */
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }

    /**
     * <p>The instance's package version.</p>
     */
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }

    /**
     * <p>The instance's package version.</p>
     */
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }

    /**
     * <p>The instance's package version.</p>
     */
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }

    /**
     * <p>The instance's package version.</p>
     */
    inline NodeInstance& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}

    /**
     * <p>The instance's package version.</p>
     */
    inline NodeInstance& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}

    /**
     * <p>The instance's package version.</p>
     */
    inline NodeInstance& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}

  private:

    NodeInstanceStatus m_currentStatus;
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
