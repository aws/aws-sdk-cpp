/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/BatchSegmentJobOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

BatchSegmentJobOutput::BatchSegmentJobOutput() : 
    m_s3DataDestinationHasBeenSet(false)
{
}

BatchSegmentJobOutput::BatchSegmentJobOutput(JsonView jsonValue) : 
    m_s3DataDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

BatchSegmentJobOutput& BatchSegmentJobOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3DataDestination"))
  {
    m_s3DataDestination = jsonValue.GetObject("s3DataDestination");

    m_s3DataDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchSegmentJobOutput::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataDestinationHasBeenSet)
  {
   payload.WithObject("s3DataDestination", m_s3DataDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
