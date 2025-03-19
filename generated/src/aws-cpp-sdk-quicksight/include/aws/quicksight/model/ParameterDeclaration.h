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
    AWS_QUICKSIGHT_API ParameterDeclaration() = default;
    AWS_QUICKSIGHT_API ParameterDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A parameter declaration for the <code>String</code> data type.</p>
     */
    inline const StringParameterDeclaration& GetStringParameterDeclaration() const { return m_stringParameterDeclaration; }
    inline bool StringParameterDeclarationHasBeenSet() const { return m_stringParameterDeclarationHasBeenSet; }
    template<typename StringParameterDeclarationT = StringParameterDeclaration>
    void SetStringParameterDeclaration(StringParameterDeclarationT&& value) { m_stringParameterDeclarationHasBeenSet = true; m_stringParameterDeclaration = std::forward<StringParameterDeclarationT>(value); }
    template<typename StringParameterDeclarationT = StringParameterDeclaration>
    ParameterDeclaration& WithStringParameterDeclaration(StringParameterDeclarationT&& value) { SetStringParameterDeclaration(std::forward<StringParameterDeclarationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter declaration for the <code>Decimal</code> data type.</p>
     */
    inline const DecimalParameterDeclaration& GetDecimalParameterDeclaration() const { return m_decimalParameterDeclaration; }
    inline bool DecimalParameterDeclarationHasBeenSet() const { return m_decimalParameterDeclarationHasBeenSet; }
    template<typename DecimalParameterDeclarationT = DecimalParameterDeclaration>
    void SetDecimalParameterDeclaration(DecimalParameterDeclarationT&& value) { m_decimalParameterDeclarationHasBeenSet = true; m_decimalParameterDeclaration = std::forward<DecimalParameterDeclarationT>(value); }
    template<typename DecimalParameterDeclarationT = DecimalParameterDeclaration>
    ParameterDeclaration& WithDecimalParameterDeclaration(DecimalParameterDeclarationT&& value) { SetDecimalParameterDeclaration(std::forward<DecimalParameterDeclarationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter declaration for the <code>Integer</code> data type.</p>
     */
    inline const IntegerParameterDeclaration& GetIntegerParameterDeclaration() const { return m_integerParameterDeclaration; }
    inline bool IntegerParameterDeclarationHasBeenSet() const { return m_integerParameterDeclarationHasBeenSet; }
    template<typename IntegerParameterDeclarationT = IntegerParameterDeclaration>
    void SetIntegerParameterDeclaration(IntegerParameterDeclarationT&& value) { m_integerParameterDeclarationHasBeenSet = true; m_integerParameterDeclaration = std::forward<IntegerParameterDeclarationT>(value); }
    template<typename IntegerParameterDeclarationT = IntegerParameterDeclaration>
    ParameterDeclaration& WithIntegerParameterDeclaration(IntegerParameterDeclarationT&& value) { SetIntegerParameterDeclaration(std::forward<IntegerParameterDeclarationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter declaration for the <code>DateTime</code> data type.</p>
     */
    inline const DateTimeParameterDeclaration& GetDateTimeParameterDeclaration() const { return m_dateTimeParameterDeclaration; }
    inline bool DateTimeParameterDeclarationHasBeenSet() const { return m_dateTimeParameterDeclarationHasBeenSet; }
    template<typename DateTimeParameterDeclarationT = DateTimeParameterDeclaration>
    void SetDateTimeParameterDeclaration(DateTimeParameterDeclarationT&& value) { m_dateTimeParameterDeclarationHasBeenSet = true; m_dateTimeParameterDeclaration = std::forward<DateTimeParameterDeclarationT>(value); }
    template<typename DateTimeParameterDeclarationT = DateTimeParameterDeclaration>
    ParameterDeclaration& WithDateTimeParameterDeclaration(DateTimeParameterDeclarationT&& value) { SetDateTimeParameterDeclaration(std::forward<DateTimeParameterDeclarationT>(value)); return *this;}
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
