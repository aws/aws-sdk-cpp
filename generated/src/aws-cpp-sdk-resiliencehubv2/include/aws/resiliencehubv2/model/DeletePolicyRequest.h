/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class DeletePolicyRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API DeletePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeletePolicy"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  DeletePolicyRequest& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyArn;
  bool m_policyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
