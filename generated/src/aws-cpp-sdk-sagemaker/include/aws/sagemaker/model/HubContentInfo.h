/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentType.h>
#include <aws/sagemaker/model/HubContentSupportStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HubContentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Information about hub content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HubContentInfo">AWS
   * API Reference</a></p>
   */
  class HubContentInfo
  {
  public:
    AWS_SAGEMAKER_API HubContentInfo() = default;
    AWS_SAGEMAKER_API HubContentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HubContentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentName() const { return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    template<typename HubContentNameT = Aws::String>
    void SetHubContentName(HubContentNameT&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::forward<HubContentNameT>(value); }
    template<typename HubContentNameT = Aws::String>
    HubContentInfo& WithHubContentName(HubContentNameT&& value) { SetHubContentName(std::forward<HubContentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hub content.</p>
     */
    inline const Aws::String& GetHubContentArn() const { return m_hubContentArn; }
    inline bool HubContentArnHasBeenSet() const { return m_hubContentArnHasBeenSet; }
    template<typename HubContentArnT = Aws::String>
    void SetHubContentArn(HubContentArnT&& value) { m_hubContentArnHasBeenSet = true; m_hubContentArn = std::forward<HubContentArnT>(value); }
    template<typename HubContentArnT = Aws::String>
    HubContentInfo& WithHubContentArn(HubContentArnT&& value) { SetHubContentArn(std::forward<HubContentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public hub content.</p>
     */
    inline const Aws::String& GetSageMakerPublicHubContentArn() const { return m_sageMakerPublicHubContentArn; }
    inline bool SageMakerPublicHubContentArnHasBeenSet() const { return m_sageMakerPublicHubContentArnHasBeenSet; }
    template<typename SageMakerPublicHubContentArnT = Aws::String>
    void SetSageMakerPublicHubContentArn(SageMakerPublicHubContentArnT&& value) { m_sageMakerPublicHubContentArnHasBeenSet = true; m_sageMakerPublicHubContentArn = std::forward<SageMakerPublicHubContentArnT>(value); }
    template<typename SageMakerPublicHubContentArnT = Aws::String>
    HubContentInfo& WithSageMakerPublicHubContentArn(SageMakerPublicHubContentArnT&& value) { SetSageMakerPublicHubContentArn(std::forward<SageMakerPublicHubContentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the hub content.</p>
     */
    inline const Aws::String& GetHubContentVersion() const { return m_hubContentVersion; }
    inline bool HubContentVersionHasBeenSet() const { return m_hubContentVersionHasBeenSet; }
    template<typename HubContentVersionT = Aws::String>
    void SetHubContentVersion(HubContentVersionT&& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = std::forward<HubContentVersionT>(value); }
    template<typename HubContentVersionT = Aws::String>
    HubContentInfo& WithHubContentVersion(HubContentVersionT&& value) { SetHubContentVersion(std::forward<HubContentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hub content.</p>
     */
    inline HubContentType GetHubContentType() const { return m_hubContentType; }
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
    inline void SetHubContentType(HubContentType value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline HubContentInfo& WithHubContentType(HubContentType value) { SetHubContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the hub content document schema.</p>
     */
    inline const Aws::String& GetDocumentSchemaVersion() const { return m_documentSchemaVersion; }
    inline bool DocumentSchemaVersionHasBeenSet() const { return m_documentSchemaVersionHasBeenSet; }
    template<typename DocumentSchemaVersionT = Aws::String>
    void SetDocumentSchemaVersion(DocumentSchemaVersionT&& value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion = std::forward<DocumentSchemaVersionT>(value); }
    template<typename DocumentSchemaVersionT = Aws::String>
    HubContentInfo& WithDocumentSchemaVersion(DocumentSchemaVersionT&& value) { SetDocumentSchemaVersion(std::forward<DocumentSchemaVersionT>(value)); return *this;}
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
    HubContentInfo& WithHubContentDisplayName(HubContentDisplayNameT&& value) { SetHubContentDisplayName(std::forward<HubContentDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDescription() const { return m_hubContentDescription; }
    inline bool HubContentDescriptionHasBeenSet() const { return m_hubContentDescriptionHasBeenSet; }
    template<typename HubContentDescriptionT = Aws::String>
    void SetHubContentDescription(HubContentDescriptionT&& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = std::forward<HubContentDescriptionT>(value); }
    template<typename HubContentDescriptionT = Aws::String>
    HubContentInfo& WithHubContentDescription(HubContentDescriptionT&& value) { SetHubContentDescription(std::forward<HubContentDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support status of the hub content.</p>
     */
    inline HubContentSupportStatus GetSupportStatus() const { return m_supportStatus; }
    inline bool SupportStatusHasBeenSet() const { return m_supportStatusHasBeenSet; }
    inline void SetSupportStatus(HubContentSupportStatus value) { m_supportStatusHasBeenSet = true; m_supportStatus = value; }
    inline HubContentInfo& WithSupportStatus(HubContentSupportStatus value) { SetSupportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubContentSearchKeywords() const { return m_hubContentSearchKeywords; }
    inline bool HubContentSearchKeywordsHasBeenSet() const { return m_hubContentSearchKeywordsHasBeenSet; }
    template<typename HubContentSearchKeywordsT = Aws::Vector<Aws::String>>
    void SetHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = std::forward<HubContentSearchKeywordsT>(value); }
    template<typename HubContentSearchKeywordsT = Aws::Vector<Aws::String>>
    HubContentInfo& WithHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { SetHubContentSearchKeywords(std::forward<HubContentSearchKeywordsT>(value)); return *this;}
    template<typename HubContentSearchKeywordsT = Aws::String>
    HubContentInfo& AddHubContentSearchKeywords(HubContentSearchKeywordsT&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.emplace_back(std::forward<HubContentSearchKeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the hub content.</p>
     */
    inline HubContentStatus GetHubContentStatus() const { return m_hubContentStatus; }
    inline bool HubContentStatusHasBeenSet() const { return m_hubContentStatusHasBeenSet; }
    inline void SetHubContentStatus(HubContentStatus value) { m_hubContentStatusHasBeenSet = true; m_hubContentStatus = value; }
    inline HubContentInfo& WithHubContentStatus(HubContentStatus value) { SetHubContentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the hub content was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    HubContentInfo& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the hub content was originally created, before any
     * updates or revisions.</p>
     */
    inline const Aws::Utils::DateTime& GetOriginalCreationTime() const { return m_originalCreationTime; }
    inline bool OriginalCreationTimeHasBeenSet() const { return m_originalCreationTimeHasBeenSet; }
    template<typename OriginalCreationTimeT = Aws::Utils::DateTime>
    void SetOriginalCreationTime(OriginalCreationTimeT&& value) { m_originalCreationTimeHasBeenSet = true; m_originalCreationTime = std::forward<OriginalCreationTimeT>(value); }
    template<typename OriginalCreationTimeT = Aws::Utils::DateTime>
    HubContentInfo& WithOriginalCreationTime(OriginalCreationTimeT&& value) { SetOriginalCreationTime(std::forward<OriginalCreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    Aws::String m_hubContentArn;
    bool m_hubContentArnHasBeenSet = false;

    Aws::String m_sageMakerPublicHubContentArn;
    bool m_sageMakerPublicHubContentArnHasBeenSet = false;

    Aws::String m_hubContentVersion;
    bool m_hubContentVersionHasBeenSet = false;

    HubContentType m_hubContentType{HubContentType::NOT_SET};
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_documentSchemaVersion;
    bool m_documentSchemaVersionHasBeenSet = false;

    Aws::String m_hubContentDisplayName;
    bool m_hubContentDisplayNameHasBeenSet = false;

    Aws::String m_hubContentDescription;
    bool m_hubContentDescriptionHasBeenSet = false;

    HubContentSupportStatus m_supportStatus{HubContentSupportStatus::NOT_SET};
    bool m_supportStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_hubContentSearchKeywords;
    bool m_hubContentSearchKeywordsHasBeenSet = false;

    HubContentStatus m_hubContentStatus{HubContentStatus::NOT_SET};
    bool m_hubContentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_originalCreationTime{};
    bool m_originalCreationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
