/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

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
 * <p>Metadata for an assertion updated event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/AssertionUpdatedMetadata">AWS
 * API Reference</a></p>
 */
class AssertionUpdatedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API AssertionUpdatedMetadata() = default;
  AWS_RESILIENCEHUBV2_API AssertionUpdatedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API AssertionUpdatedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the updated assertion.</p>
   */
  inline const Aws::String& GetAssertionId() const { return m_assertionId; }
  inline bool AssertionIdHasBeenSet() const { return m_assertionIdHasBeenSet; }
  template <typename AssertionIdT = Aws::String>
  void SetAssertionId(AssertionIdT&& value) {
    m_assertionIdHasBeenSet = true;
    m_assertionId = std::forward<AssertionIdT>(value);
  }
  template <typename AssertionIdT = Aws::String>
  AssertionUpdatedMetadata& WithAssertionId(AssertionIdT&& value) {
    SetAssertionId(std::forward<AssertionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the updated assertion.</p>
   */
  inline const Aws::String& GetAssertionName() const { return m_assertionName; }
  inline bool AssertionNameHasBeenSet() const { return m_assertionNameHasBeenSet; }
  template <typename AssertionNameT = Aws::String>
  void SetAssertionName(AssertionNameT&& value) {
    m_assertionNameHasBeenSet = true;
    m_assertionName = std::forward<AssertionNameT>(value);
  }
  template <typename AssertionNameT = Aws::String>
  AssertionUpdatedMetadata& WithAssertionName(AssertionNameT&& value) {
    SetAssertionName(std::forward<AssertionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assertionId;

  Aws::String m_assertionName;
  bool m_assertionIdHasBeenSet = false;
  bool m_assertionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
