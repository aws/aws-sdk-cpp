/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/FetchPageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

FetchPageRequest::FetchPageRequest() : 
    m_transactionIdHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false)
{
}

FetchPageRequest::FetchPageRequest(JsonView jsonValue) : 
    m_transactionIdHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false)
{
  *this = jsonValue;
}

FetchPageRequest& FetchPageRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransactionId"))
  {
    m_transactionId = jsonValue.GetString("TransactionId");

    m_transactionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

    m_nextPageTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue FetchPageRequest::Jsonize() const
{
  JsonValue payload;

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("TransactionId", m_transactionId);

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
