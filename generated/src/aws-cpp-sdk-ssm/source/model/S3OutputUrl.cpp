/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/S3OutputUrl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

S3OutputUrl::S3OutputUrl() : 
    m_outputUrlHasBeenSet(false)
{
}

S3OutputUrl::S3OutputUrl(JsonView jsonValue) : 
    m_outputUrlHasBeenSet(false)
{
  *this = jsonValue;
}

S3OutputUrl& S3OutputUrl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputUrl"))
  {
    m_outputUrl = jsonValue.GetString("OutputUrl");

    m_outputUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue S3OutputUrl::Jsonize() const
{
  JsonValue payload;

  if(m_outputUrlHasBeenSet)
  {
   payload.WithString("OutputUrl", m_outputUrl);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
