/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class PutApplicationAccessScopeRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API PutApplicationAccessScopeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutApplicationAccessScope"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the name of the access scope to be associated with the specified
     * targets.</p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    PutApplicationAccessScopeRequest& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an array list of ARNs that represent the authorized targets for
     * this access scope.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedTargets() const { return m_authorizedTargets; }
    inline bool AuthorizedTargetsHasBeenSet() const { return m_authorizedTargetsHasBeenSet; }
    template<typename AuthorizedTargetsT = Aws::Vector<Aws::String>>
    void SetAuthorizedTargets(AuthorizedTargetsT&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = std::forward<AuthorizedTargetsT>(value); }
    template<typename AuthorizedTargetsT = Aws::Vector<Aws::String>>
    PutApplicationAccessScopeRequest& WithAuthorizedTargets(AuthorizedTargetsT&& value) { SetAuthorizedTargets(std::forward<AuthorizedTargetsT>(value)); return *this;}
    template<typename AuthorizedTargetsT = Aws::String>
    PutApplicationAccessScopeRequest& AddAuthorizedTargets(AuthorizedTargetsT&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.emplace_back(std::forward<AuthorizedTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN of the application with the access scope with the targets
     * to add or update.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    PutApplicationAccessScopeRequest& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedTargets;
    bool m_authorizedTargetsHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
