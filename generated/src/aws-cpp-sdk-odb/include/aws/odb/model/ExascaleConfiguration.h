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
 * <p>The Exascale storage configuration of an Exadata
 * infrastructure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ExascaleConfiguration">AWS
 * API Reference</a></p>
 */
class ExascaleConfiguration {
 public:
  AWS_ODB_API ExascaleConfiguration() = default;
  AWS_ODB_API ExascaleConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API ExascaleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total amount of Exascale storage, in gigabytes (GB), configured on the
   * Exadata infrastructure.</p>
   */
  inline int GetTotalStorageSizeInGBs() const { return m_totalStorageSizeInGBs; }
  inline bool TotalStorageSizeInGBsHasBeenSet() const { return m_totalStorageSizeInGBsHasBeenSet; }
  inline void SetTotalStorageSizeInGBs(int value) {
    m_totalStorageSizeInGBsHasBeenSet = true;
    m_totalStorageSizeInGBs = value;
  }
  inline ExascaleConfiguration& WithTotalStorageSizeInGBs(int value) {
    SetTotalStorageSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of Exascale storage, in gigabytes (GB), that's available on the
   * Exadata infrastructure.</p>
   */
  inline int GetAvailableStorageSizeInGBs() const { return m_availableStorageSizeInGBs; }
  inline bool AvailableStorageSizeInGBsHasBeenSet() const { return m_availableStorageSizeInGBsHasBeenSet; }
  inline void SetAvailableStorageSizeInGBs(int value) {
    m_availableStorageSizeInGBsHasBeenSet = true;
    m_availableStorageSizeInGBs = value;
  }
  inline ExascaleConfiguration& WithAvailableStorageSizeInGBs(int value) {
    SetAvailableStorageSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total amount of Exascale VM storage, in gigabytes (GB), on the Exadata
   * infrastructure. VM clusters use Exascale VM storage for their VM file systems
   * and VM backups.</p>
   */
  inline int GetTotalVmStorageSizeInGBs() const { return m_totalVmStorageSizeInGBs; }
  inline bool TotalVmStorageSizeInGBsHasBeenSet() const { return m_totalVmStorageSizeInGBsHasBeenSet; }
  inline void SetTotalVmStorageSizeInGBs(int value) {
    m_totalVmStorageSizeInGBsHasBeenSet = true;
    m_totalVmStorageSizeInGBs = value;
  }
  inline ExascaleConfiguration& WithTotalVmStorageSizeInGBs(int value) {
    SetTotalVmStorageSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of Exascale VM storage, in gigabytes (GB), that's available on the
   * Exadata infrastructure.</p>
   */
  inline int GetAvailableVmStorageSizeInGBs() const { return m_availableVmStorageSizeInGBs; }
  inline bool AvailableVmStorageSizeInGBsHasBeenSet() const { return m_availableVmStorageSizeInGBsHasBeenSet; }
  inline void SetAvailableVmStorageSizeInGBs(int value) {
    m_availableVmStorageSizeInGBsHasBeenSet = true;
    m_availableVmStorageSizeInGBs = value;
  }
  inline ExascaleConfiguration& WithAvailableVmStorageSizeInGBs(int value) {
    SetAvailableVmStorageSizeInGBs(value);
    return *this;
  }
  ///@}
 private:
  int m_totalStorageSizeInGBs{0};

  int m_availableStorageSizeInGBs{0};

  int m_totalVmStorageSizeInGBs{0};

  int m_availableVmStorageSizeInGBs{0};
  bool m_totalStorageSizeInGBsHasBeenSet = false;
  bool m_availableStorageSizeInGBsHasBeenSet = false;
  bool m_totalVmStorageSizeInGBsHasBeenSet = false;
  bool m_availableVmStorageSizeInGBsHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
