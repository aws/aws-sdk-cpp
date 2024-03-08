/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SOARecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

SOARecord::SOARecord() : 
    m_primaryNameServerHasBeenSet(false),
    m_adminEmailHasBeenSet(false),
    m_serialNumber(0),
    m_serialNumberHasBeenSet(false)
{
}

SOARecord::SOARecord(JsonView jsonValue) : 
    m_primaryNameServerHasBeenSet(false),
    m_adminEmailHasBeenSet(false),
    m_serialNumber(0),
    m_serialNumberHasBeenSet(false)
{
  *this = jsonValue;
}

SOARecord& SOARecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrimaryNameServer"))
  {
    m_primaryNameServer = jsonValue.GetString("PrimaryNameServer");

    m_primaryNameServerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdminEmail"))
  {
    m_adminEmail = jsonValue.GetString("AdminEmail");

    m_adminEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SerialNumber"))
  {
    m_serialNumber = jsonValue.GetInt64("SerialNumber");

    m_serialNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue SOARecord::Jsonize() const
{
  JsonValue payload;

  if(m_primaryNameServerHasBeenSet)
  {
   payload.WithString("PrimaryNameServer", m_primaryNameServer);

  }

  if(m_adminEmailHasBeenSet)
  {
   payload.WithString("AdminEmail", m_adminEmail);

  }

  if(m_serialNumberHasBeenSet)
  {
   payload.WithInt64("SerialNumber", m_serialNumber);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
