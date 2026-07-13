/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/ValidationFindingScopeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SSM {
namespace Model {

/**
 * <p>Identifies the specific resource scope of a validation finding.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ValidationFindingScope">AWS
 * API Reference</a></p>
 */
class ValidationFindingScope {
 public:
  AWS_SSM_API ValidationFindingScope() = default;
  AWS_SSM_API ValidationFindingScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API ValidationFindingScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the resource scope.</p>
   */
  inline ValidationFindingScopeType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ValidationFindingScopeType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ValidationFindingScope& WithType(ValidationFindingScopeType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resource within the scope.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ValidationFindingScope& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}
 private:
  ValidationFindingScopeType m_type{ValidationFindingScopeType::NOT_SET};

  Aws::String m_id;
  bool m_typeHasBeenSet = false;
  bool m_idHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
