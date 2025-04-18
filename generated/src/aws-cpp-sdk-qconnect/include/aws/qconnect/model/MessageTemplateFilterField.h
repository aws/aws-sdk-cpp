/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/MessageTemplateFilterOperator.h>
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
   * <p>The message template fields to filter the message template query results by.
   * The following is the list of supported field names:</p> <ul> <li> <p>name</p>
   * </li> <li> <p>description</p> </li> <li> <p>channel</p> </li> <li>
   * <p>channelSubtype</p> </li> <li> <p>language</p> </li> <li> <p>qualifier</p>
   * </li> <li> <p>createdTime</p> </li> <li> <p>lastModifiedTime</p> </li> <li>
   * <p>lastModifiedBy</p> </li> <li> <p>groupingConfiguration.criteria</p> </li>
   * <li> <p>groupingConfiguration.values</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateFilterField">AWS
   * API Reference</a></p>
   */
  class MessageTemplateFilterField
  {
  public:
    AWS_QCONNECT_API MessageTemplateFilterField() = default;
    AWS_QCONNECT_API MessageTemplateFilterField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateFilterField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the attribute field to filter the message templates by.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MessageTemplateFilterField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of attribute field to filter the message template by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    MessageTemplateFilterField& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    MessageTemplateFilterField& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator to use for filtering.</p>
     */
    inline MessageTemplateFilterOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(MessageTemplateFilterOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline MessageTemplateFilterField& WithOperator(MessageTemplateFilterOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to treat null value as a match for the attribute field.</p>
     */
    inline bool GetIncludeNoExistence() const { return m_includeNoExistence; }
    inline bool IncludeNoExistenceHasBeenSet() const { return m_includeNoExistenceHasBeenSet; }
    inline void SetIncludeNoExistence(bool value) { m_includeNoExistenceHasBeenSet = true; m_includeNoExistence = value; }
    inline MessageTemplateFilterField& WithIncludeNoExistence(bool value) { SetIncludeNoExistence(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    MessageTemplateFilterOperator m_operator{MessageTemplateFilterOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    bool m_includeNoExistence{false};
    bool m_includeNoExistenceHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
