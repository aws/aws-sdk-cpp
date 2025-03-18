/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BrandDefinition.h>
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

BrandDefinition::BrandDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

BrandDefinition& BrandDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BrandName"))
  {
    m_brandName = jsonValue.GetString("BrandName");
    m_brandNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationTheme"))
  {
    m_applicationTheme = jsonValue.GetObject("ApplicationTheme");
    m_applicationThemeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogoConfiguration"))
  {
    m_logoConfiguration = jsonValue.GetObject("LogoConfiguration");
    m_logoConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue BrandDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_brandNameHasBeenSet)
  {
   payload.WithString("BrandName", m_brandName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_applicationThemeHasBeenSet)
  {
   payload.WithObject("ApplicationTheme", m_applicationTheme.Jsonize());

  }

  if(m_logoConfigurationHasBeenSet)
  {
   payload.WithObject("LogoConfiguration", m_logoConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
