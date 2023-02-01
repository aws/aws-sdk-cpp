/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/RejectedRecordsException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

RejectedRecordsException::RejectedRecordsException() : 
    m_messageHasBeenSet(false),
    m_rejectedRecordsHasBeenSet(false)
{
}

RejectedRecordsException::RejectedRecordsException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_rejectedRecordsHasBeenSet(false)
{
  *this = jsonValue;
}

RejectedRecordsException& RejectedRecordsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RejectedRecords"))
  {
    Aws::Utils::Array<JsonView> rejectedRecordsJsonList = jsonValue.GetArray("RejectedRecords");
    for(unsigned rejectedRecordsIndex = 0; rejectedRecordsIndex < rejectedRecordsJsonList.GetLength(); ++rejectedRecordsIndex)
    {
      m_rejectedRecords.push_back(rejectedRecordsJsonList[rejectedRecordsIndex].AsObject());
    }
    m_rejectedRecordsHasBeenSet = true;
  }

  return *this;
}

JsonValue RejectedRecordsException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_rejectedRecordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rejectedRecordsJsonList(m_rejectedRecords.size());
   for(unsigned rejectedRecordsIndex = 0; rejectedRecordsIndex < rejectedRecordsJsonList.GetLength(); ++rejectedRecordsIndex)
   {
     rejectedRecordsJsonList[rejectedRecordsIndex].AsObject(m_rejectedRecords[rejectedRecordsIndex].Jsonize());
   }
   payload.WithArray("RejectedRecords", std::move(rejectedRecordsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
