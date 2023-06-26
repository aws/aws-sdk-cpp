/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The table calculation measure field for pivot tables.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CalculatedMeasureField">AWS
   * API Reference</a></p>
   */
  class CalculatedMeasureField
  {
  public:
    AWS_QUICKSIGHT_API CalculatedMeasureField();
    AWS_QUICKSIGHT_API CalculatedMeasureField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CalculatedMeasureField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The custom field ID.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The custom field ID.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The custom field ID.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The custom field ID.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The custom field ID.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The custom field ID.</p>
     */
    inline CalculatedMeasureField& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The custom field ID.</p>
     */
    inline CalculatedMeasureField& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The custom field ID.</p>
     */
    inline CalculatedMeasureField& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>The expression in the table calculation.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The expression in the table calculation.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The expression in the table calculation.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The expression in the table calculation.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The expression in the table calculation.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The expression in the table calculation.</p>
     */
    inline CalculatedMeasureField& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The expression in the table calculation.</p>
     */
    inline CalculatedMeasureField& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The expression in the table calculation.</p>
     */
    inline CalculatedMeasureField& WithExpression(const char* value) { SetExpression(value); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
