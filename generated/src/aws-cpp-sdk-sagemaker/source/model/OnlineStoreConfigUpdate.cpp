/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OnlineStoreConfigUpdate.h>
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

OnlineStoreConfigUpdate::OnlineStoreConfigUpdate() : 
    m_ttlDurationHasBeenSet(false)
{
}

OnlineStoreConfigUpdate::OnlineStoreConfigUpdate(JsonView jsonValue) : 
    m_ttlDurationHasBeenSet(false)
{
  *this = jsonValue;
}

OnlineStoreConfigUpdate& OnlineStoreConfigUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TtlDuration"))
  {
    m_ttlDuration = jsonValue.GetObject("TtlDuration");

    m_ttlDurationHasBeenSet = true;
  }

  return *this;
}

JsonValue OnlineStoreConfigUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_ttlDurationHasBeenSet)
  {
   payload.WithObject("TtlDuration", m_ttlDuration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
