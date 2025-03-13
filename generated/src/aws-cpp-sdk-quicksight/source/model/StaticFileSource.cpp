/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StaticFileSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

StaticFileSource::StaticFileSource(JsonView jsonValue)
{
  *this = jsonValue;
}

StaticFileSource& StaticFileSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UrlOptions"))
  {
    m_urlOptions = jsonValue.GetObject("UrlOptions");
    m_urlOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Options"))
  {
    m_s3Options = jsonValue.GetObject("S3Options");
    m_s3OptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue StaticFileSource::Jsonize() const
{
  JsonValue payload;

  if(m_urlOptionsHasBeenSet)
  {
   payload.WithObject("UrlOptions", m_urlOptions.Jsonize());

  }

  if(m_s3OptionsHasBeenSet)
  {
   payload.WithObject("S3Options", m_s3Options.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
