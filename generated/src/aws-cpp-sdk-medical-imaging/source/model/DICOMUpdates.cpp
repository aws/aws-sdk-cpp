/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/DICOMUpdates.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

DICOMUpdates::DICOMUpdates() : 
    m_removableAttributesHasBeenSet(false),
    m_updatableAttributesHasBeenSet(false)
{
}

DICOMUpdates::DICOMUpdates(JsonView jsonValue) : 
    m_removableAttributesHasBeenSet(false),
    m_updatableAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

DICOMUpdates& DICOMUpdates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("removableAttributes"))
  {
    m_removableAttributes = HashingUtils::Base64Decode(jsonValue.GetString("removableAttributes"));
    m_removableAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatableAttributes"))
  {
    m_updatableAttributes = HashingUtils::Base64Decode(jsonValue.GetString("updatableAttributes"));
    m_updatableAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue DICOMUpdates::Jsonize() const
{
  JsonValue payload;

  if(m_removableAttributesHasBeenSet)
  {
   payload.WithString("removableAttributes", HashingUtils::Base64Encode(m_removableAttributes));
  }

  if(m_updatableAttributesHasBeenSet)
  {
   payload.WithString("updatableAttributes", HashingUtils::Base64Encode(m_updatableAttributes));
  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
