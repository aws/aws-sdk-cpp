/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class DescribeApprovalPolicyRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API DescribeApprovalPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeApprovalPolicy"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the approval policy to describe.</p>
   */
  inline const Aws::String& GetPolicyId() const { return m_policyId; }
  inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
  template <typename PolicyIdT = Aws::String>
  void SetPolicyId(PolicyIdT&& value) {
    m_policyIdHasBeenSet = true;
    m_policyId = std::forward<PolicyIdT>(value);
  }
  template <typename PolicyIdT = Aws::String>
  DescribeApprovalPolicyRequest& WithPolicyId(PolicyIdT&& value) {
    SetPolicyId(std::forward<PolicyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyId;
  bool m_policyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
