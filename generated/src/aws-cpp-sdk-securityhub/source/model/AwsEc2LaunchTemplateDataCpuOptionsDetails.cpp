/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataCpuOptionsDetails.h>
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

AwsEc2LaunchTemplateDataCpuOptionsDetails::AwsEc2LaunchTemplateDataCpuOptionsDetails() : 
    m_coreCount(0),
    m_coreCountHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataCpuOptionsDetails::AwsEc2LaunchTemplateDataCpuOptionsDetails(JsonView jsonValue) : 
    m_coreCount(0),
    m_coreCountHasBeenSet(false),
    m_threadsPerCore(0),
    m_threadsPerCoreHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataCpuOptionsDetails& AwsEc2LaunchTemplateDataCpuOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoreCount"))
  {
    m_coreCount = jsonValue.GetInteger("CoreCount");

    m_coreCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreadsPerCore"))
  {
    m_threadsPerCore = jsonValue.GetInteger("ThreadsPerCore");

    m_threadsPerCoreHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataCpuOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_coreCountHasBeenSet)
  {
   payload.WithInteger("CoreCount", m_coreCount);

  }

  if(m_threadsPerCoreHasBeenSet)
  {
   payload.WithInteger("ThreadsPerCore", m_threadsPerCore);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
