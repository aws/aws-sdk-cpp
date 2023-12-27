/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GremlinQueryStatusAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

GremlinQueryStatusAttributes::GremlinQueryStatusAttributes() : 
    m_messageHasBeenSet(false),
    m_code(0),
    m_codeHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

GremlinQueryStatusAttributes::GremlinQueryStatusAttributes(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_code(0),
    m_codeHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

GremlinQueryStatusAttributes& GremlinQueryStatusAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetInteger("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    m_attributes = jsonValue.GetObject("attributes");

    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue GremlinQueryStatusAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithInteger("code", m_code);

  }

  if(m_attributesHasBeenSet)
  {
    if(!m_attributes.View().IsNull())
    {
       payload.WithObject("attributes", JsonValue(m_attributes.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
