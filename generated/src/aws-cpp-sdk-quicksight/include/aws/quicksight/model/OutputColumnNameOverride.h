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
 * <p>Specifies a mapping to override the name of an output column from a transform
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/OutputColumnNameOverride">AWS
 * API Reference</a></p>
 */
class OutputColumnNameOverride {
 public:
  AWS_QUICKSIGHT_API OutputColumnNameOverride() = default;
  AWS_QUICKSIGHT_API OutputColumnNameOverride(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API OutputColumnNameOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The original name of the column from the source transform operation.</p>
   */
  inline const Aws::String& GetSourceColumnName() const { return m_sourceColumnName; }
  inline bool SourceColumnNameHasBeenSet() const { return m_sourceColumnNameHasBeenSet; }
  template <typename SourceColumnNameT = Aws::String>
  void SetSourceColumnName(SourceColumnNameT&& value) {
    m_sourceColumnNameHasBeenSet = true;
    m_sourceColumnName = std::forward<SourceColumnNameT>(value);
  }
  template <typename SourceColumnNameT = Aws::String>
  OutputColumnNameOverride& WithSourceColumnName(SourceColumnNameT&& value) {
    SetSourceColumnName(std::forward<SourceColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new name to assign to the column in the output.</p>
   */
  inline const Aws::String& GetOutputColumnName() const { return m_outputColumnName; }
  inline bool OutputColumnNameHasBeenSet() const { return m_outputColumnNameHasBeenSet; }
  template <typename OutputColumnNameT = Aws::String>
  void SetOutputColumnName(OutputColumnNameT&& value) {
    m_outputColumnNameHasBeenSet = true;
    m_outputColumnName = std::forward<OutputColumnNameT>(value);
  }
  template <typename OutputColumnNameT = Aws::String>
  OutputColumnNameOverride& WithOutputColumnName(OutputColumnNameT&& value) {
    SetOutputColumnName(std::forward<OutputColumnNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceColumnName;

  Aws::String m_outputColumnName;
  bool m_sourceColumnNameHasBeenSet = false;
  bool m_outputColumnNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
