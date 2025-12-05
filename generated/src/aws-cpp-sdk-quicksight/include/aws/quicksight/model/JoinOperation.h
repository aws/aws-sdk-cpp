/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/JoinOperandProperties.h>
#include <aws/quicksight/model/JoinOperationType.h>
#include <aws/quicksight/model/TransformOperationSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A transform operation that combines data from two sources based on specified
 * join conditions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/JoinOperation">AWS
 * API Reference</a></p>
 */
class JoinOperation {
 public:
  AWS_QUICKSIGHT_API JoinOperation() = default;
  AWS_QUICKSIGHT_API JoinOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API JoinOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Alias for this operation.</p>
   */
  inline const Aws::String& GetAlias() const { return m_alias; }
  inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
  template <typename AliasT = Aws::String>
  void SetAlias(AliasT&& value) {
    m_aliasHasBeenSet = true;
    m_alias = std::forward<AliasT>(value);
  }
  template <typename AliasT = Aws::String>
  JoinOperation& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The left operand for the join operation.</p>
   */
  inline const TransformOperationSource& GetLeftOperand() const { return m_leftOperand; }
  inline bool LeftOperandHasBeenSet() const { return m_leftOperandHasBeenSet; }
  template <typename LeftOperandT = TransformOperationSource>
  void SetLeftOperand(LeftOperandT&& value) {
    m_leftOperandHasBeenSet = true;
    m_leftOperand = std::forward<LeftOperandT>(value);
  }
  template <typename LeftOperandT = TransformOperationSource>
  JoinOperation& WithLeftOperand(LeftOperandT&& value) {
    SetLeftOperand(std::forward<LeftOperandT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The right operand for the join operation.</p>
   */
  inline const TransformOperationSource& GetRightOperand() const { return m_rightOperand; }
  inline bool RightOperandHasBeenSet() const { return m_rightOperandHasBeenSet; }
  template <typename RightOperandT = TransformOperationSource>
  void SetRightOperand(RightOperandT&& value) {
    m_rightOperandHasBeenSet = true;
    m_rightOperand = std::forward<RightOperandT>(value);
  }
  template <typename RightOperandT = TransformOperationSource>
  JoinOperation& WithRightOperand(RightOperandT&& value) {
    SetRightOperand(std::forward<RightOperandT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of join to perform, such as <code>INNER</code>, <code>LEFT</code>,
   * <code>RIGHT</code>, or <code>OUTER</code>.</p>
   */
  inline JoinOperationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(JoinOperationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline JoinOperation& WithType(JoinOperationType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The join condition that specifies how to match rows between the left and
   * right operands.</p>
   */
  inline const Aws::String& GetOnClause() const { return m_onClause; }
  inline bool OnClauseHasBeenSet() const { return m_onClauseHasBeenSet; }
  template <typename OnClauseT = Aws::String>
  void SetOnClause(OnClauseT&& value) {
    m_onClauseHasBeenSet = true;
    m_onClause = std::forward<OnClauseT>(value);
  }
  template <typename OnClauseT = Aws::String>
  JoinOperation& WithOnClause(OnClauseT&& value) {
    SetOnClause(std::forward<OnClauseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Properties that control how the left operand's columns are handled in the
   * join result.</p>
   */
  inline const JoinOperandProperties& GetLeftOperandProperties() const { return m_leftOperandProperties; }
  inline bool LeftOperandPropertiesHasBeenSet() const { return m_leftOperandPropertiesHasBeenSet; }
  template <typename LeftOperandPropertiesT = JoinOperandProperties>
  void SetLeftOperandProperties(LeftOperandPropertiesT&& value) {
    m_leftOperandPropertiesHasBeenSet = true;
    m_leftOperandProperties = std::forward<LeftOperandPropertiesT>(value);
  }
  template <typename LeftOperandPropertiesT = JoinOperandProperties>
  JoinOperation& WithLeftOperandProperties(LeftOperandPropertiesT&& value) {
    SetLeftOperandProperties(std::forward<LeftOperandPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Properties that control how the right operand's columns are handled in the
   * join result.</p>
   */
  inline const JoinOperandProperties& GetRightOperandProperties() const { return m_rightOperandProperties; }
  inline bool RightOperandPropertiesHasBeenSet() const { return m_rightOperandPropertiesHasBeenSet; }
  template <typename RightOperandPropertiesT = JoinOperandProperties>
  void SetRightOperandProperties(RightOperandPropertiesT&& value) {
    m_rightOperandPropertiesHasBeenSet = true;
    m_rightOperandProperties = std::forward<RightOperandPropertiesT>(value);
  }
  template <typename RightOperandPropertiesT = JoinOperandProperties>
  JoinOperation& WithRightOperandProperties(RightOperandPropertiesT&& value) {
    SetRightOperandProperties(std::forward<RightOperandPropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alias;

  TransformOperationSource m_leftOperand;

  TransformOperationSource m_rightOperand;

  JoinOperationType m_type{JoinOperationType::NOT_SET};

  Aws::String m_onClause;

  JoinOperandProperties m_leftOperandProperties;

  JoinOperandProperties m_rightOperandProperties;
  bool m_aliasHasBeenSet = false;
  bool m_leftOperandHasBeenSet = false;
  bool m_rightOperandHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_onClauseHasBeenSet = false;
  bool m_leftOperandPropertiesHasBeenSet = false;
  bool m_rightOperandPropertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
