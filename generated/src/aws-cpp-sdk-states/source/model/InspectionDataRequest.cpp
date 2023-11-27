/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/InspectionDataRequest.h>
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

InspectionDataRequest::InspectionDataRequest() : 
    m_protocolHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
}

InspectionDataRequest::InspectionDataRequest(JsonView jsonValue) : 
    m_protocolHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
  *this = jsonValue;
}

InspectionDataRequest& InspectionDataRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = jsonValue.GetString("protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("method"))
  {
    m_method = jsonValue.GetString("method");

    m_methodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
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

JsonValue InspectionDataRequest::Jsonize() const
{
  JsonValue payload;

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", m_protocol);

  }

  if(m_methodHasBeenSet)
  {
   payload.WithString("method", m_method);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

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
