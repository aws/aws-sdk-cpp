/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/InspectionDataResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

InspectionDataResponse::InspectionDataResponse() : 
    m_protocolHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
}

InspectionDataResponse::InspectionDataResponse(JsonView jsonValue) : 
    m_protocolHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
  *this = jsonValue;
}

InspectionDataResponse& InspectionDataResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = jsonValue.GetString("protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetString("statusCode");

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("headers"))
  {
    m_headers = jsonValue.GetString("headers");

    m_headersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetString("body");

    m_bodyHasBeenSet = true;
  }

  return *this;
}

JsonValue InspectionDataResponse::Jsonize() const
{
  JsonValue payload;

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", m_protocol);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", m_statusCode);

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_headersHasBeenSet)
  {
   payload.WithString("headers", m_headers);

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("body", m_body);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
