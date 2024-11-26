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
    AWS_QAPPS_API CreatePresignedUrlRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline CreatePresignedUrlRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreatePresignedUrlRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreatePresignedUrlRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline CreatePresignedUrlRequest& WithCardId(const Aws::String& value) { SetCardId(value); return *this;}
    inline CreatePresignedUrlRequest& WithCardId(Aws::String&& value) { SetCardId(std::move(value)); return *this;}
    inline CreatePresignedUrlRequest& WithCardId(const char* value) { SetCardId(value); return *this;}
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
    inline CreatePresignedUrlRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline CreatePresignedUrlRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline CreatePresignedUrlRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64-encoded SHA-256 digest of the contents of the file to be
     * uploaded.</p>
     */
    inline const Aws::String& GetFileContentsSha256() const{ return m_fileContentsSha256; }
    inline bool FileContentsSha256HasBeenSet() const { return m_fileContentsSha256HasBeenSet; }
    inline void SetFileContentsSha256(const Aws::String& value) { m_fileContentsSha256HasBeenSet = true; m_fileContentsSha256 = value; }
    inline void SetFileContentsSha256(Aws::String&& value) { m_fileContentsSha256HasBeenSet = true; m_fileContentsSha256 = std::move(value); }
    inline void SetFileContentsSha256(const char* value) { m_fileContentsSha256HasBeenSet = true; m_fileContentsSha256.assign(value); }
    inline CreatePresignedUrlRequest& WithFileContentsSha256(const Aws::String& value) { SetFileContentsSha256(value); return *this;}
    inline CreatePresignedUrlRequest& WithFileContentsSha256(Aws::String&& value) { SetFileContentsSha256(std::move(value)); return *this;}
    inline CreatePresignedUrlRequest& WithFileContentsSha256(const char* value) { SetFileContentsSha256(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the file to be uploaded.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline CreatePresignedUrlRequest& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline CreatePresignedUrlRequest& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline CreatePresignedUrlRequest& WithFileName(const char* value) { SetFileName(value); return *this;}
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
    inline CreatePresignedUrlRequest& WithScope(const DocumentScope& value) { SetScope(value); return *this;}
    inline CreatePresignedUrlRequest& WithScope(DocumentScope&& value) { SetScope(std::move(value)); return *this;}
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
    inline CreatePresignedUrlRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline CreatePresignedUrlRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline CreatePresignedUrlRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
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

    DocumentScope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
