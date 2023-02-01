/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Layout.h>
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

Layout::Layout() : 
    m_configurationHasBeenSet(false)
{
}

Layout::Layout(JsonView jsonValue) : 
    m_configurationHasBeenSet(false)
{
  *this = jsonValue;
}

Layout& Layout::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetObject("Configuration");

    m_configurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Layout::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
