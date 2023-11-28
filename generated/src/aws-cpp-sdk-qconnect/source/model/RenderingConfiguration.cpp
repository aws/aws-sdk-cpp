/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/RenderingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

RenderingConfiguration::RenderingConfiguration() : 
    m_templateUriHasBeenSet(false)
{
}

RenderingConfiguration::RenderingConfiguration(JsonView jsonValue) : 
    m_templateUriHasBeenSet(false)
{
  *this = jsonValue;
}

RenderingConfiguration& RenderingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateUri"))
  {
    m_templateUri = jsonValue.GetString("templateUri");

    m_templateUriHasBeenSet = true;
  }

  return *this;
}

JsonValue RenderingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_templateUriHasBeenSet)
  {
   payload.WithString("templateUri", m_templateUri);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
