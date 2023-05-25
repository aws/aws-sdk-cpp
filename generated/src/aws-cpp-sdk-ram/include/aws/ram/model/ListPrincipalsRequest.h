/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/ram/model/ResourceOwner.h>
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
  class ListPrincipalsRequest : public RAMRequest
  {
  public:
    AWS_RAM_API ListPrincipalsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPrincipals"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies that you want to list information for only resource shares that
     * match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – principals
     * that your account is sharing resources with</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – principals that are sharing resources with
     * your account</p> </li> </ul>
     */
    inline const ResourceOwner& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>Specifies that you want to list information for only resource shares that
     * match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – principals
     * that your account is sharing resources with</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – principals that are sharing resources with
     * your account</p> </li> </ul>
     */
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }

    /**
     * <p>Specifies that you want to list information for only resource shares that
     * match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – principals
     * that your account is sharing resources with</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – principals that are sharing resources with
     * your account</p> </li> </ul>
     */
    inline void SetResourceOwner(const ResourceOwner& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>Specifies that you want to list information for only resource shares that
     * match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – principals
     * that your account is sharing resources with</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – principals that are sharing resources with
     * your account</p> </li> </ul>
     */
    inline void SetResourceOwner(ResourceOwner&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }

    /**
     * <p>Specifies that you want to list information for only resource shares that
     * match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – principals
     * that your account is sharing resources with</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – principals that are sharing resources with
     * your account</p> </li> </ul>
     */
    inline ListPrincipalsRequest& WithResourceOwner(const ResourceOwner& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>Specifies that you want to list information for only resource shares that
     * match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> – principals
     * that your account is sharing resources with</p> </li> <li> <p> <b>
     * <code>OTHER-ACCOUNTS</code> </b> – principals that are sharing resources with
     * your account</p> </li> </ul>
     */
    inline ListPrincipalsRequest& WithResourceOwner(ResourceOwner&& value) { SetResourceOwner(std::move(value)); return *this;}


    /**
     * <p>Specifies that you want to list principal information for the resource share
     * with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>Specifies that you want to list principal information for the resource share
     * with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>Specifies that you want to list principal information for the resource share
     * with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>Specifies that you want to list principal information for the resource share
     * with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>Specifies that you want to list principal information for the resource share
     * with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>Specifies that you want to list principal information for the resource share
     * with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline ListPrincipalsRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>Specifies that you want to list principal information for the resource share
     * with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline ListPrincipalsRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to list principal information for the resource share
     * with the specified <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline ListPrincipalsRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Specifies that you want to list information for only the listed
     * principals.</p> <p>You can include the following values:</p> <ul> <li> <p>An
     * Amazon Web Services account ID, for example: <code>123456789012</code> </p>
     * </li> <li> <p>An <a
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
     * <p>Specifies that you want to list information for only the listed
     * principals.</p> <p>You can include the following values:</p> <ul> <li> <p>An
     * Amazon Web Services account ID, for example: <code>123456789012</code> </p>
     * </li> <li> <p>An <a
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
     * <p>Specifies that you want to list information for only the listed
     * principals.</p> <p>You can include the following values:</p> <ul> <li> <p>An
     * Amazon Web Services account ID, for example: <code>123456789012</code> </p>
     * </li> <li> <p>An <a
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
     * <p>Specifies that you want to list information for only the listed
     * principals.</p> <p>You can include the following values:</p> <ul> <li> <p>An
     * Amazon Web Services account ID, for example: <code>123456789012</code> </p>
     * </li> <li> <p>An <a
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
     * <p>Specifies that you want to list information for only the listed
     * principals.</p> <p>You can include the following values:</p> <ul> <li> <p>An
     * Amazon Web Services account ID, for example: <code>123456789012</code> </p>
     * </li> <li> <p>An <a
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
    inline ListPrincipalsRequest& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>Specifies that you want to list information for only the listed
     * principals.</p> <p>You can include the following values:</p> <ul> <li> <p>An
     * Amazon Web Services account ID, for example: <code>123456789012</code> </p>
     * </li> <li> <p>An <a
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
    inline ListPrincipalsRequest& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to list information for only the listed
     * principals.</p> <p>You can include the following values:</p> <ul> <li> <p>An
     * Amazon Web Services account ID, for example: <code>123456789012</code> </p>
     * </li> <li> <p>An <a
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
    inline ListPrincipalsRequest& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>Specifies that you want to list information for only the listed
     * principals.</p> <p>You can include the following values:</p> <ul> <li> <p>An
     * Amazon Web Services account ID, for example: <code>123456789012</code> </p>
     * </li> <li> <p>An <a
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
    inline ListPrincipalsRequest& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies that you want to list information for only the listed
     * principals.</p> <p>You can include the following values:</p> <ul> <li> <p>An
     * Amazon Web Services account ID, for example: <code>123456789012</code> </p>
     * </li> <li> <p>An <a
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
    inline ListPrincipalsRequest& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }


    /**
     * <p>Specifies that you want to list information for only principals associated
     * with resource shares that include the specified resource type.</p> <p>For a list
     * of valid values, query the <a>ListResourceTypes</a> operation.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with resource shares that include the specified resource type.</p> <p>For a list
     * of valid values, query the <a>ListResourceTypes</a> operation.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with resource shares that include the specified resource type.</p> <p>For a list
     * of valid values, query the <a>ListResourceTypes</a> operation.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with resource shares that include the specified resource type.</p> <p>For a list
     * of valid values, query the <a>ListResourceTypes</a> operation.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with resource shares that include the specified resource type.</p> <p>For a list
     * of valid values, query the <a>ListResourceTypes</a> operation.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with resource shares that include the specified resource type.</p> <p>For a list
     * of valid values, query the <a>ListResourceTypes</a> operation.</p>
     */
    inline ListPrincipalsRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with resource shares that include the specified resource type.</p> <p>For a list
     * of valid values, query the <a>ListResourceTypes</a> operation.</p>
     */
    inline ListPrincipalsRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with resource shares that include the specified resource type.</p> <p>For a list
     * of valid values, query the <a>ListResourceTypes</a> operation.</p>
     */
    inline ListPrincipalsRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Specifies that you want to list information for only principals associated
     * with the resource shares specified by a list the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShareArns() const{ return m_resourceShareArns; }

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with the resource shares specified by a list the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline bool ResourceShareArnsHasBeenSet() const { return m_resourceShareArnsHasBeenSet; }

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with the resource shares specified by a list the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline void SetResourceShareArns(const Aws::Vector<Aws::String>& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = value; }

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with the resource shares specified by a list the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline void SetResourceShareArns(Aws::Vector<Aws::String>&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = std::move(value); }

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with the resource shares specified by a list the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListPrincipalsRequest& WithResourceShareArns(const Aws::Vector<Aws::String>& value) { SetResourceShareArns(value); return *this;}

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with the resource shares specified by a list the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListPrincipalsRequest& WithResourceShareArns(Aws::Vector<Aws::String>&& value) { SetResourceShareArns(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with the resource shares specified by a list the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListPrincipalsRequest& AddResourceShareArns(const Aws::String& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with the resource shares specified by a list the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListPrincipalsRequest& AddResourceShareArns(Aws::String&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies that you want to list information for only principals associated
     * with the resource shares specified by a list the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline ListPrincipalsRequest& AddResourceShareArns(const char* value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }


    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListPrincipalsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListPrincipalsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListPrincipalsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline ListPrincipalsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ResourceOwner m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceShareArns;
    bool m_resourceShareArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
