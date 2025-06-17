/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SecurityHubFeature.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class DisableOrganizationAdminAccountRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API DisableOrganizationAdminAccountRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableOrganizationAdminAccount"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline const Aws::String& GetAdminAccountId() const { return m_adminAccountId; }
    inline bool AdminAccountIdHasBeenSet() const { return m_adminAccountIdHasBeenSet; }
    template<typename AdminAccountIdT = Aws::String>
    void SetAdminAccountId(AdminAccountIdT&& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = std::forward<AdminAccountIdT>(value); }
    template<typename AdminAccountIdT = Aws::String>
    DisableOrganizationAdminAccountRequest& WithAdminAccountId(AdminAccountIdT&& value) { SetAdminAccountId(std::forward<AdminAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature for which the delegated admin account is disabled. Defaults to
     * Security Hub if not specified.</p>
     */
    inline SecurityHubFeature GetFeature() const { return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(SecurityHubFeature value) { m_featureHasBeenSet = true; m_feature = value; }
    inline DisableOrganizationAdminAccountRequest& WithFeature(SecurityHubFeature value) { SetFeature(value); return *this;}
    ///@}
  private:

    Aws::String m_adminAccountId;
    bool m_adminAccountIdHasBeenSet = false;

    SecurityHubFeature m_feature{SecurityHubFeature::NOT_SET};
    bool m_featureHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
