/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {
enum class Event {
  NOT_SET,
  WebsiteInteract,
  FileDownloadFromSecureBrowserToRemoteDisk,
  FileTransferFromRemoteToLocalDisk,
  FileTransferFromLocalToRemoteDisk,
  FileUploadFromRemoteDiskToSecureBrowser,
  ContentPasteToWebsite,
  ContentTransferFromLocalToRemoteClipboard,
  ContentCopyFromWebsite,
  UrlLoad,
  TabOpen,
  TabClose,
  PrintJobSubmit,
  SessionConnect,
  SessionStart,
  SessionDisconnect,
  SessionEnd,
  UrlBlockByContentFilter
};

namespace EventMapper {
AWS_WORKSPACESWEB_API Event GetEventForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForEvent(Event value);
}  // namespace EventMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
