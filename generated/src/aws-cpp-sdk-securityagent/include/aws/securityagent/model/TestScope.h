/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/TestScopeType.h>

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
 * <p>The category of application a pentest targets.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/TestScope">AWS
 * API Reference</a></p>
 */
class TestScope {
 public:
  AWS_SECURITYAGENT_API TestScope() = default;
  AWS_SECURITYAGENT_API TestScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API TestScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The category of application under test.</p>
   */
  inline TestScopeType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TestScopeType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline TestScope& WithType(TestScopeType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  TestScopeType m_type{TestScopeType::NOT_SET};
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
