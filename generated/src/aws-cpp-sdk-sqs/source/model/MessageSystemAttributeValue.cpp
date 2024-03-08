/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/MessageSystemAttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SQS
{
namespace Model
{

MessageSystemAttributeValue::MessageSystemAttributeValue() : 
    m_stringValueHasBeenSet(false),
    m_binaryValueHasBeenSet(false),
    m_stringListValuesHasBeenSet(false),
    m_binaryListValuesHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

MessageSystemAttributeValue::MessageSystemAttributeValue(JsonView jsonValue) : 
    m_stringValueHasBeenSet(false),
    m_binaryValueHasBeenSet(false),
    m_stringListValuesHasBeenSet(false),
    m_binaryListValuesHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
  *this = jsonValue;
}

MessageSystemAttributeValue& MessageSystemAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringValue"))
  {
    m_stringValue = jsonValue.GetString("StringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BinaryValue"))
  {
    m_binaryValue = HashingUtils::Base64Decode(jsonValue.GetString("BinaryValue"));
    m_binaryValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StringListValues"))
  {
    Aws::Utils::Array<JsonView> stringListValuesJsonList = jsonValue.GetArray("StringListValues");
    for(unsigned stringListValuesIndex = 0; stringListValuesIndex < stringListValuesJsonList.GetLength(); ++stringListValuesIndex)
    {
      m_stringListValues.push_back(stringListValuesJsonList[stringListValuesIndex].AsString());
    }
    m_stringListValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BinaryListValues"))
  {
    Aws::Utils::Array<JsonView> binaryListValuesJsonList = jsonValue.GetArray("BinaryListValues");
    for(unsigned binaryListValuesIndex = 0; binaryListValuesIndex < binaryListValuesJsonList.GetLength(); ++binaryListValuesIndex)
    {
      m_binaryListValues.push_back(HashingUtils::Base64Decode(binaryListValuesJsonList[binaryListValuesIndex].AsString()));
    }
    m_binaryListValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataType"))
  {
    m_dataType = jsonValue.GetString("DataType");

    m_dataTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageSystemAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("StringValue", m_stringValue);

  }

  if(m_binaryValueHasBeenSet)
  {
   payload.WithString("BinaryValue", HashingUtils::Base64Encode(m_binaryValue));
  }

  if(m_stringListValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringListValuesJsonList(m_stringListValues.size());
   for(unsigned stringListValuesIndex = 0; stringListValuesIndex < stringListValuesJsonList.GetLength(); ++stringListValuesIndex)
   {
     stringListValuesJsonList[stringListValuesIndex].AsString(m_stringListValues[stringListValuesIndex]);
   }
   payload.WithArray("StringListValues", std::move(stringListValuesJsonList));

  }

  if(m_binaryListValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> binaryListValuesJsonList(m_binaryListValues.size());
   for(unsigned binaryListValuesIndex = 0; binaryListValuesIndex < binaryListValuesJsonList.GetLength(); ++binaryListValuesIndex)
   {
     binaryListValuesJsonList[binaryListValuesIndex].AsString(HashingUtils::Base64Encode(m_binaryListValues[binaryListValuesIndex]));
   }
   payload.WithArray("BinaryListValues", std::move(binaryListValuesJsonList));

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("DataType", m_dataType);

  }

  return payload;
}

} // namespace Model
} // namespace SQS
} // namespace Aws
