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
    AWS_STORAGEGATEWAY_API JoinDomainRequest() = default;

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
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    JoinDomainRequest& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain that you want the gateway to join.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    JoinDomainRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organizational unit (OU) is a container in an Active Directory that can
     * hold users, groups, computers, and other OUs and this parameter specifies the OU
     * that the gateway will join within the AD domain.</p>
     */
    inline const Aws::String& GetOrganizationalUnit() const { return m_organizationalUnit; }
    inline bool OrganizationalUnitHasBeenSet() const { return m_organizationalUnitHasBeenSet; }
    template<typename OrganizationalUnitT = Aws::String>
    void SetOrganizationalUnit(OrganizationalUnitT&& value) { m_organizationalUnitHasBeenSet = true; m_organizationalUnit = std::forward<OrganizationalUnitT>(value); }
    template<typename OrganizationalUnitT = Aws::String>
    JoinDomainRequest& WithOrganizationalUnit(OrganizationalUnitT&& value) { SetOrganizationalUnit(std::forward<OrganizationalUnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of IP addresses, NetBIOS names, or host names of your domain server. If
     * you need to specify the port number include it after the colon (“:”). For
     * example, <code>mydc.mydomain.com:389</code>.</p>  <p>S3 File Gateway
     * supports IPv6 addresses in addition to IPv4 and other existing formats.</p>
     * <p>FSx File Gateway does not support IPv6.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetDomainControllers() const { return m_domainControllers; }
    inline bool DomainControllersHasBeenSet() const { return m_domainControllersHasBeenSet; }
    template<typename DomainControllersT = Aws::Vector<Aws::String>>
    void SetDomainControllers(DomainControllersT&& value) { m_domainControllersHasBeenSet = true; m_domainControllers = std::forward<DomainControllersT>(value); }
    template<typename DomainControllersT = Aws::Vector<Aws::String>>
    JoinDomainRequest& WithDomainControllers(DomainControllersT&& value) { SetDomainControllers(std::forward<DomainControllersT>(value)); return *this;}
    template<typename DomainControllersT = Aws::String>
    JoinDomainRequest& AddDomainControllers(DomainControllersT&& value) { m_domainControllersHasBeenSet = true; m_domainControllers.emplace_back(std::forward<DomainControllersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the time in seconds, in which the <code>JoinDomain</code> operation
     * must complete. The default is 20 seconds.</p>
     */
    inline int GetTimeoutInSeconds() const { return m_timeoutInSeconds; }
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
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    JoinDomainRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the password of the user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    JoinDomainRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
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

    int m_timeoutInSeconds{0};
    bool m_timeoutInSecondsHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
