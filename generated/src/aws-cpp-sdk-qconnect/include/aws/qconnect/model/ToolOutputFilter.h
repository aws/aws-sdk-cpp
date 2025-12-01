/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ToolOutputConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>Filter configuration for tool output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ToolOutputFilter">AWS
 * API Reference</a></p>
 */
class ToolOutputFilter {
 public:
  AWS_QCONNECT_API ToolOutputFilter() = default;
  AWS_QCONNECT_API ToolOutputFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ToolOutputFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The JSON path for filtering tool output.</p>
   */
  inline const Aws::String& GetJsonPath() const { return m_jsonPath; }
  inline bool JsonPathHasBeenSet() const { return m_jsonPathHasBeenSet; }
  template <typename JsonPathT = Aws::String>
  void SetJsonPath(JsonPathT&& value) {
    m_jsonPathHasBeenSet = true;
    m_jsonPath = std::forward<JsonPathT>(value);
  }
  template <typename JsonPathT = Aws::String>
  ToolOutputFilter& WithJsonPath(JsonPathT&& value) {
    SetJsonPath(std::forward<JsonPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for the filter.</p>
   */
  inline const ToolOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
  inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
  template <typename OutputConfigurationT = ToolOutputConfiguration>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = ToolOutputConfiguration>
  ToolOutputFilter& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jsonPath;
  bool m_jsonPathHasBeenSet = false;

  ToolOutputConfiguration m_outputConfiguration;
  bool m_outputConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
