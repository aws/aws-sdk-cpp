/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/Status.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Configuration for read receipts at the network level, controlling whether
 * senders can see when their messages have been read.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ReadReceiptConfig">AWS
 * API Reference</a></p>
 */
class ReadReceiptConfig {
 public:
  AWS_WICKR_API ReadReceiptConfig() = default;
  AWS_WICKR_API ReadReceiptConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API ReadReceiptConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The read receipt status mode for the network.</p>
   */
  inline Status GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(Status value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ReadReceiptConfig& WithStatus(Status value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Status m_status{Status::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
