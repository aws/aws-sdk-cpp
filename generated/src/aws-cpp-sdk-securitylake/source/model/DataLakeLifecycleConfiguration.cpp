/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeLifecycleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

DataLakeLifecycleConfiguration::DataLakeLifecycleConfiguration() : 
    m_expirationHasBeenSet(false),
    m_transitionsHasBeenSet(false)
{
}

DataLakeLifecycleConfiguration::DataLakeLifecycleConfiguration(JsonView jsonValue) : 
    m_expirationHasBeenSet(false),
    m_transitionsHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeLifecycleConfiguration& DataLakeLifecycleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expiration"))
  {
    m_expiration = jsonValue.GetObject("expiration");

    m_expirationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transitions"))
  {
    Aws::Utils::Array<JsonView> transitionsJsonList = jsonValue.GetArray("transitions");
    for(unsigned transitionsIndex = 0; transitionsIndex < transitionsJsonList.GetLength(); ++transitionsIndex)
    {
      m_transitions.push_back(transitionsJsonList[transitionsIndex].AsObject());
    }
    m_transitionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeLifecycleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_expirationHasBeenSet)
  {
   payload.WithObject("expiration", m_expiration.Jsonize());

  }

  if(m_transitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transitionsJsonList(m_transitions.size());
   for(unsigned transitionsIndex = 0; transitionsIndex < transitionsJsonList.GetLength(); ++transitionsIndex)
   {
     transitionsJsonList[transitionsIndex].AsObject(m_transitions[transitionsIndex].Jsonize());
   }
   payload.WithArray("transitions", std::move(transitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
