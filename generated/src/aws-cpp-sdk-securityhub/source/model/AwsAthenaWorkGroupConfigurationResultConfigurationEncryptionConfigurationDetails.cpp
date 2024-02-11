/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails.h>
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

AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails::AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails() : 
    m_encryptionOptionHasBeenSet(false),
    m_kmsKeyHasBeenSet(false)
{
}

AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails::AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails(JsonView jsonValue) : 
    m_encryptionOptionHasBeenSet(false),
    m_kmsKeyHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails& AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionOption"))
  {
    m_encryptionOption = jsonValue.GetString("EncryptionOption");

    m_encryptionOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKey"))
  {
    m_kmsKey = jsonValue.GetString("KmsKey");

    m_kmsKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionOptionHasBeenSet)
  {
   payload.WithString("EncryptionOption", m_encryptionOption);

  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("KmsKey", m_kmsKey);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
