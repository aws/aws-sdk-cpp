/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/UpdateLaunchConfigurationTemplateRequest.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLaunchConfigurationTemplateRequest::SerializePayload() const {
  JsonValue payload;

  if (m_launchConfigurationTemplateIDHasBeenSet) {
    payload.WithString("launchConfigurationTemplateID", m_launchConfigurationTemplateID);
  }

  if (m_postLaunchActionsHasBeenSet) {
    payload.WithObject("postLaunchActions", m_postLaunchActions.Jsonize());
  }

  if (m_enableMapAutoTaggingHasBeenSet) {
    payload.WithBool("enableMapAutoTagging", m_enableMapAutoTagging);
  }

  if (m_mapAutoTaggingMpeIDHasBeenSet) {
    payload.WithString("mapAutoTaggingMpeID", m_mapAutoTaggingMpeID);
  }

  if (m_launchDispositionHasBeenSet) {
    payload.WithString("launchDisposition", LaunchDispositionMapper::GetNameForLaunchDisposition(m_launchDisposition));
  }

  if (m_targetInstanceTypeRightSizingMethodHasBeenSet) {
    payload.WithString(
        "targetInstanceTypeRightSizingMethod",
        TargetInstanceTypeRightSizingMethodMapper::GetNameForTargetInstanceTypeRightSizingMethod(m_targetInstanceTypeRightSizingMethod));
  }

  if (m_copyPrivateIpHasBeenSet) {
    payload.WithBool("copyPrivateIp", m_copyPrivateIp);
  }

  if (m_associatePublicIpAddressHasBeenSet) {
    payload.WithBool("associatePublicIpAddress", m_associatePublicIpAddress);
  }

  if (m_copyTagsHasBeenSet) {
    payload.WithBool("copyTags", m_copyTags);
  }

  if (m_licensingHasBeenSet) {
    payload.WithObject("licensing", m_licensing.Jsonize());
  }

  if (m_bootModeHasBeenSet) {
    payload.WithString("bootMode", BootModeMapper::GetNameForBootMode(m_bootMode));
  }

  if (m_smallVolumeMaxSizeHasBeenSet) {
    payload.WithInt64("smallVolumeMaxSize", m_smallVolumeMaxSize);
  }

  if (m_smallVolumeConfHasBeenSet) {
    payload.WithObject("smallVolumeConf", m_smallVolumeConf.Jsonize());
  }

  if (m_largeVolumeConfHasBeenSet) {
    payload.WithObject("largeVolumeConf", m_largeVolumeConf.Jsonize());
  }

  if (m_enableParametersEncryptionHasBeenSet) {
    payload.WithBool("enableParametersEncryption", m_enableParametersEncryption);
  }

  if (m_parametersEncryptionKeyHasBeenSet) {
    payload.WithString("parametersEncryptionKey", m_parametersEncryptionKey);
  }

  return payload.View().WriteReadable();
}
