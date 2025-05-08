/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/ProvisioningStatus.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class ListAccountsForProvisionedPermissionSetRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API ListAccountsForProvisionedPermissionSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccountsForProvisionedPermissionSet"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    ListAccountsForProvisionedPermissionSetRequest& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <a>PermissionSet</a> from which the associated Amazon Web
     * Services accounts will be listed.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const { return m_permissionSetArn; }
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }
    template<typename PermissionSetArnT = Aws::String>
    void SetPermissionSetArn(PermissionSetArnT&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::forward<PermissionSetArnT>(value); }
    template<typename PermissionSetArnT = Aws::String>
    ListAccountsForProvisionedPermissionSetRequest& WithPermissionSetArn(PermissionSetArnT&& value) { SetPermissionSetArn(std::forward<PermissionSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission set provisioning status for an Amazon Web Services
     * account.</p>
     */
    inline ProvisioningStatus GetProvisioningStatus() const { return m_provisioningStatus; }
    inline bool ProvisioningStatusHasBeenSet() const { return m_provisioningStatusHasBeenSet; }
    inline void SetProvisioningStatus(ProvisioningStatus value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = value; }
    inline ListAccountsForProvisionedPermissionSetRequest& WithProvisioningStatus(ProvisioningStatus value) { SetProvisioningStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to display for the <a>PermissionSet</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAccountsForProvisionedPermissionSetRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccountsForProvisionedPermissionSetRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet = false;

    ProvisioningStatus m_provisioningStatus{ProvisioningStatus::NOT_SET};
    bool m_provisioningStatusHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
