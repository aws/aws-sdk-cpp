/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/JoinKeyProperties.h>
#include <aws/quicksight/model/JoinType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The instructions associated with a join. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/JoinInstruction">AWS
   * API Reference</a></p>
   */
  class JoinInstruction
  {
  public:
    AWS_QUICKSIGHT_API JoinInstruction() = default;
    AWS_QUICKSIGHT_API JoinInstruction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API JoinInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operand on the left side of a join.</p>
     */
    inline const Aws::String& GetLeftOperand() const { return m_leftOperand; }
    inline bool LeftOperandHasBeenSet() const { return m_leftOperandHasBeenSet; }
    template<typename LeftOperandT = Aws::String>
    void SetLeftOperand(LeftOperandT&& value) { m_leftOperandHasBeenSet = true; m_leftOperand = std::forward<LeftOperandT>(value); }
    template<typename LeftOperandT = Aws::String>
    JoinInstruction& WithLeftOperand(LeftOperandT&& value) { SetLeftOperand(std::forward<LeftOperandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operand on the right side of a join.</p>
     */
    inline const Aws::String& GetRightOperand() const { return m_rightOperand; }
    inline bool RightOperandHasBeenSet() const { return m_rightOperandHasBeenSet; }
    template<typename RightOperandT = Aws::String>
    void SetRightOperand(RightOperandT&& value) { m_rightOperandHasBeenSet = true; m_rightOperand = std::forward<RightOperandT>(value); }
    template<typename RightOperandT = Aws::String>
    JoinInstruction& WithRightOperand(RightOperandT&& value) { SetRightOperand(std::forward<RightOperandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Join key properties of the left operand.</p>
     */
    inline const JoinKeyProperties& GetLeftJoinKeyProperties() const { return m_leftJoinKeyProperties; }
    inline bool LeftJoinKeyPropertiesHasBeenSet() const { return m_leftJoinKeyPropertiesHasBeenSet; }
    template<typename LeftJoinKeyPropertiesT = JoinKeyProperties>
    void SetLeftJoinKeyProperties(LeftJoinKeyPropertiesT&& value) { m_leftJoinKeyPropertiesHasBeenSet = true; m_leftJoinKeyProperties = std::forward<LeftJoinKeyPropertiesT>(value); }
    template<typename LeftJoinKeyPropertiesT = JoinKeyProperties>
    JoinInstruction& WithLeftJoinKeyProperties(LeftJoinKeyPropertiesT&& value) { SetLeftJoinKeyProperties(std::forward<LeftJoinKeyPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Join key properties of the right operand.</p>
     */
    inline const JoinKeyProperties& GetRightJoinKeyProperties() const { return m_rightJoinKeyProperties; }
    inline bool RightJoinKeyPropertiesHasBeenSet() const { return m_rightJoinKeyPropertiesHasBeenSet; }
    template<typename RightJoinKeyPropertiesT = JoinKeyProperties>
    void SetRightJoinKeyProperties(RightJoinKeyPropertiesT&& value) { m_rightJoinKeyPropertiesHasBeenSet = true; m_rightJoinKeyProperties = std::forward<RightJoinKeyPropertiesT>(value); }
    template<typename RightJoinKeyPropertiesT = JoinKeyProperties>
    JoinInstruction& WithRightJoinKeyProperties(RightJoinKeyPropertiesT&& value) { SetRightJoinKeyProperties(std::forward<RightJoinKeyPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of join that it is.</p>
     */
    inline JoinType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(JoinType value) { m_typeHasBeenSet = true; m_type = value; }
    inline JoinInstruction& WithType(JoinType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The join instructions provided in the <code>ON</code> clause of a join.</p>
     */
    inline const Aws::String& GetOnClause() const { return m_onClause; }
    inline bool OnClauseHasBeenSet() const { return m_onClauseHasBeenSet; }
    template<typename OnClauseT = Aws::String>
    void SetOnClause(OnClauseT&& value) { m_onClauseHasBeenSet = true; m_onClause = std::forward<OnClauseT>(value); }
    template<typename OnClauseT = Aws::String>
    JoinInstruction& WithOnClause(OnClauseT&& value) { SetOnClause(std::forward<OnClauseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_leftOperand;
    bool m_leftOperandHasBeenSet = false;

    Aws::String m_rightOperand;
    bool m_rightOperandHasBeenSet = false;

    JoinKeyProperties m_leftJoinKeyProperties;
    bool m_leftJoinKeyPropertiesHasBeenSet = false;

    JoinKeyProperties m_rightJoinKeyProperties;
    bool m_rightJoinKeyPropertiesHasBeenSet = false;

    JoinType m_type{JoinType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_onClause;
    bool m_onClauseHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
