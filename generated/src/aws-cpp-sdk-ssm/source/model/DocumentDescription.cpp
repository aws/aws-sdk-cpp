/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentDescription.h>
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

DocumentDescription::DocumentDescription() : 
    m_sha1HasBeenSet(false),
    m_hashHasBeenSet(false),
    m_hashType(DocumentHashType::NOT_SET),
    m_hashTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_status(DocumentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusInformationHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_platformTypesHasBeenSet(false),
    m_documentType(DocumentType::NOT_SET),
    m_documentTypeHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_latestVersionHasBeenSet(false),
    m_defaultVersionHasBeenSet(false),
    m_documentFormat(DocumentFormat::NOT_SET),
    m_documentFormatHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_attachmentsInformationHasBeenSet(false),
    m_requiresHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_reviewInformationHasBeenSet(false),
    m_approvedVersionHasBeenSet(false),
    m_pendingReviewVersionHasBeenSet(false),
    m_reviewStatus(ReviewStatus::NOT_SET),
    m_reviewStatusHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_categoryEnumHasBeenSet(false)
{
}

DocumentDescription::DocumentDescription(JsonView jsonValue) : 
    m_sha1HasBeenSet(false),
    m_hashHasBeenSet(false),
    m_hashType(DocumentHashType::NOT_SET),
    m_hashTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_status(DocumentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusInformationHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_platformTypesHasBeenSet(false),
    m_documentType(DocumentType::NOT_SET),
    m_documentTypeHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_latestVersionHasBeenSet(false),
    m_defaultVersionHasBeenSet(false),
    m_documentFormat(DocumentFormat::NOT_SET),
    m_documentFormatHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_attachmentsInformationHasBeenSet(false),
    m_requiresHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_reviewInformationHasBeenSet(false),
    m_approvedVersionHasBeenSet(false),
    m_pendingReviewVersionHasBeenSet(false),
    m_reviewStatus(ReviewStatus::NOT_SET),
    m_reviewStatusHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_categoryEnumHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentDescription& DocumentDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sha1"))
  {
    m_sha1 = jsonValue.GetString("Sha1");

    m_sha1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Hash"))
  {
    m_hash = jsonValue.GetString("Hash");

    m_hashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HashType"))
  {
    m_hashType = DocumentHashTypeMapper::GetDocumentHashTypeForName(jsonValue.GetString("HashType"));

    m_hashTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionName"))
  {
    m_versionName = jsonValue.GetString("VersionName");

    m_versionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DocumentStatusMapper::GetDocumentStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusInformation"))
  {
    m_statusInformation = jsonValue.GetString("StatusInformation");

    m_statusInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("Parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformTypes"))
  {
    Aws::Utils::Array<JsonView> platformTypesJsonList = jsonValue.GetArray("PlatformTypes");
    for(unsigned platformTypesIndex = 0; platformTypesIndex < platformTypesJsonList.GetLength(); ++platformTypesIndex)
    {
      m_platformTypes.push_back(PlatformTypeMapper::GetPlatformTypeForName(platformTypesJsonList[platformTypesIndex].AsString()));
    }
    m_platformTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentType"))
  {
    m_documentType = DocumentTypeMapper::GetDocumentTypeForName(jsonValue.GetString("DocumentType"));

    m_documentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("SchemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestVersion"))
  {
    m_latestVersion = jsonValue.GetString("LatestVersion");

    m_latestVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultVersion"))
  {
    m_defaultVersion = jsonValue.GetString("DefaultVersion");

    m_defaultVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentFormat"))
  {
    m_documentFormat = DocumentFormatMapper::GetDocumentFormatForName(jsonValue.GetString("DocumentFormat"));

    m_documentFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetType"))
  {
    m_targetType = jsonValue.GetString("TargetType");

    m_targetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentsInformation"))
  {
    Aws::Utils::Array<JsonView> attachmentsInformationJsonList = jsonValue.GetArray("AttachmentsInformation");
    for(unsigned attachmentsInformationIndex = 0; attachmentsInformationIndex < attachmentsInformationJsonList.GetLength(); ++attachmentsInformationIndex)
    {
      m_attachmentsInformation.push_back(attachmentsInformationJsonList[attachmentsInformationIndex].AsObject());
    }
    m_attachmentsInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Requires"))
  {
    Aws::Utils::Array<JsonView> requiresJsonList = jsonValue.GetArray("Requires");
    for(unsigned requiresIndex = 0; requiresIndex < requiresJsonList.GetLength(); ++requiresIndex)
    {
      m_requires.push_back(requiresJsonList[requiresIndex].AsObject());
    }
    m_requiresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Author"))
  {
    m_author = jsonValue.GetString("Author");

    m_authorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReviewInformation"))
  {
    Aws::Utils::Array<JsonView> reviewInformationJsonList = jsonValue.GetArray("ReviewInformation");
    for(unsigned reviewInformationIndex = 0; reviewInformationIndex < reviewInformationJsonList.GetLength(); ++reviewInformationIndex)
    {
      m_reviewInformation.push_back(reviewInformationJsonList[reviewInformationIndex].AsObject());
    }
    m_reviewInformationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovedVersion"))
  {
    m_approvedVersion = jsonValue.GetString("ApprovedVersion");

    m_approvedVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingReviewVersion"))
  {
    m_pendingReviewVersion = jsonValue.GetString("PendingReviewVersion");

    m_pendingReviewVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReviewStatus"))
  {
    m_reviewStatus = ReviewStatusMapper::GetReviewStatusForName(jsonValue.GetString("ReviewStatus"));

    m_reviewStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Category"))
  {
    Aws::Utils::Array<JsonView> categoryJsonList = jsonValue.GetArray("Category");
    for(unsigned categoryIndex = 0; categoryIndex < categoryJsonList.GetLength(); ++categoryIndex)
    {
      m_category.push_back(categoryJsonList[categoryIndex].AsString());
    }
    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryEnum"))
  {
    Aws::Utils::Array<JsonView> categoryEnumJsonList = jsonValue.GetArray("CategoryEnum");
    for(unsigned categoryEnumIndex = 0; categoryEnumIndex < categoryEnumJsonList.GetLength(); ++categoryEnumIndex)
    {
      m_categoryEnum.push_back(categoryEnumJsonList[categoryEnumIndex].AsString());
    }
    m_categoryEnumHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentDescription::Jsonize() const
{
  JsonValue payload;

  if(m_sha1HasBeenSet)
  {
   payload.WithString("Sha1", m_sha1);

  }

  if(m_hashHasBeenSet)
  {
   payload.WithString("Hash", m_hash);

  }

  if(m_hashTypeHasBeenSet)
  {
   payload.WithString("HashType", DocumentHashTypeMapper::GetNameForDocumentHashType(m_hashType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("VersionName", m_versionName);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DocumentStatusMapper::GetNameForDocumentStatus(m_status));
  }

  if(m_statusInformationHasBeenSet)
  {
   payload.WithString("StatusInformation", m_statusInformation);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("Parameters", std::move(parametersJsonList));

  }

  if(m_platformTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformTypesJsonList(m_platformTypes.size());
   for(unsigned platformTypesIndex = 0; platformTypesIndex < platformTypesJsonList.GetLength(); ++platformTypesIndex)
   {
     platformTypesJsonList[platformTypesIndex].AsString(PlatformTypeMapper::GetNameForPlatformType(m_platformTypes[platformTypesIndex]));
   }
   payload.WithArray("PlatformTypes", std::move(platformTypesJsonList));

  }

  if(m_documentTypeHasBeenSet)
  {
   payload.WithString("DocumentType", DocumentTypeMapper::GetNameForDocumentType(m_documentType));
  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("SchemaVersion", m_schemaVersion);

  }

  if(m_latestVersionHasBeenSet)
  {
   payload.WithString("LatestVersion", m_latestVersion);

  }

  if(m_defaultVersionHasBeenSet)
  {
   payload.WithString("DefaultVersion", m_defaultVersion);

  }

  if(m_documentFormatHasBeenSet)
  {
   payload.WithString("DocumentFormat", DocumentFormatMapper::GetNameForDocumentFormat(m_documentFormat));
  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("TargetType", m_targetType);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_attachmentsInformationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentsInformationJsonList(m_attachmentsInformation.size());
   for(unsigned attachmentsInformationIndex = 0; attachmentsInformationIndex < attachmentsInformationJsonList.GetLength(); ++attachmentsInformationIndex)
   {
     attachmentsInformationJsonList[attachmentsInformationIndex].AsObject(m_attachmentsInformation[attachmentsInformationIndex].Jsonize());
   }
   payload.WithArray("AttachmentsInformation", std::move(attachmentsInformationJsonList));

  }

  if(m_requiresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiresJsonList(m_requires.size());
   for(unsigned requiresIndex = 0; requiresIndex < requiresJsonList.GetLength(); ++requiresIndex)
   {
     requiresJsonList[requiresIndex].AsObject(m_requires[requiresIndex].Jsonize());
   }
   payload.WithArray("Requires", std::move(requiresJsonList));

  }

  if(m_authorHasBeenSet)
  {
   payload.WithString("Author", m_author);

  }

  if(m_reviewInformationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reviewInformationJsonList(m_reviewInformation.size());
   for(unsigned reviewInformationIndex = 0; reviewInformationIndex < reviewInformationJsonList.GetLength(); ++reviewInformationIndex)
   {
     reviewInformationJsonList[reviewInformationIndex].AsObject(m_reviewInformation[reviewInformationIndex].Jsonize());
   }
   payload.WithArray("ReviewInformation", std::move(reviewInformationJsonList));

  }

  if(m_approvedVersionHasBeenSet)
  {
   payload.WithString("ApprovedVersion", m_approvedVersion);

  }

  if(m_pendingReviewVersionHasBeenSet)
  {
   payload.WithString("PendingReviewVersion", m_pendingReviewVersion);

  }

  if(m_reviewStatusHasBeenSet)
  {
   payload.WithString("ReviewStatus", ReviewStatusMapper::GetNameForReviewStatus(m_reviewStatus));
  }

  if(m_categoryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoryJsonList(m_category.size());
   for(unsigned categoryIndex = 0; categoryIndex < categoryJsonList.GetLength(); ++categoryIndex)
   {
     categoryJsonList[categoryIndex].AsString(m_category[categoryIndex]);
   }
   payload.WithArray("Category", std::move(categoryJsonList));

  }

  if(m_categoryEnumHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoryEnumJsonList(m_categoryEnum.size());
   for(unsigned categoryEnumIndex = 0; categoryEnumIndex < categoryEnumJsonList.GetLength(); ++categoryEnumIndex)
   {
     categoryEnumJsonList[categoryEnumIndex].AsString(m_categoryEnum[categoryEnumIndex]);
   }
   payload.WithArray("CategoryEnum", std::move(categoryEnumJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
