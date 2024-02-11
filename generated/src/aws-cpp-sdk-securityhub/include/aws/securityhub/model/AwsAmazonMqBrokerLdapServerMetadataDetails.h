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
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLdapServerMetadataDetails();
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLdapServerMetadataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAmazonMqBrokerLdapServerMetadataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the location of the LDAP server, such as Amazon Web Services
     * Directory Service for Microsoft Active Directory. </p>
     */
    inline const Aws::Vector<Aws::String>& GetHosts() const{ return m_hosts; }

    /**
     * <p> Specifies the location of the LDAP server, such as Amazon Web Services
     * Directory Service for Microsoft Active Directory. </p>
     */
    inline bool HostsHasBeenSet() const { return m_hostsHasBeenSet; }

    /**
     * <p> Specifies the location of the LDAP server, such as Amazon Web Services
     * Directory Service for Microsoft Active Directory. </p>
     */
    inline void SetHosts(const Aws::Vector<Aws::String>& value) { m_hostsHasBeenSet = true; m_hosts = value; }

    /**
     * <p> Specifies the location of the LDAP server, such as Amazon Web Services
     * Directory Service for Microsoft Active Directory. </p>
     */
    inline void SetHosts(Aws::Vector<Aws::String>&& value) { m_hostsHasBeenSet = true; m_hosts = std::move(value); }

    /**
     * <p> Specifies the location of the LDAP server, such as Amazon Web Services
     * Directory Service for Microsoft Active Directory. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithHosts(const Aws::Vector<Aws::String>& value) { SetHosts(value); return *this;}

    /**
     * <p> Specifies the location of the LDAP server, such as Amazon Web Services
     * Directory Service for Microsoft Active Directory. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithHosts(Aws::Vector<Aws::String>&& value) { SetHosts(std::move(value)); return *this;}

    /**
     * <p> Specifies the location of the LDAP server, such as Amazon Web Services
     * Directory Service for Microsoft Active Directory. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& AddHosts(const Aws::String& value) { m_hostsHasBeenSet = true; m_hosts.push_back(value); return *this; }

    /**
     * <p> Specifies the location of the LDAP server, such as Amazon Web Services
     * Directory Service for Microsoft Active Directory. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& AddHosts(Aws::String&& value) { m_hostsHasBeenSet = true; m_hosts.push_back(std::move(value)); return *this; }

    /**
     * <p> Specifies the location of the LDAP server, such as Amazon Web Services
     * Directory Service for Microsoft Active Directory. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& AddHosts(const char* value) { m_hostsHasBeenSet = true; m_hosts.push_back(value); return *this; }


    /**
     * <p> The distinguished name of the node in the directory information tree (DIT)
     * to search for roles or groups. </p>
     */
    inline const Aws::String& GetRoleBase() const{ return m_roleBase; }

    /**
     * <p> The distinguished name of the node in the directory information tree (DIT)
     * to search for roles or groups. </p>
     */
    inline bool RoleBaseHasBeenSet() const { return m_roleBaseHasBeenSet; }

    /**
     * <p> The distinguished name of the node in the directory information tree (DIT)
     * to search for roles or groups. </p>
     */
    inline void SetRoleBase(const Aws::String& value) { m_roleBaseHasBeenSet = true; m_roleBase = value; }

    /**
     * <p> The distinguished name of the node in the directory information tree (DIT)
     * to search for roles or groups. </p>
     */
    inline void SetRoleBase(Aws::String&& value) { m_roleBaseHasBeenSet = true; m_roleBase = std::move(value); }

    /**
     * <p> The distinguished name of the node in the directory information tree (DIT)
     * to search for roles or groups. </p>
     */
    inline void SetRoleBase(const char* value) { m_roleBaseHasBeenSet = true; m_roleBase.assign(value); }

    /**
     * <p> The distinguished name of the node in the directory information tree (DIT)
     * to search for roles or groups. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleBase(const Aws::String& value) { SetRoleBase(value); return *this;}

    /**
     * <p> The distinguished name of the node in the directory information tree (DIT)
     * to search for roles or groups. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleBase(Aws::String&& value) { SetRoleBase(std::move(value)); return *this;}

    /**
     * <p> The distinguished name of the node in the directory information tree (DIT)
     * to search for roles or groups. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleBase(const char* value) { SetRoleBase(value); return *this;}


    /**
     * <p> The group name attribute in a role entry whose value is the name of that
     * role. </p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p> The group name attribute in a role entry whose value is the name of that
     * role. </p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p> The group name attribute in a role entry whose value is the name of that
     * role. </p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p> The group name attribute in a role entry whose value is the name of that
     * role. </p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p> The group name attribute in a role entry whose value is the name of that
     * role. </p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p> The group name attribute in a role entry whose value is the name of that
     * role. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p> The group name attribute in a role entry whose value is the name of that
     * role. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p> The group name attribute in a role entry whose value is the name of that
     * role. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p> The LDAP search filter used to find roles within the <code>roleBase</code>.
     * </p>
     */
    inline const Aws::String& GetRoleSearchMatching() const{ return m_roleSearchMatching; }

    /**
     * <p> The LDAP search filter used to find roles within the <code>roleBase</code>.
     * </p>
     */
    inline bool RoleSearchMatchingHasBeenSet() const { return m_roleSearchMatchingHasBeenSet; }

    /**
     * <p> The LDAP search filter used to find roles within the <code>roleBase</code>.
     * </p>
     */
    inline void SetRoleSearchMatching(const Aws::String& value) { m_roleSearchMatchingHasBeenSet = true; m_roleSearchMatching = value; }

    /**
     * <p> The LDAP search filter used to find roles within the <code>roleBase</code>.
     * </p>
     */
    inline void SetRoleSearchMatching(Aws::String&& value) { m_roleSearchMatchingHasBeenSet = true; m_roleSearchMatching = std::move(value); }

    /**
     * <p> The LDAP search filter used to find roles within the <code>roleBase</code>.
     * </p>
     */
    inline void SetRoleSearchMatching(const char* value) { m_roleSearchMatchingHasBeenSet = true; m_roleSearchMatching.assign(value); }

    /**
     * <p> The LDAP search filter used to find roles within the <code>roleBase</code>.
     * </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleSearchMatching(const Aws::String& value) { SetRoleSearchMatching(value); return *this;}

    /**
     * <p> The LDAP search filter used to find roles within the <code>roleBase</code>.
     * </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleSearchMatching(Aws::String&& value) { SetRoleSearchMatching(std::move(value)); return *this;}

    /**
     * <p> The LDAP search filter used to find roles within the <code>roleBase</code>.
     * </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleSearchMatching(const char* value) { SetRoleSearchMatching(value); return *this;}


    /**
     * <p> The directory search scope for the role. If set to <code>true</code>, the
     * scope is to search the entire subtree. </p>
     */
    inline bool GetRoleSearchSubtree() const{ return m_roleSearchSubtree; }

    /**
     * <p> The directory search scope for the role. If set to <code>true</code>, the
     * scope is to search the entire subtree. </p>
     */
    inline bool RoleSearchSubtreeHasBeenSet() const { return m_roleSearchSubtreeHasBeenSet; }

    /**
     * <p> The directory search scope for the role. If set to <code>true</code>, the
     * scope is to search the entire subtree. </p>
     */
    inline void SetRoleSearchSubtree(bool value) { m_roleSearchSubtreeHasBeenSet = true; m_roleSearchSubtree = value; }

    /**
     * <p> The directory search scope for the role. If set to <code>true</code>, the
     * scope is to search the entire subtree. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithRoleSearchSubtree(bool value) { SetRoleSearchSubtree(value); return *this;}


    /**
     * <p> A username for the service account, which is an account in your LDAP server
     * that has access to initiate a connection. </p>
     */
    inline const Aws::String& GetServiceAccountUsername() const{ return m_serviceAccountUsername; }

    /**
     * <p> A username for the service account, which is an account in your LDAP server
     * that has access to initiate a connection. </p>
     */
    inline bool ServiceAccountUsernameHasBeenSet() const { return m_serviceAccountUsernameHasBeenSet; }

    /**
     * <p> A username for the service account, which is an account in your LDAP server
     * that has access to initiate a connection. </p>
     */
    inline void SetServiceAccountUsername(const Aws::String& value) { m_serviceAccountUsernameHasBeenSet = true; m_serviceAccountUsername = value; }

    /**
     * <p> A username for the service account, which is an account in your LDAP server
     * that has access to initiate a connection. </p>
     */
    inline void SetServiceAccountUsername(Aws::String&& value) { m_serviceAccountUsernameHasBeenSet = true; m_serviceAccountUsername = std::move(value); }

    /**
     * <p> A username for the service account, which is an account in your LDAP server
     * that has access to initiate a connection. </p>
     */
    inline void SetServiceAccountUsername(const char* value) { m_serviceAccountUsernameHasBeenSet = true; m_serviceAccountUsername.assign(value); }

    /**
     * <p> A username for the service account, which is an account in your LDAP server
     * that has access to initiate a connection. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithServiceAccountUsername(const Aws::String& value) { SetServiceAccountUsername(value); return *this;}

    /**
     * <p> A username for the service account, which is an account in your LDAP server
     * that has access to initiate a connection. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithServiceAccountUsername(Aws::String&& value) { SetServiceAccountUsername(std::move(value)); return *this;}

    /**
     * <p> A username for the service account, which is an account in your LDAP server
     * that has access to initiate a connection. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithServiceAccountUsername(const char* value) { SetServiceAccountUsername(value); return *this;}


    /**
     * <p> Selects a particular subtree of the directory information tree (DIT) to
     * search for user entries. </p>
     */
    inline const Aws::String& GetUserBase() const{ return m_userBase; }

    /**
     * <p> Selects a particular subtree of the directory information tree (DIT) to
     * search for user entries. </p>
     */
    inline bool UserBaseHasBeenSet() const { return m_userBaseHasBeenSet; }

    /**
     * <p> Selects a particular subtree of the directory information tree (DIT) to
     * search for user entries. </p>
     */
    inline void SetUserBase(const Aws::String& value) { m_userBaseHasBeenSet = true; m_userBase = value; }

    /**
     * <p> Selects a particular subtree of the directory information tree (DIT) to
     * search for user entries. </p>
     */
    inline void SetUserBase(Aws::String&& value) { m_userBaseHasBeenSet = true; m_userBase = std::move(value); }

    /**
     * <p> Selects a particular subtree of the directory information tree (DIT) to
     * search for user entries. </p>
     */
    inline void SetUserBase(const char* value) { m_userBaseHasBeenSet = true; m_userBase.assign(value); }

    /**
     * <p> Selects a particular subtree of the directory information tree (DIT) to
     * search for user entries. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserBase(const Aws::String& value) { SetUserBase(value); return *this;}

    /**
     * <p> Selects a particular subtree of the directory information tree (DIT) to
     * search for user entries. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserBase(Aws::String&& value) { SetUserBase(std::move(value)); return *this;}

    /**
     * <p> Selects a particular subtree of the directory information tree (DIT) to
     * search for user entries. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserBase(const char* value) { SetUserBase(value); return *this;}


    /**
     * <p> The name of the LDAP attribute in the user's directory entry for the user's
     * group membership. </p>
     */
    inline const Aws::String& GetUserRoleName() const{ return m_userRoleName; }

    /**
     * <p> The name of the LDAP attribute in the user's directory entry for the user's
     * group membership. </p>
     */
    inline bool UserRoleNameHasBeenSet() const { return m_userRoleNameHasBeenSet; }

    /**
     * <p> The name of the LDAP attribute in the user's directory entry for the user's
     * group membership. </p>
     */
    inline void SetUserRoleName(const Aws::String& value) { m_userRoleNameHasBeenSet = true; m_userRoleName = value; }

    /**
     * <p> The name of the LDAP attribute in the user's directory entry for the user's
     * group membership. </p>
     */
    inline void SetUserRoleName(Aws::String&& value) { m_userRoleNameHasBeenSet = true; m_userRoleName = std::move(value); }

    /**
     * <p> The name of the LDAP attribute in the user's directory entry for the user's
     * group membership. </p>
     */
    inline void SetUserRoleName(const char* value) { m_userRoleNameHasBeenSet = true; m_userRoleName.assign(value); }

    /**
     * <p> The name of the LDAP attribute in the user's directory entry for the user's
     * group membership. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserRoleName(const Aws::String& value) { SetUserRoleName(value); return *this;}

    /**
     * <p> The name of the LDAP attribute in the user's directory entry for the user's
     * group membership. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserRoleName(Aws::String&& value) { SetUserRoleName(std::move(value)); return *this;}

    /**
     * <p> The name of the LDAP attribute in the user's directory entry for the user's
     * group membership. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserRoleName(const char* value) { SetUserRoleName(value); return *this;}


    /**
     * <p> The LDAP search filter used to find users within the <code>userBase</code>.
     * </p>
     */
    inline const Aws::String& GetUserSearchMatching() const{ return m_userSearchMatching; }

    /**
     * <p> The LDAP search filter used to find users within the <code>userBase</code>.
     * </p>
     */
    inline bool UserSearchMatchingHasBeenSet() const { return m_userSearchMatchingHasBeenSet; }

    /**
     * <p> The LDAP search filter used to find users within the <code>userBase</code>.
     * </p>
     */
    inline void SetUserSearchMatching(const Aws::String& value) { m_userSearchMatchingHasBeenSet = true; m_userSearchMatching = value; }

    /**
     * <p> The LDAP search filter used to find users within the <code>userBase</code>.
     * </p>
     */
    inline void SetUserSearchMatching(Aws::String&& value) { m_userSearchMatchingHasBeenSet = true; m_userSearchMatching = std::move(value); }

    /**
     * <p> The LDAP search filter used to find users within the <code>userBase</code>.
     * </p>
     */
    inline void SetUserSearchMatching(const char* value) { m_userSearchMatchingHasBeenSet = true; m_userSearchMatching.assign(value); }

    /**
     * <p> The LDAP search filter used to find users within the <code>userBase</code>.
     * </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserSearchMatching(const Aws::String& value) { SetUserSearchMatching(value); return *this;}

    /**
     * <p> The LDAP search filter used to find users within the <code>userBase</code>.
     * </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserSearchMatching(Aws::String&& value) { SetUserSearchMatching(std::move(value)); return *this;}

    /**
     * <p> The LDAP search filter used to find users within the <code>userBase</code>.
     * </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserSearchMatching(const char* value) { SetUserSearchMatching(value); return *this;}


    /**
     * <p> The directory search scope for the user. If set to true, the scope is to
     * search the entire subtree. </p>
     */
    inline bool GetUserSearchSubtree() const{ return m_userSearchSubtree; }

    /**
     * <p> The directory search scope for the user. If set to true, the scope is to
     * search the entire subtree. </p>
     */
    inline bool UserSearchSubtreeHasBeenSet() const { return m_userSearchSubtreeHasBeenSet; }

    /**
     * <p> The directory search scope for the user. If set to true, the scope is to
     * search the entire subtree. </p>
     */
    inline void SetUserSearchSubtree(bool value) { m_userSearchSubtreeHasBeenSet = true; m_userSearchSubtree = value; }

    /**
     * <p> The directory search scope for the user. If set to true, the scope is to
     * search the entire subtree. </p>
     */
    inline AwsAmazonMqBrokerLdapServerMetadataDetails& WithUserSearchSubtree(bool value) { SetUserSearchSubtree(value); return *this;}

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
} // namespace SecurityHub
} // namespace Aws
