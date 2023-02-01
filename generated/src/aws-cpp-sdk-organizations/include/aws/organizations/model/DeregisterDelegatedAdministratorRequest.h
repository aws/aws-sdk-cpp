/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class DeregisterDelegatedAdministratorRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API DeregisterDelegatedAdministratorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterDelegatedAdministrator"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The account ID number of the member account in the organization that you want
     * to deregister as a delegated administrator.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID number of the member account in the organization that you want
     * to deregister as a delegated administrator.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID number of the member account in the organization that you want
     * to deregister as a delegated administrator.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID number of the member account in the organization that you want
     * to deregister as a delegated administrator.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID number of the member account in the organization that you want
     * to deregister as a delegated administrator.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID number of the member account in the organization that you want
     * to deregister as a delegated administrator.</p>
     */
    inline DeregisterDelegatedAdministratorRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID number of the member account in the organization that you want
     * to deregister as a delegated administrator.</p>
     */
    inline DeregisterDelegatedAdministratorRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID number of the member account in the organization that you want
     * to deregister as a delegated administrator.</p>
     */
    inline DeregisterDelegatedAdministratorRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The service principal name of an Amazon Web Services service for which the
     * account is a delegated administrator.</p> <p>Delegated administrator privileges
     * are revoked for only the specified Amazon Web Services service from the member
     * account. If the specified service is the only service for which the member
     * account is a delegated administrator, the operation also revokes Organizations
     * read action permissions.</p>
     */
    inline const Aws::String& GetServicePrincipal() const{ return m_servicePrincipal; }

    /**
     * <p>The service principal name of an Amazon Web Services service for which the
     * account is a delegated administrator.</p> <p>Delegated administrator privileges
     * are revoked for only the specified Amazon Web Services service from the member
     * account. If the specified service is the only service for which the member
     * account is a delegated administrator, the operation also revokes Organizations
     * read action permissions.</p>
     */
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }

    /**
     * <p>The service principal name of an Amazon Web Services service for which the
     * account is a delegated administrator.</p> <p>Delegated administrator privileges
     * are revoked for only the specified Amazon Web Services service from the member
     * account. If the specified service is the only service for which the member
     * account is a delegated administrator, the operation also revokes Organizations
     * read action permissions.</p>
     */
    inline void SetServicePrincipal(const Aws::String& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = value; }

    /**
     * <p>The service principal name of an Amazon Web Services service for which the
     * account is a delegated administrator.</p> <p>Delegated administrator privileges
     * are revoked for only the specified Amazon Web Services service from the member
     * account. If the specified service is the only service for which the member
     * account is a delegated administrator, the operation also revokes Organizations
     * read action permissions.</p>
     */
    inline void SetServicePrincipal(Aws::String&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::move(value); }

    /**
     * <p>The service principal name of an Amazon Web Services service for which the
     * account is a delegated administrator.</p> <p>Delegated administrator privileges
     * are revoked for only the specified Amazon Web Services service from the member
     * account. If the specified service is the only service for which the member
     * account is a delegated administrator, the operation also revokes Organizations
     * read action permissions.</p>
     */
    inline void SetServicePrincipal(const char* value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal.assign(value); }

    /**
     * <p>The service principal name of an Amazon Web Services service for which the
     * account is a delegated administrator.</p> <p>Delegated administrator privileges
     * are revoked for only the specified Amazon Web Services service from the member
     * account. If the specified service is the only service for which the member
     * account is a delegated administrator, the operation also revokes Organizations
     * read action permissions.</p>
     */
    inline DeregisterDelegatedAdministratorRequest& WithServicePrincipal(const Aws::String& value) { SetServicePrincipal(value); return *this;}

    /**
     * <p>The service principal name of an Amazon Web Services service for which the
     * account is a delegated administrator.</p> <p>Delegated administrator privileges
     * are revoked for only the specified Amazon Web Services service from the member
     * account. If the specified service is the only service for which the member
     * account is a delegated administrator, the operation also revokes Organizations
     * read action permissions.</p>
     */
    inline DeregisterDelegatedAdministratorRequest& WithServicePrincipal(Aws::String&& value) { SetServicePrincipal(std::move(value)); return *this;}

    /**
     * <p>The service principal name of an Amazon Web Services service for which the
     * account is a delegated administrator.</p> <p>Delegated administrator privileges
     * are revoked for only the specified Amazon Web Services service from the member
     * account. If the specified service is the only service for which the member
     * account is a delegated administrator, the operation also revokes Organizations
     * read action permissions.</p>
     */
    inline DeregisterDelegatedAdministratorRequest& WithServicePrincipal(const char* value) { SetServicePrincipal(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
