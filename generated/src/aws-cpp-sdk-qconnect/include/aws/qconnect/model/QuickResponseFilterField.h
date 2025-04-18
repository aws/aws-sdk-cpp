/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/QuickResponseFilterOperator.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The quick response fields to filter the quick response query results by.</p>
   * <p>The following is the list of supported field names.</p> <ul> <li> <p>name</p>
   * </li> <li> <p>description</p> </li> <li> <p>shortcutKey</p> </li> <li>
   * <p>isActive</p> </li> <li> <p>channels</p> </li> <li> <p>language</p> </li> <li>
   * <p>contentType</p> </li> <li> <p>createdTime</p> </li> <li>
   * <p>lastModifiedTime</p> </li> <li> <p>lastModifiedBy</p> </li> <li>
   * <p>groupingConfiguration.criteria</p> </li> <li>
   * <p>groupingConfiguration.values</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/QuickResponseFilterField">AWS
   * API Reference</a></p>
   */
  class QuickResponseFilterField
  {
  public:
    AWS_QCONNECT_API QuickResponseFilterField() = default;
    AWS_QCONNECT_API QuickResponseFilterField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API QuickResponseFilterField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the attribute field to filter the quick responses by.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    QuickResponseFilterField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of attribute field to filter the quick response by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    QuickResponseFilterField& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    QuickResponseFilterField& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator to use for filtering.</p>
     */
    inline QuickResponseFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(QuickResponseFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline QuickResponseFilterField& WithOperator(QuickResponseFilterOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to treat null value as a match for the attribute field.</p>
     */
    inline bool GetIncludeNoExistence() const { return m_includeNoExistence; }
    inline bool IncludeNoExistenceHasBeenSet() const { return m_includeNoExistenceHasBeenSet; }
    inline void SetIncludeNoExistence(bool value) { m_includeNoExistenceHasBeenSet = true; m_includeNoExistence = value; }
    inline QuickResponseFilterField& WithIncludeNoExistence(bool value) { SetIncludeNoExistence(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    QuickResponseFilterOperator m_operator{QuickResponseFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    bool m_includeNoExistence{false};
    bool m_includeNoExistenceHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
