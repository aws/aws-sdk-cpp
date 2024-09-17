/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that grants Amazon QuickSight access to your cluster and make a
   * call to the <code>redshift:GetClusterCredentials</code> API. For more
   * information on the <code>redshift:GetClusterCredentials</code> API, see <a
   * href="https://docs.aws.amazon.com/redshift/latest/APIReference/API_GetClusterCredentials.html">
   * <code>GetClusterCredentials</code> </a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RedshiftIAMParameters">AWS
   * API Reference</a></p>
   */
  class RedshiftIAMParameters
  {
  public:
    AWS_QUICKSIGHT_API RedshiftIAMParameters();
    AWS_QUICKSIGHT_API RedshiftIAMParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RedshiftIAMParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use the <code>RoleArn</code> structure to allow Amazon QuickSight to call
     * <code>redshift:GetClusterCredentials</code> on your cluster. The calling
     * principal must have <code>iam:PassRole</code> access to pass the role to Amazon
     * QuickSight. The role's trust policy must allow the Amazon QuickSight service
     * principal to assume the role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline RedshiftIAMParameters& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline RedshiftIAMParameters& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline RedshiftIAMParameters& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user whose permissions and group memberships will be used by Amazon
     * QuickSight to access the cluster. If this user already exists in your database,
     * Amazon QuickSight is granted the same permissions that the user has. If the user
     * doesn't exist, set the value of <code>AutoCreateDatabaseUser</code> to
     * <code>True</code> to create a new user with PUBLIC permissions.</p>
     */
    inline const Aws::String& GetDatabaseUser() const{ return m_databaseUser; }
    inline bool DatabaseUserHasBeenSet() const { return m_databaseUserHasBeenSet; }
    inline void SetDatabaseUser(const Aws::String& value) { m_databaseUserHasBeenSet = true; m_databaseUser = value; }
    inline void SetDatabaseUser(Aws::String&& value) { m_databaseUserHasBeenSet = true; m_databaseUser = std::move(value); }
    inline void SetDatabaseUser(const char* value) { m_databaseUserHasBeenSet = true; m_databaseUser.assign(value); }
    inline RedshiftIAMParameters& WithDatabaseUser(const Aws::String& value) { SetDatabaseUser(value); return *this;}
    inline RedshiftIAMParameters& WithDatabaseUser(Aws::String&& value) { SetDatabaseUser(std::move(value)); return *this;}
    inline RedshiftIAMParameters& WithDatabaseUser(const char* value) { SetDatabaseUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of groups whose permissions will be granted to Amazon QuickSight to
     * access the cluster. These permissions are combined with the permissions granted
     * to Amazon QuickSight by the <code>DatabaseUser</code>. If you choose to include
     * this parameter, the <code>RoleArn</code> must grant access to
     * <code>redshift:JoinGroup</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatabaseGroups() const{ return m_databaseGroups; }
    inline bool DatabaseGroupsHasBeenSet() const { return m_databaseGroupsHasBeenSet; }
    inline void SetDatabaseGroups(const Aws::Vector<Aws::String>& value) { m_databaseGroupsHasBeenSet = true; m_databaseGroups = value; }
    inline void SetDatabaseGroups(Aws::Vector<Aws::String>&& value) { m_databaseGroupsHasBeenSet = true; m_databaseGroups = std::move(value); }
    inline RedshiftIAMParameters& WithDatabaseGroups(const Aws::Vector<Aws::String>& value) { SetDatabaseGroups(value); return *this;}
    inline RedshiftIAMParameters& WithDatabaseGroups(Aws::Vector<Aws::String>&& value) { SetDatabaseGroups(std::move(value)); return *this;}
    inline RedshiftIAMParameters& AddDatabaseGroups(const Aws::String& value) { m_databaseGroupsHasBeenSet = true; m_databaseGroups.push_back(value); return *this; }
    inline RedshiftIAMParameters& AddDatabaseGroups(Aws::String&& value) { m_databaseGroupsHasBeenSet = true; m_databaseGroups.push_back(std::move(value)); return *this; }
    inline RedshiftIAMParameters& AddDatabaseGroups(const char* value) { m_databaseGroupsHasBeenSet = true; m_databaseGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Automatically creates a database user. If your database doesn't have a
     * <code>DatabaseUser</code>, set this parameter to <code>True</code>. If there is
     * no <code>DatabaseUser</code>, Amazon QuickSight can't connect to your cluster.
     * The <code>RoleArn</code> that you use for this operation must grant access to
     * <code>redshift:CreateClusterUser</code> to successfully create the user.</p>
     */
    inline bool GetAutoCreateDatabaseUser() const{ return m_autoCreateDatabaseUser; }
    inline bool AutoCreateDatabaseUserHasBeenSet() const { return m_autoCreateDatabaseUserHasBeenSet; }
    inline void SetAutoCreateDatabaseUser(bool value) { m_autoCreateDatabaseUserHasBeenSet = true; m_autoCreateDatabaseUser = value; }
    inline RedshiftIAMParameters& WithAutoCreateDatabaseUser(bool value) { SetAutoCreateDatabaseUser(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_databaseUser;
    bool m_databaseUserHasBeenSet = false;

    Aws::Vector<Aws::String> m_databaseGroups;
    bool m_databaseGroupsHasBeenSet = false;

    bool m_autoCreateDatabaseUser;
    bool m_autoCreateDatabaseUserHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
