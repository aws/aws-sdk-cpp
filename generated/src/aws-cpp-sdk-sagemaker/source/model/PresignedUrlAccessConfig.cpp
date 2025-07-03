/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PresignedUrlAccessConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

PresignedUrlAccessConfig::PresignedUrlAccessConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

PresignedUrlAccessConfig& PresignedUrlAccessConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceptEula"))
  {
    m_acceptEula = jsonValue.GetBool("AcceptEula");
    m_acceptEulaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpectedS3Url"))
  {
    m_expectedS3Url = jsonValue.GetString("ExpectedS3Url");
    m_expectedS3UrlHasBeenSet = true;
  }
  return *this;
}

JsonValue PresignedUrlAccessConfig::Jsonize() const
{
  JsonValue payload;

  if(m_acceptEulaHasBeenSet)
  {
   payload.WithBool("AcceptEula", m_acceptEula);

  }

  if(m_expectedS3UrlHasBeenSet)
  {
   payload.WithString("ExpectedS3Url", m_expectedS3Url);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
