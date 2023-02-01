/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/AccessPolicyDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

AccessPolicyDetail::AccessPolicyDetail() : 
    m_createdDate(0),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastModifiedDate(0),
    m_lastModifiedDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_policyVersionHasBeenSet(false),
    m_type(AccessPolicyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

AccessPolicyDetail::AccessPolicyDetail(JsonView jsonValue) : 
    m_createdDate(0),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastModifiedDate(0),
    m_lastModifiedDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_policyVersionHasBeenSet(false),
    m_type(AccessPolicyType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AccessPolicyDetail& AccessPolicyDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetInt64("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetInt64("lastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetObject("policy");

    m_policyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyVersion"))
  {
    m_policyVersion = jsonValue.GetString("policyVersion");

    m_policyVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = AccessPolicyTypeMapper::GetAccessPolicyTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessPolicyDetail::Jsonize() const
{
  JsonValue payload;

  if(m_createdDateHasBeenSet)
  {
   payload.WithInt64("createdDate", m_createdDate);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithInt64("lastModifiedDate", m_lastModifiedDate);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_policyHasBeenSet)
  {
    if(!m_policy.View().IsNull())
    {
       payload.WithObject("policy", JsonValue(m_policy.View()));
    }
  }

  if(m_policyVersionHasBeenSet)
  {
   payload.WithString("policyVersion", m_policyVersion);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AccessPolicyTypeMapper::GetNameForAccessPolicyType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
