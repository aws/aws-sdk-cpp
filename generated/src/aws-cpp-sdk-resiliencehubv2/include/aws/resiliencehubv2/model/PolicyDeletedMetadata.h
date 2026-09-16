/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains details about a policy that was deleted, including the number of
 * services that were affected.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/PolicyDeletedMetadata">AWS
 * API Reference</a></p>
 */
class PolicyDeletedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API PolicyDeletedMetadata() = default;
  AWS_RESILIENCEHUBV2_API PolicyDeletedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API PolicyDeletedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of services that were using the policy when it was deleted.</p>
   */
  inline int GetAffectedServiceCount() const { return m_affectedServiceCount; }
  inline bool AffectedServiceCountHasBeenSet() const { return m_affectedServiceCountHasBeenSet; }
  inline void SetAffectedServiceCount(int value) {
    m_affectedServiceCountHasBeenSet = true;
    m_affectedServiceCount = value;
  }
  inline PolicyDeletedMetadata& WithAffectedServiceCount(int value) {
    SetAffectedServiceCount(value);
    return *this;
  }
  ///@}
 private:
  int m_affectedServiceCount{0};
  bool m_affectedServiceCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
