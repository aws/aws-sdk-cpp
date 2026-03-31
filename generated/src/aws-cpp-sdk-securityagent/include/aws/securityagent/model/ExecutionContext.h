/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ContextType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Additional context about a pentest or task execution</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ExecutionContext">AWS
 * API Reference</a></p>
 */
class ExecutionContext {
 public:
  AWS_SECURITYAGENT_API ExecutionContext() = default;
  AWS_SECURITYAGENT_API ExecutionContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ExecutionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The category of context</p>
   */
  inline ContextType GetContextType() const { return m_contextType; }
  inline bool ContextTypeHasBeenSet() const { return m_contextTypeHasBeenSet; }
  inline void SetContextType(ContextType value) {
    m_contextTypeHasBeenSet = true;
    m_contextType = value;
  }
  inline ExecutionContext& WithContextType(ContextType value) {
    SetContextType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Context associated with a pentest or task execution</p>
   */
  inline const Aws::String& GetContext() const { return m_context; }
  inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
  template <typename ContextT = Aws::String>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = Aws::String>
  ExecutionContext& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp associated with a pentest or task execution</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  ExecutionContext& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}
 private:
  ContextType m_contextType{ContextType::NOT_SET};

  Aws::String m_context;

  Aws::Utils::DateTime m_timestamp{};
  bool m_contextTypeHasBeenSet = false;
  bool m_contextHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
