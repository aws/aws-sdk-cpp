﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/sso-admin/model/CustomerManagedPolicyReference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_SSOADMIN_API DetachCustomerManagedPolicyReferenceFromPermissionSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachCustomerManagedPolicyReferenceFromPermissionSet"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the name and path of a customer managed policy. You must have an
     * IAM policy that matches the name and path in each Amazon Web Services account
     * where you want to deploy your permission set.</p>
     */
    inline const CustomerManagedPolicyReference& GetCustomerManagedPolicyReference() const{ return m_customerManagedPolicyReference; }
    inline bool CustomerManagedPolicyReferenceHasBeenSet() const { return m_customerManagedPolicyReferenceHasBeenSet; }
    inline void SetCustomerManagedPolicyReference(const CustomerManagedPolicyReference& value) { m_customerManagedPolicyReferenceHasBeenSet = true; m_customerManagedPolicyReference = value; }
    inline void SetCustomerManagedPolicyReference(CustomerManagedPolicyReference&& value) { m_customerManagedPolicyReferenceHasBeenSet = true; m_customerManagedPolicyReference = std::move(value); }
    inline DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& WithCustomerManagedPolicyReference(const CustomerManagedPolicyReference& value) { SetCustomerManagedPolicyReference(value); return *this;}
    inline DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& WithCustomerManagedPolicyReference(CustomerManagedPolicyReference&& value) { SetCustomerManagedPolicyReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. </p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>PermissionSet</code>.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const{ return m_permissionSetArn; }
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }
    inline void SetPermissionSetArn(const Aws::String& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = value; }
    inline void SetPermissionSetArn(Aws::String&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::move(value); }
    inline void SetPermissionSetArn(const char* value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn.assign(value); }
    inline DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& WithPermissionSetArn(const Aws::String& value) { SetPermissionSetArn(value); return *this;}
    inline DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& WithPermissionSetArn(Aws::String&& value) { SetPermissionSetArn(std::move(value)); return *this;}
    inline DetachCustomerManagedPolicyReferenceFromPermissionSetRequest& WithPermissionSetArn(const char* value) { SetPermissionSetArn(value); return *this;}
    ///@}
  private:

    CustomerManagedPolicyReference m_customerManagedPolicyReference;
    bool m_customerManagedPolicyReferenceHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
