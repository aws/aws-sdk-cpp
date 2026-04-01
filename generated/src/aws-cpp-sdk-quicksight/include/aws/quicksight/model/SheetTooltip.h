/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>The configuration of the sheet tooltip.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetTooltip">AWS
 * API Reference</a></p>
 */
class SheetTooltip {
 public:
  AWS_QUICKSIGHT_API SheetTooltip() = default;
  AWS_QUICKSIGHT_API SheetTooltip(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SheetTooltip& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The sheet ID of the tooltip sheet that is used by the tooltip.</p>
   */
  inline const Aws::String& GetSheetId() const { return m_sheetId; }
  inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }
  template <typename SheetIdT = Aws::String>
  void SetSheetId(SheetIdT&& value) {
    m_sheetIdHasBeenSet = true;
    m_sheetId = std::forward<SheetIdT>(value);
  }
  template <typename SheetIdT = Aws::String>
  SheetTooltip& WithSheetId(SheetIdT&& value) {
    SetSheetId(std::forward<SheetIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sheetId;
  bool m_sheetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
