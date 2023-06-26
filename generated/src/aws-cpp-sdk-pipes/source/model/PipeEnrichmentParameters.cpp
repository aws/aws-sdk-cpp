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

PipeEnrichmentParameters::PipeEnrichmentParameters() : 
    m_httpParametersHasBeenSet(false),
    m_inputTemplateHasBeenSet(false)
{
}

PipeEnrichmentParameters::PipeEnrichmentParameters(JsonView jsonValue) : 
    m_httpParametersHasBeenSet(false),
    m_inputTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

PipeEnrichmentParameters& PipeEnrichmentParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HttpParameters"))
  {
    m_httpParameters = jsonValue.GetObject("HttpParameters");

    m_httpParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputTemplate"))
  {
    m_inputTemplate = jsonValue.GetString("InputTemplate");

    m_inputTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeEnrichmentParameters::Jsonize() const
{
  JsonValue payload;

  if(m_httpParametersHasBeenSet)
  {
   payload.WithObject("HttpParameters", m_httpParameters.Jsonize());

  }

  if(m_inputTemplateHasBeenSet)
  {
   payload.WithString("InputTemplate", m_inputTemplate);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
