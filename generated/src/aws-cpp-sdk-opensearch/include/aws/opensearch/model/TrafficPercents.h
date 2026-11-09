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
 * <p>The split of search traffic between the primary and cloned
 * clusters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/TrafficPercents">AWS
 * API Reference</a></p>
 */
class TrafficPercents {
 public:
  AWS_OPENSEARCHSERVICE_API TrafficPercents() = default;
  AWS_OPENSEARCHSERVICE_API TrafficPercents(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API TrafficPercents& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The percentage of search traffic sent to the primary cluster.</p>
   */
  inline int GetPrimaryReadTrafficPercent() const { return m_primaryReadTrafficPercent; }
  inline bool PrimaryReadTrafficPercentHasBeenSet() const { return m_primaryReadTrafficPercentHasBeenSet; }
  inline void SetPrimaryReadTrafficPercent(int value) {
    m_primaryReadTrafficPercentHasBeenSet = true;
    m_primaryReadTrafficPercent = value;
  }
  inline TrafficPercents& WithPrimaryReadTrafficPercent(int value) {
    SetPrimaryReadTrafficPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of search traffic sent to the cloned cluster.</p>
   */
  inline int GetCloneReadTrafficPercent() const { return m_cloneReadTrafficPercent; }
  inline bool CloneReadTrafficPercentHasBeenSet() const { return m_cloneReadTrafficPercentHasBeenSet; }
  inline void SetCloneReadTrafficPercent(int value) {
    m_cloneReadTrafficPercentHasBeenSet = true;
    m_cloneReadTrafficPercent = value;
  }
  inline TrafficPercents& WithCloneReadTrafficPercent(int value) {
    SetCloneReadTrafficPercent(value);
    return *this;
  }
  ///@}
 private:
  int m_primaryReadTrafficPercent{0};

  int m_cloneReadTrafficPercent{0};
  bool m_primaryReadTrafficPercentHasBeenSet = false;
  bool m_cloneReadTrafficPercentHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
