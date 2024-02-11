/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/MlResourceDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

MlResourceDefinition::MlResourceDefinition() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_cloudwatchLogUrlHasBeenSet(false)
{
}

MlResourceDefinition::MlResourceDefinition(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_cloudwatchLogUrlHasBeenSet(false)
{
  *this = jsonValue;
}

MlResourceDefinition& MlResourceDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputLocation"))
  {
    m_outputLocation = jsonValue.GetString("outputLocation");

    m_outputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cloudwatchLogUrl"))
  {
    m_cloudwatchLogUrl = jsonValue.GetString("cloudwatchLogUrl");

    m_cloudwatchLogUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue MlResourceDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithString("outputLocation", m_outputLocation);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_cloudwatchLogUrlHasBeenSet)
  {
   payload.WithString("cloudwatchLogUrl", m_cloudwatchLogUrl);

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
