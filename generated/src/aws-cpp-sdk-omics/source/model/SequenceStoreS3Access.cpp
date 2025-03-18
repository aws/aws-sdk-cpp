﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/SequenceStoreS3Access.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

SequenceStoreS3Access::SequenceStoreS3Access(JsonView jsonValue)
{
  *this = jsonValue;
}

SequenceStoreS3Access& SequenceStoreS3Access::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Uri"))
  {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3AccessPointArn"))
  {
    m_s3AccessPointArn = jsonValue.GetString("s3AccessPointArn");
    m_s3AccessPointArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessLogLocation"))
  {
    m_accessLogLocation = jsonValue.GetString("accessLogLocation");
    m_accessLogLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue SequenceStoreS3Access::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("s3Uri", m_s3Uri);

  }

  if(m_s3AccessPointArnHasBeenSet)
  {
   payload.WithString("s3AccessPointArn", m_s3AccessPointArn);

  }

  if(m_accessLogLocationHasBeenSet)
  {
   payload.WithString("accessLogLocation", m_accessLogLocation);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
