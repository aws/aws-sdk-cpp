/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/CustomerManagedPolicyReference.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class DetachCustomerManagedPolicyReferenceFromPermissionSetRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API DetachCustomerManagedPolicyReferenceFromPermissionSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachCustomerManagedPolicyReferenceFromPermissionSet"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. </p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>PermissionSet</code>.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const { return m_permissionSetArn; }
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }
    template<typename PermissionSetArnT = Aws::String>
    void SetPermissionSetArn(PermissionSetArnT&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::forward<PermissionSetArnT>(value); }
    template<typename PermissionSetArnT = Aws::String>
    DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& WithPermissionSetArn(PermissionSetArnT&& value) { SetPermissionSetArn(std::forward<PermissionSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name and path of a customer managed policy. You must have an
     * IAM policy that matches the name and path in each Amazon Web Services account
     * where you want to deploy your permission set.</p>
     */
    inline const CustomerManagedPolicyReference& GetCustomerManagedPolicyReference() const { return m_customerManagedPolicyReference; }
    inline bool CustomerManagedPolicyReferenceHasBeenSet() const { return m_customerManagedPolicyReferenceHasBeenSet; }
    template<typename CustomerManagedPolicyReferenceT = CustomerManagedPolicyReference>
    void SetCustomerManagedPolicyReference(CustomerManagedPolicyReferenceT&& value) { m_customerManagedPolicyReferenceHasBeenSet = true; m_customerManagedPolicyReference = std::forward<CustomerManagedPolicyReferenceT>(value); }
    template<typename CustomerManagedPolicyReferenceT = CustomerManagedPolicyReference>
    DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& WithCustomerManagedPolicyReference(CustomerManagedPolicyReferenceT&& value) { SetCustomerManagedPolicyReference(std::forward<CustomerManagedPolicyReferenceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet = false;

    CustomerManagedPolicyReference m_customerManagedPolicyReference;
    bool m_customerManagedPolicyReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
