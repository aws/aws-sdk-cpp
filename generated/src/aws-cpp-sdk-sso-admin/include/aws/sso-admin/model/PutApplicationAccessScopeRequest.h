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
    AWS_SSOADMIN_API PutApplicationAccessScopeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutApplicationAccessScope"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ARN of the application with the access scope with the targets
     * to add or update.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>Specifies the ARN of the application with the access scope with the targets
     * to add or update.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the application with the access scope with the targets
     * to add or update.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>Specifies the ARN of the application with the access scope with the targets
     * to add or update.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the application with the access scope with the targets
     * to add or update.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>Specifies the ARN of the application with the access scope with the targets
     * to add or update.</p>
     */
    inline PutApplicationAccessScopeRequest& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the application with the access scope with the targets
     * to add or update.</p>
     */
    inline PutApplicationAccessScopeRequest& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the application with the access scope with the targets
     * to add or update.</p>
     */
    inline PutApplicationAccessScopeRequest& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>Specifies an array list of ARNs that represent the authorized targets for
     * this access scope.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedTargets() const{ return m_authorizedTargets; }

    /**
     * <p>Specifies an array list of ARNs that represent the authorized targets for
     * this access scope.</p>
     */
    inline bool AuthorizedTargetsHasBeenSet() const { return m_authorizedTargetsHasBeenSet; }

    /**
     * <p>Specifies an array list of ARNs that represent the authorized targets for
     * this access scope.</p>
     */
    inline void SetAuthorizedTargets(const Aws::Vector<Aws::String>& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = value; }

    /**
     * <p>Specifies an array list of ARNs that represent the authorized targets for
     * this access scope.</p>
     */
    inline void SetAuthorizedTargets(Aws::Vector<Aws::String>&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = std::move(value); }

    /**
     * <p>Specifies an array list of ARNs that represent the authorized targets for
     * this access scope.</p>
     */
    inline PutApplicationAccessScopeRequest& WithAuthorizedTargets(const Aws::Vector<Aws::String>& value) { SetAuthorizedTargets(value); return *this;}

    /**
     * <p>Specifies an array list of ARNs that represent the authorized targets for
     * this access scope.</p>
     */
    inline PutApplicationAccessScopeRequest& WithAuthorizedTargets(Aws::Vector<Aws::String>&& value) { SetAuthorizedTargets(std::move(value)); return *this;}

    /**
     * <p>Specifies an array list of ARNs that represent the authorized targets for
     * this access scope.</p>
     */
    inline PutApplicationAccessScopeRequest& AddAuthorizedTargets(const Aws::String& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(value); return *this; }

    /**
     * <p>Specifies an array list of ARNs that represent the authorized targets for
     * this access scope.</p>
     */
    inline PutApplicationAccessScopeRequest& AddAuthorizedTargets(Aws::String&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies an array list of ARNs that represent the authorized targets for
     * this access scope.</p>
     */
    inline PutApplicationAccessScopeRequest& AddAuthorizedTargets(const char* value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(value); return *this; }


    /**
     * <p>Specifies the name of the access scope to be associated with the specified
     * targets.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies the name of the access scope to be associated with the specified
     * targets.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies the name of the access scope to be associated with the specified
     * targets.</p>
     */
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies the name of the access scope to be associated with the specified
     * targets.</p>
     */
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies the name of the access scope to be associated with the specified
     * targets.</p>
     */
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }

    /**
     * <p>Specifies the name of the access scope to be associated with the specified
     * targets.</p>
     */
    inline PutApplicationAccessScopeRequest& WithScope(const Aws::String& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies the name of the access scope to be associated with the specified
     * targets.</p>
     */
    inline PutApplicationAccessScopeRequest& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the access scope to be associated with the specified
     * targets.</p>
     */
    inline PutApplicationAccessScopeRequest& WithScope(const char* value) { SetScope(value); return *this;}

  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedTargets;
    bool m_authorizedTargetsHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
