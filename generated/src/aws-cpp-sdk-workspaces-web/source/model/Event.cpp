/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/Event.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesWeb
  {
    namespace Model
    {
      namespace EventMapper
      {

        static const int WebsiteInteract_HASH = HashingUtils::HashString("WebsiteInteract");
        static const int FileDownloadFromSecureBrowserToRemoteDisk_HASH = HashingUtils::HashString("FileDownloadFromSecureBrowserToRemoteDisk");
        static const int FileTransferFromRemoteToLocalDisk_HASH = HashingUtils::HashString("FileTransferFromRemoteToLocalDisk");
        static const int FileTransferFromLocalToRemoteDisk_HASH = HashingUtils::HashString("FileTransferFromLocalToRemoteDisk");
        static const int FileUploadFromRemoteDiskToSecureBrowser_HASH = HashingUtils::HashString("FileUploadFromRemoteDiskToSecureBrowser");
        static const int ContentPasteToWebsite_HASH = HashingUtils::HashString("ContentPasteToWebsite");
        static const int ContentTransferFromLocalToRemoteClipboard_HASH = HashingUtils::HashString("ContentTransferFromLocalToRemoteClipboard");
        static const int ContentCopyFromWebsite_HASH = HashingUtils::HashString("ContentCopyFromWebsite");
        static const int UrlLoad_HASH = HashingUtils::HashString("UrlLoad");
        static const int TabOpen_HASH = HashingUtils::HashString("TabOpen");
        static const int TabClose_HASH = HashingUtils::HashString("TabClose");
        static const int PrintJobSubmit_HASH = HashingUtils::HashString("PrintJobSubmit");
        static const int SessionConnect_HASH = HashingUtils::HashString("SessionConnect");
        static const int SessionStart_HASH = HashingUtils::HashString("SessionStart");
        static const int SessionDisconnect_HASH = HashingUtils::HashString("SessionDisconnect");
        static const int SessionEnd_HASH = HashingUtils::HashString("SessionEnd");


        Event GetEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WebsiteInteract_HASH)
          {
            return Event::WebsiteInteract;
          }
          else if (hashCode == FileDownloadFromSecureBrowserToRemoteDisk_HASH)
          {
            return Event::FileDownloadFromSecureBrowserToRemoteDisk;
          }
          else if (hashCode == FileTransferFromRemoteToLocalDisk_HASH)
          {
            return Event::FileTransferFromRemoteToLocalDisk;
          }
          else if (hashCode == FileTransferFromLocalToRemoteDisk_HASH)
          {
            return Event::FileTransferFromLocalToRemoteDisk;
          }
          else if (hashCode == FileUploadFromRemoteDiskToSecureBrowser_HASH)
          {
            return Event::FileUploadFromRemoteDiskToSecureBrowser;
          }
          else if (hashCode == ContentPasteToWebsite_HASH)
          {
            return Event::ContentPasteToWebsite;
          }
          else if (hashCode == ContentTransferFromLocalToRemoteClipboard_HASH)
          {
            return Event::ContentTransferFromLocalToRemoteClipboard;
          }
          else if (hashCode == ContentCopyFromWebsite_HASH)
          {
            return Event::ContentCopyFromWebsite;
          }
          else if (hashCode == UrlLoad_HASH)
          {
            return Event::UrlLoad;
          }
          else if (hashCode == TabOpen_HASH)
          {
            return Event::TabOpen;
          }
          else if (hashCode == TabClose_HASH)
          {
            return Event::TabClose;
          }
          else if (hashCode == PrintJobSubmit_HASH)
          {
            return Event::PrintJobSubmit;
          }
          else if (hashCode == SessionConnect_HASH)
          {
            return Event::SessionConnect;
          }
          else if (hashCode == SessionStart_HASH)
          {
            return Event::SessionStart;
          }
          else if (hashCode == SessionDisconnect_HASH)
          {
            return Event::SessionDisconnect;
          }
          else if (hashCode == SessionEnd_HASH)
          {
            return Event::SessionEnd;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Event>(hashCode);
          }

          return Event::NOT_SET;
        }

        Aws::String GetNameForEvent(Event enumValue)
        {
          switch(enumValue)
          {
          case Event::NOT_SET:
            return {};
          case Event::WebsiteInteract:
            return "WebsiteInteract";
          case Event::FileDownloadFromSecureBrowserToRemoteDisk:
            return "FileDownloadFromSecureBrowserToRemoteDisk";
          case Event::FileTransferFromRemoteToLocalDisk:
            return "FileTransferFromRemoteToLocalDisk";
          case Event::FileTransferFromLocalToRemoteDisk:
            return "FileTransferFromLocalToRemoteDisk";
          case Event::FileUploadFromRemoteDiskToSecureBrowser:
            return "FileUploadFromRemoteDiskToSecureBrowser";
          case Event::ContentPasteToWebsite:
            return "ContentPasteToWebsite";
          case Event::ContentTransferFromLocalToRemoteClipboard:
            return "ContentTransferFromLocalToRemoteClipboard";
          case Event::ContentCopyFromWebsite:
            return "ContentCopyFromWebsite";
          case Event::UrlLoad:
            return "UrlLoad";
          case Event::TabOpen:
            return "TabOpen";
          case Event::TabClose:
            return "TabClose";
          case Event::PrintJobSubmit:
            return "PrintJobSubmit";
          case Event::SessionConnect:
            return "SessionConnect";
          case Event::SessionStart:
            return "SessionStart";
          case Event::SessionDisconnect:
            return "SessionDisconnect";
          case Event::SessionEnd:
            return "SessionEnd";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
