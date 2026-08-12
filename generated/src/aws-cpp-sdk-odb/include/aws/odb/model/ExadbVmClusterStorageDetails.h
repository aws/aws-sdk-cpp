/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>Storage details for an Exascale VM cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ExadbVmClusterStorageDetails">AWS
 * API Reference</a></p>
 */
class ExadbVmClusterStorageDetails {
 public:
  AWS_ODB_API ExadbVmClusterStorageDetails() = default;
  AWS_ODB_API ExadbVmClusterStorageDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API ExadbVmClusterStorageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total storage size, in gigabytes (GB).</p>
   */
  inline int GetTotalSizeInGBs() const { return m_totalSizeInGBs; }
  inline bool TotalSizeInGBsHasBeenSet() const { return m_totalSizeInGBsHasBeenSet; }
  inline void SetTotalSizeInGBs(int value) {
    m_totalSizeInGBsHasBeenSet = true;
    m_totalSizeInGBs = value;
  }
  inline ExadbVmClusterStorageDetails& WithTotalSizeInGBs(int value) {
    SetTotalSizeInGBs(value);
    return *this;
  }
  ///@}
 private:
  int m_totalSizeInGBs{0};
  bool m_totalSizeInGBsHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
