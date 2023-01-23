/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamPolicyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsIamPolicyDetails::AwsIamPolicyDetails() : 
    m_attachmentCount(0),
    m_attachmentCountHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_defaultVersionIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isAttachable(false),
    m_isAttachableHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_permissionsBoundaryUsageCount(0),
    m_permissionsBoundaryUsageCountHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyVersionListHasBeenSet(false),
    m_updateDateHasBeenSet(false)
{
}

AwsIamPolicyDetails::AwsIamPolicyDetails(JsonView jsonValue) : 
    m_attachmentCount(0),
    m_attachmentCountHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_defaultVersionIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isAttachable(false),
    m_isAttachableHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_permissionsBoundaryUsageCount(0),
    m_permissionsBoundaryUsageCountHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyVersionListHasBeenSet(false),
    m_updateDateHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamPolicyDetails& AwsIamPolicyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachmentCount"))
  {
    m_attachmentCount = jsonValue.GetInteger("AttachmentCount");

    m_attachmentCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetString("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultVersionId"))
  {
    m_defaultVersionId = jsonValue.GetString("DefaultVersionId");

    m_defaultVersionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsAttachable"))
  {
    m_isAttachable = jsonValue.GetBool("IsAttachable");

    m_isAttachableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionsBoundaryUsageCount"))
  {
    m_permissionsBoundaryUsageCount = jsonValue.GetInteger("PermissionsBoundaryUsageCount");

    m_permissionsBoundaryUsageCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyId"))
  {
    m_policyId = jsonValue.GetString("PolicyId");

    m_policyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyVersionList"))
  {
    Aws::Utils::Array<JsonView> policyVersionListJsonList = jsonValue.GetArray("PolicyVersionList");
    for(unsigned policyVersionListIndex = 0; policyVersionListIndex < policyVersionListJsonList.GetLength(); ++policyVersionListIndex)
    {
      m_policyVersionList.push_back(policyVersionListJsonList[policyVersionListIndex].AsObject());
    }
    m_policyVersionListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateDate"))
  {
    m_updateDate = jsonValue.GetString("UpdateDate");

    m_updateDateHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamPolicyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentCountHasBeenSet)
  {
   payload.WithInteger("AttachmentCount", m_attachmentCount);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithString("CreateDate", m_createDate);

  }

  if(m_defaultVersionIdHasBeenSet)
  {
   payload.WithString("DefaultVersionId", m_defaultVersionId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_isAttachableHasBeenSet)
  {
   payload.WithBool("IsAttachable", m_isAttachable);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_permissionsBoundaryUsageCountHasBeenSet)
  {
   payload.WithInteger("PermissionsBoundaryUsageCount", m_permissionsBoundaryUsageCount);

  }

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("PolicyId", m_policyId);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_policyVersionListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyVersionListJsonList(m_policyVersionList.size());
   for(unsigned policyVersionListIndex = 0; policyVersionListIndex < policyVersionListJsonList.GetLength(); ++policyVersionListIndex)
   {
     policyVersionListJsonList[policyVersionListIndex].AsObject(m_policyVersionList[policyVersionListIndex].Jsonize());
   }
   payload.WithArray("PolicyVersionList", std::move(policyVersionListJsonList));

  }

  if(m_updateDateHasBeenSet)
  {
   payload.WithString("UpdateDate", m_updateDate);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
