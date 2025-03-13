/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Use the AttributeValueList to filter by string or integer
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/AttributeValueList">AWS
   * API Reference</a></p>
   */
  class AttributeValueList
  {
  public:
    AWS_SSMINCIDENTS_API AttributeValueList() = default;
    AWS_SSMINCIDENTS_API AttributeValueList(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API AttributeValueList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of integer values that the filter matches.</p>
     */
    inline const Aws::Vector<int>& GetIntegerValues() const { return m_integerValues; }
    inline bool IntegerValuesHasBeenSet() const { return m_integerValuesHasBeenSet; }
    template<typename IntegerValuesT = Aws::Vector<int>>
    void SetIntegerValues(IntegerValuesT&& value) { m_integerValuesHasBeenSet = true; m_integerValues = std::forward<IntegerValuesT>(value); }
    template<typename IntegerValuesT = Aws::Vector<int>>
    AttributeValueList& WithIntegerValues(IntegerValuesT&& value) { SetIntegerValues(std::forward<IntegerValuesT>(value)); return *this;}
    inline AttributeValueList& AddIntegerValues(int value) { m_integerValuesHasBeenSet = true; m_integerValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of string values that the filter matches.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValues() const { return m_stringValues; }
    inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }
    template<typename StringValuesT = Aws::Vector<Aws::String>>
    void SetStringValues(StringValuesT&& value) { m_stringValuesHasBeenSet = true; m_stringValues = std::forward<StringValuesT>(value); }
    template<typename StringValuesT = Aws::Vector<Aws::String>>
    AttributeValueList& WithStringValues(StringValuesT&& value) { SetStringValues(std::forward<StringValuesT>(value)); return *this;}
    template<typename StringValuesT = Aws::String>
    AttributeValueList& AddStringValues(StringValuesT&& value) { m_stringValuesHasBeenSet = true; m_stringValues.emplace_back(std::forward<StringValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<int> m_integerValues;
    bool m_integerValuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringValues;
    bool m_stringValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
