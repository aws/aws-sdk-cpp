/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>Specifies the time range for filtering insights.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InsightTimeRange">AWS
 * API Reference</a></p>
 */
class InsightTimeRange {
 public:
  AWS_OPENSEARCHSERVICE_API InsightTimeRange() = default;
  AWS_OPENSEARCHSERVICE_API InsightTimeRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API InsightTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start of the time range, in epoch milliseconds.</p>
   */
  inline long long GetFrom() const { return m_from; }
  inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
  inline void SetFrom(long long value) {
    m_fromHasBeenSet = true;
    m_from = value;
  }
  inline InsightTimeRange& WithFrom(long long value) {
    SetFrom(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time range, in epoch milliseconds.</p>
   */
  inline long long GetTo() const { return m_to; }
  inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
  inline void SetTo(long long value) {
    m_toHasBeenSet = true;
    m_to = value;
  }
  inline InsightTimeRange& WithTo(long long value) {
    SetTo(value);
    return *this;
  }
  ///@}
 private:
  long long m_from{0};

  long long m_to{0};
  bool m_fromHasBeenSet = false;
  bool m_toHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
