/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/StringParameterDeclaration.h>
#include <aws/quicksight/model/DecimalParameterDeclaration.h>
#include <aws/quicksight/model/IntegerParameterDeclaration.h>
#include <aws/quicksight/model/DateTimeParameterDeclaration.h>
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
   * <p>The declaration definition of a parameter.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/parameters-in-quicksight.html">Parameters
   * in Amazon QuickSight</a> in the <i>Amazon QuickSight User Guide</i>.</p> <p>This
   * is a union type structure. For this structure to be valid, only one of the
   * attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ParameterDeclaration">AWS
   * API Reference</a></p>
   */
  class ParameterDeclaration
  {
  public:
    AWS_QUICKSIGHT_API ParameterDeclaration();
    AWS_QUICKSIGHT_API ParameterDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A parameter declaration for the <code>String</code> data type.</p>
     */
    inline const StringParameterDeclaration& GetStringParameterDeclaration() const{ return m_stringParameterDeclaration; }
    inline bool StringParameterDeclarationHasBeenSet() const { return m_stringParameterDeclarationHasBeenSet; }
    inline void SetStringParameterDeclaration(const StringParameterDeclaration& value) { m_stringParameterDeclarationHasBeenSet = true; m_stringParameterDeclaration = value; }
    inline void SetStringParameterDeclaration(StringParameterDeclaration&& value) { m_stringParameterDeclarationHasBeenSet = true; m_stringParameterDeclaration = std::move(value); }
    inline ParameterDeclaration& WithStringParameterDeclaration(const StringParameterDeclaration& value) { SetStringParameterDeclaration(value); return *this;}
    inline ParameterDeclaration& WithStringParameterDeclaration(StringParameterDeclaration&& value) { SetStringParameterDeclaration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter declaration for the <code>Decimal</code> data type.</p>
     */
    inline const DecimalParameterDeclaration& GetDecimalParameterDeclaration() const{ return m_decimalParameterDeclaration; }
    inline bool DecimalParameterDeclarationHasBeenSet() const { return m_decimalParameterDeclarationHasBeenSet; }
    inline void SetDecimalParameterDeclaration(const DecimalParameterDeclaration& value) { m_decimalParameterDeclarationHasBeenSet = true; m_decimalParameterDeclaration = value; }
    inline void SetDecimalParameterDeclaration(DecimalParameterDeclaration&& value) { m_decimalParameterDeclarationHasBeenSet = true; m_decimalParameterDeclaration = std::move(value); }
    inline ParameterDeclaration& WithDecimalParameterDeclaration(const DecimalParameterDeclaration& value) { SetDecimalParameterDeclaration(value); return *this;}
    inline ParameterDeclaration& WithDecimalParameterDeclaration(DecimalParameterDeclaration&& value) { SetDecimalParameterDeclaration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter declaration for the <code>Integer</code> data type.</p>
     */
    inline const IntegerParameterDeclaration& GetIntegerParameterDeclaration() const{ return m_integerParameterDeclaration; }
    inline bool IntegerParameterDeclarationHasBeenSet() const { return m_integerParameterDeclarationHasBeenSet; }
    inline void SetIntegerParameterDeclaration(const IntegerParameterDeclaration& value) { m_integerParameterDeclarationHasBeenSet = true; m_integerParameterDeclaration = value; }
    inline void SetIntegerParameterDeclaration(IntegerParameterDeclaration&& value) { m_integerParameterDeclarationHasBeenSet = true; m_integerParameterDeclaration = std::move(value); }
    inline ParameterDeclaration& WithIntegerParameterDeclaration(const IntegerParameterDeclaration& value) { SetIntegerParameterDeclaration(value); return *this;}
    inline ParameterDeclaration& WithIntegerParameterDeclaration(IntegerParameterDeclaration&& value) { SetIntegerParameterDeclaration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter declaration for the <code>DateTime</code> data type.</p>
     */
    inline const DateTimeParameterDeclaration& GetDateTimeParameterDeclaration() const{ return m_dateTimeParameterDeclaration; }
    inline bool DateTimeParameterDeclarationHasBeenSet() const { return m_dateTimeParameterDeclarationHasBeenSet; }
    inline void SetDateTimeParameterDeclaration(const DateTimeParameterDeclaration& value) { m_dateTimeParameterDeclarationHasBeenSet = true; m_dateTimeParameterDeclaration = value; }
    inline void SetDateTimeParameterDeclaration(DateTimeParameterDeclaration&& value) { m_dateTimeParameterDeclarationHasBeenSet = true; m_dateTimeParameterDeclaration = std::move(value); }
    inline ParameterDeclaration& WithDateTimeParameterDeclaration(const DateTimeParameterDeclaration& value) { SetDateTimeParameterDeclaration(value); return *this;}
    inline ParameterDeclaration& WithDateTimeParameterDeclaration(DateTimeParameterDeclaration&& value) { SetDateTimeParameterDeclaration(std::move(value)); return *this;}
    ///@}
  private:

    StringParameterDeclaration m_stringParameterDeclaration;
    bool m_stringParameterDeclarationHasBeenSet = false;

    DecimalParameterDeclaration m_decimalParameterDeclaration;
    bool m_decimalParameterDeclarationHasBeenSet = false;

    IntegerParameterDeclaration m_integerParameterDeclaration;
    bool m_integerParameterDeclarationHasBeenSet = false;

    DateTimeParameterDeclaration m_dateTimeParameterDeclaration;
    bool m_dateTimeParameterDeclarationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
