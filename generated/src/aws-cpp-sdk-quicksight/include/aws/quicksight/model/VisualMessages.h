/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/VisualMessageConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The messages that are displayed on a visual under specific conditions, such
 * as when the visual returns no data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualMessages">AWS
 * API Reference</a></p>
 */
class VisualMessages {
 public:
  AWS_QUICKSIGHT_API VisualMessages() = default;
  AWS_QUICKSIGHT_API VisualMessages(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API VisualMessages& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The message that is displayed on a visual when there is no data to
   * display.</p>
   */
  inline const VisualMessageConfiguration& GetNoDataMessage() const { return m_noDataMessage; }
  inline bool NoDataMessageHasBeenSet() const { return m_noDataMessageHasBeenSet; }
  template <typename NoDataMessageT = VisualMessageConfiguration>
  void SetNoDataMessage(NoDataMessageT&& value) {
    m_noDataMessageHasBeenSet = true;
    m_noDataMessage = std::forward<NoDataMessageT>(value);
  }
  template <typename NoDataMessageT = VisualMessageConfiguration>
  VisualMessages& WithNoDataMessage(NoDataMessageT&& value) {
    SetNoDataMessage(std::forward<NoDataMessageT>(value));
    return *this;
  }
  ///@}
 private:
  VisualMessageConfiguration m_noDataMessage;
  bool m_noDataMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
