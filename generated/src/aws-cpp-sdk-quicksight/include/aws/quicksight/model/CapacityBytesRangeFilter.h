/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>A filter that matches users by total capacity range in bytes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CapacityBytesRangeFilter">AWS
 * API Reference</a></p>
 */
class CapacityBytesRangeFilter {
 public:
  AWS_QUICKSIGHT_API CapacityBytesRangeFilter() = default;
  AWS_QUICKSIGHT_API CapacityBytesRangeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API CapacityBytesRangeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum capacity in bytes (inclusive). At least one of minBytes or
   * maxBytes is required.</p>
   */
  inline long long GetMinBytes() const { return m_minBytes; }
  inline bool MinBytesHasBeenSet() const { return m_minBytesHasBeenSet; }
  inline void SetMinBytes(long long value) {
    m_minBytesHasBeenSet = true;
    m_minBytes = value;
  }
  inline CapacityBytesRangeFilter& WithMinBytes(long long value) {
    SetMinBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum capacity in bytes (inclusive). At least one of minBytes or
   * maxBytes is required.</p>
   */
  inline long long GetMaxBytes() const { return m_maxBytes; }
  inline bool MaxBytesHasBeenSet() const { return m_maxBytesHasBeenSet; }
  inline void SetMaxBytes(long long value) {
    m_maxBytesHasBeenSet = true;
    m_maxBytes = value;
  }
  inline CapacityBytesRangeFilter& WithMaxBytes(long long value) {
    SetMaxBytes(value);
    return *this;
  }
  ///@}
 private:
  long long m_minBytes{0};

  long long m_maxBytes{0};
  bool m_minBytesHasBeenSet = false;
  bool m_maxBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
