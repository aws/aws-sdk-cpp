/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/WorkflowParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

WorkflowParameter::WorkflowParameter() : 
    m_descriptionHasBeenSet(false),
    m_optional(false),
    m_optionalHasBeenSet(false)
{
}

WorkflowParameter::WorkflowParameter(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_optional(false),
    m_optionalHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowParameter& WorkflowParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("optional"))
  {
    m_optional = jsonValue.GetBool("optional");

    m_optionalHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowParameter::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_optionalHasBeenSet)
  {
   payload.WithBool("optional", m_optional);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
