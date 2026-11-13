/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/RetentionOptions.h>

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
 * <p>Options for a cloned blue/green upgrade.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ClonedBlueGreenOptions">AWS
 * API Reference</a></p>
 */
class ClonedBlueGreenOptions {
 public:
  AWS_OPENSEARCHSERVICE_API ClonedBlueGreenOptions() = default;
  AWS_OPENSEARCHSERVICE_API ClonedBlueGreenOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API ClonedBlueGreenOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>How long to keep the cluster that you cut over from after cutover completes.
   * When you start the upgrade, only <code>RetentionInHours</code> is accepted.</p>
   */
  inline const RetentionOptions& GetRetentionOptions() const { return m_retentionOptions; }
  inline bool RetentionOptionsHasBeenSet() const { return m_retentionOptionsHasBeenSet; }
  template <typename RetentionOptionsT = RetentionOptions>
  void SetRetentionOptions(RetentionOptionsT&& value) {
    m_retentionOptionsHasBeenSet = true;
    m_retentionOptions = std::forward<RetentionOptionsT>(value);
  }
  template <typename RetentionOptionsT = RetentionOptions>
  ClonedBlueGreenOptions& WithRetentionOptions(RetentionOptionsT&& value) {
    SetRetentionOptions(std::forward<RetentionOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  RetentionOptions m_retentionOptions;
  bool m_retentionOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
