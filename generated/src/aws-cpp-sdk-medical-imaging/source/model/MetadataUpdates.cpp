/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/MetadataUpdates.h>
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

MetadataUpdates::MetadataUpdates() : 
    m_dICOMUpdatesHasBeenSet(false)
{
}

MetadataUpdates::MetadataUpdates(JsonView jsonValue) : 
    m_dICOMUpdatesHasBeenSet(false)
{
  *this = jsonValue;
}

MetadataUpdates& MetadataUpdates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DICOMUpdates"))
  {
    m_dICOMUpdates = jsonValue.GetObject("DICOMUpdates");

    m_dICOMUpdatesHasBeenSet = true;
  }

  return *this;
}

JsonValue MetadataUpdates::Jsonize() const
{
  JsonValue payload;

  if(m_dICOMUpdatesHasBeenSet)
  {
   payload.WithObject("DICOMUpdates", m_dICOMUpdates.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
