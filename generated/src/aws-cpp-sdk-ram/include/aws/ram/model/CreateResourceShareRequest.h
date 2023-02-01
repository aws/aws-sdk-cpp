/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ram/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class CreateResourceShareRequest : public RAMRequest
  {
  public:
    AWS_RAM_API CreateResourceShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourceShare"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the name of the resource share.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the name of the resource share.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the name of the resource share.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name of the resource share.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the name of the resource share.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the name of the resource share.</p>
     */
    inline CreateResourceShareRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name of the resource share.</p>
     */
    inline CreateResourceShareRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the resource share.</p>
     */
    inline CreateResourceShareRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies a list of one or more ARNs of the resources to associate with the
     * resource share.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>Specifies a list of one or more ARNs of the resources to associate with the
     * resource share.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>Specifies a list of one or more ARNs of the resources to associate with the
     * resource share.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>Specifies a list of one or more ARNs of the resources to associate with the
     * resource share.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>Specifies a list of one or more ARNs of the resources to associate with the
     * resource share.</p>
     */
    inline CreateResourceShareRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>Specifies a list of one or more ARNs of the resources to associate with the
     * resource share.</p>
     */
    inline CreateResourceShareRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of one or more ARNs of the resources to associate with the
     * resource share.</p>
     */
    inline CreateResourceShareRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>Specifies a list of one or more ARNs of the resources to associate with the
     * resource share.</p>
     */
    inline CreateResourceShareRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of one or more ARNs of the resources to associate with the
     * resource share.</p>
     */
    inline CreateResourceShareRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>Specifies a list of one or more principals to associate with the resource
     * share.</p> <p>You can include the following values:</p> <ul> <li> <p>An Amazon
     * Web Services account ID, for example: <code>123456789012</code> </p> </li> <li>
     * <p>An <a
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
     * <p>Specifies a list of one or more principals to associate with the resource
     * share.</p> <p>You can include the following values:</p> <ul> <li> <p>An Amazon
     * Web Services account ID, for example: <code>123456789012</code> </p> </li> <li>
     * <p>An <a
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
     * <p>Specifies a list of one or more principals to associate with the resource
     * share.</p> <p>You can include the following values:</p> <ul> <li> <p>An Amazon
     * Web Services account ID, for example: <code>123456789012</code> </p> </li> <li>
     * <p>An <a
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
     * <p>Specifies a list of one or more principals to associate with the resource
     * share.</p> <p>You can include the following values:</p> <ul> <li> <p>An Amazon
     * Web Services account ID, for example: <code>123456789012</code> </p> </li> <li>
     * <p>An <a
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
     * <p>Specifies a list of one or more principals to associate with the resource
     * share.</p> <p>You can include the following values:</p> <ul> <li> <p>An Amazon
     * Web Services account ID, for example: <code>123456789012</code> </p> </li> <li>
     * <p>An <a
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
    inline CreateResourceShareRequest& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}

    /**
     * <p>Specifies a list of one or more principals to associate with the resource
     * share.</p> <p>You can include the following values:</p> <ul> <li> <p>An Amazon
     * Web Services account ID, for example: <code>123456789012</code> </p> </li> <li>
     * <p>An <a
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
    inline CreateResourceShareRequest& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of one or more principals to associate with the resource
     * share.</p> <p>You can include the following values:</p> <ul> <li> <p>An Amazon
     * Web Services account ID, for example: <code>123456789012</code> </p> </li> <li>
     * <p>An <a
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
    inline CreateResourceShareRequest& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }

    /**
     * <p>Specifies a list of one or more principals to associate with the resource
     * share.</p> <p>You can include the following values:</p> <ul> <li> <p>An Amazon
     * Web Services account ID, for example: <code>123456789012</code> </p> </li> <li>
     * <p>An <a
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
    inline CreateResourceShareRequest& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of one or more principals to associate with the resource
     * share.</p> <p>You can include the following values:</p> <ul> <li> <p>An Amazon
     * Web Services account ID, for example: <code>123456789012</code> </p> </li> <li>
     * <p>An <a
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
    inline CreateResourceShareRequest& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }


    /**
     * <p>Specifies one or more tags to attach to the resource share itself. It doesn't
     * attach the tags to the resources associated with the resource share.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies one or more tags to attach to the resource share itself. It doesn't
     * attach the tags to the resources associated with the resource share.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies one or more tags to attach to the resource share itself. It doesn't
     * attach the tags to the resources associated with the resource share.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies one or more tags to attach to the resource share itself. It doesn't
     * attach the tags to the resources associated with the resource share.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies one or more tags to attach to the resource share itself. It doesn't
     * attach the tags to the resources associated with the resource share.</p>
     */
    inline CreateResourceShareRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies one or more tags to attach to the resource share itself. It doesn't
     * attach the tags to the resources associated with the resource share.</p>
     */
    inline CreateResourceShareRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies one or more tags to attach to the resource share itself. It doesn't
     * attach the tags to the resources associated with the resource share.</p>
     */
    inline CreateResourceShareRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies one or more tags to attach to the resource share itself. It doesn't
     * attach the tags to the resources associated with the resource share.</p>
     */
    inline CreateResourceShareRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether principals outside your organization in Organizations can
     * be associated with a resource share. A value of <code>true</code> lets you share
     * with individual Amazon Web Services accounts that are <i>not</i> in your
     * organization. A value of <code>false</code> only has meaning if your account is
     * a member of an Amazon Web Services Organization. The default value is
     * <code>true</code>.</p>
     */
    inline bool GetAllowExternalPrincipals() const{ return m_allowExternalPrincipals; }

    /**
     * <p>Specifies whether principals outside your organization in Organizations can
     * be associated with a resource share. A value of <code>true</code> lets you share
     * with individual Amazon Web Services accounts that are <i>not</i> in your
     * organization. A value of <code>false</code> only has meaning if your account is
     * a member of an Amazon Web Services Organization. The default value is
     * <code>true</code>.</p>
     */
    inline bool AllowExternalPrincipalsHasBeenSet() const { return m_allowExternalPrincipalsHasBeenSet; }

    /**
     * <p>Specifies whether principals outside your organization in Organizations can
     * be associated with a resource share. A value of <code>true</code> lets you share
     * with individual Amazon Web Services accounts that are <i>not</i> in your
     * organization. A value of <code>false</code> only has meaning if your account is
     * a member of an Amazon Web Services Organization. The default value is
     * <code>true</code>.</p>
     */
    inline void SetAllowExternalPrincipals(bool value) { m_allowExternalPrincipalsHasBeenSet = true; m_allowExternalPrincipals = value; }

    /**
     * <p>Specifies whether principals outside your organization in Organizations can
     * be associated with a resource share. A value of <code>true</code> lets you share
     * with individual Amazon Web Services accounts that are <i>not</i> in your
     * organization. A value of <code>false</code> only has meaning if your account is
     * a member of an Amazon Web Services Organization. The default value is
     * <code>true</code>.</p>
     */
    inline CreateResourceShareRequest& WithAllowExternalPrincipals(bool value) { SetAllowExternalPrincipals(value); return *this;}


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
    inline CreateResourceShareRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

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
    inline CreateResourceShareRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

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
    inline CreateResourceShareRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the RAM permission to associate with the resource
     * share. If you do not specify an ARN for the permission, RAM automatically
     * attaches the default version of the permission for each resource type. You can
     * associate only one permission with each resource type included in the resource
     * share.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissionArns() const{ return m_permissionArns; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the RAM permission to associate with the resource
     * share. If you do not specify an ARN for the permission, RAM automatically
     * attaches the default version of the permission for each resource type. You can
     * associate only one permission with each resource type included in the resource
     * share.</p>
     */
    inline bool PermissionArnsHasBeenSet() const { return m_permissionArnsHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the RAM permission to associate with the resource
     * share. If you do not specify an ARN for the permission, RAM automatically
     * attaches the default version of the permission for each resource type. You can
     * associate only one permission with each resource type included in the resource
     * share.</p>
     */
    inline void SetPermissionArns(const Aws::Vector<Aws::String>& value) { m_permissionArnsHasBeenSet = true; m_permissionArns = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the RAM permission to associate with the resource
     * share. If you do not specify an ARN for the permission, RAM automatically
     * attaches the default version of the permission for each resource type. You can
     * associate only one permission with each resource type included in the resource
     * share.</p>
     */
    inline void SetPermissionArns(Aws::Vector<Aws::String>&& value) { m_permissionArnsHasBeenSet = true; m_permissionArns = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the RAM permission to associate with the resource
     * share. If you do not specify an ARN for the permission, RAM automatically
     * attaches the default version of the permission for each resource type. You can
     * associate only one permission with each resource type included in the resource
     * share.</p>
     */
    inline CreateResourceShareRequest& WithPermissionArns(const Aws::Vector<Aws::String>& value) { SetPermissionArns(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the RAM permission to associate with the resource
     * share. If you do not specify an ARN for the permission, RAM automatically
     * attaches the default version of the permission for each resource type. You can
     * associate only one permission with each resource type included in the resource
     * share.</p>
     */
    inline CreateResourceShareRequest& WithPermissionArns(Aws::Vector<Aws::String>&& value) { SetPermissionArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the RAM permission to associate with the resource
     * share. If you do not specify an ARN for the permission, RAM automatically
     * attaches the default version of the permission for each resource type. You can
     * associate only one permission with each resource type included in the resource
     * share.</p>
     */
    inline CreateResourceShareRequest& AddPermissionArns(const Aws::String& value) { m_permissionArnsHasBeenSet = true; m_permissionArns.push_back(value); return *this; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the RAM permission to associate with the resource
     * share. If you do not specify an ARN for the permission, RAM automatically
     * attaches the default version of the permission for each resource type. You can
     * associate only one permission with each resource type included in the resource
     * share.</p>
     */
    inline CreateResourceShareRequest& AddPermissionArns(Aws::String&& value) { m_permissionArnsHasBeenSet = true; m_permissionArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the RAM permission to associate with the resource
     * share. If you do not specify an ARN for the permission, RAM automatically
     * attaches the default version of the permission for each resource type. You can
     * associate only one permission with each resource type included in the resource
     * share.</p>
     */
    inline CreateResourceShareRequest& AddPermissionArns(const char* value) { m_permissionArnsHasBeenSet = true; m_permissionArns.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_principals;
    bool m_principalsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_allowExternalPrincipals;
    bool m_allowExternalPrincipalsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_permissionArns;
    bool m_permissionArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
