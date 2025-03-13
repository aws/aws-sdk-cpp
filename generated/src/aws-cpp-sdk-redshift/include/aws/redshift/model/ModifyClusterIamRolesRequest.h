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
    AWS_REDSHIFT_API ModifyClusterIamRolesRequest() = default;

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
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    ModifyClusterIamRolesRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Zero or more IAM roles to associate with the cluster. The roles must be in
     * their Amazon Resource Name (ARN) format. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAddIamRoles() const { return m_addIamRoles; }
    inline bool AddIamRolesHasBeenSet() const { return m_addIamRolesHasBeenSet; }
    template<typename AddIamRolesT = Aws::Vector<Aws::String>>
    void SetAddIamRoles(AddIamRolesT&& value) { m_addIamRolesHasBeenSet = true; m_addIamRoles = std::forward<AddIamRolesT>(value); }
    template<typename AddIamRolesT = Aws::Vector<Aws::String>>
    ModifyClusterIamRolesRequest& WithAddIamRoles(AddIamRolesT&& value) { SetAddIamRoles(std::forward<AddIamRolesT>(value)); return *this;}
    template<typename AddIamRolesT = Aws::String>
    ModifyClusterIamRolesRequest& AddAddIamRoles(AddIamRolesT&& value) { m_addIamRolesHasBeenSet = true; m_addIamRoles.emplace_back(std::forward<AddIamRolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Zero or more IAM roles in ARN format to disassociate from the cluster. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveIamRoles() const { return m_removeIamRoles; }
    inline bool RemoveIamRolesHasBeenSet() const { return m_removeIamRolesHasBeenSet; }
    template<typename RemoveIamRolesT = Aws::Vector<Aws::String>>
    void SetRemoveIamRoles(RemoveIamRolesT&& value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles = std::forward<RemoveIamRolesT>(value); }
    template<typename RemoveIamRolesT = Aws::Vector<Aws::String>>
    ModifyClusterIamRolesRequest& WithRemoveIamRoles(RemoveIamRolesT&& value) { SetRemoveIamRoles(std::forward<RemoveIamRolesT>(value)); return *this;}
    template<typename RemoveIamRolesT = Aws::String>
    ModifyClusterIamRolesRequest& AddRemoveIamRoles(RemoveIamRolesT&& value) { m_removeIamRolesHasBeenSet = true; m_removeIamRoles.emplace_back(std::forward<RemoveIamRolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that was set as default for
     * the cluster when the cluster was last modified.</p>
     */
    inline const Aws::String& GetDefaultIamRoleArn() const { return m_defaultIamRoleArn; }
    inline bool DefaultIamRoleArnHasBeenSet() const { return m_defaultIamRoleArnHasBeenSet; }
    template<typename DefaultIamRoleArnT = Aws::String>
    void SetDefaultIamRoleArn(DefaultIamRoleArnT&& value) { m_defaultIamRoleArnHasBeenSet = true; m_defaultIamRoleArn = std::forward<DefaultIamRoleArnT>(value); }
    template<typename DefaultIamRoleArnT = Aws::String>
    ModifyClusterIamRolesRequest& WithDefaultIamRoleArn(DefaultIamRoleArnT&& value) { SetDefaultIamRoleArn(std::forward<DefaultIamRoleArnT>(value)); return *this;}
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
