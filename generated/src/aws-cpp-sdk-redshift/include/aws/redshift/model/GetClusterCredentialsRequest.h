/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p>The request parameters to get cluster credentials.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/GetClusterCredentialsMessage">AWS
   * API Reference</a></p>
   */
  class GetClusterCredentialsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API GetClusterCredentialsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetClusterCredentials"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of a database user. If a user name matching <code>DbUser</code>
     * exists in the database, the temporary user credentials have the same permissions
     * as the existing user. If <code>DbUser</code> doesn't exist in the database and
     * <code>Autocreate</code> is <code>True</code>, a new user is created using the
     * value for <code>DbUser</code> with PUBLIC permissions. If a database user
     * matching the value for <code>DbUser</code> doesn't exist and
     * <code>Autocreate</code> is <code>False</code>, then the command succeeds but the
     * connection attempt will fail because the user doesn't exist in the database.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/r_CREATE_USER.html">CREATE
     * USER</a> in the Amazon Redshift Database Developer Guide. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64 alphanumeric characters or
     * hyphens. The user name can't be <code>PUBLIC</code>.</p> </li> <li> <p>Must
     * contain uppercase or lowercase letters, numbers, underscore, plus sign, period
     * (dot), at symbol (@), or hyphen.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Must not contain a colon ( : ) or slash ( / ). </p>
     * </li> <li> <p>Cannot be a reserved word. A list of reserved words can be found
     * in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline const Aws::String& GetDbUser() const { return m_dbUser; }
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }
    template<typename DbUserT = Aws::String>
    void SetDbUser(DbUserT&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::forward<DbUserT>(value); }
    template<typename DbUserT = Aws::String>
    GetClusterCredentialsRequest& WithDbUser(DbUserT&& value) { SetDbUser(std::forward<DbUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a database that <code>DbUser</code> is authorized to log on to.
     * If <code>DbName</code> is not specified, <code>DbUser</code> can log on to any
     * existing database.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain uppercase or
     * lowercase letters, numbers, underscore, plus sign, period (dot), at symbol (@),
     * or hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline const Aws::String& GetDbName() const { return m_dbName; }
    inline bool DbNameHasBeenSet() const { return m_dbNameHasBeenSet; }
    template<typename DbNameT = Aws::String>
    void SetDbName(DbNameT&& value) { m_dbNameHasBeenSet = true; m_dbName = std::forward<DbNameT>(value); }
    template<typename DbNameT = Aws::String>
    GetClusterCredentialsRequest& WithDbName(DbNameT&& value) { SetDbName(std::forward<DbNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the cluster that contains the database for which you
     * are requesting credentials. This parameter is case sensitive.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    GetClusterCredentialsRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds until the returned temporary password expires.</p>
     * <p>Constraint: minimum 900, maximum 3600.</p> <p>Default: 900</p>
     */
    inline int GetDurationSeconds() const { return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline GetClusterCredentialsRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Create a database user with the name specified for the user named in
     * <code>DbUser</code> if one does not exist.</p>
     */
    inline bool GetAutoCreate() const { return m_autoCreate; }
    inline bool AutoCreateHasBeenSet() const { return m_autoCreateHasBeenSet; }
    inline void SetAutoCreate(bool value) { m_autoCreateHasBeenSet = true; m_autoCreate = value; }
    inline GetClusterCredentialsRequest& WithAutoCreate(bool value) { SetAutoCreate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the names of existing database groups that the user named in
     * <code>DbUser</code> will join for the current session, in addition to any group
     * memberships for an existing user. If not specified, a new user is added only to
     * PUBLIC.</p> <p>Database group name constraints</p> <ul> <li> <p>Must be 1 to 64
     * alphanumeric characters or hyphens</p> </li> <li> <p>Must contain only lowercase
     * letters, numbers, underscore, plus sign, period (dot), at symbol (@), or
     * hyphen.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Must not contain a colon ( : ) or slash ( / ). </p> </li> <li> <p>Cannot be a
     * reserved word. A list of reserved words can be found in <a
     * href="http://docs.aws.amazon.com/redshift/latest/dg/r_pg_keywords.html">Reserved
     * Words</a> in the Amazon Redshift Database Developer Guide.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDbGroups() const { return m_dbGroups; }
    inline bool DbGroupsHasBeenSet() const { return m_dbGroupsHasBeenSet; }
    template<typename DbGroupsT = Aws::Vector<Aws::String>>
    void SetDbGroups(DbGroupsT&& value) { m_dbGroupsHasBeenSet = true; m_dbGroups = std::forward<DbGroupsT>(value); }
    template<typename DbGroupsT = Aws::Vector<Aws::String>>
    GetClusterCredentialsRequest& WithDbGroups(DbGroupsT&& value) { SetDbGroups(std::forward<DbGroupsT>(value)); return *this;}
    template<typename DbGroupsT = Aws::String>
    GetClusterCredentialsRequest& AddDbGroups(DbGroupsT&& value) { m_dbGroupsHasBeenSet = true; m_dbGroups.emplace_back(std::forward<DbGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom domain name for the cluster credentials.</p>
     */
    inline const Aws::String& GetCustomDomainName() const { return m_customDomainName; }
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }
    template<typename CustomDomainNameT = Aws::String>
    void SetCustomDomainName(CustomDomainNameT&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::forward<CustomDomainNameT>(value); }
    template<typename CustomDomainNameT = Aws::String>
    GetClusterCredentialsRequest& WithCustomDomainName(CustomDomainNameT&& value) { SetCustomDomainName(std::forward<CustomDomainNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::String m_dbName;
    bool m_dbNameHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    int m_durationSeconds{0};
    bool m_durationSecondsHasBeenSet = false;

    bool m_autoCreate{false};
    bool m_autoCreateHasBeenSet = false;

    Aws::Vector<Aws::String> m_dbGroups;
    bool m_dbGroupsHasBeenSet = false;

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
