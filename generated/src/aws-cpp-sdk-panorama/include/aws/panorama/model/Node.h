/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/NodeCategory.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An application node that represents a camera stream, a model, code, or
   * output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/Node">AWS API
   * Reference</a></p>
   */
  class Node
  {
  public:
    AWS_PANORAMA_API Node();
    AWS_PANORAMA_API Node(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Node& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The node's category.</p>
     */
    inline const NodeCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const NodeCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(NodeCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline Node& WithCategory(const NodeCategory& value) { SetCategory(value); return *this;}
    inline Node& WithCategory(NodeCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the node was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline Node& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline Node& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Node& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Node& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Node& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Node& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Node& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Node& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's ID.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }
    inline Node& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}
    inline Node& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}
    inline Node& WithNodeId(const char* value) { SetNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the node's owner.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }
    inline Node& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}
    inline Node& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}
    inline Node& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's ARN.</p>
     */
    inline const Aws::String& GetPackageArn() const{ return m_packageArn; }
    inline bool PackageArnHasBeenSet() const { return m_packageArnHasBeenSet; }
    inline void SetPackageArn(const Aws::String& value) { m_packageArnHasBeenSet = true; m_packageArn = value; }
    inline void SetPackageArn(Aws::String&& value) { m_packageArnHasBeenSet = true; m_packageArn = std::move(value); }
    inline void SetPackageArn(const char* value) { m_packageArnHasBeenSet = true; m_packageArn.assign(value); }
    inline Node& WithPackageArn(const Aws::String& value) { SetPackageArn(value); return *this;}
    inline Node& WithPackageArn(Aws::String&& value) { SetPackageArn(std::move(value)); return *this;}
    inline Node& WithPackageArn(const char* value) { SetPackageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's package ID.</p>
     */
    inline const Aws::String& GetPackageId() const{ return m_packageId; }
    inline bool PackageIdHasBeenSet() const { return m_packageIdHasBeenSet; }
    inline void SetPackageId(const Aws::String& value) { m_packageIdHasBeenSet = true; m_packageId = value; }
    inline void SetPackageId(Aws::String&& value) { m_packageIdHasBeenSet = true; m_packageId = std::move(value); }
    inline void SetPackageId(const char* value) { m_packageIdHasBeenSet = true; m_packageId.assign(value); }
    inline Node& WithPackageId(const Aws::String& value) { SetPackageId(value); return *this;}
    inline Node& WithPackageId(Aws::String&& value) { SetPackageId(std::move(value)); return *this;}
    inline Node& WithPackageId(const char* value) { SetPackageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's package name.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline Node& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline Node& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline Node& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's package version.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }
    inline Node& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}
    inline Node& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}
    inline Node& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's patch version.</p>
     */
    inline const Aws::String& GetPatchVersion() const{ return m_patchVersion; }
    inline bool PatchVersionHasBeenSet() const { return m_patchVersionHasBeenSet; }
    inline void SetPatchVersion(const Aws::String& value) { m_patchVersionHasBeenSet = true; m_patchVersion = value; }
    inline void SetPatchVersion(Aws::String&& value) { m_patchVersionHasBeenSet = true; m_patchVersion = std::move(value); }
    inline void SetPatchVersion(const char* value) { m_patchVersionHasBeenSet = true; m_patchVersion.assign(value); }
    inline Node& WithPatchVersion(const Aws::String& value) { SetPatchVersion(value); return *this;}
    inline Node& WithPatchVersion(Aws::String&& value) { SetPatchVersion(std::move(value)); return *this;}
    inline Node& WithPatchVersion(const char* value) { SetPatchVersion(value); return *this;}
    ///@}
  private:

    NodeCategory m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_packageArn;
    bool m_packageArnHasBeenSet = false;

    Aws::String m_packageId;
    bool m_packageIdHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_patchVersion;
    bool m_patchVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
