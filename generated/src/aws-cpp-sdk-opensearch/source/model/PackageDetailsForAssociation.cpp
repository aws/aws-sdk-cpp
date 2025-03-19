/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PackageDetailsForAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

PackageDetailsForAssociation::PackageDetailsForAssociation(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageDetailsForAssociation& PackageDetailsForAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PackageID"))
  {
    m_packageID = jsonValue.GetString("PackageID");
    m_packageIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrerequisitePackageIDList"))
  {
    Aws::Utils::Array<JsonView> prerequisitePackageIDListJsonList = jsonValue.GetArray("PrerequisitePackageIDList");
    for(unsigned prerequisitePackageIDListIndex = 0; prerequisitePackageIDListIndex < prerequisitePackageIDListJsonList.GetLength(); ++prerequisitePackageIDListIndex)
    {
      m_prerequisitePackageIDList.push_back(prerequisitePackageIDListJsonList[prerequisitePackageIDListIndex].AsString());
    }
    m_prerequisitePackageIDListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociationConfiguration"))
  {
    m_associationConfiguration = jsonValue.GetObject("AssociationConfiguration");
    m_associationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageDetailsForAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_packageIDHasBeenSet)
  {
   payload.WithString("PackageID", m_packageID);

  }

  if(m_prerequisitePackageIDListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> prerequisitePackageIDListJsonList(m_prerequisitePackageIDList.size());
   for(unsigned prerequisitePackageIDListIndex = 0; prerequisitePackageIDListIndex < prerequisitePackageIDListJsonList.GetLength(); ++prerequisitePackageIDListIndex)
   {
     prerequisitePackageIDListJsonList[prerequisitePackageIDListIndex].AsString(m_prerequisitePackageIDList[prerequisitePackageIDListIndex]);
   }
   payload.WithArray("PrerequisitePackageIDList", std::move(prerequisitePackageIDListJsonList));

  }

  if(m_associationConfigurationHasBeenSet)
  {
   payload.WithObject("AssociationConfiguration", m_associationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
