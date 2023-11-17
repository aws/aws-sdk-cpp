/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/ExternalSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

ExternalSourceConfiguration::ExternalSourceConfiguration() : 
    m_configurationHasBeenSet(false),
    m_source(ExternalSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
}

ExternalSourceConfiguration::ExternalSourceConfiguration(JsonView jsonValue) : 
    m_configurationHasBeenSet(false),
    m_source(ExternalSource::NOT_SET),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalSourceConfiguration& ExternalSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = ExternalSourceMapper::GetExternalSourceForName(jsonValue.GetString("source"));

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", ExternalSourceMapper::GetNameForExternalSource(m_source));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
