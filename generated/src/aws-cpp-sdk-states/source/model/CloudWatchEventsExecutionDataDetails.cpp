/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/CloudWatchEventsExecutionDataDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

CloudWatchEventsExecutionDataDetails::CloudWatchEventsExecutionDataDetails() : 
    m_included(false),
    m_includedHasBeenSet(false)
{
}

CloudWatchEventsExecutionDataDetails::CloudWatchEventsExecutionDataDetails(JsonView jsonValue) : 
    m_included(false),
    m_includedHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchEventsExecutionDataDetails& CloudWatchEventsExecutionDataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("included"))
  {
    m_included = jsonValue.GetBool("included");

    m_includedHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchEventsExecutionDataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_includedHasBeenSet)
  {
   payload.WithBool("included", m_included);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
