/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/TemplateActiveVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

TemplateActiveVersionRequest::TemplateActiveVersionRequest() : 
    m_versionHasBeenSet(false)
{
}

TemplateActiveVersionRequest::TemplateActiveVersionRequest(JsonView jsonValue) : 
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateActiveVersionRequest& TemplateActiveVersionRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateActiveVersionRequest::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
