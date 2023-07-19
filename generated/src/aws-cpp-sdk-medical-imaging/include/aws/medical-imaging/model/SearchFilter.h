/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medical-imaging/model/Operator.h>
#include <aws/medical-imaging/model/SearchByAttributeValue.h>
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
namespace MedicalImaging
{
namespace Model
{

  /**
   * <p>The search filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/SearchFilter">AWS
   * API Reference</a></p>
   */
  class SearchFilter
  {
  public:
    AWS_MEDICALIMAGING_API SearchFilter();
    AWS_MEDICALIMAGING_API SearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API SearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The search filter values.</p>
     */
    inline const Aws::Vector<SearchByAttributeValue>& GetValues() const{ return m_values; }

    /**
     * <p>The search filter values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The search filter values.</p>
     */
    inline void SetValues(const Aws::Vector<SearchByAttributeValue>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The search filter values.</p>
     */
    inline void SetValues(Aws::Vector<SearchByAttributeValue>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The search filter values.</p>
     */
    inline SearchFilter& WithValues(const Aws::Vector<SearchByAttributeValue>& value) { SetValues(value); return *this;}

    /**
     * <p>The search filter values.</p>
     */
    inline SearchFilter& WithValues(Aws::Vector<SearchByAttributeValue>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The search filter values.</p>
     */
    inline SearchFilter& AddValues(const SearchByAttributeValue& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The search filter values.</p>
     */
    inline SearchFilter& AddValues(SearchByAttributeValue&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }


    /**
     * <p>The search filter operator for <code>imageSetDateTime</code>.</p>
     */
    inline const Operator& GetOperator() const{ return m_operator; }

    /**
     * <p>The search filter operator for <code>imageSetDateTime</code>.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The search filter operator for <code>imageSetDateTime</code>.</p>
     */
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The search filter operator for <code>imageSetDateTime</code>.</p>
     */
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The search filter operator for <code>imageSetDateTime</code>.</p>
     */
    inline SearchFilter& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    /**
     * <p>The search filter operator for <code>imageSetDateTime</code>.</p>
     */
    inline SearchFilter& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    Aws::Vector<SearchByAttributeValue> m_values;
    bool m_valuesHasBeenSet = false;

    Operator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
