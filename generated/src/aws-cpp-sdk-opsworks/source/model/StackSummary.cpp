/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/StackSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

StackSummary::StackSummary() : 
    m_stackIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_layersCount(0),
    m_layersCountHasBeenSet(false),
    m_appsCount(0),
    m_appsCountHasBeenSet(false),
    m_instancesCountHasBeenSet(false)
{
}

StackSummary::StackSummary(JsonView jsonValue) : 
    m_stackIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_layersCount(0),
    m_layersCountHasBeenSet(false),
    m_appsCount(0),
    m_appsCountHasBeenSet(false),
    m_instancesCountHasBeenSet(false)
{
  *this = jsonValue;
}

StackSummary& StackSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LayersCount"))
  {
    m_layersCount = jsonValue.GetInteger("LayersCount");

    m_layersCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppsCount"))
  {
    m_appsCount = jsonValue.GetInteger("AppsCount");

    m_appsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstancesCount"))
  {
    m_instancesCount = jsonValue.GetObject("InstancesCount");

    m_instancesCountHasBeenSet = true;
  }

  return *this;
}

JsonValue StackSummary::Jsonize() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_layersCountHasBeenSet)
  {
   payload.WithInteger("LayersCount", m_layersCount);

  }

  if(m_appsCountHasBeenSet)
  {
   payload.WithInteger("AppsCount", m_appsCount);

  }

  if(m_instancesCountHasBeenSet)
  {
   payload.WithObject("InstancesCount", m_instancesCount.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
