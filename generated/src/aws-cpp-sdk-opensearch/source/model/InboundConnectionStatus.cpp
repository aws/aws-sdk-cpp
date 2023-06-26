/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/InboundConnectionStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

InboundConnectionStatus::InboundConnectionStatus() : 
    m_statusCode(InboundConnectionStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

InboundConnectionStatus::InboundConnectionStatus(JsonView jsonValue) : 
    m_statusCode(InboundConnectionStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

InboundConnectionStatus& InboundConnectionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = InboundConnectionStatusCodeMapper::GetInboundConnectionStatusCodeForName(jsonValue.GetString("StatusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue InboundConnectionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", InboundConnectionStatusCodeMapper::GetNameForInboundConnectionStatusCode(m_statusCode));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
