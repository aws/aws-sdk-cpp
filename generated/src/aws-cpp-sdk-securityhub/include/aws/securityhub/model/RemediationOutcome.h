/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>The outcome from resolving the remediation target.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationOutcome">AWS
 * API Reference</a></p>
 */
class RemediationOutcome {
 public:
  AWS_SECURITYHUB_API RemediationOutcome() = default;
  AWS_SECURITYHUB_API RemediationOutcome(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationOutcome& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of associated exposure findings that are resolved by remediating
   * the target.</p>
   */
  inline int GetResolvedFindingsCount() const { return m_resolvedFindingsCount; }
  inline bool ResolvedFindingsCountHasBeenSet() const { return m_resolvedFindingsCountHasBeenSet; }
  inline void SetResolvedFindingsCount(int value) {
    m_resolvedFindingsCountHasBeenSet = true;
    m_resolvedFindingsCount = value;
  }
  inline RemediationOutcome& WithResolvedFindingsCount(int value) {
    SetResolvedFindingsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of associated exposure findings whose severity is reduced by
   * remediating the target.</p>
   */
  inline int GetSeverityReductionFindingsCount() const { return m_severityReductionFindingsCount; }
  inline bool SeverityReductionFindingsCountHasBeenSet() const { return m_severityReductionFindingsCountHasBeenSet; }
  inline void SetSeverityReductionFindingsCount(int value) {
    m_severityReductionFindingsCountHasBeenSet = true;
    m_severityReductionFindingsCount = value;
  }
  inline RemediationOutcome& WithSeverityReductionFindingsCount(int value) {
    SetSeverityReductionFindingsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of associated exposure findings whose severity is unchanged by
   * remediating the target.</p>
   */
  inline int GetSeverityUnchangedCount() const { return m_severityUnchangedCount; }
  inline bool SeverityUnchangedCountHasBeenSet() const { return m_severityUnchangedCountHasBeenSet; }
  inline void SetSeverityUnchangedCount(int value) {
    m_severityUnchangedCountHasBeenSet = true;
    m_severityUnchangedCount = value;
  }
  inline RemediationOutcome& WithSeverityUnchangedCount(int value) {
    SetSeverityUnchangedCount(value);
    return *this;
  }
  ///@}
 private:
  int m_resolvedFindingsCount{0};

  int m_severityReductionFindingsCount{0};

  int m_severityUnchangedCount{0};
  bool m_resolvedFindingsCountHasBeenSet = false;
  bool m_severityReductionFindingsCountHasBeenSet = false;
  bool m_severityUnchangedCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
