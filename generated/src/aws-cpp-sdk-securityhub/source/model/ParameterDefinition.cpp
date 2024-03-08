/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ParameterDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ParameterDefinition::ParameterDefinition() : 
    m_descriptionHasBeenSet(false),
    m_configurationOptionsHasBeenSet(false)
{
}

ParameterDefinition::ParameterDefinition(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_configurationOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterDefinition& ParameterDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationOptions"))
  {
    m_configurationOptions = jsonValue.GetObject("ConfigurationOptions");

    m_configurationOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_configurationOptionsHasBeenSet)
  {
   payload.WithObject("ConfigurationOptions", m_configurationOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
