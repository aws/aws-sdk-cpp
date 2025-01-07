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
    AWS_QAPPS_API ImportDocumentRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ImportDocumentRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ImportDocumentRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ImportDocumentRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the card the file is associated with.</p>
     */
    inline const Aws::String& GetCardId() const{ return m_cardId; }
    inline bool CardIdHasBeenSet() const { return m_cardIdHasBeenSet; }
    inline void SetCardId(const Aws::String& value) { m_cardIdHasBeenSet = true; m_cardId = value; }
    inline void SetCardId(Aws::String&& value) { m_cardIdHasBeenSet = true; m_cardId = std::move(value); }
    inline void SetCardId(const char* value) { m_cardIdHasBeenSet = true; m_cardId.assign(value); }
    inline ImportDocumentRequest& WithCardId(const Aws::String& value) { SetCardId(value); return *this;}
    inline ImportDocumentRequest& WithCardId(Aws::String&& value) { SetCardId(std::move(value)); return *this;}
    inline ImportDocumentRequest& WithCardId(const char* value) { SetCardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Q App the file is associated with.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline ImportDocumentRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline ImportDocumentRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline ImportDocumentRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64-encoded contents of the file to upload.</p>
     */
    inline const Aws::String& GetFileContentsBase64() const{ return m_fileContentsBase64; }
    inline bool FileContentsBase64HasBeenSet() const { return m_fileContentsBase64HasBeenSet; }
    inline void SetFileContentsBase64(const Aws::String& value) { m_fileContentsBase64HasBeenSet = true; m_fileContentsBase64 = value; }
    inline void SetFileContentsBase64(Aws::String&& value) { m_fileContentsBase64HasBeenSet = true; m_fileContentsBase64 = std::move(value); }
    inline void SetFileContentsBase64(const char* value) { m_fileContentsBase64HasBeenSet = true; m_fileContentsBase64.assign(value); }
    inline ImportDocumentRequest& WithFileContentsBase64(const Aws::String& value) { SetFileContentsBase64(value); return *this;}
    inline ImportDocumentRequest& WithFileContentsBase64(Aws::String&& value) { SetFileContentsBase64(std::move(value)); return *this;}
    inline ImportDocumentRequest& WithFileContentsBase64(const char* value) { SetFileContentsBase64(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the file being uploaded.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline ImportDocumentRequest& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline ImportDocumentRequest& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline ImportDocumentRequest& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the file is associated with a Q App definition or a specific Q App
     * session.</p>
     */
    inline const DocumentScope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const DocumentScope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(DocumentScope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline ImportDocumentRequest& WithScope(const DocumentScope& value) { SetScope(value); return *this;}
    inline ImportDocumentRequest& WithScope(DocumentScope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Q App session the file is associated with, if
     * applicable.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline ImportDocumentRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline ImportDocumentRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline ImportDocumentRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
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

    DocumentScope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
