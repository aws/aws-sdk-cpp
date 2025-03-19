/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/AccessGrantsLocationConfiguration.h>
#include <aws/s3control/model/Grantee.h>
#include <aws/s3control/model/Permission.h>
#include <aws/s3control/model/S3PrefixType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/Tag.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class CreateAccessGrantRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API CreateAccessGrantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessGrant"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the S3 Access Grants instance.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CreateAccessGrantRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the registered location to which you are granting access. S3 Access
     * Grants assigns this ID when you register the location. S3 Access Grants assigns
     * the ID <code>default</code> to the default location <code>s3://</code> and
     * assigns an auto-generated ID to other locations that you register. </p> <p>If
     * you are passing the <code>default</code> location, you cannot create an access
     * grant for the entire default location. You must also specify a bucket or a
     * bucket and prefix in the <code>Subprefix</code> field. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationId() const { return m_accessGrantsLocationId; }
    inline bool AccessGrantsLocationIdHasBeenSet() const { return m_accessGrantsLocationIdHasBeenSet; }
    template<typename AccessGrantsLocationIdT = Aws::String>
    void SetAccessGrantsLocationId(AccessGrantsLocationIdT&& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = std::forward<AccessGrantsLocationIdT>(value); }
    template<typename AccessGrantsLocationIdT = Aws::String>
    CreateAccessGrantRequest& WithAccessGrantsLocationId(AccessGrantsLocationIdT&& value) { SetAccessGrantsLocationId(std::forward<AccessGrantsLocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration options of the grant location. The grant location is the S3
     * path to the data to which you are granting access. It contains the
     * <code>S3SubPrefix</code> field. The grant scope is the result of appending the
     * subprefix to the location scope of the registered location.</p>
     */
    inline const AccessGrantsLocationConfiguration& GetAccessGrantsLocationConfiguration() const { return m_accessGrantsLocationConfiguration; }
    inline bool AccessGrantsLocationConfigurationHasBeenSet() const { return m_accessGrantsLocationConfigurationHasBeenSet; }
    template<typename AccessGrantsLocationConfigurationT = AccessGrantsLocationConfiguration>
    void SetAccessGrantsLocationConfiguration(AccessGrantsLocationConfigurationT&& value) { m_accessGrantsLocationConfigurationHasBeenSet = true; m_accessGrantsLocationConfiguration = std::forward<AccessGrantsLocationConfigurationT>(value); }
    template<typename AccessGrantsLocationConfigurationT = AccessGrantsLocationConfiguration>
    CreateAccessGrantRequest& WithAccessGrantsLocationConfiguration(AccessGrantsLocationConfigurationT&& value) { SetAccessGrantsLocationConfiguration(std::forward<AccessGrantsLocationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user, group, or role to which you are granting access. You can grant
     * access to an IAM user or role. If you have added your corporate directory to
     * Amazon Web Services IAM Identity Center and associated your Identity Center
     * instance with your S3 Access Grants instance, the grantee can also be a
     * corporate directory user or group.</p>
     */
    inline const Grantee& GetGrantee() const { return m_grantee; }
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }
    template<typename GranteeT = Grantee>
    void SetGrantee(GranteeT&& value) { m_granteeHasBeenSet = true; m_grantee = std::forward<GranteeT>(value); }
    template<typename GranteeT = Grantee>
    CreateAccessGrantRequest& WithGrantee(GranteeT&& value) { SetGrantee(std::forward<GranteeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of access that you are granting to your S3 data, which can be set to
     * one of the following values:</p> <ul> <li> <p> <code>READ</code> – Grant
     * read-only access to the S3 data.</p> </li> <li> <p> <code>WRITE</code> – Grant
     * write-only access to the S3 data.</p> </li> <li> <p> <code>READWRITE</code> –
     * Grant both read and write access to the S3 data.</p> </li> </ul>
     */
    inline Permission GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(Permission value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline CreateAccessGrantRequest& WithPermission(Permission value) { SetPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Web Services IAM Identity Center
     * application associated with your Identity Center instance. If an application ARN
     * is included in the request to create an access grant, the grantee can only
     * access the S3 data through this application. </p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    CreateAccessGrantRequest& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of <code>S3SubPrefix</code>. The only possible value is
     * <code>Object</code>. Pass this value if the access grant scope is an object. Do
     * not pass this value if the access grant scope is a bucket or a bucket and a
     * prefix. </p>
     */
    inline S3PrefixType GetS3PrefixType() const { return m_s3PrefixType; }
    inline bool S3PrefixTypeHasBeenSet() const { return m_s3PrefixTypeHasBeenSet; }
    inline void SetS3PrefixType(S3PrefixType value) { m_s3PrefixTypeHasBeenSet = true; m_s3PrefixType = value; }
    inline CreateAccessGrantRequest& WithS3PrefixType(S3PrefixType value) { SetS3PrefixType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services resource tags that you are adding to the access
     * grant. Each tag is a label consisting of a user-defined key and value. Tags can
     * help you manage, identify, organize, search for, and filter resources. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAccessGrantRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAccessGrantRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accessGrantsLocationId;
    bool m_accessGrantsLocationIdHasBeenSet = false;

    AccessGrantsLocationConfiguration m_accessGrantsLocationConfiguration;
    bool m_accessGrantsLocationConfigurationHasBeenSet = false;

    Grantee m_grantee;
    bool m_granteeHasBeenSet = false;

    Permission m_permission{Permission::NOT_SET};
    bool m_permissionHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    S3PrefixType m_s3PrefixType{S3PrefixType::NOT_SET};
    bool m_s3PrefixTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
