/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

DataLakeException::DataLakeException() : 
    m_exceptionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

DataLakeException::DataLakeException(JsonView jsonValue) : 
    m_exceptionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_remediationHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeException& DataLakeException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exception"))
  {
    m_exception = jsonValue.GetString("exception");

    m_exceptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remediation"))
  {
    m_remediation = jsonValue.GetString("remediation");

    m_remediationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetString("timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeException::Jsonize() const
{
  JsonValue payload;

  if(m_exceptionHasBeenSet)
  {
   payload.WithString("exception", m_exception);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_remediationHasBeenSet)
  {
   payload.WithString("remediation", m_remediation);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
