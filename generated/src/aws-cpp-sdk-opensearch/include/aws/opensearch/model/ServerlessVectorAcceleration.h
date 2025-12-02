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
 * <p>Configuration for serverless vector acceleration, which provides <a
 * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/gpu-acceleration-vector-index.html">GPU-accelerated</a>
 * vector search capabilities for improved performance on vector
 * workloads.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ServerlessVectorAcceleration">AWS
 * API Reference</a></p>
 */
class ServerlessVectorAcceleration {
 public:
  AWS_OPENSEARCHSERVICE_API ServerlessVectorAcceleration() = default;
  AWS_OPENSEARCHSERVICE_API ServerlessVectorAcceleration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API ServerlessVectorAcceleration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether serverless vector acceleration is enabled for the
   * domain.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline ServerlessVectorAcceleration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
