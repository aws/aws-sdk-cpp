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
  class CreatePresignedUrlRequest : public QAppsRequest
  {
  public:
    AWS_QAPPS_API CreatePresignedUrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePresignedUrl"; }

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
    CreatePresignedUrlRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
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
    CreatePresignedUrlRequest& WithCardId(CardIdT&& value) { SetCardId(std::forward<CardIdT>(value)); return *this;}
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
    CreatePresignedUrlRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64-encoded SHA-256 digest of the contents of the file to be
     * uploaded.</p>
     */
    inline const Aws::String& GetFileContentsSha256() const { return m_fileContentsSha256; }
    inline bool FileContentsSha256HasBeenSet() const { return m_fileContentsSha256HasBeenSet; }
    template<typename FileContentsSha256T = Aws::String>
    void SetFileContentsSha256(FileContentsSha256T&& value) { m_fileContentsSha256HasBeenSet = true; m_fileContentsSha256 = std::forward<FileContentsSha256T>(value); }
    template<typename FileContentsSha256T = Aws::String>
    CreatePresignedUrlRequest& WithFileContentsSha256(FileContentsSha256T&& value) { SetFileContentsSha256(std::forward<FileContentsSha256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the file to be uploaded.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    CreatePresignedUrlRequest& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the file is associated with a Q App definition or a specific Q App
     * session.</p>
     */
    inline DocumentScope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(DocumentScope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline CreatePresignedUrlRequest& WithScope(DocumentScope value) { SetScope(value); return *this;}
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
    CreatePresignedUrlRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_cardId;
    bool m_cardIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_fileContentsSha256;
    bool m_fileContentsSha256HasBeenSet = false;

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
