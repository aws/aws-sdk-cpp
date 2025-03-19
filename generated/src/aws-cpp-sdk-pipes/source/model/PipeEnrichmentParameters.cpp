/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeEnrichmentParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeEnrichmentParameters::PipeEnrichmentParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

PipeEnrichmentParameters& PipeEnrichmentParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputTemplate"))
  {
    m_inputTemplate = jsonValue.GetString("InputTemplate");
    m_inputTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HttpParameters"))
  {
    m_httpParameters = jsonValue.GetObject("HttpParameters");
    m_httpParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue PipeEnrichmentParameters::Jsonize() const
{
  JsonValue payload;

  if(m_inputTemplateHasBeenSet)
  {
   payload.WithString("InputTemplate", m_inputTemplate);

  }

  if(m_httpParametersHasBeenSet)
  {
   payload.WithObject("HttpParameters", m_httpParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
