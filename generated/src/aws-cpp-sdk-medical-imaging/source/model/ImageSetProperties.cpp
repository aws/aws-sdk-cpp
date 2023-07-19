/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/ImageSetProperties.h>
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

ImageSetProperties::ImageSetProperties() : 
    m_imageSetIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_imageSetState(ImageSetState::NOT_SET),
    m_imageSetStateHasBeenSet(false),
    m_imageSetWorkflowStatus(ImageSetWorkflowStatus::NOT_SET),
    m_imageSetWorkflowStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ImageSetProperties::ImageSetProperties(JsonView jsonValue) : 
    m_imageSetIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_imageSetState(ImageSetState::NOT_SET),
    m_imageSetStateHasBeenSet(false),
    m_imageSetWorkflowStatus(ImageSetWorkflowStatus::NOT_SET),
    m_imageSetWorkflowStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ImageSetProperties& ImageSetProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageSetId"))
  {
    m_imageSetId = jsonValue.GetString("imageSetId");

    m_imageSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionId"))
  {
    m_versionId = jsonValue.GetString("versionId");

    m_versionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageSetState"))
  {
    m_imageSetState = ImageSetStateMapper::GetImageSetStateForName(jsonValue.GetString("imageSetState"));

    m_imageSetStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageSetWorkflowStatus"))
  {
    m_imageSetWorkflowStatus = ImageSetWorkflowStatusMapper::GetImageSetWorkflowStatusForName(jsonValue.GetString("ImageSetWorkflowStatus"));

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

  if(jsonValue.ValueExists("deletedAt"))
  {
    m_deletedAt = jsonValue.GetDouble("deletedAt");

    m_deletedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageSetProperties::Jsonize() const
{
  JsonValue payload;

  if(m_imageSetIdHasBeenSet)
  {
   payload.WithString("imageSetId", m_imageSetId);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("versionId", m_versionId);

  }

  if(m_imageSetStateHasBeenSet)
  {
   payload.WithString("imageSetState", ImageSetStateMapper::GetNameForImageSetState(m_imageSetState));
  }

  if(m_imageSetWorkflowStatusHasBeenSet)
  {
   payload.WithString("ImageSetWorkflowStatus", ImageSetWorkflowStatusMapper::GetNameForImageSetWorkflowStatus(m_imageSetWorkflowStatus));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_deletedAtHasBeenSet)
  {
   payload.WithDouble("deletedAt", m_deletedAt.SecondsWithMSPrecision());
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
