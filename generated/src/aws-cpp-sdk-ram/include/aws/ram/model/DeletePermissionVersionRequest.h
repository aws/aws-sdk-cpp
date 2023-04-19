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
namespace Http
{
    class URI;
} //namespace Http
namespace RAM
{
namespace Model
{

  /**
   */
  class DeletePermissionVersionRequest : public RAMRequest
  {
  public:
    AWS_RAM_API DeletePermissionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePermissionVersion"; }

    AWS_RAM_API Aws::String SerializePayload() const override;

    AWS_RAM_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission with the version you want to
     * delete.</p>
     */
    inline const Aws::String& GetPermissionArn() const{ return m_permissionArn; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission with the version you want to
     * delete.</p>
     */
    inline bool PermissionArnHasBeenSet() const { return m_permissionArnHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission with the version you want to
     * delete.</p>
     */
    inline void SetPermissionArn(const Aws::String& value) { m_permissionArnHasBeenSet = true; m_permissionArn = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission with the version you want to
     * delete.</p>
     */
    inline void SetPermissionArn(Aws::String&& value) { m_permissionArnHasBeenSet = true; m_permissionArn = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission with the version you want to
     * delete.</p>
     */
    inline void SetPermissionArn(const char* value) { m_permissionArnHasBeenSet = true; m_permissionArn.assign(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission with the version you want to
     * delete.</p>
     */
    inline DeletePermissionVersionRequest& WithPermissionArn(const Aws::String& value) { SetPermissionArn(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission with the version you want to
     * delete.</p>
     */
    inline DeletePermissionVersionRequest& WithPermissionArn(Aws::String&& value) { SetPermissionArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the permission with the version you want to
     * delete.</p>
     */
    inline DeletePermissionVersionRequest& WithPermissionArn(const char* value) { SetPermissionArn(value); return *this;}


    /**
     * <p>Specifies the version number to delete.</p> <p>You can't delete the default
     * version for a customer managed permission.</p> <p>You can't delete a version if
     * it's the only version of the permission. You must either first create another
     * version, or delete the permission completely.</p> <p>You can't delete a version
     * if it is attached to any resource shares. If the version is the default, you
     * must first use <a>SetDefaultPermissionVersion</a> to set a different version as
     * the default for the customer managed permission, and then use
     * <a>AssociateResourceSharePermission</a> to update your resource shares to use
     * the new default version.</p>
     */
    inline int GetPermissionVersion() const{ return m_permissionVersion; }

    /**
     * <p>Specifies the version number to delete.</p> <p>You can't delete the default
     * version for a customer managed permission.</p> <p>You can't delete a version if
     * it's the only version of the permission. You must either first create another
     * version, or delete the permission completely.</p> <p>You can't delete a version
     * if it is attached to any resource shares. If the version is the default, you
     * must first use <a>SetDefaultPermissionVersion</a> to set a different version as
     * the default for the customer managed permission, and then use
     * <a>AssociateResourceSharePermission</a> to update your resource shares to use
     * the new default version.</p>
     */
    inline bool PermissionVersionHasBeenSet() const { return m_permissionVersionHasBeenSet; }

    /**
     * <p>Specifies the version number to delete.</p> <p>You can't delete the default
     * version for a customer managed permission.</p> <p>You can't delete a version if
     * it's the only version of the permission. You must either first create another
     * version, or delete the permission completely.</p> <p>You can't delete a version
     * if it is attached to any resource shares. If the version is the default, you
     * must first use <a>SetDefaultPermissionVersion</a> to set a different version as
     * the default for the customer managed permission, and then use
     * <a>AssociateResourceSharePermission</a> to update your resource shares to use
     * the new default version.</p>
     */
    inline void SetPermissionVersion(int value) { m_permissionVersionHasBeenSet = true; m_permissionVersion = value; }

    /**
     * <p>Specifies the version number to delete.</p> <p>You can't delete the default
     * version for a customer managed permission.</p> <p>You can't delete a version if
     * it's the only version of the permission. You must either first create another
     * version, or delete the permission completely.</p> <p>You can't delete a version
     * if it is attached to any resource shares. If the version is the default, you
     * must first use <a>SetDefaultPermissionVersion</a> to set a different version as
     * the default for the customer managed permission, and then use
     * <a>AssociateResourceSharePermission</a> to update your resource shares to use
     * the new default version.</p>
     */
    inline DeletePermissionVersionRequest& WithPermissionVersion(int value) { SetPermissionVersion(value); return *this;}


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
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

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
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

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
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

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
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

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
    inline DeletePermissionVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

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
    inline DeletePermissionVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

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
    inline DeletePermissionVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_permissionArn;
    bool m_permissionArnHasBeenSet = false;

    int m_permissionVersion;
    bool m_permissionVersionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
