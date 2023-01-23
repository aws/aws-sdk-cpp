/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableFieldURLConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TableFieldURLConfiguration::TableFieldURLConfiguration() : 
    m_linkConfigurationHasBeenSet(false),
    m_imageConfigurationHasBeenSet(false)
{
}

TableFieldURLConfiguration::TableFieldURLConfiguration(JsonView jsonValue) : 
    m_linkConfigurationHasBeenSet(false),
    m_imageConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

TableFieldURLConfiguration& TableFieldURLConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LinkConfiguration"))
  {
    m_linkConfiguration = jsonValue.GetObject("LinkConfiguration");

    m_linkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageConfiguration"))
  {
    m_imageConfiguration = jsonValue.GetObject("ImageConfiguration");

    m_imageConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue TableFieldURLConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_linkConfigurationHasBeenSet)
  {
   payload.WithObject("LinkConfiguration", m_linkConfiguration.Jsonize());

  }

  if(m_imageConfigurationHasBeenSet)
  {
   payload.WithObject("ImageConfiguration", m_imageConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
