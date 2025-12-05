/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/SFN_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SFN {
namespace Model {

/**
 * <p>Contains configurations for the tested state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TestStateConfiguration">AWS
 * API Reference</a></p>
 */
class TestStateConfiguration {
 public:
  AWS_SFN_API TestStateConfiguration() = default;
  AWS_SFN_API TestStateConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SFN_API TestStateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of retry attempts that have occurred for the state's Retry that
   * applies to the mocked error.</p>
   */
  inline int GetRetrierRetryCount() const { return m_retrierRetryCount; }
  inline bool RetrierRetryCountHasBeenSet() const { return m_retrierRetryCountHasBeenSet; }
  inline void SetRetrierRetryCount(int value) {
    m_retrierRetryCountHasBeenSet = true;
    m_retrierRetryCount = value;
  }
  inline TestStateConfiguration& WithRetrierRetryCount(int value) {
    SetRetrierRetryCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the state from which an error originates when an error is mocked
   * for a Map or Parallel state.</p>
   */
  inline const Aws::String& GetErrorCausedByState() const { return m_errorCausedByState; }
  inline bool ErrorCausedByStateHasBeenSet() const { return m_errorCausedByStateHasBeenSet; }
  template <typename ErrorCausedByStateT = Aws::String>
  void SetErrorCausedByState(ErrorCausedByStateT&& value) {
    m_errorCausedByStateHasBeenSet = true;
    m_errorCausedByState = std::forward<ErrorCausedByStateT>(value);
  }
  template <typename ErrorCausedByStateT = Aws::String>
  TestStateConfiguration& WithErrorCausedByState(ErrorCausedByStateT&& value) {
    SetErrorCausedByState(std::forward<ErrorCausedByStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of Map state iterations that failed during the Map state
   * invocation.</p>
   */
  inline int GetMapIterationFailureCount() const { return m_mapIterationFailureCount; }
  inline bool MapIterationFailureCountHasBeenSet() const { return m_mapIterationFailureCountHasBeenSet; }
  inline void SetMapIterationFailureCount(int value) {
    m_mapIterationFailureCountHasBeenSet = true;
    m_mapIterationFailureCount = value;
  }
  inline TestStateConfiguration& WithMapIterationFailureCount(int value) {
    SetMapIterationFailureCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data read by ItemReader in Distributed Map states as found in its
   * original source.</p>
   */
  inline const Aws::String& GetMapItemReaderData() const { return m_mapItemReaderData; }
  inline bool MapItemReaderDataHasBeenSet() const { return m_mapItemReaderDataHasBeenSet; }
  template <typename MapItemReaderDataT = Aws::String>
  void SetMapItemReaderData(MapItemReaderDataT&& value) {
    m_mapItemReaderDataHasBeenSet = true;
    m_mapItemReaderData = std::forward<MapItemReaderDataT>(value);
  }
  template <typename MapItemReaderDataT = Aws::String>
  TestStateConfiguration& WithMapItemReaderData(MapItemReaderDataT&& value) {
    SetMapItemReaderData(std::forward<MapItemReaderDataT>(value));
    return *this;
  }
  ///@}
 private:
  int m_retrierRetryCount{0};

  Aws::String m_errorCausedByState;

  int m_mapIterationFailureCount{0};

  Aws::String m_mapItemReaderData;
  bool m_retrierRetryCountHasBeenSet = false;
  bool m_errorCausedByStateHasBeenSet = false;
  bool m_mapIterationFailureCountHasBeenSet = false;
  bool m_mapItemReaderDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace SFN
}  // namespace Aws
