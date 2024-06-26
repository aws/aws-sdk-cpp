﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RegisteredUserEmbeddingExperienceConfiguration.h>
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

RegisteredUserEmbeddingExperienceConfiguration::RegisteredUserEmbeddingExperienceConfiguration() : 
    m_dashboardHasBeenSet(false),
    m_quickSightConsoleHasBeenSet(false),
    m_qSearchBarHasBeenSet(false),
    m_dashboardVisualHasBeenSet(false),
    m_generativeQnAHasBeenSet(false)
{
}

RegisteredUserEmbeddingExperienceConfiguration::RegisteredUserEmbeddingExperienceConfiguration(JsonView jsonValue)
  : RegisteredUserEmbeddingExperienceConfiguration()
{
  *this = jsonValue;
}

RegisteredUserEmbeddingExperienceConfiguration& RegisteredUserEmbeddingExperienceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dashboard"))
  {
    m_dashboard = jsonValue.GetObject("Dashboard");

    m_dashboardHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuickSightConsole"))
  {
    m_quickSightConsole = jsonValue.GetObject("QuickSightConsole");

    m_quickSightConsoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QSearchBar"))
  {
    m_qSearchBar = jsonValue.GetObject("QSearchBar");

    m_qSearchBarHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DashboardVisual"))
  {
    m_dashboardVisual = jsonValue.GetObject("DashboardVisual");

    m_dashboardVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GenerativeQnA"))
  {
    m_generativeQnA = jsonValue.GetObject("GenerativeQnA");

    m_generativeQnAHasBeenSet = true;
  }

  return *this;
}

JsonValue RegisteredUserEmbeddingExperienceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dashboardHasBeenSet)
  {
   payload.WithObject("Dashboard", m_dashboard.Jsonize());

  }

  if(m_quickSightConsoleHasBeenSet)
  {
   payload.WithObject("QuickSightConsole", m_quickSightConsole.Jsonize());

  }

  if(m_qSearchBarHasBeenSet)
  {
   payload.WithObject("QSearchBar", m_qSearchBar.Jsonize());

  }

  if(m_dashboardVisualHasBeenSet)
  {
   payload.WithObject("DashboardVisual", m_dashboardVisual.Jsonize());

  }

  if(m_generativeQnAHasBeenSet)
  {
   payload.WithObject("GenerativeQnA", m_generativeQnA.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
