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
 * <p>Maps a source column identifier to a target column identifier during
 * transform operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetColumnIdMapping">AWS
 * API Reference</a></p>
 */
class DataSetColumnIdMapping {
 public:
  AWS_QUICKSIGHT_API DataSetColumnIdMapping() = default;
  AWS_QUICKSIGHT_API DataSetColumnIdMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetColumnIdMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Source column ID.</p>
   */
  inline const Aws::String& GetSourceColumnId() const { return m_sourceColumnId; }
  inline bool SourceColumnIdHasBeenSet() const { return m_sourceColumnIdHasBeenSet; }
  template <typename SourceColumnIdT = Aws::String>
  void SetSourceColumnId(SourceColumnIdT&& value) {
    m_sourceColumnIdHasBeenSet = true;
    m_sourceColumnId = std::forward<SourceColumnIdT>(value);
  }
  template <typename SourceColumnIdT = Aws::String>
  DataSetColumnIdMapping& WithSourceColumnId(SourceColumnIdT&& value) {
    SetSourceColumnId(std::forward<SourceColumnIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Target column ID.</p>
   */
  inline const Aws::String& GetTargetColumnId() const { return m_targetColumnId; }
  inline bool TargetColumnIdHasBeenSet() const { return m_targetColumnIdHasBeenSet; }
  template <typename TargetColumnIdT = Aws::String>
  void SetTargetColumnId(TargetColumnIdT&& value) {
    m_targetColumnIdHasBeenSet = true;
    m_targetColumnId = std::forward<TargetColumnIdT>(value);
  }
  template <typename TargetColumnIdT = Aws::String>
  DataSetColumnIdMapping& WithTargetColumnId(TargetColumnIdT&& value) {
    SetTargetColumnId(std::forward<TargetColumnIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceColumnId;
  bool m_sourceColumnIdHasBeenSet = false;

  Aws::String m_targetColumnId;
  bool m_targetColumnIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
