/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/OpsItemRelatedItemsFilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemRelatedItemsFilterOperator.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a filter for a specific list of related-item resources.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemRelatedItemsFilter">AWS
   * API Reference</a></p>
   */
  class OpsItemRelatedItemsFilter
  {
  public:
    AWS_SSM_API OpsItemRelatedItemsFilter() = default;
    AWS_SSM_API OpsItemRelatedItemsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemRelatedItemsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter key. Supported values include
     * <code>ResourceUri</code>, <code>ResourceType</code>, or
     * <code>AssociationId</code>.</p>
     */
    inline OpsItemRelatedItemsFilterKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(OpsItemRelatedItemsFilterKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline OpsItemRelatedItemsFilter& WithKey(OpsItemRelatedItemsFilterKey value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    OpsItemRelatedItemsFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    OpsItemRelatedItemsFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator used by the filter call. The only supported operator is
     * <code>EQUAL</code>.</p>
     */
    inline OpsItemRelatedItemsFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(OpsItemRelatedItemsFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline OpsItemRelatedItemsFilter& WithOperator(OpsItemRelatedItemsFilterOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    OpsItemRelatedItemsFilterKey m_key{OpsItemRelatedItemsFilterKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    OpsItemRelatedItemsFilterOperator m_operator{OpsItemRelatedItemsFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
