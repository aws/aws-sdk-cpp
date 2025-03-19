/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/SourceDetails.h>
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

SourceDetails::SourceDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceDetails& SourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageSourceDetails"))
  {
    m_imageSourceDetails = jsonValue.GetObject("imageSourceDetails");
    m_imageSourceDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("audioSourceDetails"))
  {
    m_audioSourceDetails = jsonValue.GetObject("audioSourceDetails");
    m_audioSourceDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("videoSourceDetails"))
  {
    m_videoSourceDetails = jsonValue.GetObject("videoSourceDetails");
    m_videoSourceDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_imageSourceDetailsHasBeenSet)
  {
   payload.WithObject("imageSourceDetails", m_imageSourceDetails.Jsonize());

  }

  if(m_audioSourceDetailsHasBeenSet)
  {
   payload.WithObject("audioSourceDetails", m_audioSourceDetails.Jsonize());

  }

  if(m_videoSourceDetailsHasBeenSet)
  {
   payload.WithObject("videoSourceDetails", m_videoSourceDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
