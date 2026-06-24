/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ImportSource.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 */
class ImportSecurityRequirementsRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API ImportSecurityRequirementsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ImportSecurityRequirements"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the security requirement pack to import requirements
   * into.</p>
   */
  inline const Aws::String& GetPackId() const { return m_packId; }
  inline bool PackIdHasBeenSet() const { return m_packIdHasBeenSet; }
  template <typename PackIdT = Aws::String>
  void SetPackId(PackIdT&& value) {
    m_packIdHasBeenSet = true;
    m_packId = std::forward<PackIdT>(value);
  }
  template <typename PackIdT = Aws::String>
  ImportSecurityRequirementsRequest& WithPackId(PackIdT&& value) {
    SetPackId(std::forward<PackIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The import source containing the documents to extract security requirements
   * from.</p>
   */
  inline const ImportSource& GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = ImportSource>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = ImportSource>
  ImportSecurityRequirementsRequest& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_packId;

  ImportSource m_input;
  bool m_packIdHasBeenSet = false;
  bool m_inputHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
