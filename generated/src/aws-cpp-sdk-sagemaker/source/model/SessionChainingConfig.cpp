/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SessionChainingConfig.h>
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

SessionChainingConfig::SessionChainingConfig() : 
    m_enableSessionTagChaining(false),
    m_enableSessionTagChainingHasBeenSet(false)
{
}

SessionChainingConfig::SessionChainingConfig(JsonView jsonValue) : 
    m_enableSessionTagChaining(false),
    m_enableSessionTagChainingHasBeenSet(false)
{
  *this = jsonValue;
}

SessionChainingConfig& SessionChainingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableSessionTagChaining"))
  {
    m_enableSessionTagChaining = jsonValue.GetBool("EnableSessionTagChaining");

    m_enableSessionTagChainingHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionChainingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enableSessionTagChainingHasBeenSet)
  {
   payload.WithBool("EnableSessionTagChaining", m_enableSessionTagChaining);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
