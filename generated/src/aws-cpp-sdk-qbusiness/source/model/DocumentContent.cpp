/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentContent.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

DocumentContent::DocumentContent() : 
    m_blobHasBeenSet(false),
    m_s3HasBeenSet(false)
{
}

DocumentContent::DocumentContent(JsonView jsonValue) : 
    m_blobHasBeenSet(false),
    m_s3HasBeenSet(false)
{
  *this = jsonValue;
}

DocumentContent& DocumentContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blob"))
  {
    m_blob = HashingUtils::Base64Decode(jsonValue.GetString("blob"));
    m_blobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");

    m_s3HasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentContent::Jsonize() const
{
  JsonValue payload;

  if(m_blobHasBeenSet)
  {
   payload.WithString("blob", HashingUtils::Base64Encode(m_blob));
  }

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
