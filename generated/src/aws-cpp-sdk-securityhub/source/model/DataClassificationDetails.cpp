/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DataClassificationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

DataClassificationDetails::DataClassificationDetails() : 
    m_detailedResultsLocationHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

DataClassificationDetails::DataClassificationDetails(JsonView jsonValue) : 
    m_detailedResultsLocationHasBeenSet(false),
    m_resultHasBeenSet(false)
{
  *this = jsonValue;
}

DataClassificationDetails& DataClassificationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DetailedResultsLocation"))
  {
    m_detailedResultsLocation = jsonValue.GetString("DetailedResultsLocation");

    m_detailedResultsLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Result"))
  {
    m_result = jsonValue.GetObject("Result");

    m_resultHasBeenSet = true;
  }

  return *this;
}

JsonValue DataClassificationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_detailedResultsLocationHasBeenSet)
  {
   payload.WithString("DetailedResultsLocation", m_detailedResultsLocation);

  }

  if(m_resultHasBeenSet)
  {
   payload.WithObject("Result", m_result.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
