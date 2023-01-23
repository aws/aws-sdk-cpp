/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/CloudWatchDashboard.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

CloudWatchDashboard::CloudWatchDashboard() : 
    m_nameHasBeenSet(false)
{
}

CloudWatchDashboard::CloudWatchDashboard(JsonView jsonValue) : 
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchDashboard& CloudWatchDashboard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchDashboard::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
