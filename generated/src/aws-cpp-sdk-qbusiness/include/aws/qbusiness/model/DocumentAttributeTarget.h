/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/DocumentAttributeValue.h>
#include <aws/qbusiness/model/AttributeValueOperator.h>
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
   * <p>The target document attribute or metadata field you want to alter when
   * ingesting documents into Amazon Q Business.</p> <p>For example, you can delete
   * all customer identification numbers associated with the documents, stored in the
   * document metadata field called 'Customer_ID' by setting the target key as
   * 'Customer_ID' and the deletion flag to <code>TRUE</code>. This removes all
   * customer ID values in the field 'Customer_ID'. This would scrub personally
   * identifiable information from each document's metadata.</p> <p>Amazon Q Business
   * can't create a target field if it has not already been created as an index
   * field. After you create your index field, you can create a document metadata
   * field using <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeTarget.html">
   * <code>DocumentAttributeTarget</code> </a>. Amazon Q Business will then map your
   * newly created document attribute to your index field.</p> <p>You can also use
   * this with <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeCondition.html">
   * <code>DocumentAttributeCondition</code> </a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentAttributeTarget">AWS
   * API Reference</a></p>
   */
  class DocumentAttributeTarget
  {
  public:
    AWS_QBUSINESS_API DocumentAttributeTarget() = default;
    AWS_QBUSINESS_API DocumentAttributeTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentAttributeTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the target document attribute or metadata field. For
     * example, 'Department' could be an identifier for the target attribute or
     * metadata field that includes the department names associated with the
     * documents.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    DocumentAttributeTarget& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocumentAttributeValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = DocumentAttributeValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = DocumentAttributeValue>
    DocumentAttributeTarget& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to delete the existing target value for your specified
     * target attribute key. You cannot create a target value and set this to
     * <code>TRUE</code>.</p>
     */
    inline AttributeValueOperator GetAttributeValueOperator() const { return m_attributeValueOperator; }
    inline bool AttributeValueOperatorHasBeenSet() const { return m_attributeValueOperatorHasBeenSet; }
    inline void SetAttributeValueOperator(AttributeValueOperator value) { m_attributeValueOperatorHasBeenSet = true; m_attributeValueOperator = value; }
    inline DocumentAttributeTarget& WithAttributeValueOperator(AttributeValueOperator value) { SetAttributeValueOperator(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    DocumentAttributeValue m_value;
    bool m_valueHasBeenSet = false;

    AttributeValueOperator m_attributeValueOperator{AttributeValueOperator::NOT_SET};
    bool m_attributeValueOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
