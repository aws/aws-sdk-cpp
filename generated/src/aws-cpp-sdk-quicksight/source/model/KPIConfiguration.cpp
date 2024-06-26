﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/KPIConfiguration.h>
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

KPIConfiguration::KPIConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_sortConfigurationHasBeenSet(false),
    m_kPIOptionsHasBeenSet(false),
    m_interactionsHasBeenSet(false)
{
}

KPIConfiguration::KPIConfiguration(JsonView jsonValue)
  : KPIConfiguration()
{
  *this = jsonValue;
}

KPIConfiguration& KPIConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldWells"))
  {
    m_fieldWells = jsonValue.GetObject("FieldWells");

    m_fieldWellsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortConfiguration"))
  {
    m_sortConfiguration = jsonValue.GetObject("SortConfiguration");

    m_sortConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KPIOptions"))
  {
    m_kPIOptions = jsonValue.GetObject("KPIOptions");

    m_kPIOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Interactions"))
  {
    m_interactions = jsonValue.GetObject("Interactions");

    m_interactionsHasBeenSet = true;
  }

  return *this;
}

JsonValue KPIConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldWellsHasBeenSet)
  {
   payload.WithObject("FieldWells", m_fieldWells.Jsonize());

  }

  if(m_sortConfigurationHasBeenSet)
  {
   payload.WithObject("SortConfiguration", m_sortConfiguration.Jsonize());

  }

  if(m_kPIOptionsHasBeenSet)
  {
   payload.WithObject("KPIOptions", m_kPIOptions.Jsonize());

  }

  if(m_interactionsHasBeenSet)
  {
   payload.WithObject("Interactions", m_interactions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
