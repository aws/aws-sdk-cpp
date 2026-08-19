/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-serverless/model/UpdateNamespaceRequest.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateNamespaceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_adminPasswordSecretKmsKeyIdHasBeenSet) {
    payload.WithString("adminPasswordSecretKmsKeyId", m_adminPasswordSecretKmsKeyId);
  }

  if (m_adminUserPasswordHasBeenSet) {
    payload.WithString("adminUserPassword", m_adminUserPassword);
  }

  if (m_adminUsernameHasBeenSet) {
    payload.WithString("adminUsername", m_adminUsername);
  }

  if (m_defaultIamRoleArnHasBeenSet) {
    payload.WithString("defaultIamRoleArn", m_defaultIamRoleArn);
  }

  if (m_iamRolesHasBeenSet) {
    Aws::Utils::Array<JsonValue> iamRolesJsonList(m_iamRoles.size());
    for (unsigned iamRolesIndex = 0; iamRolesIndex < iamRolesJsonList.GetLength(); ++iamRolesIndex) {
      iamRolesJsonList[iamRolesIndex].AsString(m_iamRoles[iamRolesIndex]);
    }
    payload.WithArray("iamRoles", std::move(iamRolesJsonList));
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  if (m_logDestinationTypeHasBeenSet) {
    payload.WithString("logDestinationType", LogDestinationTypeMapper::GetNameForLogDestinationType(m_logDestinationType));
  }

  if (m_logExportsHasBeenSet) {
    Aws::Utils::Array<JsonValue> logExportsJsonList(m_logExports.size());
    for (unsigned logExportsIndex = 0; logExportsIndex < logExportsJsonList.GetLength(); ++logExportsIndex) {
      logExportsJsonList[logExportsIndex].AsString(LogExportMapper::GetNameForLogExport(m_logExports[logExportsIndex]));
    }
    payload.WithArray("logExports", std::move(logExportsJsonList));
  }

  if (m_manageAdminPasswordHasBeenSet) {
    payload.WithBool("manageAdminPassword", m_manageAdminPassword);
  }

  if (m_namespaceNameHasBeenSet) {
    payload.WithString("namespaceName", m_namespaceName);
  }

  if (m_s3TableActionHasBeenSet) {
    payload.WithString("s3TableAction", S3TableActionMapper::GetNameForS3TableAction(m_s3TableAction));
  }

  if (m_s3TableGranularityHasBeenSet) {
    payload.WithString("s3TableGranularity", S3TableGranularityMapper::GetNameForS3TableGranularity(m_s3TableGranularity));
  }

  if (m_s3TableKmsKeyIdHasBeenSet) {
    payload.WithString("s3TableKmsKeyId", m_s3TableKmsKeyId);
  }

  if (m_s3TableNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> s3TableNamesJsonList(m_s3TableNames.size());
    for (unsigned s3TableNamesIndex = 0; s3TableNamesIndex < s3TableNamesJsonList.GetLength(); ++s3TableNamesIndex) {
      s3TableNamesJsonList[s3TableNamesIndex].AsString(m_s3TableNames[s3TableNamesIndex]);
    }
    payload.WithArray("s3TableNames", std::move(s3TableNamesJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNamespaceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.UpdateNamespace"));
  return headers;
}
