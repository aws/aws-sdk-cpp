﻿/**
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
    AWS_QUICKSIGHT_API JoinInstruction();
    AWS_QUICKSIGHT_API JoinInstruction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API JoinInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operand on the left side of a join.</p>
     */
    inline const Aws::String& GetLeftOperand() const{ return m_leftOperand; }
    inline bool LeftOperandHasBeenSet() const { return m_leftOperandHasBeenSet; }
    inline void SetLeftOperand(const Aws::String& value) { m_leftOperandHasBeenSet = true; m_leftOperand = value; }
    inline void SetLeftOperand(Aws::String&& value) { m_leftOperandHasBeenSet = true; m_leftOperand = std::move(value); }
    inline void SetLeftOperand(const char* value) { m_leftOperandHasBeenSet = true; m_leftOperand.assign(value); }
    inline JoinInstruction& WithLeftOperand(const Aws::String& value) { SetLeftOperand(value); return *this;}
    inline JoinInstruction& WithLeftOperand(Aws::String&& value) { SetLeftOperand(std::move(value)); return *this;}
    inline JoinInstruction& WithLeftOperand(const char* value) { SetLeftOperand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operand on the right side of a join.</p>
     */
    inline const Aws::String& GetRightOperand() const{ return m_rightOperand; }
    inline bool RightOperandHasBeenSet() const { return m_rightOperandHasBeenSet; }
    inline void SetRightOperand(const Aws::String& value) { m_rightOperandHasBeenSet = true; m_rightOperand = value; }
    inline void SetRightOperand(Aws::String&& value) { m_rightOperandHasBeenSet = true; m_rightOperand = std::move(value); }
    inline void SetRightOperand(const char* value) { m_rightOperandHasBeenSet = true; m_rightOperand.assign(value); }
    inline JoinInstruction& WithRightOperand(const Aws::String& value) { SetRightOperand(value); return *this;}
    inline JoinInstruction& WithRightOperand(Aws::String&& value) { SetRightOperand(std::move(value)); return *this;}
    inline JoinInstruction& WithRightOperand(const char* value) { SetRightOperand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Join key properties of the left operand.</p>
     */
    inline const JoinKeyProperties& GetLeftJoinKeyProperties() const{ return m_leftJoinKeyProperties; }
    inline bool LeftJoinKeyPropertiesHasBeenSet() const { return m_leftJoinKeyPropertiesHasBeenSet; }
    inline void SetLeftJoinKeyProperties(const JoinKeyProperties& value) { m_leftJoinKeyPropertiesHasBeenSet = true; m_leftJoinKeyProperties = value; }
    inline void SetLeftJoinKeyProperties(JoinKeyProperties&& value) { m_leftJoinKeyPropertiesHasBeenSet = true; m_leftJoinKeyProperties = std::move(value); }
    inline JoinInstruction& WithLeftJoinKeyProperties(const JoinKeyProperties& value) { SetLeftJoinKeyProperties(value); return *this;}
    inline JoinInstruction& WithLeftJoinKeyProperties(JoinKeyProperties&& value) { SetLeftJoinKeyProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Join key properties of the right operand.</p>
     */
    inline const JoinKeyProperties& GetRightJoinKeyProperties() const{ return m_rightJoinKeyProperties; }
    inline bool RightJoinKeyPropertiesHasBeenSet() const { return m_rightJoinKeyPropertiesHasBeenSet; }
    inline void SetRightJoinKeyProperties(const JoinKeyProperties& value) { m_rightJoinKeyPropertiesHasBeenSet = true; m_rightJoinKeyProperties = value; }
    inline void SetRightJoinKeyProperties(JoinKeyProperties&& value) { m_rightJoinKeyPropertiesHasBeenSet = true; m_rightJoinKeyProperties = std::move(value); }
    inline JoinInstruction& WithRightJoinKeyProperties(const JoinKeyProperties& value) { SetRightJoinKeyProperties(value); return *this;}
    inline JoinInstruction& WithRightJoinKeyProperties(JoinKeyProperties&& value) { SetRightJoinKeyProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of join that it is.</p>
     */
    inline const JoinType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const JoinType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(JoinType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline JoinInstruction& WithType(const JoinType& value) { SetType(value); return *this;}
    inline JoinInstruction& WithType(JoinType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The join instructions provided in the <code>ON</code> clause of a join.</p>
     */
    inline const Aws::String& GetOnClause() const{ return m_onClause; }
    inline bool OnClauseHasBeenSet() const { return m_onClauseHasBeenSet; }
    inline void SetOnClause(const Aws::String& value) { m_onClauseHasBeenSet = true; m_onClause = value; }
    inline void SetOnClause(Aws::String&& value) { m_onClauseHasBeenSet = true; m_onClause = std::move(value); }
    inline void SetOnClause(const char* value) { m_onClauseHasBeenSet = true; m_onClause.assign(value); }
    inline JoinInstruction& WithOnClause(const Aws::String& value) { SetOnClause(value); return *this;}
    inline JoinInstruction& WithOnClause(Aws::String&& value) { SetOnClause(std::move(value)); return *this;}
    inline JoinInstruction& WithOnClause(const char* value) { SetOnClause(value); return *this;}
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

    JoinType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_onClause;
    bool m_onClauseHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
