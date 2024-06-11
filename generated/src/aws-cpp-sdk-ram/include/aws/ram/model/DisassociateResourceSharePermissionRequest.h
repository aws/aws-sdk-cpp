﻿/**
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
  class DisassociateResourceSharePermissionRequest : public RAMRequest
  {
  public:
    AWS_RAM_API DisassociateResourceSharePermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateResourceSharePermission"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share that you want to remove the
     * managed permission from.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }
    inline DisassociateResourceSharePermissionRequest& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}
    inline DisassociateResourceSharePermissionRequest& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}
    inline DisassociateResourceSharePermissionRequest& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission to disassociate from the
     * resource share. Changes to permissions take effect immediately.</p>
     */
    inline const Aws::String& GetPermissionArn() const{ return m_permissionArn; }
    inline bool PermissionArnHasBeenSet() const { return m_permissionArnHasBeenSet; }
    inline void SetPermissionArn(const Aws::String& value) { m_permissionArnHasBeenSet = true; m_permissionArn = value; }
    inline void SetPermissionArn(Aws::String&& value) { m_permissionArnHasBeenSet = true; m_permissionArn = std::move(value); }
    inline void SetPermissionArn(const char* value) { m_permissionArnHasBeenSet = true; m_permissionArn.assign(value); }
    inline DisassociateResourceSharePermissionRequest& WithPermissionArn(const Aws::String& value) { SetPermissionArn(value); return *this;}
    inline DisassociateResourceSharePermissionRequest& WithPermissionArn(Aws::String&& value) { SetPermissionArn(std::move(value)); return *this;}
    inline DisassociateResourceSharePermissionRequest& WithPermissionArn(const char* value) { SetPermissionArn(value); return *this;}
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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline DisassociateResourceSharePermissionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DisassociateResourceSharePermissionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DisassociateResourceSharePermissionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::String m_permissionArn;
    bool m_permissionArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
