/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/OpsItemEventFilterKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemEventFilterOperator.h>
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
   * <p>Describes a filter for a specific list of OpsItem events. You can filter
   * event information by using tags. You specify tags by using a key-value pair
   * mapping. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemEventFilter">AWS
   * API Reference</a></p>
   */
  class OpsItemEventFilter
  {
  public:
    AWS_SSM_API OpsItemEventFilter() = default;
    AWS_SSM_API OpsItemEventFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemEventFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter key. Currently, the only supported value is
     * <code>OpsItemId</code>.</p>
     */
    inline OpsItemEventFilterKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(OpsItemEventFilterKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline OpsItemEventFilter& WithKey(OpsItemEventFilterKey value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values for the filter, consisting of one or more OpsItem IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    OpsItemEventFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    OpsItemEventFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator used by the filter call. Currently, the only supported value is
     * <code>Equal</code>.</p>
     */
    inline OpsItemEventFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(OpsItemEventFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline OpsItemEventFilter& WithOperator(OpsItemEventFilterOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    OpsItemEventFilterKey m_key{OpsItemEventFilterKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    OpsItemEventFilterOperator m_operator{OpsItemEventFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
