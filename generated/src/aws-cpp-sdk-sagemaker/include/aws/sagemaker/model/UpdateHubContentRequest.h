/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HubContentSupportStatus.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateHubContentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateHubContentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHubContent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the SageMaker hub that contains the hub content you want to
     * update. You can optionally use the hub ARN instead.</p>
     */
    inline const Aws::String& GetHubName() const { return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    template<typename HubNameT = Aws::String>
    void SetHubName(HubNameT&& value) { m_hubNameHasBeenSet = true; m_hubName = std::forward<HubNameT>(value); }
    template<typename HubNameT = Aws::String>
    UpdateHubContentRequest& WithHubName(HubNameT&& value) { SetHubName(std::forward<HubNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub content resource that you want to update.</p>
     */
    inline const Aws::String& GetHubContentName() const { return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    template<typename HubContentNameT = Aws::String>
    void SetHubContentName(HubContentNameT&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::forward<HubContentNameT>(value); }
    template<typename HubContentNameT = Aws::String>
    UpdateHubContentRequest& WithHubContentName(HubContentNameT&& value) { SetHubContentName(std::forward<HubContentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the resource that you want to update. Only specify a
     * <code>Model</code> or <code>Notebook</code> resource for this API. To update a
     * <code>ModelReference</code>, use the <code>UpdateHubContentReference</code> API
     * instead.</p>
     */
    inline HubContentType GetHubContentType() const { return m_hubContentType; }
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
    inline void SetHubContentType(HubContentType value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline UpdateHubContentRequest& WithHubContentType(HubContentType value) { SetHubContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hub content version that you want to update. For example, if you have two
     * versions of a resource in your hub, you can update the second version.</p>
     */
    inline const Aws::String& GetHubContentVersion() const { return m_hubContentVersion; }
    inline bool HubContentVersionHasBeenSet() const { return m_hubContentVersionHasBeenSet; }
    template<typename HubContentVersionT = Aws::String>
    void SetHubContentVersion(HubContentVersionT&& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = std::forward<HubContentVersionT>(value); }
    template<typename HubContentVersionT = Aws::String>
    UpdateHubContentRequest& WithHubContentVersion(HubContentVersionT&& value) { SetHubContentVersion(std::forward<HubContentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDisplayName() const { return m_hubContentDisplayName; }
    inline bool HubContentDisplayNameHasBeenSet() const { return m_hubContentDisplayNameHasBeenSet; }
    template<typename HubContentDisplayNameT = Aws::String>
    void SetHubContentDisplayName(HubContentDisplayNameT&& value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName = std::forward<HubContentDisplayNameT>(value); }
    template<typename HubContentDisplayNameT = Aws::String>
    UpdateHubContentRequest& WithHubContentDisplayName(HubContentDisplayNameT&& value) { SetHubContentDisplayName(std::forward<HubContentDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDescription() const { return m_hubContentDescription; }
    inline bool HubContentDescriptionHasBeenSet() const { return m_hubContentDescriptionHasBeenSet; }
    template<typename HubContentDescriptionT = Aws::String>
    void SetHubContentDescription(HubContentDescriptionT&& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = std::forward<HubContentDescriptionT>(value); }
    template<typename HubContentDescriptionT = Aws::String>
    UpdateHubContentRequest& WithHubContentDescription(HubContentDescriptionT&& value) { SetHubContentDescription(std::forward<HubContentDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that provides a description of the hub content. This string can
     * include links, tables, and standard markdown formatting.</p>
     */
    inline const Aws::String& GetHubContentMarkdown() const { return m_hubContentMarkdown; }
    inline bool HubContentMarkdownHasBeenSet() const { return m_hubContentMarkdownHasBeenSet; }
    template<typename HubContentMarkdownT = Aws::String>
    void SetHubContentMarkdown(HubContentMarkdownT&& value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown = std::forward<HubContentMarkdownT>(value); }
    template<typename HubContentMarkdownT = Aws::String>
    UpdateHubContentRequest& WithHubContentMarkdown(HubContentMarkdownT&& value) { SetHubContentMarkdown(std::forward<HubContentMarkdownT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubContentSearchKeywords() const { return m_hubContentSearchKeywords; }
    inline bool HubContentSearchKeywordsHasBeenSet() const { return m_hubContentSearchKeywordsHasBeenSet; }
    template<typename HubContentSearchKeywordsT = Aws::Vector<Aws::String>>
    void SetHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = std::forward<HubContentSearchKeywordsT>(value); }
    template<typename HubContentSearchKeywordsT = Aws::Vector<Aws::String>>
    UpdateHubContentRequest& WithHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { SetHubContentSearchKeywords(std::forward<HubContentSearchKeywordsT>(value)); return *this;}
    template<typename HubContentSearchKeywordsT = Aws::String>
    UpdateHubContentRequest& AddHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.emplace_back(std::forward<HubContentSearchKeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the current status of the hub content resource.</p>
     */
    inline HubContentSupportStatus GetSupportStatus() const { return m_supportStatus; }
    inline bool SupportStatusHasBeenSet() const { return m_supportStatusHasBeenSet; }
    inline void SetSupportStatus(HubContentSupportStatus value) { m_supportStatusHasBeenSet = true; m_supportStatus = value; }
    inline UpdateHubContentRequest& WithSupportStatus(HubContentSupportStatus value) { SetSupportStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    HubContentType m_hubContentType{HubContentType::NOT_SET};
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_hubContentVersion;
    bool m_hubContentVersionHasBeenSet = false;

    Aws::String m_hubContentDisplayName;
    bool m_hubContentDisplayNameHasBeenSet = false;

    Aws::String m_hubContentDescription;
    bool m_hubContentDescriptionHasBeenSet = false;

    Aws::String m_hubContentMarkdown;
    bool m_hubContentMarkdownHasBeenSet = false;

    Aws::Vector<Aws::String> m_hubContentSearchKeywords;
    bool m_hubContentSearchKeywordsHasBeenSet = false;

    HubContentSupportStatus m_supportStatus{HubContentSupportStatus::NOT_SET};
    bool m_supportStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
