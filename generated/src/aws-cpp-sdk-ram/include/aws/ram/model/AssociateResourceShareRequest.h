/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class AssociateResourceShareRequest : public RAMRequest
  {
  public:
    AWS_RAM_API AssociateResourceShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResourceShare"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share that you want to add principals or
     * resources to.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share that you want to add principals or
     * resources to.</p>
     */
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share that you want to add principals or
     * resources to.</p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share that you want to add principals or
     * resources to.</p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share that you want to add principals or
     * resources to.</p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share that you want to add principals or
     * resources to.</p>
     */
    inline AssociateResourceShareRequest& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share that you want to add principals or
     * resources to.</p>
     */
    inline AssociateResourceShareRequest& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource share that you want to add principals or
     * resources to.</p>
     */
    inline AssociateResourceShareRequest& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}


    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resources that you want to share. This can be
     * <code>null</code> if you want to add only principals.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resources that you want to share. This can be
     * <code>null</code> if you want to add only principals.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resources that you want to share. This can be
     * <code>null</code> if you want to add only principals.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resources that you want to share. This can be
     * <code>null</code> if you want to add only principals.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resources that you want to share. This can be
     * <code>null</code> if you want to add only principals.</p>
     */
    inline AssociateResourceShareRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resources that you want to share. This can be
     * <code>null</code> if you want to add only principals.</p>
     */
    inline AssociateResourceShareRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resources that you want to share. This can be
     * <code>null</code> if you want to add only principals.</p>
     */
    inline AssociateResourceShareRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resources that you want to share. This can be
     * <code>null</code> if you want to add only principals.</p>
     */
    inline AssociateResourceShareRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resources that you want to share. This can be
     * <code>null</code> if you want to add only principals.</p>
     */
    inline AssociateResourceShareRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>Specifies a list of principals to whom you want to the resource share. This
     * can be <code>null</code> if you want to add only resources.</p> <p>What the
     * principals can do with the resources in the share is determined by the RAM
     * permissions that you associate with the resource share. See
     * <a>AssociateResourceSharePermission</a>.</p> <p>You can include the following
     * values:</p> <ul> <li> <p>An Amazon Web Services account ID, for example:
     * <code>123456789012</code> </p> </li> <li> <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an organization in Organizations, for example:
     * <code>organizations::123456789012:organization/o-exampleorgid</code> </p> </li>
     * <li> <p>An ARN of an organizational unit (OU) in Organizations, for example:
     * <code>organizations::123456789012:ou/o-exampleorgid/ou-examplerootid-exampleouid123</code>
     * </p> </li> <li> <p>An ARN of an IAM role, for example:
     * <code>iam::123456789012:role/rolename</code> </p> </li> <li> <p>An ARN of an IAM
     * user, for example: <code>iam::123456789012user/username</code> </p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetPrincipals() const{ return m_principals; }

    /**
     * <p>Specifies a list of principals to whom you want to the resource share. This
     * can be <code>null</code> if you want to add only resources.</p> <p>What the
     * principals can do with the resources in the share is determined by the RAM
     * permissions that you associate with the resource share. See
     * <a>AssociateResourceSharePermission</a>.</p> <p>You can include the following
     * values:</p> <ul> <li> <p>An Amazon Web Services account ID, for example:
     * <code>123456789012</code> </p> </li> <li> <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an organization in Organizations, for example:
     * <code>organizations::123456789012:organization/o-exampleorgid</code> </p> </li>
     * <li> <p>An ARN of an organizational unit (OU) in Organizations, for example:
     * <code>organizations::123456789012:ou/o-exampleorgid/ou-examplerootid-exampleouid123</code>
     * </p> </li> <li> <p>An ARN of an IAM role, for example:
     * <code>iam::123456789012:role/rolename</code> </p> </li> <li> <p>An ARN of an IAM
     * user, for example: <code>iam::123456789012user/username</code> </p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }

    /**
     * <p>Specifies a list of principals to whom you want to the resource share. This
     * can be <code>null</code> if you want to add only resources.</p> <p>What the
     * principals can do with the resources in the share is determined by the RAM
     * permissions that you associate with the resource share. See
     * <a>AssociateResourceSharePermission</a>.</p> <p>You can include the following
     * values:</p> <ul> <li> <p>An Amazon Web Services account ID, for example:
     * <code>123456789012</code> </p> </li> <li> <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an organization in Organizations, for example:
     * <code>organizations::123456789012:organization/o-exampleorgid</code> </p> </li>
     * <li> <p>An ARN of an organizational unit (OU) in Organizations, for example:
     * <code>organizations::123456789012:ou/o-exampleorgid/ou-examplerootid-exampleouid123</code>
     * </p> </li> <li> <p>An ARN of an IAM role, for example:
     * <code>iam::123456789012:role/rolename</code> </p> </li> <li> <p>An ARN of an IAM
     * user, for example: <code>iam::123456789012user/username</code> </p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }

    /**
     * <p>Specifies a list of principals to whom you want to the resource share. This
     * can be <code>null</code> if you want to add only resources.</p> <p>What the
     * principals can do with the resources in the share is determined by the RAM
     * permissions that you associate with the resource share. See
     * <a>AssociateResourceSharePermission</a>.</p> <p>You can include the following
     * values:</p> <ul> <li> <p>An Amazon Web Services account ID, for example:
     * <code>123456789012</code> </p> </li> <li> <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an organization in Organizations, for example:
     * <code>organizations::123456789012:organization/o-exampleorgid</code> </p> </li>
     * <li> <p>An ARN of an organizational unit (OU) in Organizations, for example:
     * <code>organizations::123456789012:ou/o-exampleorgid/ou-examplerootid-exampleouid123</code>
     * </p> </li> <li> <p>An ARN of an IAM role, for example:
     * <code>iam::123456789012:role/rolename</code> </p> </li> <li> <p>An ARN of an IAM
     * user, for example: <code>iam::123456789012user/username</code> </p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }

    /**
     * <p>Specifies a list of principals to whom you want to the resource share. This
     * can be <code>null</code> if you want to add only resources.</p> <p>What the
     * principals can do with the resources in the share is determined by the RAM
     * permissions that you associate with the resource share. See
     * <a>AssociateResourceSharePermission</a>.</p> <p>You can include the following
     * values:</p> <ul> <li> <p>An Amazon Web Services account ID, for example:
     * <code>123456789012</code> </p> </li> <li> <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an organization in Organizations, for example:
     * <code>organizations::123456789012:organization/o-exampleorgid</code> </p> </li>
     * <li> <p>An ARN of an organizational unit (OU) in Organizations, for example:
     * <code>organizations::123456789012:ou/o-exampleorgid/ou-examplerootid-exampleouid123</code>
     * </p> </li> <li> <p>An ARN of an IAM role, for example:
     * <code>iam::123456789012:role/rolename</code> </p> </li> <li> <p>An ARN of an IAM
     * user, for example: <code>iam::123456789012user/username</code> </p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline AssociateResourceShareRequest& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>Specifies a list of principals to whom you want to the resource share. This
     * can be <code>null</code> if you want to add only resources.</p> <p>What the
     * principals can do with the resources in the share is determined by the RAM
     * permissions that you associate with the resource share. See
     * <a>AssociateResourceSharePermission</a>.</p> <p>You can include the following
     * values:</p> <ul> <li> <p>An Amazon Web Services account ID, for example:
     * <code>123456789012</code> </p> </li> <li> <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an organization in Organizations, for example:
     * <code>organizations::123456789012:organization/o-exampleorgid</code> </p> </li>
     * <li> <p>An ARN of an organizational unit (OU) in Organizations, for example:
     * <code>organizations::123456789012:ou/o-exampleorgid/ou-examplerootid-exampleouid123</code>
     * </p> </li> <li> <p>An ARN of an IAM role, for example:
     * <code>iam::123456789012:role/rolename</code> </p> </li> <li> <p>An ARN of an IAM
     * user, for example: <code>iam::123456789012user/username</code> </p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline AssociateResourceShareRequest& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of principals to whom you want to the resource share. This
     * can be <code>null</code> if you want to add only resources.</p> <p>What the
     * principals can do with the resources in the share is determined by the RAM
     * permissions that you associate with the resource share. See
     * <a>AssociateResourceSharePermission</a>.</p> <p>You can include the following
     * values:</p> <ul> <li> <p>An Amazon Web Services account ID, for example:
     * <code>123456789012</code> </p> </li> <li> <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an organization in Organizations, for example:
     * <code>organizations::123456789012:organization/o-exampleorgid</code> </p> </li>
     * <li> <p>An ARN of an organizational unit (OU) in Organizations, for example:
     * <code>organizations::123456789012:ou/o-exampleorgid/ou-examplerootid-exampleouid123</code>
     * </p> </li> <li> <p>An ARN of an IAM role, for example:
     * <code>iam::123456789012:role/rolename</code> </p> </li> <li> <p>An ARN of an IAM
     * user, for example: <code>iam::123456789012user/username</code> </p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline AssociateResourceShareRequest& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>Specifies a list of principals to whom you want to the resource share. This
     * can be <code>null</code> if you want to add only resources.</p> <p>What the
     * principals can do with the resources in the share is determined by the RAM
     * permissions that you associate with the resource share. See
     * <a>AssociateResourceSharePermission</a>.</p> <p>You can include the following
     * values:</p> <ul> <li> <p>An Amazon Web Services account ID, for example:
     * <code>123456789012</code> </p> </li> <li> <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an organization in Organizations, for example:
     * <code>organizations::123456789012:organization/o-exampleorgid</code> </p> </li>
     * <li> <p>An ARN of an organizational unit (OU) in Organizations, for example:
     * <code>organizations::123456789012:ou/o-exampleorgid/ou-examplerootid-exampleouid123</code>
     * </p> </li> <li> <p>An ARN of an IAM role, for example:
     * <code>iam::123456789012:role/rolename</code> </p> </li> <li> <p>An ARN of an IAM
     * user, for example: <code>iam::123456789012user/username</code> </p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline AssociateResourceShareRequest& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of principals to whom you want to the resource share. This
     * can be <code>null</code> if you want to add only resources.</p> <p>What the
     * principals can do with the resources in the share is determined by the RAM
     * permissions that you associate with the resource share. See
     * <a>AssociateResourceSharePermission</a>.</p> <p>You can include the following
     * values:</p> <ul> <li> <p>An Amazon Web Services account ID, for example:
     * <code>123456789012</code> </p> </li> <li> <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an organization in Organizations, for example:
     * <code>organizations::123456789012:organization/o-exampleorgid</code> </p> </li>
     * <li> <p>An ARN of an organizational unit (OU) in Organizations, for example:
     * <code>organizations::123456789012:ou/o-exampleorgid/ou-examplerootid-exampleouid123</code>
     * </p> </li> <li> <p>An ARN of an IAM role, for example:
     * <code>iam::123456789012:role/rolename</code> </p> </li> <li> <p>An ARN of an IAM
     * user, for example: <code>iam::123456789012user/username</code> </p> </li> </ul>
     *  <p>Not all resource types can be shared with IAM roles and users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/ram/latest/userguide/permissions.html#permissions-rbp-supported-resource-types">Sharing
     * with IAM roles and users</a> in the <i>Resource Access Manager User
     * Guide</i>.</p> 
     */
    inline AssociateResourceShareRequest& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }


    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p>
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
     * generates a random one for you.</p>
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
     * generates a random one for you.</p>
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
     * generates a random one for you.</p>
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
     * generates a random one for you.</p>
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
     * generates a random one for you.</p>
     */
    inline AssociateResourceShareRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p>
     */
    inline AssociateResourceShareRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value.</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p>
     */
    inline AssociateResourceShareRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
