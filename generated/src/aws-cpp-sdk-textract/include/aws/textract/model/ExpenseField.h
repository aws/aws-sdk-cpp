/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/ExpenseType.h>
#include <aws/textract/model/ExpenseDetection.h>
#include <aws/textract/model/ExpenseCurrency.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/ExpenseGroupProperty.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Breakdown of detected information, seperated into the catagories Type,
   * LabelDetection, and ValueDetection</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/ExpenseField">AWS
   * API Reference</a></p>
   */
  class ExpenseField
  {
  public:
    AWS_TEXTRACT_API ExpenseField() = default;
    AWS_TEXTRACT_API ExpenseField(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API ExpenseField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The implied label of a detected element. Present alongside LabelDetection for
     * explicit elements.</p>
     */
    inline const ExpenseType& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = ExpenseType>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = ExpenseType>
    ExpenseField& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explicitly stated label of a detected element.</p>
     */
    inline const ExpenseDetection& GetLabelDetection() const { return m_labelDetection; }
    inline bool LabelDetectionHasBeenSet() const { return m_labelDetectionHasBeenSet; }
    template<typename LabelDetectionT = ExpenseDetection>
    void SetLabelDetection(LabelDetectionT&& value) { m_labelDetectionHasBeenSet = true; m_labelDetection = std::forward<LabelDetectionT>(value); }
    template<typename LabelDetectionT = ExpenseDetection>
    ExpenseField& WithLabelDetection(LabelDetectionT&& value) { SetLabelDetection(std::forward<LabelDetectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a detected element. Present in explicit and implicit
     * elements.</p>
     */
    inline const ExpenseDetection& GetValueDetection() const { return m_valueDetection; }
    inline bool ValueDetectionHasBeenSet() const { return m_valueDetectionHasBeenSet; }
    template<typename ValueDetectionT = ExpenseDetection>
    void SetValueDetection(ValueDetectionT&& value) { m_valueDetectionHasBeenSet = true; m_valueDetection = std::forward<ValueDetectionT>(value); }
    template<typename ValueDetectionT = ExpenseDetection>
    ExpenseField& WithValueDetection(ValueDetectionT&& value) { SetValueDetection(std::forward<ValueDetectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The page number the value was detected on.</p>
     */
    inline int GetPageNumber() const { return m_pageNumber; }
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }
    inline void SetPageNumber(int value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }
    inline ExpenseField& WithPageNumber(int value) { SetPageNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the kind of currency, both the code and confidence associated with any
     * monatary value detected.</p>
     */
    inline const ExpenseCurrency& GetCurrency() const { return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    template<typename CurrencyT = ExpenseCurrency>
    void SetCurrency(CurrencyT&& value) { m_currencyHasBeenSet = true; m_currency = std::forward<CurrencyT>(value); }
    template<typename CurrencyT = ExpenseCurrency>
    ExpenseField& WithCurrency(CurrencyT&& value) { SetCurrency(std::forward<CurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows which group a response object belongs to, such as whether an address
     * line belongs to the vendor's address or the recipent's address.</p>
     */
    inline const Aws::Vector<ExpenseGroupProperty>& GetGroupProperties() const { return m_groupProperties; }
    inline bool GroupPropertiesHasBeenSet() const { return m_groupPropertiesHasBeenSet; }
    template<typename GroupPropertiesT = Aws::Vector<ExpenseGroupProperty>>
    void SetGroupProperties(GroupPropertiesT&& value) { m_groupPropertiesHasBeenSet = true; m_groupProperties = std::forward<GroupPropertiesT>(value); }
    template<typename GroupPropertiesT = Aws::Vector<ExpenseGroupProperty>>
    ExpenseField& WithGroupProperties(GroupPropertiesT&& value) { SetGroupProperties(std::forward<GroupPropertiesT>(value)); return *this;}
    template<typename GroupPropertiesT = ExpenseGroupProperty>
    ExpenseField& AddGroupProperties(GroupPropertiesT&& value) { m_groupPropertiesHasBeenSet = true; m_groupProperties.emplace_back(std::forward<GroupPropertiesT>(value)); return *this; }
    ///@}
  private:

    ExpenseType m_type;
    bool m_typeHasBeenSet = false;

    ExpenseDetection m_labelDetection;
    bool m_labelDetectionHasBeenSet = false;

    ExpenseDetection m_valueDetection;
    bool m_valueDetectionHasBeenSet = false;

    int m_pageNumber{0};
    bool m_pageNumberHasBeenSet = false;

    ExpenseCurrency m_currency;
    bool m_currencyHasBeenSet = false;

    Aws::Vector<ExpenseGroupProperty> m_groupProperties;
    bool m_groupPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
