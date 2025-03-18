/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Optional. The metadata of the LDAP server used to authenticate and authorize
   * connections to the broker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/LdapServerMetadataOutput">AWS
   * API Reference</a></p>
   */
  class LdapServerMetadataOutput
  {
  public:
    AWS_MQ_API LdapServerMetadataOutput() = default;
    AWS_MQ_API LdapServerMetadataOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API LdapServerMetadataOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the location of the LDAP server such as Directory Service for
     * Microsoft Active Directory. Optional failover server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHosts() const { return m_hosts; }
    inline bool HostsHasBeenSet() const { return m_hostsHasBeenSet; }
    template<typename HostsT = Aws::Vector<Aws::String>>
    void SetHosts(HostsT&& value) { m_hostsHasBeenSet = true; m_hosts = std::forward<HostsT>(value); }
    template<typename HostsT = Aws::Vector<Aws::String>>
    LdapServerMetadataOutput& WithHosts(HostsT&& value) { SetHosts(std::forward<HostsT>(value)); return *this;}
    template<typename HostsT = Aws::String>
    LdapServerMetadataOutput& AddHosts(HostsT&& value) { m_hostsHasBeenSet = true; m_hosts.emplace_back(std::forward<HostsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The distinguished name of the node in the directory information tree (DIT) to
     * search for roles or groups. For example, ou=group, ou=corp, dc=corp,
           
     *       dc=example, dc=com.</p>
     */
    inline const Aws::String& GetRoleBase() const { return m_roleBase; }
    inline bool RoleBaseHasBeenSet() const { return m_roleBaseHasBeenSet; }
    template<typename RoleBaseT = Aws::String>
    void SetRoleBase(RoleBaseT&& value) { m_roleBaseHasBeenSet = true; m_roleBase = std::forward<RoleBaseT>(value); }
    template<typename RoleBaseT = Aws::String>
    LdapServerMetadataOutput& WithRoleBase(RoleBaseT&& value) { SetRoleBase(std::forward<RoleBaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the LDAP attribute that identifies the group name attribute in the
     * object returned from the group membership query.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    LdapServerMetadataOutput& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LDAP search filter used to find roles within the roleBase. The
     * distinguished name of the user matched by userSearchMatching is substituted into
     * the {0} placeholder in the search filter. The client's username is substituted
     * into the {1} placeholder. For example, if you set this option to
     * (member=uid={1})for the user janedoe, the search filter becomes
     * (member=uid=janedoe) after string substitution. It matches all role entries that
     * have a member attribute equal to uid=janedoe under the subtree selected by the
     * roleBase.</p>
     */
    inline const Aws::String& GetRoleSearchMatching() const { return m_roleSearchMatching; }
    inline bool RoleSearchMatchingHasBeenSet() const { return m_roleSearchMatchingHasBeenSet; }
    template<typename RoleSearchMatchingT = Aws::String>
    void SetRoleSearchMatching(RoleSearchMatchingT&& value) { m_roleSearchMatchingHasBeenSet = true; m_roleSearchMatching = std::forward<RoleSearchMatchingT>(value); }
    template<typename RoleSearchMatchingT = Aws::String>
    LdapServerMetadataOutput& WithRoleSearchMatching(RoleSearchMatchingT&& value) { SetRoleSearchMatching(std::forward<RoleSearchMatchingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory search scope for the role. If set to true, scope is to search
     * the entire subtree.</p>
     */
    inline bool GetRoleSearchSubtree() const { return m_roleSearchSubtree; }
    inline bool RoleSearchSubtreeHasBeenSet() const { return m_roleSearchSubtreeHasBeenSet; }
    inline void SetRoleSearchSubtree(bool value) { m_roleSearchSubtreeHasBeenSet = true; m_roleSearchSubtree = value; }
    inline LdapServerMetadataOutput& WithRoleSearchSubtree(bool value) { SetRoleSearchSubtree(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Service account username. A service account is an account in your LDAP server
     * that has access to initiate a connection. For example, cn=admin,dc=corp,
     * dc=example,
                  dc=com.</p>
     */
    inline const Aws::String& GetServiceAccountUsername() const { return m_serviceAccountUsername; }
    inline bool ServiceAccountUsernameHasBeenSet() const { return m_serviceAccountUsernameHasBeenSet; }
    template<typename ServiceAccountUsernameT = Aws::String>
    void SetServiceAccountUsername(ServiceAccountUsernameT&& value) { m_serviceAccountUsernameHasBeenSet = true; m_serviceAccountUsername = std::forward<ServiceAccountUsernameT>(value); }
    template<typename ServiceAccountUsernameT = Aws::String>
    LdapServerMetadataOutput& WithServiceAccountUsername(ServiceAccountUsernameT&& value) { SetServiceAccountUsername(std::forward<ServiceAccountUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Select a particular subtree of the directory information tree (DIT) to search
     * for user entries. The subtree is specified by a DN, which specifies the base
     * node of the subtree. For example, by setting this option to ou=Users,ou=corp,
     * dc=corp,
                  dc=example, dc=com, the search for user entries is
     * restricted to the subtree beneath ou=Users, ou=corp, dc=corp, dc=example,
     * dc=com.</p>
     */
    inline const Aws::String& GetUserBase() const { return m_userBase; }
    inline bool UserBaseHasBeenSet() const { return m_userBaseHasBeenSet; }
    template<typename UserBaseT = Aws::String>
    void SetUserBase(UserBaseT&& value) { m_userBaseHasBeenSet = true; m_userBase = std::forward<UserBaseT>(value); }
    template<typename UserBaseT = Aws::String>
    LdapServerMetadataOutput& WithUserBase(UserBaseT&& value) { SetUserBase(std::forward<UserBaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the LDAP attribute for the user group membership.</p>
     */
    inline const Aws::String& GetUserRoleName() const { return m_userRoleName; }
    inline bool UserRoleNameHasBeenSet() const { return m_userRoleNameHasBeenSet; }
    template<typename UserRoleNameT = Aws::String>
    void SetUserRoleName(UserRoleNameT&& value) { m_userRoleNameHasBeenSet = true; m_userRoleName = std::forward<UserRoleNameT>(value); }
    template<typename UserRoleNameT = Aws::String>
    LdapServerMetadataOutput& WithUserRoleName(UserRoleNameT&& value) { SetUserRoleName(std::forward<UserRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LDAP search filter used to find users within the userBase. The client's
     * username is substituted into the {0} placeholder in the search filter. For
     * example, if this option is set to (uid={0}) and the received username is
     * janedoe, the search filter becomes (uid=janedoe) after string substitution. It
     * will result in matching an entry like uid=janedoe, ou=Users,ou=corp, dc=corp,
     * dc=example,
               dc=com.</p>
     */
    inline const Aws::String& GetUserSearchMatching() const { return m_userSearchMatching; }
    inline bool UserSearchMatchingHasBeenSet() const { return m_userSearchMatchingHasBeenSet; }
    template<typename UserSearchMatchingT = Aws::String>
    void SetUserSearchMatching(UserSearchMatchingT&& value) { m_userSearchMatchingHasBeenSet = true; m_userSearchMatching = std::forward<UserSearchMatchingT>(value); }
    template<typename UserSearchMatchingT = Aws::String>
    LdapServerMetadataOutput& WithUserSearchMatching(UserSearchMatchingT&& value) { SetUserSearchMatching(std::forward<UserSearchMatchingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory search scope for the user. If set to true, scope is to search
     * the entire subtree.</p>
     */
    inline bool GetUserSearchSubtree() const { return m_userSearchSubtree; }
    inline bool UserSearchSubtreeHasBeenSet() const { return m_userSearchSubtreeHasBeenSet; }
    inline void SetUserSearchSubtree(bool value) { m_userSearchSubtreeHasBeenSet = true; m_userSearchSubtree = value; }
    inline LdapServerMetadataOutput& WithUserSearchSubtree(bool value) { SetUserSearchSubtree(value); return *this;}
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
} // namespace MQ
} // namespace Aws
