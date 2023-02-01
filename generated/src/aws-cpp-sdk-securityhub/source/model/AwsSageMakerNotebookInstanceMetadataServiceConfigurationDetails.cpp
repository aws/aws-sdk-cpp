/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails::AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails() : 
    m_minimumInstanceMetadataServiceVersionHasBeenSet(false)
{
}

AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails::AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails(JsonView jsonValue) : 
    m_minimumInstanceMetadataServiceVersionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinimumInstanceMetadataServiceVersion"))
  {
    m_minimumInstanceMetadataServiceVersion = jsonValue.GetString("MinimumInstanceMetadataServiceVersion");

    m_minimumInstanceMetadataServiceVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_minimumInstanceMetadataServiceVersionHasBeenSet)
  {
   payload.WithString("MinimumInstanceMetadataServiceVersion", m_minimumInstanceMetadataServiceVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
