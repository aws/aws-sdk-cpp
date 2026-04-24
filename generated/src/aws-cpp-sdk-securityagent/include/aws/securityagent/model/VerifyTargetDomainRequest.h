/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for verifying ownership for a registered target domain in an agent
 * space</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/VerifyTargetDomainInput">AWS
 * API Reference</a></p>
 */
class VerifyTargetDomainRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API VerifyTargetDomainRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "VerifyTargetDomain"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Unique identifier of the target domain</p>
   */
  inline const Aws::String& GetTargetDomainId() const { return m_targetDomainId; }
  inline bool TargetDomainIdHasBeenSet() const { return m_targetDomainIdHasBeenSet; }
  template <typename TargetDomainIdT = Aws::String>
  void SetTargetDomainId(TargetDomainIdT&& value) {
    m_targetDomainIdHasBeenSet = true;
    m_targetDomainId = std::forward<TargetDomainIdT>(value);
  }
  template <typename TargetDomainIdT = Aws::String>
  VerifyTargetDomainRequest& WithTargetDomainId(TargetDomainIdT&& value) {
    SetTargetDomainId(std::forward<TargetDomainIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetDomainId;
  bool m_targetDomainIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
