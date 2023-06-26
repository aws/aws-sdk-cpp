/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisioningArtifactDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProvisioningArtifactDetail::ProvisioningArtifactDetail() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(ProvisioningArtifactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_guidance(ProvisioningArtifactGuidance::NOT_SET),
    m_guidanceHasBeenSet(false),
    m_sourceRevisionHasBeenSet(false)
{
}

ProvisioningArtifactDetail::ProvisioningArtifactDetail(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(ProvisioningArtifactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_guidance(ProvisioningArtifactGuidance::NOT_SET),
    m_guidanceHasBeenSet(false),
    m_sourceRevisionHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisioningArtifactDetail& ProvisioningArtifactDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ProvisioningArtifactTypeMapper::GetProvisioningArtifactTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Active"))
  {
    m_active = jsonValue.GetBool("Active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Guidance"))
  {
    m_guidance = ProvisioningArtifactGuidanceMapper::GetProvisioningArtifactGuidanceForName(jsonValue.GetString("Guidance"));

    m_guidanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceRevision"))
  {
    m_sourceRevision = jsonValue.GetString("SourceRevision");

    m_sourceRevisionHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisioningArtifactDetail::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ProvisioningArtifactTypeMapper::GetNameForProvisioningArtifactType(m_type));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("Active", m_active);

  }

  if(m_guidanceHasBeenSet)
  {
   payload.WithString("Guidance", ProvisioningArtifactGuidanceMapper::GetNameForProvisioningArtifactGuidance(m_guidance));
  }

  if(m_sourceRevisionHasBeenSet)
  {
   payload.WithString("SourceRevision", m_sourceRevision);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
