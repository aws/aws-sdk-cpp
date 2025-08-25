/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace SQS
{
namespace Model
{

  /**
   * <p>The user-specified message attribute value. For string data types, the
   * <code>Value</code> attribute has the same restrictions on the content as the
   * message body. For more information, see <code> <a>SendMessage</a>.</code> </p>
   * <p> <code>Name</code>, <code>type</code>, <code>value</code> and the message
   * body must not be empty or null. All parts of the message attribute, including
   * <code>Name</code>, <code>Type</code>, and <code>Value</code>, are part of the
   * message size restriction (1 MiB or 1,048,576 bytes).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/MessageAttributeValue">AWS
   * API Reference</a></p>
   */
  class MessageAttributeValue
  {
  public:
    AWS_SQS_API MessageAttributeValue() = default;
    AWS_SQS_API MessageAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API MessageAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Strings are Unicode with UTF-8 binary encoding. For a list of code values,
     * see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
     * Printable Characters</a>.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    MessageAttributeValue& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Binary type attributes can store any binary data, such as compressed data,
     * encrypted data, or images.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBinaryValue() const { return m_binaryValue; }
    inline bool BinaryValueHasBeenSet() const { return m_binaryValueHasBeenSet; }
    template<typename BinaryValueT = Aws::Utils::ByteBuffer>
    void SetBinaryValue(BinaryValueT&& value) { m_binaryValueHasBeenSet = true; m_binaryValue = std::forward<BinaryValueT>(value); }
    template<typename BinaryValueT = Aws::Utils::ByteBuffer>
    MessageAttributeValue& WithBinaryValue(BinaryValueT&& value) { SetBinaryValue(std::forward<BinaryValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringListValues() const { return m_stringListValues; }
    inline bool StringListValuesHasBeenSet() const { return m_stringListValuesHasBeenSet; }
    template<typename StringListValuesT = Aws::Vector<Aws::String>>
    void SetStringListValues(StringListValuesT&& value) { m_stringListValuesHasBeenSet = true; m_stringListValues = std::forward<StringListValuesT>(value); }
    template<typename StringListValuesT = Aws::Vector<Aws::String>>
    MessageAttributeValue& WithStringListValues(StringListValuesT&& value) { SetStringListValues(std::forward<StringListValuesT>(value)); return *this;}
    template<typename StringListValuesT = Aws::String>
    MessageAttributeValue& AddStringListValues(StringListValuesT&& value) { m_stringListValuesHasBeenSet = true; m_stringListValues.emplace_back(std::forward<StringListValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Not implemented. Reserved for future use.</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetBinaryListValues() const { return m_binaryListValues; }
    inline bool BinaryListValuesHasBeenSet() const { return m_binaryListValuesHasBeenSet; }
    template<typename BinaryListValuesT = Aws::Vector<Aws::Utils::ByteBuffer>>
    void SetBinaryListValues(BinaryListValuesT&& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues = std::forward<BinaryListValuesT>(value); }
    template<typename BinaryListValuesT = Aws::Vector<Aws::Utils::ByteBuffer>>
    MessageAttributeValue& WithBinaryListValues(BinaryListValuesT&& value) { SetBinaryListValues(std::forward<BinaryListValuesT>(value)); return *this;}
    template<typename BinaryListValuesT = Aws::Utils::ByteBuffer>
    MessageAttributeValue& AddBinaryListValues(BinaryListValuesT&& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues.emplace_back(std::forward<BinaryListValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Amazon SQS supports the following logical data types: <code>String</code>,
     * <code>Number</code>, and <code>Binary</code>. For the <code>Number</code> data
     * type, you must use <code>StringValue</code>.</p> <p>You can also append custom
     * labels. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-metadata.html#sqs-message-attributes">Amazon
     * SQS Message Attributes</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = Aws::String>
    void SetDataType(DataTypeT&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::forward<DataTypeT>(value); }
    template<typename DataTypeT = Aws::String>
    MessageAttributeValue& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Utils::ByteBuffer m_binaryValue{};
    bool m_binaryValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringListValues;
    bool m_stringListValuesHasBeenSet = false;

    Aws::Vector<Aws::Utils::ByteBuffer> m_binaryListValues;
    bool m_binaryListValuesHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
