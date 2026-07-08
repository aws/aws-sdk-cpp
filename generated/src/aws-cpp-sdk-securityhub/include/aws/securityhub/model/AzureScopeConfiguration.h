/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ScopeType.h>

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
 * <p>The scope configuration for an Azure connector, defining the tenant or
 * subscription scope.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AzureScopeConfiguration">AWS
 * API Reference</a></p>
 */
class AzureScopeConfiguration {
 public:
  AWS_SECURITYHUB_API AzureScopeConfiguration() = default;
  AWS_SECURITYHUB_API AzureScopeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API AzureScopeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of scope. Valid values are <code>tenant</code> and
   * <code>subscription</code>.</p>
   */
  inline ScopeType GetScopeType() const { return m_scopeType; }
  inline bool ScopeTypeHasBeenSet() const { return m_scopeTypeHasBeenSet; }
  inline void SetScopeType(ScopeType value) {
    m_scopeTypeHasBeenSet = true;
    m_scopeType = value;
  }
  inline AzureScopeConfiguration& WithScopeType(ScopeType value) {
    SetScopeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of scope values, such as subscription IDs, when the scope type is
   * <code>subscription</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopeValues() const { return m_scopeValues; }
  inline bool ScopeValuesHasBeenSet() const { return m_scopeValuesHasBeenSet; }
  template <typename ScopeValuesT = Aws::Vector<Aws::String>>
  void SetScopeValues(ScopeValuesT&& value) {
    m_scopeValuesHasBeenSet = true;
    m_scopeValues = std::forward<ScopeValuesT>(value);
  }
  template <typename ScopeValuesT = Aws::Vector<Aws::String>>
  AzureScopeConfiguration& WithScopeValues(ScopeValuesT&& value) {
    SetScopeValues(std::forward<ScopeValuesT>(value));
    return *this;
  }
  template <typename ScopeValuesT = Aws::String>
  AzureScopeConfiguration& AddScopeValues(ScopeValuesT&& value) {
    m_scopeValuesHasBeenSet = true;
    m_scopeValues.emplace_back(std::forward<ScopeValuesT>(value));
    return *this;
  }
  ///@}
 private:
  ScopeType m_scopeType{ScopeType::NOT_SET};

  Aws::Vector<Aws::String> m_scopeValues;
  bool m_scopeTypeHasBeenSet = false;
  bool m_scopeValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
