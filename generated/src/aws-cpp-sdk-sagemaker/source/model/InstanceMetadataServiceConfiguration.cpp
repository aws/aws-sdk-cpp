/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InstanceMetadataServiceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

InstanceMetadataServiceConfiguration::InstanceMetadataServiceConfiguration() : 
    m_minimumInstanceMetadataServiceVersionHasBeenSet(false)
{
}

InstanceMetadataServiceConfiguration::InstanceMetadataServiceConfiguration(JsonView jsonValue) : 
    m_minimumInstanceMetadataServiceVersionHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceMetadataServiceConfiguration& InstanceMetadataServiceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinimumInstanceMetadataServiceVersion"))
  {
    m_minimumInstanceMetadataServiceVersion = jsonValue.GetString("MinimumInstanceMetadataServiceVersion");

    m_minimumInstanceMetadataServiceVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceMetadataServiceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_minimumInstanceMetadataServiceVersionHasBeenSet)
  {
   payload.WithString("MinimumInstanceMetadataServiceVersion", m_minimumInstanceMetadataServiceVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
