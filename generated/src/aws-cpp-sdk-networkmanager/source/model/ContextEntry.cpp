/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/ContextEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

ContextEntry::ContextEntry(JsonView jsonValue) { *this = jsonValue; }

ContextEntry& ContextEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContextId")) {
    m_contextId = jsonValue.GetString("ContextId");
    m_contextIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContextType")) {
    m_contextType = jsonValue.GetString("ContextType");
    m_contextTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SegmentType")) {
    m_segmentType = jsonValue.GetString("SegmentType");
    m_segmentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PublicId")) {
    m_publicId = jsonValue.GetString("PublicId");
    m_publicIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AvailabilityZone")) {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttachmentType")) {
    m_attachmentType = jsonValue.GetString("AttachmentType");
    m_attachmentTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextEntry::Jsonize() const {
  JsonValue payload;

  if (m_contextIdHasBeenSet) {
    payload.WithString("ContextId", m_contextId);
  }

  if (m_contextTypeHasBeenSet) {
    payload.WithString("ContextType", m_contextType);
  }

  if (m_segmentTypeHasBeenSet) {
    payload.WithString("SegmentType", m_segmentType);
  }

  if (m_publicIdHasBeenSet) {
    payload.WithString("PublicId", m_publicId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_availabilityZoneHasBeenSet) {
    payload.WithString("AvailabilityZone", m_availabilityZone);
  }

  if (m_attachmentTypeHasBeenSet) {
    payload.WithString("AttachmentType", m_attachmentType);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
