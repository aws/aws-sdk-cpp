/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/CopySourceImageSetProperties.h>
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

CopySourceImageSetProperties::CopySourceImageSetProperties() : 
    m_imageSetIdHasBeenSet(false),
    m_latestVersionIdHasBeenSet(false),
    m_imageSetState(ImageSetState::NOT_SET),
    m_imageSetStateHasBeenSet(false),
    m_imageSetWorkflowStatus(ImageSetWorkflowStatus::NOT_SET),
    m_imageSetWorkflowStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_imageSetArnHasBeenSet(false)
{
}

CopySourceImageSetProperties::CopySourceImageSetProperties(JsonView jsonValue) : 
    m_imageSetIdHasBeenSet(false),
    m_latestVersionIdHasBeenSet(false),
    m_imageSetState(ImageSetState::NOT_SET),
    m_imageSetStateHasBeenSet(false),
    m_imageSetWorkflowStatus(ImageSetWorkflowStatus::NOT_SET),
    m_imageSetWorkflowStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_imageSetArnHasBeenSet(false)
{
  *this = jsonValue;
}

CopySourceImageSetProperties& CopySourceImageSetProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageSetId"))
  {
    m_imageSetId = jsonValue.GetString("imageSetId");

    m_imageSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestVersionId"))
  {
    m_latestVersionId = jsonValue.GetString("latestVersionId");

    m_latestVersionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageSetState"))
  {
    m_imageSetState = ImageSetStateMapper::GetImageSetStateForName(jsonValue.GetString("imageSetState"));

    m_imageSetStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageSetWorkflowStatus"))
  {
    m_imageSetWorkflowStatus = ImageSetWorkflowStatusMapper::GetImageSetWorkflowStatusForName(jsonValue.GetString("imageSetWorkflowStatus"));

    m_imageSetWorkflowStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageSetArn"))
  {
    m_imageSetArn = jsonValue.GetString("imageSetArn");

    m_imageSetArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CopySourceImageSetProperties::Jsonize() const
{
  JsonValue payload;

  if(m_imageSetIdHasBeenSet)
  {
   payload.WithString("imageSetId", m_imageSetId);

  }

  if(m_latestVersionIdHasBeenSet)
  {
   payload.WithString("latestVersionId", m_latestVersionId);

  }

  if(m_imageSetStateHasBeenSet)
  {
   payload.WithString("imageSetState", ImageSetStateMapper::GetNameForImageSetState(m_imageSetState));
  }

  if(m_imageSetWorkflowStatusHasBeenSet)
  {
   payload.WithString("imageSetWorkflowStatus", ImageSetWorkflowStatusMapper::GetNameForImageSetWorkflowStatus(m_imageSetWorkflowStatus));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_imageSetArnHasBeenSet)
  {
   payload.WithString("imageSetArn", m_imageSetArn);

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
