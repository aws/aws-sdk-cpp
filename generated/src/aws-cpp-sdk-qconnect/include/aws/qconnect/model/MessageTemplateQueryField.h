/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/MessageTemplateQueryOperator.h>
#include <aws/qconnect/model/Priority.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_QCONNECT_API MessageTemplateQueryField();
    AWS_QCONNECT_API MessageTemplateQueryField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateQueryField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the query expects only exact matches on the attribute field values.
     * The results of the query will only include exact matches if this parameter is
     * set to false.</p>
     */
    inline bool GetAllowFuzziness() const{ return m_allowFuzziness; }
    inline bool AllowFuzzinessHasBeenSet() const { return m_allowFuzzinessHasBeenSet; }
    inline void SetAllowFuzziness(bool value) { m_allowFuzzinessHasBeenSet = true; m_allowFuzziness = value; }
    inline MessageTemplateQueryField& WithAllowFuzziness(bool value) { SetAllowFuzziness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute to query the message templates by.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MessageTemplateQueryField& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MessageTemplateQueryField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MessageTemplateQueryField& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use for matching attribute field values in the query.</p>
     */
    inline const MessageTemplateQueryOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const MessageTemplateQueryOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(MessageTemplateQueryOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline MessageTemplateQueryField& WithOperator(const MessageTemplateQueryOperator& value) { SetOperator(value); return *this;}
    inline MessageTemplateQueryField& WithOperator(MessageTemplateQueryOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The importance of the attribute field when calculating query result relevancy
     * scores. The value set for this parameter affects the ordering of search
     * results.</p>
     */
    inline const Priority& GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(const Priority& value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline void SetPriority(Priority&& value) { m_priorityHasBeenSet = true; m_priority = std::move(value); }
    inline MessageTemplateQueryField& WithPriority(const Priority& value) { SetPriority(value); return *this;}
    inline MessageTemplateQueryField& WithPriority(Priority&& value) { SetPriority(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of the attribute to query the message templates by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline MessageTemplateQueryField& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline MessageTemplateQueryField& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline MessageTemplateQueryField& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline MessageTemplateQueryField& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline MessageTemplateQueryField& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    bool m_allowFuzziness;
    bool m_allowFuzzinessHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MessageTemplateQueryOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Priority m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
