/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelCountersForWorkteam.h>
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

LabelCountersForWorkteam::LabelCountersForWorkteam(JsonView jsonValue)
{
  *this = jsonValue;
}

LabelCountersForWorkteam& LabelCountersForWorkteam::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HumanLabeled"))
  {
    m_humanLabeled = jsonValue.GetInteger("HumanLabeled");
    m_humanLabeledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PendingHuman"))
  {
    m_pendingHuman = jsonValue.GetInteger("PendingHuman");
    m_pendingHumanHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetInteger("Total");
    m_totalHasBeenSet = true;
  }
  return *this;
}

JsonValue LabelCountersForWorkteam::Jsonize() const
{
  JsonValue payload;

  if(m_humanLabeledHasBeenSet)
  {
   payload.WithInteger("HumanLabeled", m_humanLabeled);

  }

  if(m_pendingHumanHasBeenSet)
  {
   payload.WithInteger("PendingHuman", m_pendingHuman);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithInteger("Total", m_total);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
