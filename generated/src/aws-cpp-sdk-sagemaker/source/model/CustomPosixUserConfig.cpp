/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CustomPosixUserConfig.h>
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

CustomPosixUserConfig::CustomPosixUserConfig() : 
    m_uid(0),
    m_uidHasBeenSet(false),
    m_gid(0),
    m_gidHasBeenSet(false)
{
}

CustomPosixUserConfig::CustomPosixUserConfig(JsonView jsonValue) : 
    m_uid(0),
    m_uidHasBeenSet(false),
    m_gid(0),
    m_gidHasBeenSet(false)
{
  *this = jsonValue;
}

CustomPosixUserConfig& CustomPosixUserConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uid"))
  {
    m_uid = jsonValue.GetInt64("Uid");

    m_uidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Gid"))
  {
    m_gid = jsonValue.GetInt64("Gid");

    m_gidHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomPosixUserConfig::Jsonize() const
{
  JsonValue payload;

  if(m_uidHasBeenSet)
  {
   payload.WithInt64("Uid", m_uid);

  }

  if(m_gidHasBeenSet)
  {
   payload.WithInt64("Gid", m_gid);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
