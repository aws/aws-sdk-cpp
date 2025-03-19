/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{

  /**
   * <p>The user-specified message attribute value. For string data types, the value
   * attribute has the same restrictions on the content as the message body. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>.</p>
   * <p>Name, type, and value must not be empty or null. In addition, the message
   * body should not be empty or null. All parts of the message attribute, including
   * name, type, and value, are included in the message size restriction, which is
   * currently 256 KB (262,144 bytes). For more information, see <a
   * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMessageAttributes.html">Amazon
   * SNS message attributes</a> and <a
   * href="https://docs.aws.amazon.com/sns/latest/dg/sms_publish-to-phone.html">Publishing
   * to a mobile phone</a> in the <i>Amazon SNS Developer Guide.</i> </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/MessageAttributeValue">AWS
   * API Reference</a></p>
   */
  class MessageAttributeValue
  {
  public:
    AWS_SNS_API MessageAttributeValue() = default;
    AWS_SNS_API MessageAttributeValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SNS_API MessageAttributeValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SNS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SNS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Amazon SNS supports the following logical data types: String, String.Array,
     * Number, and Binary. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/SNSMessageAttributes.html#SNSMessageAttributes.DataTypes">Message
     * Attribute Data Types</a>.</p>
     */
    inline const Aws::String& GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    template<typename DataTypeT = Aws::String>
    void SetDataType(DataTypeT&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::forward<DataTypeT>(value); }
    template<typename DataTypeT = Aws::String>
    MessageAttributeValue& WithDataType(DataTypeT&& value) { SetDataType(std::forward<DataTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Strings are Unicode with UTF8 binary encoding. For a list of code values, see
     * <a href="https://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">ASCII
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
     * <p>Binary type attributes can store any binary data, for example, compressed
     * data, encrypted data, or images.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBinaryValue() const { return m_binaryValue; }
    inline bool BinaryValueHasBeenSet() const { return m_binaryValueHasBeenSet; }
    template<typename BinaryValueT = Aws::Utils::ByteBuffer>
    void SetBinaryValue(BinaryValueT&& value) { m_binaryValueHasBeenSet = true; m_binaryValue = std::forward<BinaryValueT>(value); }
    template<typename BinaryValueT = Aws::Utils::ByteBuffer>
    MessageAttributeValue& WithBinaryValue(BinaryValueT&& value) { SetBinaryValue(std::forward<BinaryValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Utils::ByteBuffer m_binaryValue{};
    bool m_binaryValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
