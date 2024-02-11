/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/IndexStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

IndexStatistics::IndexStatistics() : 
    m_textDocumentStatisticsHasBeenSet(false)
{
}

IndexStatistics::IndexStatistics(JsonView jsonValue) : 
    m_textDocumentStatisticsHasBeenSet(false)
{
  *this = jsonValue;
}

IndexStatistics& IndexStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textDocumentStatistics"))
  {
    m_textDocumentStatistics = jsonValue.GetObject("textDocumentStatistics");

    m_textDocumentStatisticsHasBeenSet = true;
  }

  return *this;
}

JsonValue IndexStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_textDocumentStatisticsHasBeenSet)
  {
   payload.WithObject("textDocumentStatistics", m_textDocumentStatistics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
