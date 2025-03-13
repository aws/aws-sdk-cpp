/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/ResourceDetails.h>
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

ResourceDetails::ResourceDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceDetails& ResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tagValue"))
  {
    m_tagValue = jsonValue.GetString("tagValue");
    m_tagValueHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_tagValueHasBeenSet)
  {
   payload.WithString("tagValue", m_tagValue);

  }

  return payload;
}

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
