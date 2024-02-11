/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeConfiguration.h>
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

DataLakeConfiguration::DataLakeConfiguration() : 
    m_encryptionConfigurationHasBeenSet(false),
    m_lifecycleConfigurationHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_replicationConfigurationHasBeenSet(false)
{
}

DataLakeConfiguration::DataLakeConfiguration(JsonView jsonValue) : 
    m_encryptionConfigurationHasBeenSet(false),
    m_lifecycleConfigurationHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_replicationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeConfiguration& DataLakeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleConfiguration"))
  {
    m_lifecycleConfiguration = jsonValue.GetObject("lifecycleConfiguration");

    m_lifecycleConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationConfiguration"))
  {
    m_replicationConfiguration = jsonValue.GetObject("replicationConfiguration");

    m_replicationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_lifecycleConfigurationHasBeenSet)
  {
   payload.WithObject("lifecycleConfiguration", m_lifecycleConfiguration.Jsonize());

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_replicationConfigurationHasBeenSet)
  {
   payload.WithObject("replicationConfiguration", m_replicationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
