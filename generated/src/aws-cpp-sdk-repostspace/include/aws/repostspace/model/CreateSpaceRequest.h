/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/repostspace/model/TierLevel.h>
#include <utility>

namespace Aws
{
namespace repostspace
{
namespace Model
{

  /**
   */
  class CreateSpaceRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API CreateSpaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSpace"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline CreateSpaceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline CreateSpaceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline CreateSpaceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name for the private re:Post. This must be unique in your account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the private re:Post. This must be unique in your account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the private re:Post. This must be unique in your account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the private re:Post. This must be unique in your account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the private re:Post. This must be unique in your account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the private re:Post. This must be unique in your account.</p>
     */
    inline CreateSpaceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the private re:Post. This must be unique in your account.</p>
     */
    inline CreateSpaceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the private re:Post. This must be unique in your account.</p>
     */
    inline CreateSpaceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline CreateSpaceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline CreateSpaceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline CreateSpaceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The subdomain that you use to access your AWS re:Post Private private
     * re:Post. All custom subdomains must be approved by AWS before use. In addition
     * to your custom subdomain, all private re:Posts are issued an AWS generated
     * subdomain for immediate use.</p>
     */
    inline const Aws::String& GetSubdomain() const{ return m_subdomain; }

    /**
     * <p>The subdomain that you use to access your AWS re:Post Private private
     * re:Post. All custom subdomains must be approved by AWS before use. In addition
     * to your custom subdomain, all private re:Posts are issued an AWS generated
     * subdomain for immediate use.</p>
     */
    inline bool SubdomainHasBeenSet() const { return m_subdomainHasBeenSet; }

    /**
     * <p>The subdomain that you use to access your AWS re:Post Private private
     * re:Post. All custom subdomains must be approved by AWS before use. In addition
     * to your custom subdomain, all private re:Posts are issued an AWS generated
     * subdomain for immediate use.</p>
     */
    inline void SetSubdomain(const Aws::String& value) { m_subdomainHasBeenSet = true; m_subdomain = value; }

    /**
     * <p>The subdomain that you use to access your AWS re:Post Private private
     * re:Post. All custom subdomains must be approved by AWS before use. In addition
     * to your custom subdomain, all private re:Posts are issued an AWS generated
     * subdomain for immediate use.</p>
     */
    inline void SetSubdomain(Aws::String&& value) { m_subdomainHasBeenSet = true; m_subdomain = std::move(value); }

    /**
     * <p>The subdomain that you use to access your AWS re:Post Private private
     * re:Post. All custom subdomains must be approved by AWS before use. In addition
     * to your custom subdomain, all private re:Posts are issued an AWS generated
     * subdomain for immediate use.</p>
     */
    inline void SetSubdomain(const char* value) { m_subdomainHasBeenSet = true; m_subdomain.assign(value); }

    /**
     * <p>The subdomain that you use to access your AWS re:Post Private private
     * re:Post. All custom subdomains must be approved by AWS before use. In addition
     * to your custom subdomain, all private re:Posts are issued an AWS generated
     * subdomain for immediate use.</p>
     */
    inline CreateSpaceRequest& WithSubdomain(const Aws::String& value) { SetSubdomain(value); return *this;}

    /**
     * <p>The subdomain that you use to access your AWS re:Post Private private
     * re:Post. All custom subdomains must be approved by AWS before use. In addition
     * to your custom subdomain, all private re:Posts are issued an AWS generated
     * subdomain for immediate use.</p>
     */
    inline CreateSpaceRequest& WithSubdomain(Aws::String&& value) { SetSubdomain(std::move(value)); return *this;}

    /**
     * <p>The subdomain that you use to access your AWS re:Post Private private
     * re:Post. All custom subdomains must be approved by AWS before use. In addition
     * to your custom subdomain, all private re:Posts are issued an AWS generated
     * subdomain for immediate use.</p>
     */
    inline CreateSpaceRequest& WithSubdomain(const char* value) { SetSubdomain(value); return *this;}


    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline CreateSpaceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline CreateSpaceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline CreateSpaceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline CreateSpaceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline CreateSpaceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline CreateSpaceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline CreateSpaceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline CreateSpaceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline CreateSpaceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The pricing tier for the private re:Post.</p>
     */
    inline const TierLevel& GetTier() const{ return m_tier; }

    /**
     * <p>The pricing tier for the private re:Post.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The pricing tier for the private re:Post.</p>
     */
    inline void SetTier(const TierLevel& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The pricing tier for the private re:Post.</p>
     */
    inline void SetTier(TierLevel&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The pricing tier for the private re:Post.</p>
     */
    inline CreateSpaceRequest& WithTier(const TierLevel& value) { SetTier(value); return *this;}

    /**
     * <p>The pricing tier for the private re:Post.</p>
     */
    inline CreateSpaceRequest& WithTier(TierLevel&& value) { SetTier(std::move(value)); return *this;}


    /**
     * <p>The AWS KMS key ARN that’s used for the AWS KMS encryption. If you don't
     * provide a key, your data is encrypted by default with a key that AWS owns and
     * manages for you.</p>
     */
    inline const Aws::String& GetUserKMSKey() const{ return m_userKMSKey; }

    /**
     * <p>The AWS KMS key ARN that’s used for the AWS KMS encryption. If you don't
     * provide a key, your data is encrypted by default with a key that AWS owns and
     * manages for you.</p>
     */
    inline bool UserKMSKeyHasBeenSet() const { return m_userKMSKeyHasBeenSet; }

    /**
     * <p>The AWS KMS key ARN that’s used for the AWS KMS encryption. If you don't
     * provide a key, your data is encrypted by default with a key that AWS owns and
     * manages for you.</p>
     */
    inline void SetUserKMSKey(const Aws::String& value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey = value; }

    /**
     * <p>The AWS KMS key ARN that’s used for the AWS KMS encryption. If you don't
     * provide a key, your data is encrypted by default with a key that AWS owns and
     * manages for you.</p>
     */
    inline void SetUserKMSKey(Aws::String&& value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey = std::move(value); }

    /**
     * <p>The AWS KMS key ARN that’s used for the AWS KMS encryption. If you don't
     * provide a key, your data is encrypted by default with a key that AWS owns and
     * manages for you.</p>
     */
    inline void SetUserKMSKey(const char* value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey.assign(value); }

    /**
     * <p>The AWS KMS key ARN that’s used for the AWS KMS encryption. If you don't
     * provide a key, your data is encrypted by default with a key that AWS owns and
     * manages for you.</p>
     */
    inline CreateSpaceRequest& WithUserKMSKey(const Aws::String& value) { SetUserKMSKey(value); return *this;}

    /**
     * <p>The AWS KMS key ARN that’s used for the AWS KMS encryption. If you don't
     * provide a key, your data is encrypted by default with a key that AWS owns and
     * manages for you.</p>
     */
    inline CreateSpaceRequest& WithUserKMSKey(Aws::String&& value) { SetUserKMSKey(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key ARN that’s used for the AWS KMS encryption. If you don't
     * provide a key, your data is encrypted by default with a key that AWS owns and
     * manages for you.</p>
     */
    inline CreateSpaceRequest& WithUserKMSKey(const char* value) { SetUserKMSKey(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_subdomain;
    bool m_subdomainHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TierLevel m_tier;
    bool m_tierHasBeenSet = false;

    Aws::String m_userKMSKey;
    bool m_userKMSKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
