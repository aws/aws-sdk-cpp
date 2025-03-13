/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PersonalizationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

PersonalizationConfiguration::PersonalizationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PersonalizationConfiguration& PersonalizationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("personalizationControlMode"))
  {
    m_personalizationControlMode = PersonalizationControlModeMapper::GetPersonalizationControlModeForName(jsonValue.GetString("personalizationControlMode"));
    m_personalizationControlModeHasBeenSet = true;
  }
  return *this;
}

JsonValue PersonalizationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_personalizationControlModeHasBeenSet)
  {
   payload.WithString("personalizationControlMode", PersonalizationControlModeMapper::GetNameForPersonalizationControlMode(m_personalizationControlMode));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
