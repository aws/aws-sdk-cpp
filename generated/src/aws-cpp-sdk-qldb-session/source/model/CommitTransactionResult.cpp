/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/CommitTransactionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

CommitTransactionResult::CommitTransactionResult() : 
    m_transactionIdHasBeenSet(false),
    m_commitDigestHasBeenSet(false),
    m_timingInformationHasBeenSet(false),
    m_consumedIOsHasBeenSet(false)
{
}

CommitTransactionResult::CommitTransactionResult(JsonView jsonValue) : 
    m_transactionIdHasBeenSet(false),
    m_commitDigestHasBeenSet(false),
    m_timingInformationHasBeenSet(false),
    m_consumedIOsHasBeenSet(false)
{
  *this = jsonValue;
}

CommitTransactionResult& CommitTransactionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransactionId"))
  {
    m_transactionId = jsonValue.GetString("TransactionId");

    m_transactionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommitDigest"))
  {
    m_commitDigest = HashingUtils::Base64Decode(jsonValue.GetString("CommitDigest"));
    m_commitDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimingInformation"))
  {
    m_timingInformation = jsonValue.GetObject("TimingInformation");

    m_timingInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConsumedIOs"))
  {
    m_consumedIOs = jsonValue.GetObject("ConsumedIOs");

    m_consumedIOsHasBeenSet = true;
  }

  return *this;
}

JsonValue CommitTransactionResult::Jsonize() const
{
  JsonValue payload;

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  if(m_commitDigestHasBeenSet)
  {
   payload.WithString("CommitDigest", HashingUtils::Base64Encode(m_commitDigest));
  }

  if(m_timingInformationHasBeenSet)
  {
   payload.WithObject("TimingInformation", m_timingInformation.Jsonize());

  }

  if(m_consumedIOsHasBeenSet)
  {
   payload.WithObject("ConsumedIOs", m_consumedIOs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
