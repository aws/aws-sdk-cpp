/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/Connector.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

Connector::Connector() : 
    m_arnHasBeenSet(false),
    m_connectorIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ssmCommandConfigHasBeenSet(false),
    m_ssmInstanceIDHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

Connector::Connector(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_connectorIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ssmCommandConfigHasBeenSet(false),
    m_ssmInstanceIDHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
  *this = jsonValue;
}

Connector& Connector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorID"))
  {
    m_connectorID = jsonValue.GetString("connectorID");

    m_connectorIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssmCommandConfig"))
  {
    m_ssmCommandConfig = jsonValue.GetObject("ssmCommandConfig");

    m_ssmCommandConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssmInstanceID"))
  {
    m_ssmInstanceID = jsonValue.GetString("ssmInstanceID");

    m_ssmInstanceIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Connector::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_connectorIDHasBeenSet)
  {
   payload.WithString("connectorID", m_connectorID);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ssmCommandConfigHasBeenSet)
  {
   payload.WithObject("ssmCommandConfig", m_ssmCommandConfig.Jsonize());

  }

  if(m_ssmInstanceIDHasBeenSet)
  {
   payload.WithString("ssmInstanceID", m_ssmInstanceID);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
