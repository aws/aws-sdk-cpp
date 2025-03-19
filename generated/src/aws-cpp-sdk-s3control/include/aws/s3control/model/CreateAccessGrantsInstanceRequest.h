/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateAccessGrantsInstanceRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API CreateAccessGrantsInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessGrantsInstance"; }

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
    CreateAccessGrantsInstanceRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you would like to associate your S3 Access Grants instance with an Amazon
     * Web Services IAM Identity Center instance, use this field to pass the Amazon
     * Resource Name (ARN) of the Amazon Web Services IAM Identity Center instance that
     * you are associating with your S3 Access Grants instance. An IAM Identity Center
     * instance is your corporate identity directory that you added to the IAM Identity
     * Center. You can use the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_ListInstances.html">ListInstances</a>
     * API operation to retrieve a list of your Identity Center instances and their
     * ARNs. </p>
     */
    inline const Aws::String& GetIdentityCenterArn() const { return m_identityCenterArn; }
    inline bool IdentityCenterArnHasBeenSet() const { return m_identityCenterArnHasBeenSet; }
    template<typename IdentityCenterArnT = Aws::String>
    void SetIdentityCenterArn(IdentityCenterArnT&& value) { m_identityCenterArnHasBeenSet = true; m_identityCenterArn = std::forward<IdentityCenterArnT>(value); }
    template<typename IdentityCenterArnT = Aws::String>
    CreateAccessGrantsInstanceRequest& WithIdentityCenterArn(IdentityCenterArnT&& value) { SetIdentityCenterArn(std::forward<IdentityCenterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services resource tags that you are adding to the S3 Access
     * Grants instance. Each tag is a label consisting of a user-defined key and value.
     * Tags can help you manage, identify, organize, search for, and filter resources.
     * </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAccessGrantsInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAccessGrantsInstanceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_identityCenterArn;
    bool m_identityCenterArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
