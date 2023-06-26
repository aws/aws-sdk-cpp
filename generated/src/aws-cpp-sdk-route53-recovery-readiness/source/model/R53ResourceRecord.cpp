/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/R53ResourceRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

R53ResourceRecord::R53ResourceRecord() : 
    m_domainNameHasBeenSet(false),
    m_recordSetIdHasBeenSet(false)
{
}

R53ResourceRecord::R53ResourceRecord(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_recordSetIdHasBeenSet(false)
{
  *this = jsonValue;
}

R53ResourceRecord& R53ResourceRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordSetId"))
  {
    m_recordSetId = jsonValue.GetString("recordSetId");

    m_recordSetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue R53ResourceRecord::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_recordSetIdHasBeenSet)
  {
   payload.WithString("recordSetId", m_recordSetId);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
