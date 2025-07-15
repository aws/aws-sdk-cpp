/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/repostspace/model/TierLevel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/repostspace/model/SupportedEmailDomainsParameters.h>
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
    AWS_REPOSTSPACE_API CreateSpaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSpace"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name for the private re:Post. This must be unique in your account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSpaceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subdomain that you use to access your AWS re:Post Private private
     * re:Post. All custom subdomains must be approved by AWS before use. In addition
     * to your custom subdomain, all private re:Posts are issued an AWS generated
     * subdomain for immediate use.</p>
     */
    inline const Aws::String& GetSubdomain() const { return m_subdomain; }
    inline bool SubdomainHasBeenSet() const { return m_subdomainHasBeenSet; }
    template<typename SubdomainT = Aws::String>
    void SetSubdomain(SubdomainT&& value) { m_subdomainHasBeenSet = true; m_subdomain = std::forward<SubdomainT>(value); }
    template<typename SubdomainT = Aws::String>
    CreateSpaceRequest& WithSubdomain(SubdomainT&& value) { SetSubdomain(std::forward<SubdomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing tier for the private re:Post.</p>
     */
    inline TierLevel GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(TierLevel value) { m_tierHasBeenSet = true; m_tier = value; }
    inline CreateSpaceRequest& WithTier(TierLevel value) { SetTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the private re:Post. This is used only to help you identify
     * this private re:Post.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSpaceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS KMS key ARN that’s used for the AWS KMS encryption. If you don't
     * provide a key, your data is encrypted by default with a key that AWS owns and
     * manages for you.</p>
     */
    inline const Aws::String& GetUserKMSKey() const { return m_userKMSKey; }
    inline bool UserKMSKeyHasBeenSet() const { return m_userKMSKeyHasBeenSet; }
    template<typename UserKMSKeyT = Aws::String>
    void SetUserKMSKey(UserKMSKeyT&& value) { m_userKMSKeyHasBeenSet = true; m_userKMSKey = std::forward<UserKMSKeyT>(value); }
    template<typename UserKMSKeyT = Aws::String>
    CreateSpaceRequest& WithUserKMSKey(UserKMSKeyT&& value) { SetUserKMSKey(std::forward<UserKMSKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags associated with the private re:Post.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSpaceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSpaceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The IAM role that grants permissions to the private re:Post to convert
     * unanswered questions into AWS support tickets.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateSpaceRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const SupportedEmailDomainsParameters& GetSupportedEmailDomains() const { return m_supportedEmailDomains; }
    inline bool SupportedEmailDomainsHasBeenSet() const { return m_supportedEmailDomainsHasBeenSet; }
    template<typename SupportedEmailDomainsT = SupportedEmailDomainsParameters>
    void SetSupportedEmailDomains(SupportedEmailDomainsT&& value) { m_supportedEmailDomainsHasBeenSet = true; m_supportedEmailDomains = std::forward<SupportedEmailDomainsT>(value); }
    template<typename SupportedEmailDomainsT = SupportedEmailDomainsParameters>
    CreateSpaceRequest& WithSupportedEmailDomains(SupportedEmailDomainsT&& value) { SetSupportedEmailDomains(std::forward<SupportedEmailDomainsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_subdomain;
    bool m_subdomainHasBeenSet = false;

    TierLevel m_tier{TierLevel::NOT_SET};
    bool m_tierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_userKMSKey;
    bool m_userKMSKeyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    SupportedEmailDomainsParameters m_supportedEmailDomains;
    bool m_supportedEmailDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
