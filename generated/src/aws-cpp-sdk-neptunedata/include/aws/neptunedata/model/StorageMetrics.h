/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace neptunedata {
namespace Model {

/**
 * <p>Contains storage size and entry count metrics.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/StorageMetrics">AWS
 * API Reference</a></p>
 */
class StorageMetrics {
 public:
  AWS_NEPTUNEDATA_API StorageMetrics() = default;
  AWS_NEPTUNEDATA_API StorageMetrics(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEDATA_API StorageMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Storage size in bytes.</p>
   */
  inline long long GetSizeInBytes() const { return m_sizeInBytes; }
  inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }
  inline void SetSizeInBytes(long long value) {
    m_sizeInBytesHasBeenSet = true;
    m_sizeInBytes = value;
  }
  inline StorageMetrics& WithSizeInBytes(long long value) {
    SetSizeInBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of entries.</p>
   */
  inline long long GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(long long value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline StorageMetrics& WithCount(long long value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  long long m_sizeInBytes{0};

  long long m_count{0};
  bool m_sizeInBytesHasBeenSet = false;
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
