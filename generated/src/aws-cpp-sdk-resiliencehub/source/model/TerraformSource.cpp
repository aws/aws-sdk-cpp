/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/TerraformSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

TerraformSource::TerraformSource() : 
    m_s3StateFileUrlHasBeenSet(false)
{
}

TerraformSource::TerraformSource(JsonView jsonValue) : 
    m_s3StateFileUrlHasBeenSet(false)
{
  *this = jsonValue;
}

TerraformSource& TerraformSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3StateFileUrl"))
  {
    m_s3StateFileUrl = jsonValue.GetString("s3StateFileUrl");

    m_s3StateFileUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue TerraformSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3StateFileUrlHasBeenSet)
  {
   payload.WithString("s3StateFileUrl", m_s3StateFileUrl);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
