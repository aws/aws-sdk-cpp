/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/DuplicateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

DuplicateRequest::DuplicateRequest() : 
    m_requestIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

DuplicateRequest::DuplicateRequest(JsonView jsonValue) : 
    m_requestIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

DuplicateRequest& DuplicateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

    m_requestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue DuplicateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
