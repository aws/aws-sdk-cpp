/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Record.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Record::Record() : 
    m_jsonPathHasBeenSet(false),
    m_recordIndex(0),
    m_recordIndexHasBeenSet(false)
{
}

Record::Record(JsonView jsonValue) : 
    m_jsonPathHasBeenSet(false),
    m_recordIndex(0),
    m_recordIndexHasBeenSet(false)
{
  *this = jsonValue;
}

Record& Record::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JsonPath"))
  {
    m_jsonPath = jsonValue.GetString("JsonPath");

    m_jsonPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordIndex"))
  {
    m_recordIndex = jsonValue.GetInt64("RecordIndex");

    m_recordIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue Record::Jsonize() const
{
  JsonValue payload;

  if(m_jsonPathHasBeenSet)
  {
   payload.WithString("JsonPath", m_jsonPath);

  }

  if(m_recordIndexHasBeenSet)
  {
   payload.WithInt64("RecordIndex", m_recordIndex);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
