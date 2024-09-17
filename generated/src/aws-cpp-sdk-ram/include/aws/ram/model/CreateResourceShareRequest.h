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


    ///@{
    /**
     * <p>Specifies the name of the resource share.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateResourceShareRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateResourceShareRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateResourceShareRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a list of one or more ARNs of the resources to associate with the
     * resource share.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }
    inline CreateResourceShareRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}
    inline CreateResourceShareRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}
    inline CreateResourceShareRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }
    inline CreateResourceShareRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }
    inline CreateResourceShareRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a list of one or more principals to associate with the resource
     * share.</p> <p>You can include the following values:</p> <ul> <li> <p>An Amazon
     * Web Services account ID, for example: <code>123456789012</code> </p> </li> <li>
     * <p>An <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an organization in Organizations, for example:
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
    inline bool PrincipalsHasBeenSet() const { return m_principalsHasBeenSet; }
    inline void SetPrincipals(const Aws::Vector<Aws::String>& value) { m_principalsHasBeenSet = true; m_principals = value; }
    inline void SetPrincipals(Aws::Vector<Aws::String>&& value) { m_principalsHasBeenSet = true; m_principals = std::move(value); }
    inline CreateResourceShareRequest& WithPrincipals(const Aws::Vector<Aws::String>& value) { SetPrincipals(value); return *this;}
    inline CreateResourceShareRequest& WithPrincipals(Aws::Vector<Aws::String>&& value) { SetPrincipals(std::move(value)); return *this;}
    inline CreateResourceShareRequest& AddPrincipals(const Aws::String& value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }
    inline CreateResourceShareRequest& AddPrincipals(Aws::String&& value) { m_principalsHasBeenSet = true; m_principals.push_back(std::move(value)); return *this; }
    inline CreateResourceShareRequest& AddPrincipals(const char* value) { m_principalsHasBeenSet = true; m_principals.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies one or more tags to attach to the resource share itself. It doesn't
     * attach the tags to the resources associated with the resource share.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateResourceShareRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateResourceShareRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateResourceShareRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateResourceShareRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether principals outside your organization in Organizations can
     * be associated with a resource share. A value of <code>true</code> lets you share
     * with individual Amazon Web Services accounts that are <i>not</i> in your
     * organization. A value of <code>false</code> only has meaning if your account is
     * a member of an Amazon Web Services Organization. The default value is
     * <code>true</code>.</p>
     */
    inline bool GetAllowExternalPrincipals() const{ return m_allowExternalPrincipals; }
    inline bool AllowExternalPrincipalsHasBeenSet() const { return m_allowExternalPrincipalsHasBeenSet; }
    inline void SetAllowExternalPrincipals(bool value) { m_allowExternalPrincipalsHasBeenSet = true; m_allowExternalPrincipals = value; }
    inline CreateResourceShareRequest& WithAllowExternalPrincipals(bool value) { SetAllowExternalPrincipals(value); return *this;}
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
    inline CreateResourceShareRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateResourceShareRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateResourceShareRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
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
    inline bool PermissionArnsHasBeenSet() const { return m_permissionArnsHasBeenSet; }
    inline void SetPermissionArns(const Aws::Vector<Aws::String>& value) { m_permissionArnsHasBeenSet = true; m_permissionArns = value; }
    inline void SetPermissionArns(Aws::Vector<Aws::String>&& value) { m_permissionArnsHasBeenSet = true; m_permissionArns = std::move(value); }
    inline CreateResourceShareRequest& WithPermissionArns(const Aws::Vector<Aws::String>& value) { SetPermissionArns(value); return *this;}
    inline CreateResourceShareRequest& WithPermissionArns(Aws::Vector<Aws::String>&& value) { SetPermissionArns(std::move(value)); return *this;}
    inline CreateResourceShareRequest& AddPermissionArns(const Aws::String& value) { m_permissionArnsHasBeenSet = true; m_permissionArns.push_back(value); return *this; }
    inline CreateResourceShareRequest& AddPermissionArns(Aws::String&& value) { m_permissionArnsHasBeenSet = true; m_permissionArns.push_back(std::move(value)); return *this; }
    inline CreateResourceShareRequest& AddPermissionArns(const char* value) { m_permissionArnsHasBeenSet = true; m_permissionArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies from which source accounts the service principal has access to the
     * resources in this resource share.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<Aws::String>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<Aws::String>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline CreateResourceShareRequest& WithSources(const Aws::Vector<Aws::String>& value) { SetSources(value); return *this;}
    inline CreateResourceShareRequest& WithSources(Aws::Vector<Aws::String>&& value) { SetSources(std::move(value)); return *this;}
    inline CreateResourceShareRequest& AddSources(const Aws::String& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline CreateResourceShareRequest& AddSources(Aws::String&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    inline CreateResourceShareRequest& AddSources(const char* value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    ///@}
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

    Aws::Vector<Aws::String> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
