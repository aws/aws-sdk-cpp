/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ShareInvitation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ShareInvitation::ShareInvitation() : 
    m_shareInvitationIdHasBeenSet(false),
    m_shareResourceType(ShareResourceType::NOT_SET),
    m_shareResourceTypeHasBeenSet(false),
    m_workloadIdHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_profileArnHasBeenSet(false),
    m_templateArnHasBeenSet(false)
{
}

ShareInvitation::ShareInvitation(JsonView jsonValue) : 
    m_shareInvitationIdHasBeenSet(false),
    m_shareResourceType(ShareResourceType::NOT_SET),
    m_shareResourceTypeHasBeenSet(false),
    m_workloadIdHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_profileArnHasBeenSet(false),
    m_templateArnHasBeenSet(false)
{
  *this = jsonValue;
}

ShareInvitation& ShareInvitation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShareInvitationId"))
  {
    m_shareInvitationId = jsonValue.GetString("ShareInvitationId");

    m_shareInvitationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShareResourceType"))
  {
    m_shareResourceType = ShareResourceTypeMapper::GetShareResourceTypeForName(jsonValue.GetString("ShareResourceType"));

    m_shareResourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

    m_workloadIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensAlias"))
  {
    m_lensAlias = jsonValue.GetString("LensAlias");

    m_lensAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");

    m_lensArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileArn"))
  {
    m_profileArn = jsonValue.GetString("ProfileArn");

    m_profileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateArn"))
  {
    m_templateArn = jsonValue.GetString("TemplateArn");

    m_templateArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareInvitation::Jsonize() const
{
  JsonValue payload;

  if(m_shareInvitationIdHasBeenSet)
  {
   payload.WithString("ShareInvitationId", m_shareInvitationId);

  }

  if(m_shareResourceTypeHasBeenSet)
  {
   payload.WithString("ShareResourceType", ShareResourceTypeMapper::GetNameForShareResourceType(m_shareResourceType));
  }

  if(m_workloadIdHasBeenSet)
  {
   payload.WithString("WorkloadId", m_workloadId);

  }

  if(m_lensAliasHasBeenSet)
  {
   payload.WithString("LensAlias", m_lensAlias);

  }

  if(m_lensArnHasBeenSet)
  {
   payload.WithString("LensArn", m_lensArn);

  }

  if(m_profileArnHasBeenSet)
  {
   payload.WithString("ProfileArn", m_profileArn);

  }

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("TemplateArn", m_templateArn);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
