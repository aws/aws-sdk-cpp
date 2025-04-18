/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/MessageTemplateQueryOperator.h>
#include <aws/qconnect/model/Priority.h>
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
   * <p>The message template fields to query message templates by. The following is
   * the list of supported field names:</p> <ul> <li> <p>name</p> </li> <li>
   * <p>description</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateQueryField">AWS
   * API Reference</a></p>
   */
  class MessageTemplateQueryField
  {
  public:
    AWS_QCONNECT_API MessageTemplateQueryField() = default;
    AWS_QCONNECT_API MessageTemplateQueryField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateQueryField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the attribute to query the message templates by.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MessageTemplateQueryField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of the attribute to query the message templates by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    MessageTemplateQueryField& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    MessageTemplateQueryField& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operator to use for matching attribute field values in the query.</p>
     */
    inline MessageTemplateQueryOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(MessageTemplateQueryOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline MessageTemplateQueryField& WithOperator(MessageTemplateQueryOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the query expects only exact matches on the attribute field values.
     * The results of the query will only include exact matches if this parameter is
     * set to false.</p>
     */
    inline bool GetAllowFuzziness() const { return m_allowFuzziness; }
    inline bool AllowFuzzinessHasBeenSet() const { return m_allowFuzzinessHasBeenSet; }
    inline void SetAllowFuzziness(bool value) { m_allowFuzzinessHasBeenSet = true; m_allowFuzziness = value; }
    inline MessageTemplateQueryField& WithAllowFuzziness(bool value) { SetAllowFuzziness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The importance of the attribute field when calculating query result relevancy
     * scores. The value set for this parameter affects the ordering of search
     * results.</p>
     */
    inline Priority GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(Priority value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline MessageTemplateQueryField& WithPriority(Priority value) { SetPriority(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    MessageTemplateQueryOperator m_operator{MessageTemplateQueryOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    bool m_allowFuzziness{false};
    bool m_allowFuzzinessHasBeenSet = false;

    Priority m_priority{Priority::NOT_SET};
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
