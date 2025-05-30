﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

Event::Event(JsonView jsonValue)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceName"))
  {
    m_sourceName = jsonValue.GetString("SourceName");
    m_sourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("SourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetDouble("Date");
    m_dateHasBeenSet = true;
  }
  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("SourceName", m_sourceName);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", SourceTypeMapper::GetNameForSourceType(m_sourceType));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("Date", m_date.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
