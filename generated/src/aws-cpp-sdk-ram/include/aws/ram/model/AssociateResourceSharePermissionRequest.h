/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class AssociateResourceSharePermissionRequest : public RAMRequest
  {
  public:
    AWS_RAM_API AssociateResourceSharePermissionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResourceSharePermission"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share to which you want to add or
     * replace permissions.</p>
     */
    inline const Aws::String& GetResourceShareArn() const { return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    template<typename ResourceShareArnT = Aws::String>
    void SetResourceShareArn(ResourceShareArnT&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::forward<ResourceShareArnT>(value); }
    template<typename ResourceShareArnT = Aws::String>
    AssociateResourceSharePermissionRequest& WithResourceShareArn(ResourceShareArnT&& value) { SetResourceShareArn(std::forward<ResourceShareArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the RAM permission to associate with the resource
     * share. To find the ARN for a permission, use either the <a>ListPermissions</a>
     * operation or go to the <a
     * href="https://console.aws.amazon.com/ram/home#Permissions:">Permissions
     * library</a> page in the RAM console and then choose the name of the permission.
     * The ARN is displayed on the detail page.</p>
     */
    inline const Aws::String& GetPermissionArn() const { return m_permissionArn; }
    inline bool PermissionArnHasBeenSet() const { return m_permissionArnHasBeenSet; }
    template<typename PermissionArnT = Aws::String>
    void SetPermissionArn(PermissionArnT&& value) { m_permissionArnHasBeenSet = true; m_permissionArn = std::forward<PermissionArnT>(value); }
    template<typename PermissionArnT = Aws::String>
    AssociateResourceSharePermissionRequest& WithPermissionArn(PermissionArnT&& value) { SetPermissionArn(std::forward<PermissionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the specified permission should replace the existing
     * permission associated with the resource share. Use <code>true</code> to replace
     * the current permissions. Use <code>false</code> to add the permission to a
     * resource share that currently doesn't have a permission. The default value is
     * <code>false</code>.</p>  <p>A resource share can have only one permission
     * per resource type. If a resource share already has a permission for the
     * specified resource type and you don't set <code>replace</code> to
     * <code>true</code> then the operation returns an error. This helps prevent
     * accidental overwriting of a permission.</p> 
     */
    inline bool GetReplace() const { return m_replace; }
    inline bool ReplaceHasBeenSet() const { return m_replaceHasBeenSet; }
    inline void SetReplace(bool value) { m_replaceHasBeenSet = true; m_replace = value; }
    inline AssociateResourceSharePermissionRequest& WithReplace(bool value) { SetReplace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AssociateResourceSharePermissionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the version of the RAM permission to associate with the resource
     * share. You can specify <i>only</i> the version that is currently set as the
     * default version for the permission. If you also set the <code>replace</code>
     * pararameter to <code>true</code>, then this operation updates an outdated
     * version of the permission to the current default version.</p>  <p>You
     * don't need to specify this parameter because the default behavior is to use the
     * version that is currently set as the default version for the permission. This
     * parameter is supported for backwards compatibility.</p> 
     */
    inline int GetPermissionVersion() const { return m_permissionVersion; }
    inline bool PermissionVersionHasBeenSet() const { return m_permissionVersionHasBeenSet; }
    inline void SetPermissionVersion(int value) { m_permissionVersionHasBeenSet = true; m_permissionVersion = value; }
    inline AssociateResourceSharePermissionRequest& WithPermissionVersion(int value) { SetPermissionVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::String m_permissionArn;
    bool m_permissionArnHasBeenSet = false;

    bool m_replace{false};
    bool m_replaceHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    int m_permissionVersion{0};
    bool m_permissionVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
