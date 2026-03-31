/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for batch retrieving target domains</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetTargetDomainsInput">AWS
 * API Reference</a></p>
 */
class BatchGetTargetDomainsRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchGetTargetDomainsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetTargetDomains"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>List of target domain IDs to retrieve</p>
   */
  inline const Aws::Vector<Aws::String>& GetTargetDomainIds() const { return m_targetDomainIds; }
  inline bool TargetDomainIdsHasBeenSet() const { return m_targetDomainIdsHasBeenSet; }
  template <typename TargetDomainIdsT = Aws::Vector<Aws::String>>
  void SetTargetDomainIds(TargetDomainIdsT&& value) {
    m_targetDomainIdsHasBeenSet = true;
    m_targetDomainIds = std::forward<TargetDomainIdsT>(value);
  }
  template <typename TargetDomainIdsT = Aws::Vector<Aws::String>>
  BatchGetTargetDomainsRequest& WithTargetDomainIds(TargetDomainIdsT&& value) {
    SetTargetDomainIds(std::forward<TargetDomainIdsT>(value));
    return *this;
  }
  template <typename TargetDomainIdsT = Aws::String>
  BatchGetTargetDomainsRequest& AddTargetDomainIds(TargetDomainIdsT&& value) {
    m_targetDomainIdsHasBeenSet = true;
    m_targetDomainIds.emplace_back(std::forward<TargetDomainIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_targetDomainIds;
  bool m_targetDomainIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
