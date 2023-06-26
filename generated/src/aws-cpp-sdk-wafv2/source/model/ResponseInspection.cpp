/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ResponseInspection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ResponseInspection::ResponseInspection() : 
    m_statusCodeHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_bodyContainsHasBeenSet(false),
    m_jsonHasBeenSet(false)
{
}

ResponseInspection::ResponseInspection(JsonView jsonValue) : 
    m_statusCodeHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_bodyContainsHasBeenSet(false),
    m_jsonHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseInspection& ResponseInspection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = jsonValue.GetObject("StatusCode");

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Header"))
  {
    m_header = jsonValue.GetObject("Header");

    m_headerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BodyContains"))
  {
    m_bodyContains = jsonValue.GetObject("BodyContains");

    m_bodyContainsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Json"))
  {
    m_json = jsonValue.GetObject("Json");

    m_jsonHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseInspection::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodeHasBeenSet)
  {
   payload.WithObject("StatusCode", m_statusCode.Jsonize());

  }

  if(m_headerHasBeenSet)
  {
   payload.WithObject("Header", m_header.Jsonize());

  }

  if(m_bodyContainsHasBeenSet)
  {
   payload.WithObject("BodyContains", m_bodyContains.Jsonize());

  }

  if(m_jsonHasBeenSet)
  {
   payload.WithObject("Json", m_json.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
