/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentAttributeBoostingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

DocumentAttributeBoostingConfiguration::DocumentAttributeBoostingConfiguration() : 
    m_dateConfigurationHasBeenSet(false),
    m_numberConfigurationHasBeenSet(false),
    m_stringConfigurationHasBeenSet(false),
    m_stringListConfigurationHasBeenSet(false)
{
}

DocumentAttributeBoostingConfiguration::DocumentAttributeBoostingConfiguration(JsonView jsonValue) : 
    m_dateConfigurationHasBeenSet(false),
    m_numberConfigurationHasBeenSet(false),
    m_stringConfigurationHasBeenSet(false),
    m_stringListConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentAttributeBoostingConfiguration& DocumentAttributeBoostingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dateConfiguration"))
  {
    m_dateConfiguration = jsonValue.GetObject("dateConfiguration");

    m_dateConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberConfiguration"))
  {
    m_numberConfiguration = jsonValue.GetObject("numberConfiguration");

    m_numberConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringConfiguration"))
  {
    m_stringConfiguration = jsonValue.GetObject("stringConfiguration");

    m_stringConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringListConfiguration"))
  {
    m_stringListConfiguration = jsonValue.GetObject("stringListConfiguration");

    m_stringListConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentAttributeBoostingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dateConfigurationHasBeenSet)
  {
   payload.WithObject("dateConfiguration", m_dateConfiguration.Jsonize());

  }

  if(m_numberConfigurationHasBeenSet)
  {
   payload.WithObject("numberConfiguration", m_numberConfiguration.Jsonize());

  }

  if(m_stringConfigurationHasBeenSet)
  {
   payload.WithObject("stringConfiguration", m_stringConfiguration.Jsonize());

  }

  if(m_stringListConfigurationHasBeenSet)
  {
   payload.WithObject("stringListConfiguration", m_stringListConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
