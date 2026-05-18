/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SharedColumnSemanticMetadata.h>

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
 * <p>Column-level semantic metadata for a semantic table.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableSemanticMetadata">AWS
 * API Reference</a></p>
 */
class TableSemanticMetadata {
 public:
  AWS_QUICKSIGHT_API TableSemanticMetadata() = default;
  AWS_QUICKSIGHT_API TableSemanticMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TableSemanticMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of column semantic metadata entries.</p>
   */
  inline const Aws::Vector<SharedColumnSemanticMetadata>& GetColumnMetadata() const { return m_columnMetadata; }
  inline bool ColumnMetadataHasBeenSet() const { return m_columnMetadataHasBeenSet; }
  template <typename ColumnMetadataT = Aws::Vector<SharedColumnSemanticMetadata>>
  void SetColumnMetadata(ColumnMetadataT&& value) {
    m_columnMetadataHasBeenSet = true;
    m_columnMetadata = std::forward<ColumnMetadataT>(value);
  }
  template <typename ColumnMetadataT = Aws::Vector<SharedColumnSemanticMetadata>>
  TableSemanticMetadata& WithColumnMetadata(ColumnMetadataT&& value) {
    SetColumnMetadata(std::forward<ColumnMetadataT>(value));
    return *this;
  }
  template <typename ColumnMetadataT = SharedColumnSemanticMetadata>
  TableSemanticMetadata& AddColumnMetadata(ColumnMetadataT&& value) {
    m_columnMetadataHasBeenSet = true;
    m_columnMetadata.emplace_back(std::forward<ColumnMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SharedColumnSemanticMetadata> m_columnMetadata;
  bool m_columnMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
