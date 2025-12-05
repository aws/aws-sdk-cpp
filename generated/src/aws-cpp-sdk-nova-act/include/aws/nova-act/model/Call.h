/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>A request for the client to execute a specific tool with given
 * parameters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/Call">AWS API
 * Reference</a></p>
 */
class Call {
 public:
  AWS_NOVAACT_API Call() = default;
  AWS_NOVAACT_API Call(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Call& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for this tool call, used to match results back to
   * requests.</p>
   */
  inline const Aws::String& GetCallId() const { return m_callId; }
  inline bool CallIdHasBeenSet() const { return m_callIdHasBeenSet; }
  template <typename CallIdT = Aws::String>
  void SetCallId(CallIdT&& value) {
    m_callIdHasBeenSet = true;
    m_callId = std::forward<CallIdT>(value);
  }
  template <typename CallIdT = Aws::String>
  Call& WithCallId(CallIdT&& value) {
    SetCallId(std::forward<CallIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The input parameters for the tool call, formatted according to the tool's
   * schema.</p>
   */
  inline Aws::Utils::DocumentView GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = Aws::Utils::Document>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = Aws::Utils::Document>
  Call& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the tool to invoke, following the pattern 'tool.{toolName}' or
   * 'browser.{browserAction}'.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Call& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_callId;

  Aws::Utils::Document m_input;

  Aws::String m_name;
  bool m_callIdHasBeenSet = false;
  bool m_inputHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
