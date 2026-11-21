/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/CreateAccessControlApplicationRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAccessControlApplicationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_applicationIdHasBeenSet) {
    payload.WithString("ApplicationId", m_applicationId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("Namespace", m_namespace);
  }

  if (m_authenticationTypeHasBeenSet) {
    payload.WithString(
        "AuthenticationType",
        AccessControlApplicationAuthenticationTypeMapper::GetNameForAccessControlApplicationAuthenticationType(m_authenticationType));
  }

  if (m_idpAuthorizingConfigurationHasBeenSet) {
    payload.WithObject("IdpAuthorizingConfiguration", m_idpAuthorizingConfiguration.Jsonize());
  }

  if (m_quickAuthenticationConfigurationHasBeenSet) {
    payload.WithObject("QuickAuthenticationConfiguration", m_quickAuthenticationConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}
