/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> The metadata of the Lightweight Directory Access Protocol (LDAP) server used
   * to authenticate and authorize connections to the broker. This is an optional
   * failover server. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAmazonMqBrokerLdapServerMetadataDetails">AWS
   * API Reference</a></p>
   */
  class AwsAmazonMqBrokerLdapServerMetadataDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLdapServerMetadataDetails() = default;
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLdapServerMetadataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLdapServerMetadataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the location of the LDAP server, such as Amazon Web Services
     * Directory Service for Microsoft Active Directory. </p>
     */
    inline const Aws::Vector<Aws::String>& GetHosts() const { return m_hosts; }
    inline bool HostsHasBeenSet() const { return m_hostsHasBeenSet; }
    template<typename HostsT = Aws::Vector<Aws::String>>
    void SetHosts(HostsT&& value) { m_hostsHasBeenSet = true; m_hosts = std::forward<HostsT>(value); }
    template<typename HostsT = Aws::Vector<Aws::String>>
    AwsAmazonMqBrokerLdapServerMetadataDetails& WithHosts(HostsT&& value) { SetHosts(std::forward<HostsT>(value)); return *this;}
    template<typename HostsT = Aws::String>
    AwsAmazonMqBrokerLdapServerMetadataDetails& AddHosts(HostsT&& value) { m_hostsHasBeenSet = true; m_hosts.emplace_back(std::forward<HostsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The distinguished name of the node in the directory information tree (DIT)
     * to search for roles or groups. </p>
     */
    inline const Aws::String& GetRoleBase() const { return m_roleBase; }
    inline bool RoleBaseHasBeenSet() const { return m_roleBaseHasBeenSet; }
    template<typename RoleBaseT = Aws::String>
    void SetRoleBase(RoleBaseT&& value) { m_roleBaseHasBeenSet = true; m_roleBase = std::forward<RoleBaseT>(value); }
    template<typename RoleBaseT = Aws::String>
    AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleBase(RoleBaseT&& value) { SetRoleBase(std::forward<RoleBaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The group name attribute in a role entry whose value is the name of that
     * role. </p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The LDAP search filter used to find roles within the <code>roleBase</code>.
     * </p>
     */
    inline const Aws::String& GetRoleSearchMatching() const { return m_roleSearchMatching; }
    inline bool RoleSearchMatchingHasBeenSet() const { return m_roleSearchMatchingHasBeenSet; }
    template<typename RoleSearchMatchingT = Aws::String>
    void SetRoleSearchMatching(RoleSearchMatchingT&& value) { m_roleSearchMatchingHasBeenSet = true; m_roleSearchMatching = std::forward<RoleSearchMatchingT>(value); }
    template<typename RoleSearchMatchingT = Aws::String>
    AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleSearchMatching(RoleSearchMatchingT&& value) { SetRoleSearchMatching(std::forward<RoleSearchMatchingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The directory search scope for the role. If set to <code>true</code>, the
     * scope is to search the entire subtree. </p>
     */
    inline bool GetRoleSearchSubtree() const { return m_roleSearchSubtree; }
    inline bool RoleSearchSubtreeHasBeenSet() const { return m_roleSearchSubtreeHasBeenSet; }
    inline void SetRoleSearchSubtree(bool value) { m_roleSearchSubtreeHasBeenSet = true; m_roleSearchSubtree = value; }
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleSearchSubtree(bool value) { SetRoleSearchSubtree(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A username for the service account, which is an account in your LDAP server
     * that has access to initiate a connection. </p>
     */
    inline const Aws::String& GetServiceAccountUsername() const { return m_serviceAccountUsername; }
    inline bool ServiceAccountUsernameHasBeenSet() const { return m_serviceAccountUsernameHasBeenSet; }
    template<typename ServiceAccountUsernameT = Aws::String>
    void SetServiceAccountUsername(ServiceAccountUsernameT&& value) { m_serviceAccountUsernameHasBeenSet = true; m_serviceAccountUsername = std::forward<ServiceAccountUsernameT>(value); }
    template<typename ServiceAccountUsernameT = Aws::String>
    AwsAmazonMqBrokerLdapServerMetadataDetails& WithServiceAccountUsername(ServiceAccountUsernameT&& value) { SetServiceAccountUsername(std::forward<ServiceAccountUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Selects a particular subtree of the directory information tree (DIT) to
     * search for user entries. </p>
     */
    inline const Aws::String& GetUserBase() const { return m_userBase; }
    inline bool UserBaseHasBeenSet() const { return m_userBaseHasBeenSet; }
    template<typename UserBaseT = Aws::String>
    void SetUserBase(UserBaseT&& value) { m_userBaseHasBeenSet = true; m_userBase = std::forward<UserBaseT>(value); }
    template<typename UserBaseT = Aws::String>
    AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserBase(UserBaseT&& value) { SetUserBase(std::forward<UserBaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the LDAP attribute in the user's directory entry for the user's
     * group membership. </p>
     */
    inline const Aws::String& GetUserRoleName() const { return m_userRoleName; }
    inline bool UserRoleNameHasBeenSet() const { return m_userRoleNameHasBeenSet; }
    template<typename UserRoleNameT = Aws::String>
    void SetUserRoleName(UserRoleNameT&& value) { m_userRoleNameHasBeenSet = true; m_userRoleName = std::forward<UserRoleNameT>(value); }
    template<typename UserRoleNameT = Aws::String>
    AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserRoleName(UserRoleNameT&& value) { SetUserRoleName(std::forward<UserRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The LDAP search filter used to find users within the <code>userBase</code>.
     * </p>
     */
    inline const Aws::String& GetUserSearchMatching() const { return m_userSearchMatching; }
    inline bool UserSearchMatchingHasBeenSet() const { return m_userSearchMatchingHasBeenSet; }
    template<typename UserSearchMatchingT = Aws::String>
    void SetUserSearchMatching(UserSearchMatchingT&& value) { m_userSearchMatchingHasBeenSet = true; m_userSearchMatching = std::forward<UserSearchMatchingT>(value); }
    template<typename UserSearchMatchingT = Aws::String>
    AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserSearchMatching(UserSearchMatchingT&& value) { SetUserSearchMatching(std::forward<UserSearchMatchingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The directory search scope for the user. If set to true, the scope is to
     * search the entire subtree. </p>
     */
    inline bool GetUserSearchSubtree() const { return m_userSearchSubtree; }
    inline bool UserSearchSubtreeHasBeenSet() const { return m_userSearchSubtreeHasBeenSet; }
    inline void SetUserSearchSubtree(bool value) { m_userSearchSubtreeHasBeenSet = true; m_userSearchSubtree = value; }
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserSearchSubtree(bool value) { SetUserSearchSubtree(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_hosts;
    bool m_hostsHasBeenSet = false;

    Aws::String m_roleBase;
    bool m_roleBaseHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::String m_roleSearchMatching;
    bool m_roleSearchMatchingHasBeenSet = false;

    bool m_roleSearchSubtree{false};
    bool m_roleSearchSubtreeHasBeenSet = false;

    Aws::String m_serviceAccountUsername;
    bool m_serviceAccountUsernameHasBeenSet = false;

    Aws::String m_userBase;
    bool m_userBaseHasBeenSet = false;

    Aws::String m_userRoleName;
    bool m_userRoleNameHasBeenSet = false;

    Aws::String m_userSearchMatching;
    bool m_userSearchMatchingHasBeenSet = false;

    bool m_userSearchSubtree{false};
    bool m_userSearchSubtreeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
