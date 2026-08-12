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
 * <p>The storage details for an Exascale storage vault.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ExascaleDbStorageDetails">AWS
 * API Reference</a></p>
 */
class ExascaleDbStorageDetails {
 public:
  AWS_ODB_API ExascaleDbStorageDetails() = default;
  AWS_ODB_API ExascaleDbStorageDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API ExascaleDbStorageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The available storage size, in gigabytes (GB).</p>
   */
  inline int GetAvailableSizeInGBs() const { return m_availableSizeInGBs; }
  inline bool AvailableSizeInGBsHasBeenSet() const { return m_availableSizeInGBsHasBeenSet; }
  inline void SetAvailableSizeInGBs(int value) {
    m_availableSizeInGBsHasBeenSet = true;
    m_availableSizeInGBs = value;
  }
  inline ExascaleDbStorageDetails& WithAvailableSizeInGBs(int value) {
    SetAvailableSizeInGBs(value);
    return *this;
  }
  ///@}

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
  inline ExascaleDbStorageDetails& WithTotalSizeInGBs(int value) {
    SetTotalSizeInGBs(value);
    return *this;
  }
  ///@}
 private:
  int m_availableSizeInGBs{0};

  int m_totalSizeInGBs{0};
  bool m_availableSizeInGBsHasBeenSet = false;
  bool m_totalSizeInGBsHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
