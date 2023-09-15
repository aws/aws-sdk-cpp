/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/MessageInsightsDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

MessageInsightsDataSource::MessageInsightsDataSource() : 
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_includeHasBeenSet(false),
    m_excludeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

MessageInsightsDataSource::MessageInsightsDataSource(JsonView jsonValue) : 
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_includeHasBeenSet(false),
    m_excludeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
  *this = jsonValue;
}

MessageInsightsDataSource& MessageInsightsDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetDouble("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetDouble("EndDate");

    m_endDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Include"))
  {
    m_include = jsonValue.GetObject("Include");

    m_includeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exclude"))
  {
    m_exclude = jsonValue.GetObject("Exclude");

    m_excludeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

    m_maxResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageInsightsDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("StartDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_endDateHasBeenSet)
  {
   payload.WithDouble("EndDate", m_endDate.SecondsWithMSPrecision());
  }

  if(m_includeHasBeenSet)
  {
   payload.WithObject("Include", m_include.Jsonize());

  }

  if(m_excludeHasBeenSet)
  {
   payload.WithObject("Exclude", m_exclude.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
