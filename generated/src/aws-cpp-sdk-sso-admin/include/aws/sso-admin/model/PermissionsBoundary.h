/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/CustomerManagedPolicyReference.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>Specifies the configuration of the Amazon Web Services managed or customer
   * managed policy that you want to set as a permissions boundary. Specify either
   * <code>CustomerManagedPolicyReference</code> to use the name and path of a
   * customer managed policy, or <code>ManagedPolicyArn</code> to use the ARN of an
   * Amazon Web Services managed policy. A permissions boundary represents the
   * maximum permissions that any policy can grant your role. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
   * boundaries for IAM entities</a> in the <i>IAM User Guide</i>.</p> 
   * <p>Policies used as permissions boundaries don't provide permissions. You must
   * also attach an IAM policy to the role. To learn how the effective permissions
   * for a role are evaluated, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_evaluation-logic.html">IAM
   * JSON policy evaluation logic</a> in the <i>IAM User Guide</i>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PermissionsBoundary">AWS
   * API Reference</a></p>
   */
  class PermissionsBoundary
  {
  public:
    AWS_SSOADMIN_API PermissionsBoundary() = default;
    AWS_SSOADMIN_API PermissionsBoundary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API PermissionsBoundary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    PermissionsBoundary& WithCustomerManagedPolicyReference(CustomerManagedPolicyReferenceT&& value) { SetCustomerManagedPolicyReference(std::forward<CustomerManagedPolicyReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services managed policy ARN that you want to attach to a
     * permission set as a permissions boundary.</p>
     */
    inline const Aws::String& GetManagedPolicyArn() const { return m_managedPolicyArn; }
    inline bool ManagedPolicyArnHasBeenSet() const { return m_managedPolicyArnHasBeenSet; }
    template<typename ManagedPolicyArnT = Aws::String>
    void SetManagedPolicyArn(ManagedPolicyArnT&& value) { m_managedPolicyArnHasBeenSet = true; m_managedPolicyArn = std::forward<ManagedPolicyArnT>(value); }
    template<typename ManagedPolicyArnT = Aws::String>
    PermissionsBoundary& WithManagedPolicyArn(ManagedPolicyArnT&& value) { SetManagedPolicyArn(std::forward<ManagedPolicyArnT>(value)); return *this;}
    ///@}
  private:

    CustomerManagedPolicyReference m_customerManagedPolicyReference;
    bool m_customerManagedPolicyReferenceHasBeenSet = false;

    Aws::String m_managedPolicyArn;
    bool m_managedPolicyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
