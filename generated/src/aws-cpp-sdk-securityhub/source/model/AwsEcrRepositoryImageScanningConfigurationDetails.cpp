/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcrRepositoryImageScanningConfigurationDetails.h>
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

AwsEcrRepositoryImageScanningConfigurationDetails::AwsEcrRepositoryImageScanningConfigurationDetails() : 
    m_scanOnPush(false),
    m_scanOnPushHasBeenSet(false)
{
}

AwsEcrRepositoryImageScanningConfigurationDetails::AwsEcrRepositoryImageScanningConfigurationDetails(JsonView jsonValue) : 
    m_scanOnPush(false),
    m_scanOnPushHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcrRepositoryImageScanningConfigurationDetails& AwsEcrRepositoryImageScanningConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScanOnPush"))
  {
    m_scanOnPush = jsonValue.GetBool("ScanOnPush");

    m_scanOnPushHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcrRepositoryImageScanningConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_scanOnPushHasBeenSet)
  {
   payload.WithBool("ScanOnPush", m_scanOnPush);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
