/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/CopySourceImageSetInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

CopySourceImageSetInformation::CopySourceImageSetInformation() : 
    m_latestVersionIdHasBeenSet(false)
{
}

CopySourceImageSetInformation::CopySourceImageSetInformation(JsonView jsonValue) : 
    m_latestVersionIdHasBeenSet(false)
{
  *this = jsonValue;
}

CopySourceImageSetInformation& CopySourceImageSetInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("latestVersionId"))
  {
    m_latestVersionId = jsonValue.GetString("latestVersionId");

    m_latestVersionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CopySourceImageSetInformation::Jsonize() const
{
  JsonValue payload;

  if(m_latestVersionIdHasBeenSet)
  {
   payload.WithString("latestVersionId", m_latestVersionId);

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
