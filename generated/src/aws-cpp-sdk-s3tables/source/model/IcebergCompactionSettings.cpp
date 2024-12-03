/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/IcebergCompactionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Tables
{
namespace Model
{

IcebergCompactionSettings::IcebergCompactionSettings() : 
    m_targetFileSizeMB(0),
    m_targetFileSizeMBHasBeenSet(false)
{
}

IcebergCompactionSettings::IcebergCompactionSettings(JsonView jsonValue)
  : IcebergCompactionSettings()
{
  *this = jsonValue;
}

IcebergCompactionSettings& IcebergCompactionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetFileSizeMB"))
  {
    m_targetFileSizeMB = jsonValue.GetInteger("targetFileSizeMB");

    m_targetFileSizeMBHasBeenSet = true;
  }

  return *this;
}

JsonValue IcebergCompactionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_targetFileSizeMBHasBeenSet)
  {
   payload.WithInteger("targetFileSizeMB", m_targetFileSizeMB);

  }

  return payload;
}

} // namespace Model
} // namespace S3Tables
} // namespace Aws
