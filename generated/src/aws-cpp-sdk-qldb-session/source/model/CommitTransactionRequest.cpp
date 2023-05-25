/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/CommitTransactionRequest.h>
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

CommitTransactionRequest::CommitTransactionRequest() : 
    m_transactionIdHasBeenSet(false),
    m_commitDigestHasBeenSet(false)
{
}

CommitTransactionRequest::CommitTransactionRequest(JsonView jsonValue) : 
    m_transactionIdHasBeenSet(false),
    m_commitDigestHasBeenSet(false)
{
  *this = jsonValue;
}

CommitTransactionRequest& CommitTransactionRequest::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue CommitTransactionRequest::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
