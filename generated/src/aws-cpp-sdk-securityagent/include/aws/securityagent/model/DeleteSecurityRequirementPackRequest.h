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
 */
class DeleteSecurityRequirementPackRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API DeleteSecurityRequirementPackRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteSecurityRequirementPack"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the security requirement pack to delete.</p>
   */
  inline const Aws::String& GetPackId() const { return m_packId; }
  inline bool PackIdHasBeenSet() const { return m_packIdHasBeenSet; }
  template <typename PackIdT = Aws::String>
  void SetPackId(PackIdT&& value) {
    m_packIdHasBeenSet = true;
    m_packId = std::forward<PackIdT>(value);
  }
  template <typename PackIdT = Aws::String>
  DeleteSecurityRequirementPackRequest& WithPackId(PackIdT&& value) {
    SetPackId(std::forward<PackIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_packId;
  bool m_packIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
