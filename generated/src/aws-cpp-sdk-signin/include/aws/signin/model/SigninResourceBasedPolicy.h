/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/PolicyStatement.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {

/**
 * <p>SignIn resource-based policy document</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/SigninResourceBasedPolicy">AWS
 * API Reference</a></p>
 */
class SigninResourceBasedPolicy {
 public:
  AWS_SIGNIN_API SigninResourceBasedPolicy() = default;
  AWS_SIGNIN_API SigninResourceBasedPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API SigninResourceBasedPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Policy version</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  SigninResourceBasedPolicy& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Policy statements</p>
   */
  inline const Aws::Vector<PolicyStatement>& GetStatement() const { return m_statement; }
  inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
  template <typename StatementT = Aws::Vector<PolicyStatement>>
  void SetStatement(StatementT&& value) {
    m_statementHasBeenSet = true;
    m_statement = std::forward<StatementT>(value);
  }
  template <typename StatementT = Aws::Vector<PolicyStatement>>
  SigninResourceBasedPolicy& WithStatement(StatementT&& value) {
    SetStatement(std::forward<StatementT>(value));
    return *this;
  }
  template <typename StatementT = PolicyStatement>
  SigninResourceBasedPolicy& AddStatement(StatementT&& value) {
    m_statementHasBeenSet = true;
    m_statement.emplace_back(std::forward<StatementT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;

  Aws::Vector<PolicyStatement> m_statement;
  bool m_versionHasBeenSet = false;
  bool m_statementHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
