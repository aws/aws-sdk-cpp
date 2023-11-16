/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class GetApplicationAccessScopeRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API GetApplicationAccessScopeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApplicationAccessScope"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ARN of the application with the access scope that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>Specifies the ARN of the application with the access scope that you want to
     * retrieve.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the application with the access scope that you want to
     * retrieve.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>Specifies the ARN of the application with the access scope that you want to
     * retrieve.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the application with the access scope that you want to
     * retrieve.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>Specifies the ARN of the application with the access scope that you want to
     * retrieve.</p>
     */
    inline GetApplicationAccessScopeRequest& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the application with the access scope that you want to
     * retrieve.</p>
     */
    inline GetApplicationAccessScopeRequest& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the application with the access scope that you want to
     * retrieve.</p>
     */
    inline GetApplicationAccessScopeRequest& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>Specifies the name of the access scope for which you want the authorized
     * targets.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies the name of the access scope for which you want the authorized
     * targets.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies the name of the access scope for which you want the authorized
     * targets.</p>
     */
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies the name of the access scope for which you want the authorized
     * targets.</p>
     */
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies the name of the access scope for which you want the authorized
     * targets.</p>
     */
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }

    /**
     * <p>Specifies the name of the access scope for which you want the authorized
     * targets.</p>
     */
    inline GetApplicationAccessScopeRequest& WithScope(const Aws::String& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies the name of the access scope for which you want the authorized
     * targets.</p>
     */
    inline GetApplicationAccessScopeRequest& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the access scope for which you want the authorized
     * targets.</p>
     */
    inline GetApplicationAccessScopeRequest& WithScope(const char* value) { SetScope(value); return *this;}

  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
