﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RegisteredUserConsoleFeatureConfigurations.h>
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

RegisteredUserConsoleFeatureConfigurations::RegisteredUserConsoleFeatureConfigurations(JsonView jsonValue)
{
  *this = jsonValue;
}

RegisteredUserConsoleFeatureConfigurations& RegisteredUserConsoleFeatureConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatePersistence"))
  {
    m_statePersistence = jsonValue.GetObject("StatePersistence");
    m_statePersistenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SharedView"))
  {
    m_sharedView = jsonValue.GetObject("SharedView");
    m_sharedViewHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredUserConsoleFeatureConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_statePersistenceHasBeenSet)
  {
   payload.WithObject("StatePersistence", m_statePersistence.Jsonize());

  }

  if(m_sharedViewHasBeenSet)
  {
   payload.WithObject("SharedView", m_sharedView.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
