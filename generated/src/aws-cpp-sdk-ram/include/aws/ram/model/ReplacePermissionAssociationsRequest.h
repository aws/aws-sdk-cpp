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
  class ReplacePermissionAssociationsRequest : public RAMRequest
  {
  public:
    AWS_RAM_API ReplacePermissionAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReplacePermissionAssociations"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to replace.</p>
     */
    inline const Aws::String& GetFromPermissionArn() const{ return m_fromPermissionArn; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to replace.</p>
     */
    inline bool FromPermissionArnHasBeenSet() const { return m_fromPermissionArnHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to replace.</p>
     */
    inline void SetFromPermissionArn(const Aws::String& value) { m_fromPermissionArnHasBeenSet = true; m_fromPermissionArn = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to replace.</p>
     */
    inline void SetFromPermissionArn(Aws::String&& value) { m_fromPermissionArnHasBeenSet = true; m_fromPermissionArn = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to replace.</p>
     */
    inline void SetFromPermissionArn(const char* value) { m_fromPermissionArnHasBeenSet = true; m_fromPermissionArn.assign(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to replace.</p>
     */
    inline ReplacePermissionAssociationsRequest& WithFromPermissionArn(const Aws::String& value) { SetFromPermissionArn(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to replace.</p>
     */
    inline ReplacePermissionAssociationsRequest& WithFromPermissionArn(Aws::String&& value) { SetFromPermissionArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to replace.</p>
     */
    inline ReplacePermissionAssociationsRequest& WithFromPermissionArn(const char* value) { SetFromPermissionArn(value); return *this;}


    /**
     * <p>Specifies that you want to updated the permissions for only those resource
     * shares that use the specified version of the managed permission.</p>
     */
    inline int GetFromPermissionVersion() const{ return m_fromPermissionVersion; }

    /**
     * <p>Specifies that you want to updated the permissions for only those resource
     * shares that use the specified version of the managed permission.</p>
     */
    inline bool FromPermissionVersionHasBeenSet() const { return m_fromPermissionVersionHasBeenSet; }

    /**
     * <p>Specifies that you want to updated the permissions for only those resource
     * shares that use the specified version of the managed permission.</p>
     */
    inline void SetFromPermissionVersion(int value) { m_fromPermissionVersionHasBeenSet = true; m_fromPermissionVersion = value; }

    /**
     * <p>Specifies that you want to updated the permissions for only those resource
     * shares that use the specified version of the managed permission.</p>
     */
    inline ReplacePermissionAssociationsRequest& WithFromPermissionVersion(int value) { SetFromPermissionVersion(value); return *this;}


    /**
     * <p>Specifies the ARN of the managed permission that you want to associate with
     * resource shares in place of the one specified by <code>fromPerssionArn</code>
     * and <code>fromPermissionVersion</code>.</p> <p>The operation always associates
     * the version that is currently the default for the specified managed
     * permission.</p>
     */
    inline const Aws::String& GetToPermissionArn() const{ return m_toPermissionArn; }

    /**
     * <p>Specifies the ARN of the managed permission that you want to associate with
     * resource shares in place of the one specified by <code>fromPerssionArn</code>
     * and <code>fromPermissionVersion</code>.</p> <p>The operation always associates
     * the version that is currently the default for the specified managed
     * permission.</p>
     */
    inline bool ToPermissionArnHasBeenSet() const { return m_toPermissionArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the managed permission that you want to associate with
     * resource shares in place of the one specified by <code>fromPerssionArn</code>
     * and <code>fromPermissionVersion</code>.</p> <p>The operation always associates
     * the version that is currently the default for the specified managed
     * permission.</p>
     */
    inline void SetToPermissionArn(const Aws::String& value) { m_toPermissionArnHasBeenSet = true; m_toPermissionArn = value; }

    /**
     * <p>Specifies the ARN of the managed permission that you want to associate with
     * resource shares in place of the one specified by <code>fromPerssionArn</code>
     * and <code>fromPermissionVersion</code>.</p> <p>The operation always associates
     * the version that is currently the default for the specified managed
     * permission.</p>
     */
    inline void SetToPermissionArn(Aws::String&& value) { m_toPermissionArnHasBeenSet = true; m_toPermissionArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the managed permission that you want to associate with
     * resource shares in place of the one specified by <code>fromPerssionArn</code>
     * and <code>fromPermissionVersion</code>.</p> <p>The operation always associates
     * the version that is currently the default for the specified managed
     * permission.</p>
     */
    inline void SetToPermissionArn(const char* value) { m_toPermissionArnHasBeenSet = true; m_toPermissionArn.assign(value); }

    /**
     * <p>Specifies the ARN of the managed permission that you want to associate with
     * resource shares in place of the one specified by <code>fromPerssionArn</code>
     * and <code>fromPermissionVersion</code>.</p> <p>The operation always associates
     * the version that is currently the default for the specified managed
     * permission.</p>
     */
    inline ReplacePermissionAssociationsRequest& WithToPermissionArn(const Aws::String& value) { SetToPermissionArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the managed permission that you want to associate with
     * resource shares in place of the one specified by <code>fromPerssionArn</code>
     * and <code>fromPermissionVersion</code>.</p> <p>The operation always associates
     * the version that is currently the default for the specified managed
     * permission.</p>
     */
    inline ReplacePermissionAssociationsRequest& WithToPermissionArn(Aws::String&& value) { SetToPermissionArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the managed permission that you want to associate with
     * resource shares in place of the one specified by <code>fromPerssionArn</code>
     * and <code>fromPermissionVersion</code>.</p> <p>The operation always associates
     * the version that is currently the default for the specified managed
     * permission.</p>
     */
    inline ReplacePermissionAssociationsRequest& WithToPermissionArn(const char* value) { SetToPermissionArn(value); return *this;}


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
    inline ReplacePermissionAssociationsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

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
    inline ReplacePermissionAssociationsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

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
    inline ReplacePermissionAssociationsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_fromPermissionArn;
    bool m_fromPermissionArnHasBeenSet = false;

    int m_fromPermissionVersion;
    bool m_fromPermissionVersionHasBeenSet = false;

    Aws::String m_toPermissionArn;
    bool m_toPermissionArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
