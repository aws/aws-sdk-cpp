/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/DocumentEnrichmentConditionOperator.h>
#include <aws/qbusiness/model/DocumentAttributeValue.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The condition used for the target document attribute or metadata field when
   * ingesting documents into Amazon Q Business. You use this with <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeTarget.html">
   * <code>DocumentAttributeTarget</code> </a> to apply the condition.</p> <p>For
   * example, you can create the 'Department' target field and have it prefill
   * department names associated with the documents based on information in the
   * 'Source_URI' field. Set the condition that if the 'Source_URI' field contains
   * 'financial' in its URI value, then prefill the target field 'Department' with
   * the target value 'Finance' for the document.</p> <p>Amazon Q Business can't
   * create a target field if it has not already been created as an index field.
   * After you create your index field, you can create a document metadata field
   * using <code>DocumentAttributeTarget</code>. Amazon Q Business then will map your
   * newly created metadata field to your index field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentAttributeCondition">AWS
   * API Reference</a></p>
   */
  class DocumentAttributeCondition
  {
  public:
    AWS_QBUSINESS_API DocumentAttributeCondition() = default;
    AWS_QBUSINESS_API DocumentAttributeCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentAttributeCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the document attribute used for the condition.</p> <p>For
     * example, 'Source_URI' could be an identifier for the attribute or metadata field
     * that contains source URIs associated with the documents.</p> <p>Amazon Q
     * Business currently doesn't support <code>_document_body</code> as an attribute
     * key used for the condition.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    DocumentAttributeCondition& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the document attribute used for the condition.</p> <p>For
     * example, 'Source_URI' could be an identifier for the attribute or metadata field
     * that contains source URIs associated with the documents.</p> <p>Amazon Q
     * Business currently does not support <code>_document_body</code> as an attribute
     * key used for the condition.</p>
     */
    inline DocumentEnrichmentConditionOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(DocumentEnrichmentConditionOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline DocumentAttributeCondition& WithOperator(DocumentEnrichmentConditionOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    
    inline const DocumentAttributeValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = DocumentAttributeValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = DocumentAttributeValue>
    DocumentAttributeCondition& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    DocumentEnrichmentConditionOperator m_operator{DocumentEnrichmentConditionOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    DocumentAttributeValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
