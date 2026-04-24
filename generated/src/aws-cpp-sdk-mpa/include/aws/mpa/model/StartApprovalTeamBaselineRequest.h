/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mpa/MPARequest.h>
#include <aws/mpa/MPA_EXPORTS.h>

#include <utility>

namespace Aws {
namespace MPA {
namespace Model {

/**
 */
class StartApprovalTeamBaselineRequest : public MPARequest {
 public:
  AWS_MPA_API StartApprovalTeamBaselineRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartApprovalTeamBaseline"; }

  AWS_MPA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) for the approval team.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  StartApprovalTeamBaselineRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Array of approver IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetApproverIds() const { return m_approverIds; }
  inline bool ApproverIdsHasBeenSet() const { return m_approverIdsHasBeenSet; }
  template <typename ApproverIdsT = Aws::Vector<Aws::String>>
  void SetApproverIds(ApproverIdsT&& value) {
    m_approverIdsHasBeenSet = true;
    m_approverIds = std::forward<ApproverIdsT>(value);
  }
  template <typename ApproverIdsT = Aws::Vector<Aws::String>>
  StartApprovalTeamBaselineRequest& WithApproverIds(ApproverIdsT&& value) {
    SetApproverIds(std::forward<ApproverIdsT>(value));
    return *this;
  }
  template <typename ApproverIdsT = Aws::String>
  StartApprovalTeamBaselineRequest& AddApproverIds(ApproverIdsT&& value) {
    m_approverIdsHasBeenSet = true;
    m_approverIds.emplace_back(std::forward<ApproverIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::Vector<Aws::String> m_approverIds;
  bool m_arnHasBeenSet = false;
  bool m_approverIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MPA
}  // namespace Aws
