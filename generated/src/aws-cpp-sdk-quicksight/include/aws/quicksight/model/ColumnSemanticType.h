/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeoSpatialDataRole.h>

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
 * <p>The semantic type information for a column in the new data preparation
 * experience.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnSemanticType">AWS
 * API Reference</a></p>
 */
class ColumnSemanticType {
 public:
  AWS_QUICKSIGHT_API ColumnSemanticType() = default;
  AWS_QUICKSIGHT_API ColumnSemanticType(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ColumnSemanticType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The geographical role of the column in the new data preparation
   * experience.</p>
   */
  inline GeoSpatialDataRole GetGeographicalRole() const { return m_geographicalRole; }
  inline bool GeographicalRoleHasBeenSet() const { return m_geographicalRoleHasBeenSet; }
  inline void SetGeographicalRole(GeoSpatialDataRole value) {
    m_geographicalRoleHasBeenSet = true;
    m_geographicalRole = value;
  }
  inline ColumnSemanticType& WithGeographicalRole(GeoSpatialDataRole value) {
    SetGeographicalRole(value);
    return *this;
  }
  ///@}
 private:
  GeoSpatialDataRole m_geographicalRole{GeoSpatialDataRole::NOT_SET};
  bool m_geographicalRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
