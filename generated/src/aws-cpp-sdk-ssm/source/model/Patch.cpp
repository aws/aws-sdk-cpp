/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/Patch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

Patch::Patch() : 
    m_idHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contentUrlHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_productFamilyHasBeenSet(false),
    m_productHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_msrcSeverityHasBeenSet(false),
    m_kbNumberHasBeenSet(false),
    m_msrcNumberHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_advisoryIdsHasBeenSet(false),
    m_bugzillaIdsHasBeenSet(false),
    m_cVEIdsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_epoch(0),
    m_epochHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_releaseHasBeenSet(false),
    m_archHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_repositoryHasBeenSet(false)
{
}

Patch::Patch(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contentUrlHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_productFamilyHasBeenSet(false),
    m_productHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_msrcSeverityHasBeenSet(false),
    m_kbNumberHasBeenSet(false),
    m_msrcNumberHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_advisoryIdsHasBeenSet(false),
    m_bugzillaIdsHasBeenSet(false),
    m_cVEIdsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_epoch(0),
    m_epochHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_releaseHasBeenSet(false),
    m_archHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_repositoryHasBeenSet(false)
{
  *this = jsonValue;
}

Patch& Patch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleaseDate"))
  {
    m_releaseDate = jsonValue.GetDouble("ReleaseDate");

    m_releaseDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentUrl"))
  {
    m_contentUrl = jsonValue.GetString("ContentUrl");

    m_contentUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Vendor"))
  {
    m_vendor = jsonValue.GetString("Vendor");

    m_vendorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductFamily"))
  {
    m_productFamily = jsonValue.GetString("ProductFamily");

    m_productFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Product"))
  {
    m_product = jsonValue.GetString("Product");

    m_productHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");

    m_classificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MsrcSeverity"))
  {
    m_msrcSeverity = jsonValue.GetString("MsrcSeverity");

    m_msrcSeverityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KbNumber"))
  {
    m_kbNumber = jsonValue.GetString("KbNumber");

    m_kbNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MsrcNumber"))
  {
    m_msrcNumber = jsonValue.GetString("MsrcNumber");

    m_msrcNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvisoryIds"))
  {
    Aws::Utils::Array<JsonView> advisoryIdsJsonList = jsonValue.GetArray("AdvisoryIds");
    for(unsigned advisoryIdsIndex = 0; advisoryIdsIndex < advisoryIdsJsonList.GetLength(); ++advisoryIdsIndex)
    {
      m_advisoryIds.push_back(advisoryIdsJsonList[advisoryIdsIndex].AsString());
    }
    m_advisoryIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BugzillaIds"))
  {
    Aws::Utils::Array<JsonView> bugzillaIdsJsonList = jsonValue.GetArray("BugzillaIds");
    for(unsigned bugzillaIdsIndex = 0; bugzillaIdsIndex < bugzillaIdsJsonList.GetLength(); ++bugzillaIdsIndex)
    {
      m_bugzillaIds.push_back(bugzillaIdsJsonList[bugzillaIdsIndex].AsString());
    }
    m_bugzillaIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CVEIds"))
  {
    Aws::Utils::Array<JsonView> cVEIdsJsonList = jsonValue.GetArray("CVEIds");
    for(unsigned cVEIdsIndex = 0; cVEIdsIndex < cVEIdsJsonList.GetLength(); ++cVEIdsIndex)
    {
      m_cVEIds.push_back(cVEIdsJsonList[cVEIdsIndex].AsString());
    }
    m_cVEIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Epoch"))
  {
    m_epoch = jsonValue.GetInteger("Epoch");

    m_epochHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Release"))
  {
    m_release = jsonValue.GetString("Release");

    m_releaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arch"))
  {
    m_arch = jsonValue.GetString("Arch");

    m_archHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = jsonValue.GetString("Severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Repository"))
  {
    m_repository = jsonValue.GetString("Repository");

    m_repositoryHasBeenSet = true;
  }

  return *this;
}

JsonValue Patch::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_releaseDateHasBeenSet)
  {
   payload.WithDouble("ReleaseDate", m_releaseDate.SecondsWithMSPrecision());
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_contentUrlHasBeenSet)
  {
   payload.WithString("ContentUrl", m_contentUrl);

  }

  if(m_vendorHasBeenSet)
  {
   payload.WithString("Vendor", m_vendor);

  }

  if(m_productFamilyHasBeenSet)
  {
   payload.WithString("ProductFamily", m_productFamily);

  }

  if(m_productHasBeenSet)
  {
   payload.WithString("Product", m_product);

  }

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_msrcSeverityHasBeenSet)
  {
   payload.WithString("MsrcSeverity", m_msrcSeverity);

  }

  if(m_kbNumberHasBeenSet)
  {
   payload.WithString("KbNumber", m_kbNumber);

  }

  if(m_msrcNumberHasBeenSet)
  {
   payload.WithString("MsrcNumber", m_msrcNumber);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_advisoryIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> advisoryIdsJsonList(m_advisoryIds.size());
   for(unsigned advisoryIdsIndex = 0; advisoryIdsIndex < advisoryIdsJsonList.GetLength(); ++advisoryIdsIndex)
   {
     advisoryIdsJsonList[advisoryIdsIndex].AsString(m_advisoryIds[advisoryIdsIndex]);
   }
   payload.WithArray("AdvisoryIds", std::move(advisoryIdsJsonList));

  }

  if(m_bugzillaIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bugzillaIdsJsonList(m_bugzillaIds.size());
   for(unsigned bugzillaIdsIndex = 0; bugzillaIdsIndex < bugzillaIdsJsonList.GetLength(); ++bugzillaIdsIndex)
   {
     bugzillaIdsJsonList[bugzillaIdsIndex].AsString(m_bugzillaIds[bugzillaIdsIndex]);
   }
   payload.WithArray("BugzillaIds", std::move(bugzillaIdsJsonList));

  }

  if(m_cVEIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cVEIdsJsonList(m_cVEIds.size());
   for(unsigned cVEIdsIndex = 0; cVEIdsIndex < cVEIdsJsonList.GetLength(); ++cVEIdsIndex)
   {
     cVEIdsJsonList[cVEIdsIndex].AsString(m_cVEIds[cVEIdsIndex]);
   }
   payload.WithArray("CVEIds", std::move(cVEIdsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_epochHasBeenSet)
  {
   payload.WithInteger("Epoch", m_epoch);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_releaseHasBeenSet)
  {
   payload.WithString("Release", m_release);

  }

  if(m_archHasBeenSet)
  {
   payload.WithString("Arch", m_arch);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", m_severity);

  }

  if(m_repositoryHasBeenSet)
  {
   payload.WithString("Repository", m_repository);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
