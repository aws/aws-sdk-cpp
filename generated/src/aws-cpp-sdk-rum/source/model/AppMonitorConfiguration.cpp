/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/AppMonitorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

AppMonitorConfiguration::AppMonitorConfiguration() : 
    m_allowCookies(false),
    m_allowCookiesHasBeenSet(false),
    m_enableXRay(false),
    m_enableXRayHasBeenSet(false),
    m_excludedPagesHasBeenSet(false),
    m_favoritePagesHasBeenSet(false),
    m_guestRoleArnHasBeenSet(false),
    m_identityPoolIdHasBeenSet(false),
    m_includedPagesHasBeenSet(false),
    m_sessionSampleRate(0.0),
    m_sessionSampleRateHasBeenSet(false),
    m_telemetriesHasBeenSet(false)
{
}

AppMonitorConfiguration::AppMonitorConfiguration(JsonView jsonValue) : 
    m_allowCookies(false),
    m_allowCookiesHasBeenSet(false),
    m_enableXRay(false),
    m_enableXRayHasBeenSet(false),
    m_excludedPagesHasBeenSet(false),
    m_favoritePagesHasBeenSet(false),
    m_guestRoleArnHasBeenSet(false),
    m_identityPoolIdHasBeenSet(false),
    m_includedPagesHasBeenSet(false),
    m_sessionSampleRate(0.0),
    m_sessionSampleRateHasBeenSet(false),
    m_telemetriesHasBeenSet(false)
{
  *this = jsonValue;
}

AppMonitorConfiguration& AppMonitorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowCookies"))
  {
    m_allowCookies = jsonValue.GetBool("AllowCookies");

    m_allowCookiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableXRay"))
  {
    m_enableXRay = jsonValue.GetBool("EnableXRay");

    m_enableXRayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludedPages"))
  {
    Aws::Utils::Array<JsonView> excludedPagesJsonList = jsonValue.GetArray("ExcludedPages");
    for(unsigned excludedPagesIndex = 0; excludedPagesIndex < excludedPagesJsonList.GetLength(); ++excludedPagesIndex)
    {
      m_excludedPages.push_back(excludedPagesJsonList[excludedPagesIndex].AsString());
    }
    m_excludedPagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FavoritePages"))
  {
    Aws::Utils::Array<JsonView> favoritePagesJsonList = jsonValue.GetArray("FavoritePages");
    for(unsigned favoritePagesIndex = 0; favoritePagesIndex < favoritePagesJsonList.GetLength(); ++favoritePagesIndex)
    {
      m_favoritePages.push_back(favoritePagesJsonList[favoritePagesIndex].AsString());
    }
    m_favoritePagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GuestRoleArn"))
  {
    m_guestRoleArn = jsonValue.GetString("GuestRoleArn");

    m_guestRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");

    m_identityPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludedPages"))
  {
    Aws::Utils::Array<JsonView> includedPagesJsonList = jsonValue.GetArray("IncludedPages");
    for(unsigned includedPagesIndex = 0; includedPagesIndex < includedPagesJsonList.GetLength(); ++includedPagesIndex)
    {
      m_includedPages.push_back(includedPagesJsonList[includedPagesIndex].AsString());
    }
    m_includedPagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionSampleRate"))
  {
    m_sessionSampleRate = jsonValue.GetDouble("SessionSampleRate");

    m_sessionSampleRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Telemetries"))
  {
    Aws::Utils::Array<JsonView> telemetriesJsonList = jsonValue.GetArray("Telemetries");
    for(unsigned telemetriesIndex = 0; telemetriesIndex < telemetriesJsonList.GetLength(); ++telemetriesIndex)
    {
      m_telemetries.push_back(TelemetryMapper::GetTelemetryForName(telemetriesJsonList[telemetriesIndex].AsString()));
    }
    m_telemetriesHasBeenSet = true;
  }

  return *this;
}

JsonValue AppMonitorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_allowCookiesHasBeenSet)
  {
   payload.WithBool("AllowCookies", m_allowCookies);

  }

  if(m_enableXRayHasBeenSet)
  {
   payload.WithBool("EnableXRay", m_enableXRay);

  }

  if(m_excludedPagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedPagesJsonList(m_excludedPages.size());
   for(unsigned excludedPagesIndex = 0; excludedPagesIndex < excludedPagesJsonList.GetLength(); ++excludedPagesIndex)
   {
     excludedPagesJsonList[excludedPagesIndex].AsString(m_excludedPages[excludedPagesIndex]);
   }
   payload.WithArray("ExcludedPages", std::move(excludedPagesJsonList));

  }

  if(m_favoritePagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> favoritePagesJsonList(m_favoritePages.size());
   for(unsigned favoritePagesIndex = 0; favoritePagesIndex < favoritePagesJsonList.GetLength(); ++favoritePagesIndex)
   {
     favoritePagesJsonList[favoritePagesIndex].AsString(m_favoritePages[favoritePagesIndex]);
   }
   payload.WithArray("FavoritePages", std::move(favoritePagesJsonList));

  }

  if(m_guestRoleArnHasBeenSet)
  {
   payload.WithString("GuestRoleArn", m_guestRoleArn);

  }

  if(m_identityPoolIdHasBeenSet)
  {
   payload.WithString("IdentityPoolId", m_identityPoolId);

  }

  if(m_includedPagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includedPagesJsonList(m_includedPages.size());
   for(unsigned includedPagesIndex = 0; includedPagesIndex < includedPagesJsonList.GetLength(); ++includedPagesIndex)
   {
     includedPagesJsonList[includedPagesIndex].AsString(m_includedPages[includedPagesIndex]);
   }
   payload.WithArray("IncludedPages", std::move(includedPagesJsonList));

  }

  if(m_sessionSampleRateHasBeenSet)
  {
   payload.WithDouble("SessionSampleRate", m_sessionSampleRate);

  }

  if(m_telemetriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> telemetriesJsonList(m_telemetries.size());
   for(unsigned telemetriesIndex = 0; telemetriesIndex < telemetriesJsonList.GetLength(); ++telemetriesIndex)
   {
     telemetriesJsonList[telemetriesIndex].AsString(TelemetryMapper::GetNameForTelemetry(m_telemetries[telemetriesIndex]));
   }
   payload.WithArray("Telemetries", std::move(telemetriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
