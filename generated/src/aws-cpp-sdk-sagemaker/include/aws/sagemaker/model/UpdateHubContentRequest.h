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
    AWS_SAGEMAKER_API UpdateHubContentRequest();

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
    inline const Aws::String& GetHubName() const{ return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }
    inline UpdateHubContentRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}
    inline UpdateHubContentRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}
    inline UpdateHubContentRequest& WithHubName(const char* value) { SetHubName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub content resource that you want to update.</p>
     */
    inline const Aws::String& GetHubContentName() const{ return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    inline void SetHubContentName(const Aws::String& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = value; }
    inline void SetHubContentName(Aws::String&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::move(value); }
    inline void SetHubContentName(const char* value) { m_hubContentNameHasBeenSet = true; m_hubContentName.assign(value); }
    inline UpdateHubContentRequest& WithHubContentName(const Aws::String& value) { SetHubContentName(value); return *this;}
    inline UpdateHubContentRequest& WithHubContentName(Aws::String&& value) { SetHubContentName(std::move(value)); return *this;}
    inline UpdateHubContentRequest& WithHubContentName(const char* value) { SetHubContentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the resource that you want to update. Only specify a
     * <code>Model</code> or <code>Notebook</code> resource for this API. To update a
     * <code>ModelReference</code>, use the <code>UpdateHubContentReference</code> API
     * instead.</p>
     */
    inline const HubContentType& GetHubContentType() const{ return m_hubContentType; }
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
    inline void SetHubContentType(const HubContentType& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline void SetHubContentType(HubContentType&& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = std::move(value); }
    inline UpdateHubContentRequest& WithHubContentType(const HubContentType& value) { SetHubContentType(value); return *this;}
    inline UpdateHubContentRequest& WithHubContentType(HubContentType&& value) { SetHubContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hub content version that you want to update. For example, if you have two
     * versions of a resource in your hub, you can update the second version.</p>
     */
    inline const Aws::String& GetHubContentVersion() const{ return m_hubContentVersion; }
    inline bool HubContentVersionHasBeenSet() const { return m_hubContentVersionHasBeenSet; }
    inline void SetHubContentVersion(const Aws::String& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = value; }
    inline void SetHubContentVersion(Aws::String&& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = std::move(value); }
    inline void SetHubContentVersion(const char* value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion.assign(value); }
    inline UpdateHubContentRequest& WithHubContentVersion(const Aws::String& value) { SetHubContentVersion(value); return *this;}
    inline UpdateHubContentRequest& WithHubContentVersion(Aws::String&& value) { SetHubContentVersion(std::move(value)); return *this;}
    inline UpdateHubContentRequest& WithHubContentVersion(const char* value) { SetHubContentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDisplayName() const{ return m_hubContentDisplayName; }
    inline bool HubContentDisplayNameHasBeenSet() const { return m_hubContentDisplayNameHasBeenSet; }
    inline void SetHubContentDisplayName(const Aws::String& value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName = value; }
    inline void SetHubContentDisplayName(Aws::String&& value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName = std::move(value); }
    inline void SetHubContentDisplayName(const char* value) { m_hubContentDisplayNameHasBeenSet = true; m_hubContentDisplayName.assign(value); }
    inline UpdateHubContentRequest& WithHubContentDisplayName(const Aws::String& value) { SetHubContentDisplayName(value); return *this;}
    inline UpdateHubContentRequest& WithHubContentDisplayName(Aws::String&& value) { SetHubContentDisplayName(std::move(value)); return *this;}
    inline UpdateHubContentRequest& WithHubContentDisplayName(const char* value) { SetHubContentDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDescription() const{ return m_hubContentDescription; }
    inline bool HubContentDescriptionHasBeenSet() const { return m_hubContentDescriptionHasBeenSet; }
    inline void SetHubContentDescription(const Aws::String& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = value; }
    inline void SetHubContentDescription(Aws::String&& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = std::move(value); }
    inline void SetHubContentDescription(const char* value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription.assign(value); }
    inline UpdateHubContentRequest& WithHubContentDescription(const Aws::String& value) { SetHubContentDescription(value); return *this;}
    inline UpdateHubContentRequest& WithHubContentDescription(Aws::String&& value) { SetHubContentDescription(std::move(value)); return *this;}
    inline UpdateHubContentRequest& WithHubContentDescription(const char* value) { SetHubContentDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that provides a description of the hub content. This string can
     * include links, tables, and standard markdown formatting.</p>
     */
    inline const Aws::String& GetHubContentMarkdown() const{ return m_hubContentMarkdown; }
    inline bool HubContentMarkdownHasBeenSet() const { return m_hubContentMarkdownHasBeenSet; }
    inline void SetHubContentMarkdown(const Aws::String& value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown = value; }
    inline void SetHubContentMarkdown(Aws::String&& value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown = std::move(value); }
    inline void SetHubContentMarkdown(const char* value) { m_hubContentMarkdownHasBeenSet = true; m_hubContentMarkdown.assign(value); }
    inline UpdateHubContentRequest& WithHubContentMarkdown(const Aws::String& value) { SetHubContentMarkdown(value); return *this;}
    inline UpdateHubContentRequest& WithHubContentMarkdown(Aws::String&& value) { SetHubContentMarkdown(std::move(value)); return *this;}
    inline UpdateHubContentRequest& WithHubContentMarkdown(const char* value) { SetHubContentMarkdown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords of the hub content.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubContentSearchKeywords() const{ return m_hubContentSearchKeywords; }
    inline bool HubContentSearchKeywordsHasBeenSet() const { return m_hubContentSearchKeywordsHasBeenSet; }
    inline void SetHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = value; }
    inline void SetHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = std::move(value); }
    inline UpdateHubContentRequest& WithHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { SetHubContentSearchKeywords(value); return *this;}
    inline UpdateHubContentRequest& WithHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { SetHubContentSearchKeywords(std::move(value)); return *this;}
    inline UpdateHubContentRequest& AddHubContentSearchKeywords(const Aws::String& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(value); return *this; }
    inline UpdateHubContentRequest& AddHubContentSearchKeywords(Aws::String&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(std::move(value)); return *this; }
    inline UpdateHubContentRequest& AddHubContentSearchKeywords(const char* value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the current status of the hub content resource.</p>
     */
    inline const HubContentSupportStatus& GetSupportStatus() const{ return m_supportStatus; }
    inline bool SupportStatusHasBeenSet() const { return m_supportStatusHasBeenSet; }
    inline void SetSupportStatus(const HubContentSupportStatus& value) { m_supportStatusHasBeenSet = true; m_supportStatus = value; }
    inline void SetSupportStatus(HubContentSupportStatus&& value) { m_supportStatusHasBeenSet = true; m_supportStatus = std::move(value); }
    inline UpdateHubContentRequest& WithSupportStatus(const HubContentSupportStatus& value) { SetSupportStatus(value); return *this;}
    inline UpdateHubContentRequest& WithSupportStatus(HubContentSupportStatus&& value) { SetSupportStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    HubContentType m_hubContentType;
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

    HubContentSupportStatus m_supportStatus;
    bool m_supportStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
