/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/GcpScopeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>The scope configuration for a GCP connector, defining the organization or
 * project scope.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GcpScopeConfiguration">AWS
 * API Reference</a></p>
 */
class GcpScopeConfiguration {
 public:
  AWS_SECURITYHUB_API GcpScopeConfiguration() = default;
  AWS_SECURITYHUB_API GcpScopeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API GcpScopeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of scope. Valid values are <code>ORGANIZATION</code> and
   * <code>PROJECT</code>.</p>
   */
  inline GcpScopeType GetScopeType() const { return m_scopeType; }
  inline bool ScopeTypeHasBeenSet() const { return m_scopeTypeHasBeenSet; }
  inline void SetScopeType(GcpScopeType value) {
    m_scopeTypeHasBeenSet = true;
    m_scopeType = value;
  }
  inline GcpScopeConfiguration& WithScopeType(GcpScopeType value) {
    SetScopeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of scope values. Use an organization ID when the scope type is
   * <code>ORGANIZATION</code>, or project IDs when the scope type is
   * <code>PROJECT</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopeValues() const { return m_scopeValues; }
  inline bool ScopeValuesHasBeenSet() const { return m_scopeValuesHasBeenSet; }
  template <typename ScopeValuesT = Aws::Vector<Aws::String>>
  void SetScopeValues(ScopeValuesT&& value) {
    m_scopeValuesHasBeenSet = true;
    m_scopeValues = std::forward<ScopeValuesT>(value);
  }
  template <typename ScopeValuesT = Aws::Vector<Aws::String>>
  GcpScopeConfiguration& WithScopeValues(ScopeValuesT&& value) {
    SetScopeValues(std::forward<ScopeValuesT>(value));
    return *this;
  }
  template <typename ScopeValuesT = Aws::String>
  GcpScopeConfiguration& AddScopeValues(ScopeValuesT&& value) {
    m_scopeValuesHasBeenSet = true;
    m_scopeValues.emplace_back(std::forward<ScopeValuesT>(value));
    return *this;
  }
  ///@}
 private:
  GcpScopeType m_scopeType{GcpScopeType::NOT_SET};

  Aws::Vector<Aws::String> m_scopeValues;
  bool m_scopeTypeHasBeenSet = false;
  bool m_scopeValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
