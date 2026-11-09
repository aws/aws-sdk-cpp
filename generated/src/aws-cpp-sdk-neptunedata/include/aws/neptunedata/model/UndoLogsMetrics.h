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
 * <p>Contains storage metrics for the Neptune undo logs, including the total size
 * in bytes and the number of entries in the undo log list.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/UndoLogsMetrics">AWS
 * API Reference</a></p>
 */
class UndoLogsMetrics {
 public:
  AWS_NEPTUNEDATA_API UndoLogsMetrics() = default;
  AWS_NEPTUNEDATA_API UndoLogsMetrics(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEDATA_API UndoLogsMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total size of the undo logs in bytes.</p>
   */
  inline long long GetSizeInBytes() const { return m_sizeInBytes; }
  inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }
  inline void SetSizeInBytes(long long value) {
    m_sizeInBytesHasBeenSet = true;
    m_sizeInBytes = value;
  }
  inline UndoLogsMetrics& WithSizeInBytes(long long value) {
    SetSizeInBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of entries in the undo log list.</p>
   */
  inline long long GetListSize() const { return m_listSize; }
  inline bool ListSizeHasBeenSet() const { return m_listSizeHasBeenSet; }
  inline void SetListSize(long long value) {
    m_listSizeHasBeenSet = true;
    m_listSize = value;
  }
  inline UndoLogsMetrics& WithListSize(long long value) {
    SetListSize(value);
    return *this;
  }
  ///@}
 private:
  long long m_sizeInBytes{0};

  long long m_listSize{0};
  bool m_sizeInBytesHasBeenSet = false;
  bool m_listSizeHasBeenSet = false;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
