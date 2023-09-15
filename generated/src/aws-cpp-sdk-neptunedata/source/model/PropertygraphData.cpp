/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/PropertygraphData.h>
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

PropertygraphData::PropertygraphData() : 
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
}

PropertygraphData::PropertygraphData(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
  *this = jsonValue;
}

PropertygraphData& PropertygraphData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("from"))
  {
    m_from = jsonValue.GetString("from");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("to"))
  {
    m_to = jsonValue.GetString("to");

    m_toHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertygraphData::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_valueHasBeenSet)
  {
    if(!m_value.View().IsNull())
    {
       payload.WithObject("value", JsonValue(m_value.View()));
    }
  }

  if(m_fromHasBeenSet)
  {
   payload.WithString("from", m_from);

  }

  if(m_toHasBeenSet)
  {
   payload.WithString("to", m_to);

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
