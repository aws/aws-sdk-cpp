/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/MessageTemplateFilterOperator.h>
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
    AWS_QCONNECT_API MessageTemplateFilterField();
    AWS_QCONNECT_API MessageTemplateFilterField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateFilterField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to treat null value as a match for the attribute field.</p>
     */
    inline bool GetIncludeNoExistence() const{ return m_includeNoExistence; }
    inline bool IncludeNoExistenceHasBeenSet() const { return m_includeNoExistenceHasBeenSet; }
    inline void SetIncludeNoExistence(bool value) { m_includeNoExistenceHasBeenSet = true; m_includeNoExistence = value; }
    inline MessageTemplateFilterField& WithIncludeNoExistence(bool value) { SetIncludeNoExistence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attribute field to filter the message templates by.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MessageTemplateFilterField& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MessageTemplateFilterField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MessageTemplateFilterField& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use for filtering.</p>
     */
    inline const MessageTemplateFilterOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const MessageTemplateFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(MessageTemplateFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline MessageTemplateFilterField& WithOperator(const MessageTemplateFilterOperator& value) { SetOperator(value); return *this;}
    inline MessageTemplateFilterField& WithOperator(MessageTemplateFilterOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of attribute field to filter the message template by.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline MessageTemplateFilterField& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline MessageTemplateFilterField& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline MessageTemplateFilterField& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline MessageTemplateFilterField& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline MessageTemplateFilterField& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    bool m_includeNoExistence;
    bool m_includeNoExistenceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MessageTemplateFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
