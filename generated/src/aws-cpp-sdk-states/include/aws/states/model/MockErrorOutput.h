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
 * <p>A JSON object that contains a mocked error.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MockErrorOutput">AWS
 * API Reference</a></p>
 */
class MockErrorOutput {
 public:
  AWS_SFN_API MockErrorOutput() = default;
  AWS_SFN_API MockErrorOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SFN_API MockErrorOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A string denoting the error code of the exception thrown when invoking the
   * tested state. This field is required if <code>mock.errorOutput</code> is
   * specified.</p>
   */
  inline const Aws::String& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = Aws::String>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = Aws::String>
  MockErrorOutput& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string containing the cause of the exception thrown when executing the
   * state's logic.</p>
   */
  inline const Aws::String& GetCause() const { return m_cause; }
  inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
  template <typename CauseT = Aws::String>
  void SetCause(CauseT&& value) {
    m_causeHasBeenSet = true;
    m_cause = std::forward<CauseT>(value);
  }
  template <typename CauseT = Aws::String>
  MockErrorOutput& WithCause(CauseT&& value) {
    SetCause(std::forward<CauseT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_error;

  Aws::String m_cause;
  bool m_errorHasBeenSet = false;
  bool m_causeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SFN
}  // namespace Aws
