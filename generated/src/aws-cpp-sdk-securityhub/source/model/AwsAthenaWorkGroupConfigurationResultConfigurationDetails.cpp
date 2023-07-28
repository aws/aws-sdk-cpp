/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAthenaWorkGroupConfigurationResultConfigurationDetails.h>
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

AwsAthenaWorkGroupConfigurationResultConfigurationDetails::AwsAthenaWorkGroupConfigurationResultConfigurationDetails() : 
    m_encryptionConfigurationHasBeenSet(false)
{
}

AwsAthenaWorkGroupConfigurationResultConfigurationDetails::AwsAthenaWorkGroupConfigurationResultConfigurationDetails(JsonView jsonValue) : 
    m_encryptionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAthenaWorkGroupConfigurationResultConfigurationDetails& AwsAthenaWorkGroupConfigurationResultConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAthenaWorkGroupConfigurationResultConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
