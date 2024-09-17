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
    AWS_MQ_API LdapServerMetadataOutput();
    AWS_MQ_API LdapServerMetadataOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API LdapServerMetadataOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the location of the LDAP server such as Directory Service for
     * Microsoft Active Directory. Optional failover server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHosts() const{ return m_hosts; }
    inline bool HostsHasBeenSet() const { return m_hostsHasBeenSet; }
    inline void SetHosts(const Aws::Vector<Aws::String>& value) { m_hostsHasBeenSet = true; m_hosts = value; }
    inline void SetHosts(Aws::Vector<Aws::String>&& value) { m_hostsHasBeenSet = true; m_hosts = std::move(value); }
    inline LdapServerMetadataOutput& WithHosts(const Aws::Vector<Aws::String>& value) { SetHosts(value); return *this;}
    inline LdapServerMetadataOutput& WithHosts(Aws::Vector<Aws::String>&& value) { SetHosts(std::move(value)); return *this;}
    inline LdapServerMetadataOutput& AddHosts(const Aws::String& value) { m_hostsHasBeenSet = true; m_hosts.push_back(value); return *this; }
    inline LdapServerMetadataOutput& AddHosts(Aws::String&& value) { m_hostsHasBeenSet = true; m_hosts.push_back(std::move(value)); return *this; }
    inline LdapServerMetadataOutput& AddHosts(const char* value) { m_hostsHasBeenSet = true; m_hosts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The distinguished name of the node in the directory information tree (DIT) to
     * search for roles or groups. For example, ou=group, ou=corp, dc=corp,
           
     *       dc=example, dc=com.</p>
     */
    inline const Aws::String& GetRoleBase() const{ return m_roleBase; }
    inline bool RoleBaseHasBeenSet() const { return m_roleBaseHasBeenSet; }
    inline void SetRoleBase(const Aws::String& value) { m_roleBaseHasBeenSet = true; m_roleBase = value; }
    inline void SetRoleBase(Aws::String&& value) { m_roleBaseHasBeenSet = true; m_roleBase = std::move(value); }
    inline void SetRoleBase(const char* value) { m_roleBaseHasBeenSet = true; m_roleBase.assign(value); }
    inline LdapServerMetadataOutput& WithRoleBase(const Aws::String& value) { SetRoleBase(value); return *this;}
    inline LdapServerMetadataOutput& WithRoleBase(Aws::String&& value) { SetRoleBase(std::move(value)); return *this;}
    inline LdapServerMetadataOutput& WithRoleBase(const char* value) { SetRoleBase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the LDAP attribute that identifies the group name attribute in the
     * object returned from the group membership query.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }
    inline LdapServerMetadataOutput& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}
    inline LdapServerMetadataOutput& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}
    inline LdapServerMetadataOutput& WithRoleName(const char* value) { SetRoleName(value); return *this;}
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
    inline const Aws::String& GetRoleSearchMatching() const{ return m_roleSearchMatching; }
    inline bool RoleSearchMatchingHasBeenSet() const { return m_roleSearchMatchingHasBeenSet; }
    inline void SetRoleSearchMatching(const Aws::String& value) { m_roleSearchMatchingHasBeenSet = true; m_roleSearchMatching = value; }
    inline void SetRoleSearchMatching(Aws::String&& value) { m_roleSearchMatchingHasBeenSet = true; m_roleSearchMatching = std::move(value); }
    inline void SetRoleSearchMatching(const char* value) { m_roleSearchMatchingHasBeenSet = true; m_roleSearchMatching.assign(value); }
    inline LdapServerMetadataOutput& WithRoleSearchMatching(const Aws::String& value) { SetRoleSearchMatching(value); return *this;}
    inline LdapServerMetadataOutput& WithRoleSearchMatching(Aws::String&& value) { SetRoleSearchMatching(std::move(value)); return *this;}
    inline LdapServerMetadataOutput& WithRoleSearchMatching(const char* value) { SetRoleSearchMatching(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory search scope for the role. If set to true, scope is to search
     * the entire subtree.</p>
     */
    inline bool GetRoleSearchSubtree() const{ return m_roleSearchSubtree; }
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
    inline const Aws::String& GetServiceAccountUsername() const{ return m_serviceAccountUsername; }
    inline bool ServiceAccountUsernameHasBeenSet() const { return m_serviceAccountUsernameHasBeenSet; }
    inline void SetServiceAccountUsername(const Aws::String& value) { m_serviceAccountUsernameHasBeenSet = true; m_serviceAccountUsername = value; }
    inline void SetServiceAccountUsername(Aws::String&& value) { m_serviceAccountUsernameHasBeenSet = true; m_serviceAccountUsername = std::move(value); }
    inline void SetServiceAccountUsername(const char* value) { m_serviceAccountUsernameHasBeenSet = true; m_serviceAccountUsername.assign(value); }
    inline LdapServerMetadataOutput& WithServiceAccountUsername(const Aws::String& value) { SetServiceAccountUsername(value); return *this;}
    inline LdapServerMetadataOutput& WithServiceAccountUsername(Aws::String&& value) { SetServiceAccountUsername(std::move(value)); return *this;}
    inline LdapServerMetadataOutput& WithServiceAccountUsername(const char* value) { SetServiceAccountUsername(value); return *this;}
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
    inline const Aws::String& GetUserBase() const{ return m_userBase; }
    inline bool UserBaseHasBeenSet() const { return m_userBaseHasBeenSet; }
    inline void SetUserBase(const Aws::String& value) { m_userBaseHasBeenSet = true; m_userBase = value; }
    inline void SetUserBase(Aws::String&& value) { m_userBaseHasBeenSet = true; m_userBase = std::move(value); }
    inline void SetUserBase(const char* value) { m_userBaseHasBeenSet = true; m_userBase.assign(value); }
    inline LdapServerMetadataOutput& WithUserBase(const Aws::String& value) { SetUserBase(value); return *this;}
    inline LdapServerMetadataOutput& WithUserBase(Aws::String&& value) { SetUserBase(std::move(value)); return *this;}
    inline LdapServerMetadataOutput& WithUserBase(const char* value) { SetUserBase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the LDAP attribute for the user group membership.</p>
     */
    inline const Aws::String& GetUserRoleName() const{ return m_userRoleName; }
    inline bool UserRoleNameHasBeenSet() const { return m_userRoleNameHasBeenSet; }
    inline void SetUserRoleName(const Aws::String& value) { m_userRoleNameHasBeenSet = true; m_userRoleName = value; }
    inline void SetUserRoleName(Aws::String&& value) { m_userRoleNameHasBeenSet = true; m_userRoleName = std::move(value); }
    inline void SetUserRoleName(const char* value) { m_userRoleNameHasBeenSet = true; m_userRoleName.assign(value); }
    inline LdapServerMetadataOutput& WithUserRoleName(const Aws::String& value) { SetUserRoleName(value); return *this;}
    inline LdapServerMetadataOutput& WithUserRoleName(Aws::String&& value) { SetUserRoleName(std::move(value)); return *this;}
    inline LdapServerMetadataOutput& WithUserRoleName(const char* value) { SetUserRoleName(value); return *this;}
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
    inline const Aws::String& GetUserSearchMatching() const{ return m_userSearchMatching; }
    inline bool UserSearchMatchingHasBeenSet() const { return m_userSearchMatchingHasBeenSet; }
    inline void SetUserSearchMatching(const Aws::String& value) { m_userSearchMatchingHasBeenSet = true; m_userSearchMatching = value; }
    inline void SetUserSearchMatching(Aws::String&& value) { m_userSearchMatchingHasBeenSet = true; m_userSearchMatching = std::move(value); }
    inline void SetUserSearchMatching(const char* value) { m_userSearchMatchingHasBeenSet = true; m_userSearchMatching.assign(value); }
    inline LdapServerMetadataOutput& WithUserSearchMatching(const Aws::String& value) { SetUserSearchMatching(value); return *this;}
    inline LdapServerMetadataOutput& WithUserSearchMatching(Aws::String&& value) { SetUserSearchMatching(std::move(value)); return *this;}
    inline LdapServerMetadataOutput& WithUserSearchMatching(const char* value) { SetUserSearchMatching(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory search scope for the user. If set to true, scope is to search
     * the entire subtree.</p>
     */
    inline bool GetUserSearchSubtree() const{ return m_userSearchSubtree; }
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

    bool m_roleSearchSubtree;
    bool m_roleSearchSubtreeHasBeenSet = false;

    Aws::String m_serviceAccountUsername;
    bool m_serviceAccountUsernameHasBeenSet = false;

    Aws::String m_userBase;
    bool m_userBaseHasBeenSet = false;

    Aws::String m_userRoleName;
    bool m_userRoleNameHasBeenSet = false;

    Aws::String m_userSearchMatching;
    bool m_userSearchMatchingHasBeenSet = false;

    bool m_userSearchSubtree;
    bool m_userSearchSubtreeHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
