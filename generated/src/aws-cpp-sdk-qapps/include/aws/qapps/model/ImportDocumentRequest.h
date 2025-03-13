/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/QAppsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/DocumentScope.h>
#include <utility>

namespace Aws
{
namespace QApps
{
namespace Model
{

  /**
   */
  class ImportDocumentRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API ImportDocumentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportDocument"; }

    AWS_QAPPS_API Aws::String SerializePayload() const override;

    AWS_QAPPS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business application environment
     * instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ImportDocumentRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the card the file is associated with.</p>
     */
    inline const Aws::String& GetCardId() const { return m_cardId; }
    inline bool CardIdHasBeenSet() const { return m_cardIdHasBeenSet; }
    template<typename CardIdT = Aws::String>
    void SetCardId(CardIdT&& value) { m_cardIdHasBeenSet = true; m_cardId = std::forward<CardIdT>(value); }
    template<typename CardIdT = Aws::String>
    ImportDocumentRequest& WithCardId(CardIdT&& value) { SetCardId(std::forward<CardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Q App the file is associated with.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    ImportDocumentRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64-encoded contents of the file to upload.</p>
     */
    inline const Aws::String& GetFileContentsBase64() const { return m_fileContentsBase64; }
    inline bool FileContentsBase64HasBeenSet() const { return m_fileContentsBase64HasBeenSet; }
    template<typename FileContentsBase64T = Aws::String>
    void SetFileContentsBase64(FileContentsBase64T&& value) { m_fileContentsBase64HasBeenSet = true; m_fileContentsBase64 = std::forward<FileContentsBase64T>(value); }
    template<typename FileContentsBase64T = Aws::String>
    ImportDocumentRequest& WithFileContentsBase64(FileContentsBase64T&& value) { SetFileContentsBase64(std::forward<FileContentsBase64T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the file being uploaded.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    ImportDocumentRequest& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the file is associated with a Q App definition or a specific Q App
     * session.</p>
     */
    inline DocumentScope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(DocumentScope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline ImportDocumentRequest& WithScope(DocumentScope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Q App session the file is associated with, if
     * applicable.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    ImportDocumentRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_cardId;
    bool m_cardIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_fileContentsBase64;
    bool m_fileContentsBase64HasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    DocumentScope m_scope{DocumentScope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
