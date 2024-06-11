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


    ///@{
    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateSpaceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSpaceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSpaceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the private re:Post. This must be unique in your account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateSpaceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSpaceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSpaceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateSpaceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateSpaceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateSpaceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subdomain that you use to access your AWS re:Post Private private
     * re:Post. All custom subdomains must be approved by AWS before use. In addition
     * to your custom subdomain, all private re:Posts are issued an AWS generated
     * subdomain for immediate use.</p>
     */
    inline const Aws::String& GetSubdomain() const{ return m_subdomain; }
    inline bool SubdomainHasBeenSet() const { return m_subdomainHasBeenSet; }
    inline void SetSubdomain(const Aws::String& value) { m_subdomainHasBeenSet = true; m_subdomain = value; }
    inline void SetSubdomain(Aws::String&& value) { m_subdomainHasBeenSet = true; m_subdomain = std::move(value); }
    inline void SetSubdomain(const char* value) { m_subdomainHasBeenSet = true; m_subdomain.assign(value); }
    inline CreateSpaceRequest& WithSubdomain(const Aws::String& value) { SetSubdomain(value); return *this;}
    inline CreateSpaceRequest& WithSubdomain(Aws::String&& value) { SetSubdomain(std::move(value)); return *this;}
    inline CreateSpaceRequest& WithSubdomain(const char* value) { SetSubdomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSpaceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateSpaceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSpaceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateSpaceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSpaceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSpaceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSpaceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSpaceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSpaceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pricing tier for the private re:Post.</p>
     */
    inline const TierLevel& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const TierLevel& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(TierLevel&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline CreateSpaceRequest& WithTier(const TierLevel& value) { SetTier(value); return *this;}
    inline CreateSpaceRequest& WithTier(TierLevel&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS KMS key ARN that’s used for the AWS KMS encryption. If you don't
     * provide a key, your data is encrypted by default with a key that AWS owns and
     * manages for you.</p>
     */
    inline const Aws::String& GetUserKMSKey() const{ return m_userKMSKey; }
    inline bool UserKMSKeyHasBeenSet() const { return m_userKMSKeyHasBeenSet; }
    inline void SetUserKMSKey(const Aws::String& value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey = value; }
    inline void SetUserKMSKey(Aws::String&& value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey = std::move(value); }
    inline void SetUserKMSKey(const char* value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey.assign(value); }
    inline CreateSpaceRequest& WithUserKMSKey(const Aws::String& value) { SetUserKMSKey(value); return *this;}
    inline CreateSpaceRequest& WithUserKMSKey(Aws::String&& value) { SetUserKMSKey(std::move(value)); return *this;}
    inline CreateSpaceRequest& WithUserKMSKey(const char* value) { SetUserKMSKey(value); return *this;}
    ///@}
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
