/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/PartitionKey.h>
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

PartitionKey::PartitionKey() : 
    m_type(PartitionKeyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enforcementInRecord(PartitionKeyEnforcementLevel::NOT_SET),
    m_enforcementInRecordHasBeenSet(false)
{
}

PartitionKey::PartitionKey(JsonView jsonValue) : 
    m_type(PartitionKeyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enforcementInRecord(PartitionKeyEnforcementLevel::NOT_SET),
    m_enforcementInRecordHasBeenSet(false)
{
  *this = jsonValue;
}

PartitionKey& PartitionKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = PartitionKeyTypeMapper::GetPartitionKeyTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnforcementInRecord"))
  {
    m_enforcementInRecord = PartitionKeyEnforcementLevelMapper::GetPartitionKeyEnforcementLevelForName(jsonValue.GetString("EnforcementInRecord"));

    m_enforcementInRecordHasBeenSet = true;
  }

  return *this;
}

JsonValue PartitionKey::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PartitionKeyTypeMapper::GetNameForPartitionKeyType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_enforcementInRecordHasBeenSet)
  {
   payload.WithString("EnforcementInRecord", PartitionKeyEnforcementLevelMapper::GetNameForPartitionKeyEnforcementLevel(m_enforcementInRecord));
  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
