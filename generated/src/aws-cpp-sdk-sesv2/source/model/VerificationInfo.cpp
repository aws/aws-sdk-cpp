/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/VerificationInfo.h>
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

VerificationInfo::VerificationInfo() : 
    m_lastCheckedTimestampHasBeenSet(false),
    m_lastSuccessTimestampHasBeenSet(false),
    m_errorType(VerificationError::NOT_SET),
    m_errorTypeHasBeenSet(false),
    m_sOARecordHasBeenSet(false)
{
}

VerificationInfo::VerificationInfo(JsonView jsonValue) : 
    m_lastCheckedTimestampHasBeenSet(false),
    m_lastSuccessTimestampHasBeenSet(false),
    m_errorType(VerificationError::NOT_SET),
    m_errorTypeHasBeenSet(false),
    m_sOARecordHasBeenSet(false)
{
  *this = jsonValue;
}

VerificationInfo& VerificationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastCheckedTimestamp"))
  {
    m_lastCheckedTimestamp = jsonValue.GetDouble("LastCheckedTimestamp");

    m_lastCheckedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessTimestamp"))
  {
    m_lastSuccessTimestamp = jsonValue.GetDouble("LastSuccessTimestamp");

    m_lastSuccessTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorType"))
  {
    m_errorType = VerificationErrorMapper::GetVerificationErrorForName(jsonValue.GetString("ErrorType"));

    m_errorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SOARecord"))
  {
    m_sOARecord = jsonValue.GetObject("SOARecord");

    m_sOARecordHasBeenSet = true;
  }

  return *this;
}

JsonValue VerificationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_lastCheckedTimestampHasBeenSet)
  {
   payload.WithDouble("LastCheckedTimestamp", m_lastCheckedTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastSuccessTimestampHasBeenSet)
  {
   payload.WithDouble("LastSuccessTimestamp", m_lastSuccessTimestamp.SecondsWithMSPrecision());
  }

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("ErrorType", VerificationErrorMapper::GetNameForVerificationError(m_errorType));
  }

  if(m_sOARecordHasBeenSet)
  {
   payload.WithObject("SOARecord", m_sOARecord.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
