/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/FunctionRef.h>
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
 * <p>The configuration for a <code>CONCURRENT_EXECUTOR</code> function. A
 * <code>CONCURRENT_EXECUTOR</code> runs a set of child functions in parallel, up
 * to a maximum concurrency, and combines their output when all functions complete.
 * For more information about functions, see <a
 * href="https://docs.aws.amazon.com/mediatailor/latest/ug/monetization-functions.html">Working
 * with functions</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ConcurrentExecutorConfiguration">AWS
 * API Reference</a></p>
 */
class ConcurrentExecutorConfiguration {
 public:
  AWS_MEDIATAILOR_API ConcurrentExecutorConfiguration() = default;
  AWS_MEDIATAILOR_API ConcurrentExecutorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API ConcurrentExecutorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The expression language used to evaluate expressions in the function
   * configuration. Set this to <code>JSONata</code>.</p>
   */
  inline RuntimeType GetRuntime() const { return m_runtime; }
  inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
  inline void SetRuntime(RuntimeType value) {
    m_runtimeHasBeenSet = true;
    m_runtime = value;
  }
  inline ConcurrentExecutorConfiguration& WithRuntime(RuntimeType value) {
    SetRuntime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of output bindings that controls which bindings the executor commits to
   * the session state after all child functions complete. Each key is a namespaced
   * output path, and each value is an expression that MediaTailor evaluates against
   * the combined results of the child functions.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetOutput() const { return m_output; }
  inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
  template <typename OutputT = Aws::Map<Aws::String, Aws::String>>
  void SetOutput(OutputT&& value) {
    m_outputHasBeenSet = true;
    m_output = std::forward<OutputT>(value);
  }
  template <typename OutputT = Aws::Map<Aws::String, Aws::String>>
  ConcurrentExecutorConfiguration& WithOutput(OutputT&& value) {
    SetOutput(std::forward<OutputT>(value));
    return *this;
  }
  template <typename OutputKeyT = Aws::String, typename OutputValueT = Aws::String>
  ConcurrentExecutorConfiguration& AddOutput(OutputKeyT&& key, OutputValueT&& value) {
    m_outputHasBeenSet = true;
    m_output.emplace(std::forward<OutputKeyT>(key), std::forward<OutputValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of child functions that MediaTailor runs in parallel. Each entry
   * specifies a child function to execute and an optional run condition expression
   * that controls whether the function runs.</p>
   */
  inline const Aws::Vector<FunctionRef>& GetFunctionList() const { return m_functionList; }
  inline bool FunctionListHasBeenSet() const { return m_functionListHasBeenSet; }
  template <typename FunctionListT = Aws::Vector<FunctionRef>>
  void SetFunctionList(FunctionListT&& value) {
    m_functionListHasBeenSet = true;
    m_functionList = std::forward<FunctionListT>(value);
  }
  template <typename FunctionListT = Aws::Vector<FunctionRef>>
  ConcurrentExecutorConfiguration& WithFunctionList(FunctionListT&& value) {
    SetFunctionList(std::forward<FunctionListT>(value));
    return *this;
  }
  template <typename FunctionListT = FunctionRef>
  ConcurrentExecutorConfiguration& AddFunctionList(FunctionListT&& value) {
    m_functionListHasBeenSet = true;
    m_functionList.emplace_back(std::forward<FunctionListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time, in milliseconds, for all child functions to complete. This
   * timeout covers every function in the list, including any HTTP calls the child
   * functions make. If the executor exceeds this timeout, MediaTailor discards all
   * output from the executor and proceeds with default behavior.</p>
   */
  inline int GetTimeoutMilliseconds() const { return m_timeoutMilliseconds; }
  inline bool TimeoutMillisecondsHasBeenSet() const { return m_timeoutMillisecondsHasBeenSet; }
  inline void SetTimeoutMilliseconds(int value) {
    m_timeoutMillisecondsHasBeenSet = true;
    m_timeoutMilliseconds = value;
  }
  inline ConcurrentExecutorConfiguration& WithTimeoutMilliseconds(int value) {
    SetTimeoutMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of child functions that MediaTailor runs simultaneously.
   * When the list contains more functions than <code>MaxConcurrency</code>,
   * MediaTailor starts additional functions as running ones complete, so that no
   * more than <code>MaxConcurrency</code> functions run at the same time.</p>
   */
  inline int GetMaxConcurrency() const { return m_maxConcurrency; }
  inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
  inline void SetMaxConcurrency(int value) {
    m_maxConcurrencyHasBeenSet = true;
    m_maxConcurrency = value;
  }
  inline ConcurrentExecutorConfiguration& WithMaxConcurrency(int value) {
    SetMaxConcurrency(value);
    return *this;
  }
  ///@}
 private:
  RuntimeType m_runtime{RuntimeType::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_output;

  Aws::Vector<FunctionRef> m_functionList;

  int m_timeoutMilliseconds{0};

  int m_maxConcurrency{0};
  bool m_runtimeHasBeenSet = false;
  bool m_outputHasBeenSet = false;
  bool m_functionListHasBeenSet = false;
  bool m_timeoutMillisecondsHasBeenSet = false;
  bool m_maxConcurrencyHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
