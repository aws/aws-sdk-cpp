﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/FileInformation.h>
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

FileInformation::FileInformation(JsonView jsonValue)
{
  *this = jsonValue;
}

FileInformation& FileInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalParts"))
  {
    m_totalParts = jsonValue.GetInteger("totalParts");
    m_totalPartsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("partSize"))
  {
    m_partSize = jsonValue.GetInt64("partSize");
    m_partSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentLength"))
  {
    m_contentLength = jsonValue.GetInt64("contentLength");
    m_contentLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Access"))
  {
    m_s3Access = jsonValue.GetObject("s3Access");
    m_s3AccessHasBeenSet = true;
  }
  return *this;
}

JsonValue FileInformation::Jsonize() const
{
  JsonValue payload;

  if(m_totalPartsHasBeenSet)
  {
   payload.WithInteger("totalParts", m_totalParts);

  }

  if(m_partSizeHasBeenSet)
  {
   payload.WithInt64("partSize", m_partSize);

  }

  if(m_contentLengthHasBeenSet)
  {
   payload.WithInt64("contentLength", m_contentLength);

  }

  if(m_s3AccessHasBeenSet)
  {
   payload.WithObject("s3Access", m_s3Access.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
