﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/Experiment.h>
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

Experiment::Experiment() : 
    m_experimentArnHasBeenSet(false),
    m_experimentTemplateIdHasBeenSet(false)
{
}

Experiment::Experiment(JsonView jsonValue)
  : Experiment()
{
  *this = jsonValue;
}

Experiment& Experiment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("experimentArn"))
  {
    m_experimentArn = jsonValue.GetString("experimentArn");

    m_experimentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("experimentTemplateId"))
  {
    m_experimentTemplateId = jsonValue.GetString("experimentTemplateId");

    m_experimentTemplateIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Experiment::Jsonize() const
{
  JsonValue payload;

  if(m_experimentArnHasBeenSet)
  {
   payload.WithString("experimentArn", m_experimentArn);

  }

  if(m_experimentTemplateIdHasBeenSet)
  {
   payload.WithString("experimentTemplateId", m_experimentTemplateId);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
