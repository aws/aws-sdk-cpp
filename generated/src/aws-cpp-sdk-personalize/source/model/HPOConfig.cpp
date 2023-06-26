/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/HPOConfig.h>
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

HPOConfig::HPOConfig() : 
    m_hpoObjectiveHasBeenSet(false),
    m_hpoResourceConfigHasBeenSet(false),
    m_algorithmHyperParameterRangesHasBeenSet(false)
{
}

HPOConfig::HPOConfig(JsonView jsonValue) : 
    m_hpoObjectiveHasBeenSet(false),
    m_hpoResourceConfigHasBeenSet(false),
    m_algorithmHyperParameterRangesHasBeenSet(false)
{
  *this = jsonValue;
}

HPOConfig& HPOConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hpoObjective"))
  {
    m_hpoObjective = jsonValue.GetObject("hpoObjective");

    m_hpoObjectiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hpoResourceConfig"))
  {
    m_hpoResourceConfig = jsonValue.GetObject("hpoResourceConfig");

    m_hpoResourceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("algorithmHyperParameterRanges"))
  {
    m_algorithmHyperParameterRanges = jsonValue.GetObject("algorithmHyperParameterRanges");

    m_algorithmHyperParameterRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue HPOConfig::Jsonize() const
{
  JsonValue payload;

  if(m_hpoObjectiveHasBeenSet)
  {
   payload.WithObject("hpoObjective", m_hpoObjective.Jsonize());

  }

  if(m_hpoResourceConfigHasBeenSet)
  {
   payload.WithObject("hpoResourceConfig", m_hpoResourceConfig.Jsonize());

  }

  if(m_algorithmHyperParameterRangesHasBeenSet)
  {
   payload.WithObject("algorithmHyperParameterRanges", m_algorithmHyperParameterRanges.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
