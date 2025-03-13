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
#include <aws/qapps/model/AppDefinition.h>
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
  class GetQAppResult
  {
  public:
    AWS_QAPPS_API GetQAppResult() = default;
    AWS_QAPPS_API GetQAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API GetQAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the Q App.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    GetQAppResult& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Q App.</p>
     */
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    GetQAppResult& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the Q App.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    GetQAppResult& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Q App.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetQAppResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initial prompt displayed when the Q App is started.</p>
     */
    inline const Aws::String& GetInitialPrompt() const { return m_initialPrompt; }
    template<typename InitialPromptT = Aws::String>
    void SetInitialPrompt(InitialPromptT&& value) { m_initialPromptHasBeenSet = true; m_initialPrompt = std::forward<InitialPromptT>(value); }
    template<typename InitialPromptT = Aws::String>
    GetQAppResult& WithInitialPrompt(InitialPromptT&& value) { SetInitialPrompt(std::forward<InitialPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Q App.</p>
     */
    inline int GetAppVersion() const { return m_appVersion; }
    inline void SetAppVersion(int value) { m_appVersionHasBeenSet = true; m_appVersion = value; }
    inline GetQAppResult& WithAppVersion(int value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Q App.</p>
     */
    inline AppStatus GetStatus() const { return m_status; }
    inline void SetStatus(AppStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetQAppResult& WithStatus(AppStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Q App was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetQAppResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the Q App.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetQAppResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Q App was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetQAppResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last updated the Q App.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetQAppResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities required to run the Q App, such as file upload or
     * third-party integrations.</p>
     */
    inline const Aws::Vector<AppRequiredCapability>& GetRequiredCapabilities() const { return m_requiredCapabilities; }
    template<typename RequiredCapabilitiesT = Aws::Vector<AppRequiredCapability>>
    void SetRequiredCapabilities(RequiredCapabilitiesT&& value) { m_requiredCapabilitiesHasBeenSet = true; m_requiredCapabilities = std::forward<RequiredCapabilitiesT>(value); }
    template<typename RequiredCapabilitiesT = Aws::Vector<AppRequiredCapability>>
    GetQAppResult& WithRequiredCapabilities(RequiredCapabilitiesT&& value) { SetRequiredCapabilities(std::forward<RequiredCapabilitiesT>(value)); return *this;}
    inline GetQAppResult& AddRequiredCapabilities(AppRequiredCapability value) { m_requiredCapabilitiesHasBeenSet = true; m_requiredCapabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The full definition of the Q App, specifying the cards and flow.</p>
     */
    inline const AppDefinition& GetAppDefinition() const { return m_appDefinition; }
    template<typename AppDefinitionT = AppDefinition>
    void SetAppDefinition(AppDefinitionT&& value) { m_appDefinitionHasBeenSet = true; m_appDefinition = std::forward<AppDefinitionT>(value); }
    template<typename AppDefinitionT = AppDefinition>
    GetQAppResult& WithAppDefinition(AppDefinitionT&& value) { SetAppDefinition(std::forward<AppDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQAppResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_initialPrompt;
    bool m_initialPromptHasBeenSet = false;

    int m_appVersion{0};
    bool m_appVersionHasBeenSet = false;

    AppStatus m_status{AppStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Vector<AppRequiredCapability> m_requiredCapabilities;
    bool m_requiredCapabilitiesHasBeenSet = false;

    AppDefinition m_appDefinition;
    bool m_appDefinitionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
