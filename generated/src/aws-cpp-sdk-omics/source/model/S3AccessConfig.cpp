/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/S3AccessConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

S3AccessConfig::S3AccessConfig() : 
    m_accessLogLocationHasBeenSet(false)
{
}

S3AccessConfig::S3AccessConfig(JsonView jsonValue)
  : S3AccessConfig()
{
  *this = jsonValue;
}

S3AccessConfig& S3AccessConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessLogLocation"))
  {
    m_accessLogLocation = jsonValue.GetString("accessLogLocation");

    m_accessLogLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue S3AccessConfig::Jsonize() const
{
  JsonValue payload;

  if(m_accessLogLocationHasBeenSet)
  {
   payload.WithString("accessLogLocation", m_accessLogLocation);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
