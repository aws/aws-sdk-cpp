/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/RetrieverConfiguration.h>
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

RetrieverConfiguration::RetrieverConfiguration() : 
    m_kendraIndexConfigurationHasBeenSet(false),
    m_nativeIndexConfigurationHasBeenSet(false)
{
}

RetrieverConfiguration::RetrieverConfiguration(JsonView jsonValue) : 
    m_kendraIndexConfigurationHasBeenSet(false),
    m_nativeIndexConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RetrieverConfiguration& RetrieverConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kendraIndexConfiguration"))
  {
    m_kendraIndexConfiguration = jsonValue.GetObject("kendraIndexConfiguration");

    m_kendraIndexConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nativeIndexConfiguration"))
  {
    m_nativeIndexConfiguration = jsonValue.GetObject("nativeIndexConfiguration");

    m_nativeIndexConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RetrieverConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kendraIndexConfigurationHasBeenSet)
  {
   payload.WithObject("kendraIndexConfiguration", m_kendraIndexConfiguration.Jsonize());

  }

  if(m_nativeIndexConfigurationHasBeenSet)
  {
   payload.WithObject("nativeIndexConfiguration", m_nativeIndexConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
