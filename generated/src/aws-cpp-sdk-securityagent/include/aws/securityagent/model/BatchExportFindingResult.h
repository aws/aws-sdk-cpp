/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/LinkedIssue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>A finding whose issue was created.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchExportFindingResult">AWS
 * API Reference</a></p>
 */
class BatchExportFindingResult {
 public:
  AWS_SECURITYAGENT_API BatchExportFindingResult() = default;
  AWS_SECURITYAGENT_API BatchExportFindingResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API BatchExportFindingResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the finding this result corresponds to.</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  BatchExportFindingResult& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issue that was created for the finding.</p>
   */
  inline const LinkedIssue& GetLinkedIssue() const { return m_linkedIssue; }
  inline bool LinkedIssueHasBeenSet() const { return m_linkedIssueHasBeenSet; }
  template <typename LinkedIssueT = LinkedIssue>
  void SetLinkedIssue(LinkedIssueT&& value) {
    m_linkedIssueHasBeenSet = true;
    m_linkedIssue = std::forward<LinkedIssueT>(value);
  }
  template <typename LinkedIssueT = LinkedIssue>
  BatchExportFindingResult& WithLinkedIssue(LinkedIssueT&& value) {
    SetLinkedIssue(std::forward<LinkedIssueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingId;

  LinkedIssue m_linkedIssue;
  bool m_findingIdHasBeenSet = false;
  bool m_linkedIssueHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
