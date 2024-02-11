/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/LogPublishingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

LogPublishingOptions::LogPublishingOptions() : 
    m_isLoggingEnabled(false),
    m_isLoggingEnabledHasBeenSet(false),
    m_cloudWatchLogDestinationHasBeenSet(false)
{
}

LogPublishingOptions::LogPublishingOptions(JsonView jsonValue) : 
    m_isLoggingEnabled(false),
    m_isLoggingEnabledHasBeenSet(false),
    m_cloudWatchLogDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

LogPublishingOptions& LogPublishingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsLoggingEnabled"))
  {
    m_isLoggingEnabled = jsonValue.GetBool("IsLoggingEnabled");

    m_isLoggingEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLogDestination"))
  {
    m_cloudWatchLogDestination = jsonValue.GetObject("CloudWatchLogDestination");

    m_cloudWatchLogDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue LogPublishingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_isLoggingEnabledHasBeenSet)
  {
   payload.WithBool("IsLoggingEnabled", m_isLoggingEnabled);

  }

  if(m_cloudWatchLogDestinationHasBeenSet)
  {
   payload.WithObject("CloudWatchLogDestination", m_cloudWatchLogDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
