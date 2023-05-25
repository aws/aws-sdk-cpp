/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/TagQueryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

TagQueryConfiguration::TagQueryConfiguration() : 
    m_tagKeyHasBeenSet(false)
{
}

TagQueryConfiguration::TagQueryConfiguration(JsonView jsonValue) : 
    m_tagKeyHasBeenSet(false)
{
  *this = jsonValue;
}

TagQueryConfiguration& TagQueryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tagKey"))
  {
    m_tagKey = jsonValue.GetString("tagKey");

    m_tagKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue TagQueryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("tagKey", m_tagKey);

  }

  return payload;
}

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
