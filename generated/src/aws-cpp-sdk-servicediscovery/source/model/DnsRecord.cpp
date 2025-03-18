/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/DnsRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

DnsRecord::DnsRecord(JsonView jsonValue)
{
  *this = jsonValue;
}

DnsRecord& DnsRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RecordTypeMapper::GetRecordTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TTL"))
  {
    m_tTL = jsonValue.GetInt64("TTL");
    m_tTLHasBeenSet = true;
  }
  return *this;
}

JsonValue DnsRecord::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RecordTypeMapper::GetNameForRecordType(m_type));
  }

  if(m_tTLHasBeenSet)
  {
   payload.WithInt64("TTL", m_tTL);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
