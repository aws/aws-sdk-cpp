/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskVolumeHostDetails.h>
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

AwsEcsTaskVolumeHostDetails::AwsEcsTaskVolumeHostDetails() : 
    m_sourcePathHasBeenSet(false)
{
}

AwsEcsTaskVolumeHostDetails::AwsEcsTaskVolumeHostDetails(JsonView jsonValue) : 
    m_sourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskVolumeHostDetails& AwsEcsTaskVolumeHostDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourcePath"))
  {
    m_sourcePath = jsonValue.GetString("SourcePath");

    m_sourcePathHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskVolumeHostDetails::Jsonize() const
{
  JsonValue payload;

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("SourcePath", m_sourcePath);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
