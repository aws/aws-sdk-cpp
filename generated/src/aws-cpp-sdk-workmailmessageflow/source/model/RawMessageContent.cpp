﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmailmessageflow/model/RawMessageContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMailMessageFlow
{
namespace Model
{

RawMessageContent::RawMessageContent() : 
    m_s3ReferenceHasBeenSet(false)
{
}

RawMessageContent::RawMessageContent(JsonView jsonValue) : 
    m_s3ReferenceHasBeenSet(false)
{
  *this = jsonValue;
}

RawMessageContent& RawMessageContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Reference"))
  {
    m_s3Reference = jsonValue.GetObject("s3Reference");

    m_s3ReferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue RawMessageContent::Jsonize() const
{
  JsonValue payload;

  if(m_s3ReferenceHasBeenSet)
  {
   payload.WithObject("s3Reference", m_s3Reference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkMailMessageFlow
} // namespace Aws
