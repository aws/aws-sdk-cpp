/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Describes a no bid action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/NoBidAction">AWS
 * API Reference</a></p>
 */
class NoBidAction {
 public:
  AWS_RTBFABRIC_API NoBidAction() = default;
  AWS_RTBFABRIC_API NoBidAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API NoBidAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason code for the no bid action.</p>
   */
  inline int GetNoBidReasonCode() const { return m_noBidReasonCode; }
  inline bool NoBidReasonCodeHasBeenSet() const { return m_noBidReasonCodeHasBeenSet; }
  inline void SetNoBidReasonCode(int value) {
    m_noBidReasonCodeHasBeenSet = true;
    m_noBidReasonCode = value;
  }
  inline NoBidAction& WithNoBidReasonCode(int value) {
    SetNoBidReasonCode(value);
    return *this;
  }
  ///@}
 private:
  int m_noBidReasonCode{0};
  bool m_noBidReasonCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
