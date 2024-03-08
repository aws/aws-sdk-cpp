/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkSpaceApplicationDeployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

WorkSpaceApplicationDeployment::WorkSpaceApplicationDeployment() : 
    m_associationsHasBeenSet(false)
{
}

WorkSpaceApplicationDeployment::WorkSpaceApplicationDeployment(JsonView jsonValue) : 
    m_associationsHasBeenSet(false)
{
  *this = jsonValue;
}

WorkSpaceApplicationDeployment& WorkSpaceApplicationDeployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Associations"))
  {
    Aws::Utils::Array<JsonView> associationsJsonList = jsonValue.GetArray("Associations");
    for(unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex)
    {
      m_associations.push_back(associationsJsonList[associationsIndex].AsObject());
    }
    m_associationsHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkSpaceApplicationDeployment::Jsonize() const
{
  JsonValue payload;

  if(m_associationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associationsJsonList(m_associations.size());
   for(unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex)
   {
     associationsJsonList[associationsIndex].AsObject(m_associations[associationsIndex].Jsonize());
   }
   payload.WithArray("Associations", std::move(associationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
