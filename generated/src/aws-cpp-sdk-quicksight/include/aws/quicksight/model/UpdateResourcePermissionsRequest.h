/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ServiceRoleType.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateResourcePermissionsRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateResourcePermissionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateResourcePermissions"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account whose service role configuration
   * you want to update.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateResourcePermissionsRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of service role that you want Amazon Quick Sight to use. The only
   * supported value for this operation is <code>CUSTOMER_MANAGED</code>. Requests
   * that specify <code>QUICKSIGHT_MANAGED</code> are rejected.</p>
   */
  inline ServiceRoleType GetRoleType() const { return m_roleType; }
  inline bool RoleTypeHasBeenSet() const { return m_roleTypeHasBeenSet; }
  inline void SetRoleType(ServiceRoleType value) {
    m_roleTypeHasBeenSet = true;
    m_roleType = value;
  }
  inline UpdateResourcePermissionsRequest& WithRoleType(ServiceRoleType value) {
    SetRoleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the customer-managed role that you want Amazon Quick Sight to use.
   * To use this operation, you must have the <code>iam:PassRole</code> permission
   * for the role.</p> <p>Configure the role as follows:</p> <ul> <li> <p>The role
   * must belong to the Amazon Web Services account specified by
   * <code>AwsAccountId</code>.</p> </li> <li> <p>Configure the role trust policy to
   * allow the Amazon Quick Sight service principal to call
   * <code>sts:AssumeRole</code>.</p> </li> <li> <p>Attach a permissions policy that
   * allows access to the resources that you want Amazon Quick Sight to use.</p>
   * </li> <li> <p>To use features that rely on session tags, configure the role
   * trust policy to allow the Amazon Quick Sight service principal to call
   * <code>sts:TagSession</code>.</p> </li> </ul> <p>If the role doesn't exist or its
   * trust policy doesn't allow <code>sts:AssumeRole</code>, the request returns an
   * <code>AccessDeniedException</code>.</p> <p>When you call this operation, Amazon
   * Quick Sight attempts to assume the role with session tags and records whether
   * the attempt succeeds. If you later add or remove <code>sts:TagSession</code>
   * from the trust policy, call this operation again with the same role ARN to
   * refresh the stored capability.</p>
   */
  inline const Aws::String& GetCustomerManagedRoleArn() const { return m_customerManagedRoleArn; }
  inline bool CustomerManagedRoleArnHasBeenSet() const { return m_customerManagedRoleArnHasBeenSet; }
  template <typename CustomerManagedRoleArnT = Aws::String>
  void SetCustomerManagedRoleArn(CustomerManagedRoleArnT&& value) {
    m_customerManagedRoleArnHasBeenSet = true;
    m_customerManagedRoleArn = std::forward<CustomerManagedRoleArnT>(value);
  }
  template <typename CustomerManagedRoleArnT = Aws::String>
  UpdateResourcePermissionsRequest& WithCustomerManagedRoleArn(CustomerManagedRoleArnT&& value) {
    SetCustomerManagedRoleArn(std::forward<CustomerManagedRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  ServiceRoleType m_roleType{ServiceRoleType::NOT_SET};

  Aws::String m_customerManagedRoleArn;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_roleTypeHasBeenSet = false;
  bool m_customerManagedRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
