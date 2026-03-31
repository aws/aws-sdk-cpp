/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AIConfig.h>

#include <utility>

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
 * <p>The base configuration for registering a capability. Contains
 * capability-specific configuration such as AI settings.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/CapabilityBaseRequestConfig">AWS
 * API Reference</a></p>
 */
class CapabilityBaseRequestConfig {
 public:
  AWS_OPENSEARCHSERVICE_API CapabilityBaseRequestConfig() = default;
  AWS_OPENSEARCHSERVICE_API CapabilityBaseRequestConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API CapabilityBaseRequestConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration settings for AI-powered capabilities.</p>
   */
  inline const AIConfig& GetAiConfig() const { return m_aiConfig; }
  inline bool AiConfigHasBeenSet() const { return m_aiConfigHasBeenSet; }
  template <typename AiConfigT = AIConfig>
  void SetAiConfig(AiConfigT&& value) {
    m_aiConfigHasBeenSet = true;
    m_aiConfig = std::forward<AiConfigT>(value);
  }
  template <typename AiConfigT = AIConfig>
  CapabilityBaseRequestConfig& WithAiConfig(AiConfigT&& value) {
    SetAiConfig(std::forward<AiConfigT>(value));
    return *this;
  }
  ///@}
 private:
  AIConfig m_aiConfig;
  bool m_aiConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
