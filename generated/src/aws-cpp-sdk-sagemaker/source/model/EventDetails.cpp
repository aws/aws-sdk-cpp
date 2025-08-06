/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EventDetails.h>
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

EventDetails::EventDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

EventDetails& EventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventMetadata"))
  {
    m_eventMetadata = jsonValue.GetObject("EventMetadata");
    m_eventMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue EventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_eventMetadataHasBeenSet)
  {
   payload.WithObject("EventMetadata", m_eventMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
