/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/AttributeValueOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The target document attribute or metadata field you want to alter when
   * ingesting documents into Amazon Q.</p> <p>For example, you can delete all
   * customer identification numbers associated with the documents, stored in the
   * document metadata field called 'Customer_ID' by setting the target key as
   * 'Customer_ID' and the deletion flag to <code>TRUE</code>. This removes all
   * customer ID values in the field 'Customer_ID'. This would scrub personally
   * identifiable information from each document's metadata.</p> <p>Amazon Q can't
   * create a target field if it has not already been created as an index field.
   * After you create your index field, you can create a document metadata field
   * using <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeTarget.html">
   * <code>DocumentAttributeTarget</code> </a>. Amazon Q will then map your newly
   * created document attribute to your index field.</p> <p>You can also use this
   * with <a
   * href="https://docs.aws.amazon.com/amazonq/latest/api-reference/API_DocumentAttributeCondition.html">
   * <code>DocumentAttributeCondition</code> </a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentAttributeTarget">AWS
   * API Reference</a></p>
   */
  class DocumentAttributeTarget
  {
  public:
    AWS_QBUSINESS_API DocumentAttributeTarget();
    AWS_QBUSINESS_API DocumentAttributeTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentAttributeTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>TRUE</code> to delete the existing target value for your specified
     * target attribute key. You cannot create a target value and set this to
     * <code>TRUE</code>.</p>
     */
    inline const AttributeValueOperator& GetAttributeValueOperator() const{ return m_attributeValueOperator; }

    /**
     * <p> <code>TRUE</code> to delete the existing target value for your specified
     * target attribute key. You cannot create a target value and set this to
     * <code>TRUE</code>.</p>
     */
    inline bool AttributeValueOperatorHasBeenSet() const { return m_attributeValueOperatorHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to delete the existing target value for your specified
     * target attribute key. You cannot create a target value and set this to
     * <code>TRUE</code>.</p>
     */
    inline void SetAttributeValueOperator(const AttributeValueOperator& value) { m_attributeValueOperatorHasBeenSet = true; m_attributeValueOperator = value; }

    /**
     * <p> <code>TRUE</code> to delete the existing target value for your specified
     * target attribute key. You cannot create a target value and set this to
     * <code>TRUE</code>.</p>
     */
    inline void SetAttributeValueOperator(AttributeValueOperator&& value) { m_attributeValueOperatorHasBeenSet = true; m_attributeValueOperator = std::move(value); }

    /**
     * <p> <code>TRUE</code> to delete the existing target value for your specified
     * target attribute key. You cannot create a target value and set this to
     * <code>TRUE</code>.</p>
     */
    inline DocumentAttributeTarget& WithAttributeValueOperator(const AttributeValueOperator& value) { SetAttributeValueOperator(value); return *this;}

    /**
     * <p> <code>TRUE</code> to delete the existing target value for your specified
     * target attribute key. You cannot create a target value and set this to
     * <code>TRUE</code>.</p>
     */
    inline DocumentAttributeTarget& WithAttributeValueOperator(AttributeValueOperator&& value) { SetAttributeValueOperator(std::move(value)); return *this;}


    /**
     * <p>The identifier of the target document attribute or metadata field. For
     * example, 'Department' could be an identifier for the target attribute or
     * metadata field that includes the department names associated with the
     * documents.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The identifier of the target document attribute or metadata field. For
     * example, 'Department' could be an identifier for the target attribute or
     * metadata field that includes the department names associated with the
     * documents.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The identifier of the target document attribute or metadata field. For
     * example, 'Department' could be an identifier for the target attribute or
     * metadata field that includes the department names associated with the
     * documents.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The identifier of the target document attribute or metadata field. For
     * example, 'Department' could be an identifier for the target attribute or
     * metadata field that includes the department names associated with the
     * documents.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The identifier of the target document attribute or metadata field. For
     * example, 'Department' could be an identifier for the target attribute or
     * metadata field that includes the department names associated with the
     * documents.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The identifier of the target document attribute or metadata field. For
     * example, 'Department' could be an identifier for the target attribute or
     * metadata field that includes the department names associated with the
     * documents.</p>
     */
    inline DocumentAttributeTarget& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The identifier of the target document attribute or metadata field. For
     * example, 'Department' could be an identifier for the target attribute or
     * metadata field that includes the department names associated with the
     * documents.</p>
     */
    inline DocumentAttributeTarget& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The identifier of the target document attribute or metadata field. For
     * example, 'Department' could be an identifier for the target attribute or
     * metadata field that includes the department names associated with the
     * documents.</p>
     */
    inline DocumentAttributeTarget& WithKey(const char* value) { SetKey(value); return *this;}


    
    inline const DocumentAttributeValue& GetValue() const{ return m_value; }

    
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    
    inline void SetValue(const DocumentAttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline void SetValue(DocumentAttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    
    inline DocumentAttributeTarget& WithValue(const DocumentAttributeValue& value) { SetValue(value); return *this;}

    
    inline DocumentAttributeTarget& WithValue(DocumentAttributeValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    AttributeValueOperator m_attributeValueOperator;
    bool m_attributeValueOperatorHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    DocumentAttributeValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
