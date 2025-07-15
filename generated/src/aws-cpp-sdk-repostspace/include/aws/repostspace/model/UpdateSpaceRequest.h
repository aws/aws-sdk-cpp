/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/repostspace/model/TierLevel.h>
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
  class UpdateSpaceRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API UpdateSpaceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSpace"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of this private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const { return m_spaceId; }
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
    template<typename SpaceIdT = Aws::String>
    void SetSpaceId(SpaceIdT&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::forward<SpaceIdT>(value); }
    template<typename SpaceIdT = Aws::String>
    UpdateSpaceRequest& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
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
    UpdateSpaceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing tier of this private re:Post.</p>
     */
    inline TierLevel GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(TierLevel value) { m_tierHasBeenSet = true; m_tier = value; }
    inline UpdateSpaceRequest& WithTier(TierLevel value) { SetTier(value); return *this;}
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
    UpdateSpaceRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
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
    UpdateSpaceRequest& WithSupportedEmailDomains(SupportedEmailDomainsT&& value) { SetSupportedEmailDomains(std::forward<SupportedEmailDomainsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TierLevel m_tier{TierLevel::NOT_SET};
    bool m_tierHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    SupportedEmailDomainsParameters m_supportedEmailDomains;
    bool m_supportedEmailDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
