/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CreateSecurityRequirementEntry.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 */
class BatchCreateSecurityRequirementsRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchCreateSecurityRequirementsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchCreateSecurityRequirements"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the security requirement pack to add requirements
   * to.</p>
   */
  inline const Aws::String& GetPackId() const { return m_packId; }
  inline bool PackIdHasBeenSet() const { return m_packIdHasBeenSet; }
  template <typename PackIdT = Aws::String>
  void SetPackId(PackIdT&& value) {
    m_packIdHasBeenSet = true;
    m_packId = std::forward<PackIdT>(value);
  }
  template <typename PackIdT = Aws::String>
  BatchCreateSecurityRequirementsRequest& WithPackId(PackIdT&& value) {
    SetPackId(std::forward<PackIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of security requirements to create.</p>
   */
  inline const Aws::Vector<CreateSecurityRequirementEntry>& GetSecurityRequirements() const { return m_securityRequirements; }
  inline bool SecurityRequirementsHasBeenSet() const { return m_securityRequirementsHasBeenSet; }
  template <typename SecurityRequirementsT = Aws::Vector<CreateSecurityRequirementEntry>>
  void SetSecurityRequirements(SecurityRequirementsT&& value) {
    m_securityRequirementsHasBeenSet = true;
    m_securityRequirements = std::forward<SecurityRequirementsT>(value);
  }
  template <typename SecurityRequirementsT = Aws::Vector<CreateSecurityRequirementEntry>>
  BatchCreateSecurityRequirementsRequest& WithSecurityRequirements(SecurityRequirementsT&& value) {
    SetSecurityRequirements(std::forward<SecurityRequirementsT>(value));
    return *this;
  }
  template <typename SecurityRequirementsT = CreateSecurityRequirementEntry>
  BatchCreateSecurityRequirementsRequest& AddSecurityRequirements(SecurityRequirementsT&& value) {
    m_securityRequirementsHasBeenSet = true;
    m_securityRequirements.emplace_back(std::forward<SecurityRequirementsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_packId;

  Aws::Vector<CreateSecurityRequirementEntry> m_securityRequirements;
  bool m_packIdHasBeenSet = false;
  bool m_securityRequirementsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
