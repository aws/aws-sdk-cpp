/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/AppValidationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

AppValidationConfiguration::AppValidationConfiguration() : 
    m_validationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_appValidationStrategy(AppValidationStrategy::NOT_SET),
    m_appValidationStrategyHasBeenSet(false),
    m_ssmValidationParametersHasBeenSet(false)
{
}

AppValidationConfiguration::AppValidationConfiguration(JsonView jsonValue) : 
    m_validationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_appValidationStrategy(AppValidationStrategy::NOT_SET),
    m_appValidationStrategyHasBeenSet(false),
    m_ssmValidationParametersHasBeenSet(false)
{
  *this = jsonValue;
}

AppValidationConfiguration& AppValidationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("validationId"))
  {
    m_validationId = jsonValue.GetString("validationId");

    m_validationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appValidationStrategy"))
  {
    m_appValidationStrategy = AppValidationStrategyMapper::GetAppValidationStrategyForName(jsonValue.GetString("appValidationStrategy"));

    m_appValidationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssmValidationParameters"))
  {
    m_ssmValidationParameters = jsonValue.GetObject("ssmValidationParameters");

    m_ssmValidationParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue AppValidationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_validationIdHasBeenSet)
  {
   payload.WithString("validationId", m_validationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_appValidationStrategyHasBeenSet)
  {
   payload.WithString("appValidationStrategy", AppValidationStrategyMapper::GetNameForAppValidationStrategy(m_appValidationStrategy));
  }

  if(m_ssmValidationParametersHasBeenSet)
  {
   payload.WithObject("ssmValidationParameters", m_ssmValidationParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
