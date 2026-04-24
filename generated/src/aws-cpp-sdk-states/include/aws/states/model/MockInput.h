/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/model/MockErrorOutput.h>
#include <aws/states/model/MockResponseValidationMode.h>

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
 * <p>A JSON object that contains a mocked <code>result</code> or
 * <code>errorOutput</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MockInput">AWS
 * API Reference</a></p>
 */
class MockInput {
 public:
  AWS_SFN_API MockInput() = default;
  AWS_SFN_API MockInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SFN_API MockInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A JSON string containing the mocked result of the state invocation.</p>
   */
  inline const Aws::String& GetResult() const { return m_result; }
  inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
  template <typename ResultT = Aws::String>
  void SetResult(ResultT&& value) {
    m_resultHasBeenSet = true;
    m_result = std::forward<ResultT>(value);
  }
  template <typename ResultT = Aws::String>
  MockInput& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mocked error output when calling TestState. When specified, the mocked
   * response is returned as a JSON object that contains an <code>error</code> and
   * <code>cause</code> field.</p>
   */
  inline const MockErrorOutput& GetErrorOutput() const { return m_errorOutput; }
  inline bool ErrorOutputHasBeenSet() const { return m_errorOutputHasBeenSet; }
  template <typename ErrorOutputT = MockErrorOutput>
  void SetErrorOutput(ErrorOutputT&& value) {
    m_errorOutputHasBeenSet = true;
    m_errorOutput = std::forward<ErrorOutputT>(value);
  }
  template <typename ErrorOutputT = MockErrorOutput>
  MockInput& WithErrorOutput(ErrorOutputT&& value) {
    SetErrorOutput(std::forward<ErrorOutputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines the level of strictness when validating mocked results against
   * their respective API models. Values include:</p> <ul> <li> <p>
   * <code>STRICT</code>: All required fields must be present, and all present fields
   * must conform to the API's schema.</p> </li> <li> <p> <code>PRESENT</code>: All
   * present fields must conform to the API's schema.</p> </li> <li> <p>
   * <code>NONE</code>: No validation is performed.</p> </li> </ul> <p>If no value is
   * specified, the default value is <code>STRICT</code>.</p>
   */
  inline MockResponseValidationMode GetFieldValidationMode() const { return m_fieldValidationMode; }
  inline bool FieldValidationModeHasBeenSet() const { return m_fieldValidationModeHasBeenSet; }
  inline void SetFieldValidationMode(MockResponseValidationMode value) {
    m_fieldValidationModeHasBeenSet = true;
    m_fieldValidationMode = value;
  }
  inline MockInput& WithFieldValidationMode(MockResponseValidationMode value) {
    SetFieldValidationMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_result;

  MockErrorOutput m_errorOutput;

  MockResponseValidationMode m_fieldValidationMode{MockResponseValidationMode::NOT_SET};
  bool m_resultHasBeenSet = false;
  bool m_errorOutputHasBeenSet = false;
  bool m_fieldValidationModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SFN
}  // namespace Aws
