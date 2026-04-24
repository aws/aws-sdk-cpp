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
 * <p>Options for configuring service software updates for a domain.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/SoftwareUpdateOptions">AWS
 * API Reference</a></p>
 */
class SoftwareUpdateOptions {
 public:
  AWS_OPENSEARCHSERVICE_API SoftwareUpdateOptions() = default;
  AWS_OPENSEARCHSERVICE_API SoftwareUpdateOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API SoftwareUpdateOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether automatic service software updates are enabled for the domain.</p>
   */
  inline bool GetAutoSoftwareUpdateEnabled() const { return m_autoSoftwareUpdateEnabled; }
  inline bool AutoSoftwareUpdateEnabledHasBeenSet() const { return m_autoSoftwareUpdateEnabledHasBeenSet; }
  inline void SetAutoSoftwareUpdateEnabled(bool value) {
    m_autoSoftwareUpdateEnabledHasBeenSet = true;
    m_autoSoftwareUpdateEnabled = value;
  }
  inline SoftwareUpdateOptions& WithAutoSoftwareUpdateEnabled(bool value) {
    SetAutoSoftwareUpdateEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the domain should use the latest service software version during a
   * blue/green deployment. If enabled, the domain will automatically use the latest
   * available service software when a blue/green deployment is triggered.</p>
   */
  inline bool GetUseLatestServiceSoftwareForBlueGreen() const { return m_useLatestServiceSoftwareForBlueGreen; }
  inline bool UseLatestServiceSoftwareForBlueGreenHasBeenSet() const { return m_useLatestServiceSoftwareForBlueGreenHasBeenSet; }
  inline void SetUseLatestServiceSoftwareForBlueGreen(bool value) {
    m_useLatestServiceSoftwareForBlueGreenHasBeenSet = true;
    m_useLatestServiceSoftwareForBlueGreen = value;
  }
  inline SoftwareUpdateOptions& WithUseLatestServiceSoftwareForBlueGreen(bool value) {
    SetUseLatestServiceSoftwareForBlueGreen(value);
    return *this;
  }
  ///@}
 private:
  bool m_autoSoftwareUpdateEnabled{false};

  bool m_useLatestServiceSoftwareForBlueGreen{false};
  bool m_autoSoftwareUpdateEnabledHasBeenSet = false;
  bool m_useLatestServiceSoftwareForBlueGreenHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
