/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

DataSource::DataSource() : 
    m_dataLocationHasBeenSet(false)
{
}

DataSource::DataSource(JsonView jsonValue) : 
    m_dataLocationHasBeenSet(false)
{
  *this = jsonValue;
}

DataSource& DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataLocation"))
  {
    m_dataLocation = jsonValue.GetString("dataLocation");

    m_dataLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_dataLocationHasBeenSet)
  {
   payload.WithString("dataLocation", m_dataLocation);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
