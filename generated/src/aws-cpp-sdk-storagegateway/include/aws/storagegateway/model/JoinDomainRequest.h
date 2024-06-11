/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>JoinDomainInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/JoinDomainInput">AWS
   * API Reference</a></p>
   */
  class JoinDomainRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API JoinDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "JoinDomain"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }
    inline JoinDomainRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline JoinDomainRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline JoinDomainRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain that you want the gateway to join.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline JoinDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline JoinDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline JoinDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organizational unit (OU) is a container in an Active Directory that can
     * hold users, groups, computers, and other OUs and this parameter specifies the OU
     * that the gateway will join within the AD domain.</p>
     */
    inline const Aws::String& GetOrganizationalUnit() const{ return m_organizationalUnit; }
    inline bool OrganizationalUnitHasBeenSet() const { return m_organizationalUnitHasBeenSet; }
    inline void SetOrganizationalUnit(const Aws::String& value) { m_organizationalUnitHasBeenSet = true; m_organizationalUnit = value; }
    inline void SetOrganizationalUnit(Aws::String&& value) { m_organizationalUnitHasBeenSet = true; m_organizationalUnit = std::move(value); }
    inline void SetOrganizationalUnit(const char* value) { m_organizationalUnitHasBeenSet = true; m_organizationalUnit.assign(value); }
    inline JoinDomainRequest& WithOrganizationalUnit(const Aws::String& value) { SetOrganizationalUnit(value); return *this;}
    inline JoinDomainRequest& WithOrganizationalUnit(Aws::String&& value) { SetOrganizationalUnit(std::move(value)); return *this;}
    inline JoinDomainRequest& WithOrganizationalUnit(const char* value) { SetOrganizationalUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of IPv4 addresses, NetBIOS names, or host names of your domain server.
     * If you need to specify the port number include it after the colon (“:”). For
     * example, <code>mydc.mydomain.com:389</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainControllers() const{ return m_domainControllers; }
    inline bool DomainControllersHasBeenSet() const { return m_domainControllersHasBeenSet; }
    inline void SetDomainControllers(const Aws::Vector<Aws::String>& value) { m_domainControllersHasBeenSet = true; m_domainControllers = value; }
    inline void SetDomainControllers(Aws::Vector<Aws::String>&& value) { m_domainControllersHasBeenSet = true; m_domainControllers = std::move(value); }
    inline JoinDomainRequest& WithDomainControllers(const Aws::Vector<Aws::String>& value) { SetDomainControllers(value); return *this;}
    inline JoinDomainRequest& WithDomainControllers(Aws::Vector<Aws::String>&& value) { SetDomainControllers(std::move(value)); return *this;}
    inline JoinDomainRequest& AddDomainControllers(const Aws::String& value) { m_domainControllersHasBeenSet = true; m_domainControllers.push_back(value); return *this; }
    inline JoinDomainRequest& AddDomainControllers(Aws::String&& value) { m_domainControllersHasBeenSet = true; m_domainControllers.push_back(std::move(value)); return *this; }
    inline JoinDomainRequest& AddDomainControllers(const char* value) { m_domainControllersHasBeenSet = true; m_domainControllers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the time in seconds, in which the <code>JoinDomain</code> operation
     * must complete. The default is 20 seconds.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }
    inline JoinDomainRequest& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the user name of user who has permission to add the gateway to the
     * Active Directory domain. The domain user account should be enabled to join
     * computers to the domain. For example, you can use the domain administrator
     * account or an account with delegated permissions to join computers to the
     * domain.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline JoinDomainRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline JoinDomainRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline JoinDomainRequest& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the password of the user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline JoinDomainRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline JoinDomainRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline JoinDomainRequest& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_organizationalUnit;
    bool m_organizationalUnitHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainControllers;
    bool m_domainControllersHasBeenSet = false;

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
