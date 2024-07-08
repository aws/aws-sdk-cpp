/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/AppStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/AppRequiredCapability.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QApps
{
namespace Model
{
  class UpdateQAppResult
  {
  public:
    AWS_QAPPS_API UpdateQAppResult();
    AWS_QAPPS_API UpdateQAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API UpdateQAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the updated Q App.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline void SetAppId(const Aws::String& value) { m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appId.assign(value); }
    inline UpdateQAppResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline UpdateQAppResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline UpdateQAppResult& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the updated Q App.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }
    inline UpdateQAppResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline UpdateQAppResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline UpdateQAppResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new title of the updated Q App.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline void SetTitle(const Aws::String& value) { m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_title.assign(value); }
    inline UpdateQAppResult& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline UpdateQAppResult& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline UpdateQAppResult& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description of the updated Q App.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateQAppResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateQAppResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateQAppResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initial prompt for the updated Q App.</p>
     */
    inline const Aws::String& GetInitialPrompt() const{ return m_initialPrompt; }
    inline void SetInitialPrompt(const Aws::String& value) { m_initialPrompt = value; }
    inline void SetInitialPrompt(Aws::String&& value) { m_initialPrompt = std::move(value); }
    inline void SetInitialPrompt(const char* value) { m_initialPrompt.assign(value); }
    inline UpdateQAppResult& WithInitialPrompt(const Aws::String& value) { SetInitialPrompt(value); return *this;}
    inline UpdateQAppResult& WithInitialPrompt(Aws::String&& value) { SetInitialPrompt(std::move(value)); return *this;}
    inline UpdateQAppResult& WithInitialPrompt(const char* value) { SetInitialPrompt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new version of the updated Q App.</p>
     */
    inline int GetAppVersion() const{ return m_appVersion; }
    inline void SetAppVersion(int value) { m_appVersion = value; }
    inline UpdateQAppResult& WithAppVersion(int value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the updated Q App.</p>
     */
    inline const AppStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AppStatus& value) { m_status = value; }
    inline void SetStatus(AppStatus&& value) { m_status = std::move(value); }
    inline UpdateQAppResult& WithStatus(const AppStatus& value) { SetStatus(value); return *this;}
    inline UpdateQAppResult& WithStatus(AppStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Q App was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateQAppResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateQAppResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who originally created the Q App.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline UpdateQAppResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline UpdateQAppResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline UpdateQAppResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Q App was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline UpdateQAppResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline UpdateQAppResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last updated the Q App.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline UpdateQAppResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline UpdateQAppResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline UpdateQAppResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities required for the updated Q App.</p>
     */
    inline const Aws::Vector<AppRequiredCapability>& GetRequiredCapabilities() const{ return m_requiredCapabilities; }
    inline void SetRequiredCapabilities(const Aws::Vector<AppRequiredCapability>& value) { m_requiredCapabilities = value; }
    inline void SetRequiredCapabilities(Aws::Vector<AppRequiredCapability>&& value) { m_requiredCapabilities = std::move(value); }
    inline UpdateQAppResult& WithRequiredCapabilities(const Aws::Vector<AppRequiredCapability>& value) { SetRequiredCapabilities(value); return *this;}
    inline UpdateQAppResult& WithRequiredCapabilities(Aws::Vector<AppRequiredCapability>&& value) { SetRequiredCapabilities(std::move(value)); return *this;}
    inline UpdateQAppResult& AddRequiredCapabilities(const AppRequiredCapability& value) { m_requiredCapabilities.push_back(value); return *this; }
    inline UpdateQAppResult& AddRequiredCapabilities(AppRequiredCapability&& value) { m_requiredCapabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateQAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateQAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateQAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;

    Aws::String m_appArn;

    Aws::String m_title;

    Aws::String m_description;

    Aws::String m_initialPrompt;

    int m_appVersion;

    AppStatus m_status;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::Vector<AppRequiredCapability> m_requiredCapabilities;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
