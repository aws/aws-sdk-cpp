/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/HlsTagName.h>
#include <aws/mediatailor/model/RuntimeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>The configuration for an <code>HLS_TAG_PROCESSOR</code> function. Specifies
 * the HLS tags that trigger evaluation, an optional run condition, and output
 * expressions. Each evaluation must update, remove, or pass through the matching
 * tag and can also write player session parameters or temporary values. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/mediatailor/latest/ug/monetization-functions-types-hls-tag-processor.html">HLS_TAG_PROCESSOR</a>
 * in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/HlsTagProcessorConfiguration">AWS
 * API Reference</a></p>
 */
class HlsTagProcessorConfiguration {
 public:
  AWS_MEDIATAILOR_API HlsTagProcessorConfiguration() = default;
  AWS_MEDIATAILOR_API HlsTagProcessorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API HlsTagProcessorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The expression language used to evaluate expressions in the function
   * configuration. The only supported value is <code>JSONATA</code>.</p>
   */
  inline RuntimeType GetRuntime() const { return m_runtime; }
  inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
  inline void SetRuntime(RuntimeType value) {
    m_runtimeHasBeenSet = true;
    m_runtime = value;
  }
  inline HlsTagProcessorConfiguration& WithRuntime(RuntimeType value) {
    SetRuntime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of output bindings that MediaTailor evaluates for each HLS tag that
   * matches <code>TagFilter</code> and, when specified, passes
   * <code>RunCondition</code>. The required <code>tag</code> binding must return
   * exactly one tag action: <code>$updateTag</code>, <code>$removeTag</code>, or
   * <code>$passthroughTag</code>. Optional <code>player_params.&lt;name&gt;</code>
   * bindings write strings, numbers, or booleans that persist for the player
   * session. Optional <code>temp.&lt;name&gt;</code> bindings hold any JSON value
   * for the current invocation and are not persisted. For more information about
   * expression syntax, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/monetization-functions-jsonata.html">JSONata
   * expression reference</a> in the <i>MediaTailor User Guide</i>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetOutput() const { return m_output; }
  inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
  template <typename OutputT = Aws::Map<Aws::String, Aws::String>>
  void SetOutput(OutputT&& value) {
    m_outputHasBeenSet = true;
    m_output = std::forward<OutputT>(value);
  }
  template <typename OutputT = Aws::Map<Aws::String, Aws::String>>
  HlsTagProcessorConfiguration& WithOutput(OutputT&& value) {
    SetOutput(std::forward<OutputT>(value));
    return *this;
  }
  template <typename OutputKeyT = Aws::String, typename OutputValueT = Aws::String>
  HlsTagProcessorConfiguration& AddOutput(OutputKeyT&& key, OutputValueT&& value) {
    m_outputHasBeenSet = true;
    m_output.emplace(std::forward<OutputKeyT>(key), std::forward<OutputValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of HLS tag names that trigger function evaluation. Specify
   * <code>["EXT-X-DATERANGE"]</code>.</p>
   */
  inline const Aws::Vector<HlsTagName>& GetTagFilter() const { return m_tagFilter; }
  inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
  template <typename TagFilterT = Aws::Vector<HlsTagName>>
  void SetTagFilter(TagFilterT&& value) {
    m_tagFilterHasBeenSet = true;
    m_tagFilter = std::forward<TagFilterT>(value);
  }
  template <typename TagFilterT = Aws::Vector<HlsTagName>>
  HlsTagProcessorConfiguration& WithTagFilter(TagFilterT&& value) {
    SetTagFilter(std::forward<TagFilterT>(value));
    return *this;
  }
  inline HlsTagProcessorConfiguration& AddTagFilter(HlsTagName value) {
    m_tagFilterHasBeenSet = true;
    m_tagFilter.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>JSONata expression that must evaluate to true for the processor to run.</p>
   */
  inline const Aws::String& GetRunCondition() const { return m_runCondition; }
  inline bool RunConditionHasBeenSet() const { return m_runConditionHasBeenSet; }
  template <typename RunConditionT = Aws::String>
  void SetRunCondition(RunConditionT&& value) {
    m_runConditionHasBeenSet = true;
    m_runCondition = std::forward<RunConditionT>(value);
  }
  template <typename RunConditionT = Aws::String>
  HlsTagProcessorConfiguration& WithRunCondition(RunConditionT&& value) {
    SetRunCondition(std::forward<RunConditionT>(value));
    return *this;
  }
  ///@}
 private:
  RuntimeType m_runtime{RuntimeType::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_output;

  Aws::Vector<HlsTagName> m_tagFilter;

  Aws::String m_runCondition;
  bool m_runtimeHasBeenSet = false;
  bool m_outputHasBeenSet = false;
  bool m_tagFilterHasBeenSet = false;
  bool m_runConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
