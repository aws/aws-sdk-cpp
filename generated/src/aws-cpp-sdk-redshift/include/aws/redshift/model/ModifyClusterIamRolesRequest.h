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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ModifyClusterIamRolesMessage">AWS
   * API Reference</a></p>
   */
  class ModifyClusterIamRolesRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifyClusterIamRolesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClusterIamRoles"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The unique identifier of the cluster for which you want to associate or
     * disassociate IAM roles.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline ModifyClusterIamRolesRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline ModifyClusterIamRolesRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline ModifyClusterIamRolesRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Zero or more IAM roles to associate with the cluster. The roles must be in
     * their Amazon Resource Name (ARN) format. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAddIamRoles() const{ return m_addIamRoles; }
    inline bool AddIamRolesHasBeenSet() const { return m_addIamRolesHasBeenSet; }
    inline void SetAddIamRoles(const Aws::Vector<Aws::String>& value) { m_addIamRolesHasBeenSet = true; m_addIamRoles = value; }
    inline void SetAddIamRoles(Aws::Vector<Aws::String>&& value) { m_addIamRolesHasBeenSet = true; m_addIamRoles = std::move(value); }
    inline ModifyClusterIamRolesRequest& WithAddIamRoles(const Aws::Vector<Aws::String>& value) { SetAddIamRoles(value); return *this;}
    inline ModifyClusterIamRolesRequest& WithAddIamRoles(Aws::Vector<Aws::String>&& value) { SetAddIamRoles(std::move(value)); return *this;}
    inline ModifyClusterIamRolesRequest& AddAddIamRoles(const Aws::String& value) { m_addIamRolesHasBeenSet = true; m_addIamRoles.push_back(value); return *this; }
    inline ModifyClusterIamRolesRequest& AddAddIamRoles(Aws::String&& value) { m_addIamRolesHasBeenSet = true; m_addIamRoles.push_back(std::move(value)); return *this; }
    inline ModifyClusterIamRolesRequest& AddAddIamRoles(const char* value) { m_addIamRolesHasBeenSet = true; m_addIamRoles.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Zero or more IAM roles in ARN format to disassociate from the cluster. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveIamRoles() const{ return m_removeIamRoles; }
    inline bool RemoveIamRolesHasBeenSet() const { return m_removeIamRolesHasBeenSet; }
    inline void SetRemoveIamRoles(const Aws::Vector<Aws::String>& value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles = value; }
    inline void SetRemoveIamRoles(Aws::Vector<Aws::String>&& value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles = std::move(value); }
    inline ModifyClusterIamRolesRequest& WithRemoveIamRoles(const Aws::Vector<Aws::String>& value) { SetRemoveIamRoles(value); return *this;}
    inline ModifyClusterIamRolesRequest& WithRemoveIamRoles(Aws::Vector<Aws::String>&& value) { SetRemoveIamRoles(std::move(value)); return *this;}
    inline ModifyClusterIamRolesRequest& AddRemoveIamRoles(const Aws::String& value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles.push_back(value); return *this; }
    inline ModifyClusterIamRolesRequest& AddRemoveIamRoles(Aws::String&& value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles.push_back(std::move(value)); return *this; }
    inline ModifyClusterIamRolesRequest& AddRemoveIamRoles(const char* value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was last modified.</p>
     */
    inline const Aws::String& GetDefaultIamRoleArn() const{ return m_defaultIamRoleArn; }
    inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }
    inline void SetDefaultIamRoleArn(const Aws::String& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = value; }
    inline void SetDefaultIamRoleArn(Aws::String&& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = std::move(value); }
    inline void SetDefaultIamRoleArn(const char* value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn.assign(value); }
    inline ModifyClusterIamRolesRequest& WithDefaultIamRoleArn(const Aws::String& value) { SetDefaultIamRoleArn(value); return *this;}
    inline ModifyClusterIamRolesRequest& WithDefaultIamRoleArn(Aws::String&& value) { SetDefaultIamRoleArn(std::move(value)); return *this;}
    inline ModifyClusterIamRolesRequest& WithDefaultIamRoleArn(const char* value) { SetDefaultIamRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_addIamRoles;
    bool m_addIamRolesHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeIamRoles;
    bool m_removeIamRolesHasBeenSet = false;

    Aws::String m_defaultIamRoleArn;
    bool m_defaultIamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
