/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRedshiftClusterResizeInfo.h>
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

AwsRedshiftClusterResizeInfo::AwsRedshiftClusterResizeInfo() : 
    m_allowCancelResize(false),
    m_allowCancelResizeHasBeenSet(false),
    m_resizeTypeHasBeenSet(false)
{
}

AwsRedshiftClusterResizeInfo::AwsRedshiftClusterResizeInfo(JsonView jsonValue) : 
    m_allowCancelResize(false),
    m_allowCancelResizeHasBeenSet(false),
    m_resizeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRedshiftClusterResizeInfo& AwsRedshiftClusterResizeInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowCancelResize"))
  {
    m_allowCancelResize = jsonValue.GetBool("AllowCancelResize");

    m_allowCancelResizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResizeType"))
  {
    m_resizeType = jsonValue.GetString("ResizeType");

    m_resizeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRedshiftClusterResizeInfo::Jsonize() const
{
  JsonValue payload;

  if(m_allowCancelResizeHasBeenSet)
  {
   payload.WithBool("AllowCancelResize", m_allowCancelResize);

  }

  if(m_resizeTypeHasBeenSet)
  {
   payload.WithString("ResizeType", m_resizeType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
