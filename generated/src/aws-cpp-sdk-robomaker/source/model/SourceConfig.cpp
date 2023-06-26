/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/SourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

SourceConfig::SourceConfig() : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false)
{
}

SourceConfig::SourceConfig(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyHasBeenSet(false),
    m_architecture(Architecture::NOT_SET),
    m_architectureHasBeenSet(false)
{
  *this = jsonValue;
}

SourceConfig& SourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Key"))
  {
    m_s3Key = jsonValue.GetString("s3Key");

    m_s3KeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = ArchitectureMapper::GetArchitectureForName(jsonValue.GetString("architecture"));

    m_architectureHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3KeyHasBeenSet)
  {
   payload.WithString("s3Key", m_s3Key);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("architecture", ArchitectureMapper::GetNameForArchitecture(m_architecture));
  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
