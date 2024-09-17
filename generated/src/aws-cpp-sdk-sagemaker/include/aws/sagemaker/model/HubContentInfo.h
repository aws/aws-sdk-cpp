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
    AWS_SAGEMAKER_API HubContentInfo();
    AWS_SAGEMAKER_API HubContentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HubContentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the hub content.</p>
     */
    inline const Aws::String& GetHubContentName() const{ return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    inline void SetHubContentName(const Aws::String& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = value; }
    inline void SetHubContentName(Aws::String&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::move(value); }
    inline void SetHubContentName(const char* value) { m_hubContentNameHasBeenSet = true; m_hubContentName.assign(value); }
    inline HubContentInfo& WithHubContentName(const Aws::String& value) { SetHubContentName(value); return *this;}
    inline HubContentInfo& WithHubContentName(Aws::String&& value) { SetHubContentName(std::move(value)); return *this;}
    inline HubContentInfo& WithHubContentName(const char* value) { SetHubContentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hub content.</p>
     */
    inline const Aws::String& GetHubContentArn() const{ return m_hubContentArn; }
    inline bool HubContentArnHasBeenSet() const { return m_hubContentArnHasBeenSet; }
    inline void SetHubContentArn(const Aws::String& value) { m_hubContentArnHasBeenSet = true; m_hubContentArn = value; }
    inline void SetHubContentArn(Aws::String&& value) { m_hubContentArnHasBeenSet = true; m_hubContentArn = std::move(value); }
    inline void SetHubContentArn(const char* value) { m_hubContentArnHasBeenSet = true; m_hubContentArn.assign(value); }
    inline HubContentInfo& WithHubContentArn(const Aws::String& value) { SetHubContentArn(value); return *this;}
    inline HubContentInfo& WithHubContentArn(Aws::String&& value) { SetHubContentArn(std::move(value)); return *this;}
    inline HubContentInfo& WithHubContentArn(const char* value) { SetHubContentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the public hub content.</p>
     */
    inline const Aws::String& GetSageMakerPublicHubContentArn() const{ return m_sageMakerPublicHubContentArn; }
    inline bool SageMakerPublicHubContentArnHasBeenSet() const { return m_sageMakerPublicHubContentArnHasBeenSet; }
    inline void SetSageMakerPublicHubContentArn(const Aws::String& value) { m_sageMakerPublicHubContentArnHasBeenSet = true; m_sageMakerPublicHubContentArn = value; }
    inline void SetSageMakerPublicHubContentArn(Aws::String&& value) { m_sageMakerPublicHubContentArnHasBeenSet = true; m_sageMakerPublicHubContentArn = std::move(value); }
    inline void SetSageMakerPublicHubContentArn(const char* value) { m_sageMakerPublicHubContentArnHasBeenSet = true; m_sageMakerPublicHubContentArn.assign(value); }
    inline HubContentInfo& WithSageMakerPublicHubContentArn(const Aws::String& value) { SetSageMakerPublicHubContentArn(value); return *this;}
    inline HubContentInfo& WithSageMakerPublicHubContentArn(Aws::String&& value) { SetSageMakerPublicHubContentArn(std::move(value)); return *this;}
    inline HubContentInfo& WithSageMakerPublicHubContentArn(const char* value) { SetSageMakerPublicHubContentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the hub content.</p>
     */
    inline const Aws::String& GetHubContentVersion() const{ return m_hubContentVersion; }
    inline bool HubContentVersionHasBeenSet() const { return m_hubContentVersionHasBeenSet; }
    inline void SetHubContentVersion(const Aws::String& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = value; }
    inline void SetHubContentVersion(Aws::String&& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = std::move(value); }
    inline void SetHubContentVersion(const char* value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion.assign(value); }
    inline HubContentInfo& WithHubContentVersion(const Aws::String& value) { SetHubContentVersion(value); return *this;}
    inline HubContentInfo& WithHubContentVersion(Aws::String&& value) { SetHubContentVersion(std::move(value)); return *this;}
    inline HubContentInfo& WithHubContentVersion(const char* value) { SetHubContentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hub content.</p>
     */
    inline const HubContentType& GetHubContentType() const{ return m_hubContentType; }
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
    inline void SetHubContentType(const HubContentType& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline void SetHubContentType(HubContentType&& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = std::move(value); }
    inline HubContentInfo& WithHubContentType(const HubContentType& value) { SetHubContentType(value); return *this;}
    inline HubContentInfo& WithHubContentType(HubContentType&& value) { SetHubContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the hub content document schema.</p>
     */
    inline const Aws::String& GetDocumentSchemaVersion() const{ return m_documentSchemaVersion; }
    inline bool DocumentSchemaVersionHasBeenSet() const { return m_documentSchemaVersionHasBeenSet; }
    inline void SetDocumentSchemaVersion(const Aws::String& value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion = value; }
    inline void SetDocumentSchemaVersion(Aws::String&& value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion = std::move(value); }
    inline void SetDocumentSchemaVersion(const char* value) { m_documentSchemaVersionHasBeenSet = true; m_documentSchemaVersion.assign(value); }
    inline HubContentInfo& WithDocumentSchemaVersion(const Aws::String& value) { SetDocumentSchemaVersion(value); return *this;}
    inline HubContentInfo& WithDocumentSchemaVersion(Aws::String&& value) { SetDocumentSchemaVersion(std::move(value)); return *this;}
    inline HubContentInfo& WithDocumentSchemaVersion(const char* value) { SetDocumentSchemaVersion(value); return *this;}
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
    inline HubContentInfo& WithHubContentDisplayName(const Aws::String& value) { SetHubContentDisplayName(value); return *this;}
    inline HubContentInfo& WithHubContentDisplayName(Aws::String&& value) { SetHubContentDisplayName(std::move(value)); return *this;}
    inline HubContentInfo& WithHubContentDisplayName(const char* value) { SetHubContentDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the hub content.</p>
     */
    inline const Aws::String& GetHubContentDescription() const{ return m_hubContentDescription; }
    inline bool HubContentDescriptionHasBeenSet() const { return m_hubContentDescriptionHasBeenSet; }
    inline void SetHubContentDescription(const Aws::String& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = value; }
    inline void SetHubContentDescription(Aws::String&& value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription = std::move(value); }
    inline void SetHubContentDescription(const char* value) { m_hubContentDescriptionHasBeenSet = true; m_hubContentDescription.assign(value); }
    inline HubContentInfo& WithHubContentDescription(const Aws::String& value) { SetHubContentDescription(value); return *this;}
    inline HubContentInfo& WithHubContentDescription(Aws::String&& value) { SetHubContentDescription(std::move(value)); return *this;}
    inline HubContentInfo& WithHubContentDescription(const char* value) { SetHubContentDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support status of the hub content.</p>
     */
    inline const HubContentSupportStatus& GetSupportStatus() const{ return m_supportStatus; }
    inline bool SupportStatusHasBeenSet() const { return m_supportStatusHasBeenSet; }
    inline void SetSupportStatus(const HubContentSupportStatus& value) { m_supportStatusHasBeenSet = true; m_supportStatus = value; }
    inline void SetSupportStatus(HubContentSupportStatus&& value) { m_supportStatusHasBeenSet = true; m_supportStatus = std::move(value); }
    inline HubContentInfo& WithSupportStatus(const HubContentSupportStatus& value) { SetSupportStatus(value); return *this;}
    inline HubContentInfo& WithSupportStatus(HubContentSupportStatus&& value) { SetSupportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords for the hub content.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubContentSearchKeywords() const{ return m_hubContentSearchKeywords; }
    inline bool HubContentSearchKeywordsHasBeenSet() const { return m_hubContentSearchKeywordsHasBeenSet; }
    inline void SetHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = value; }
    inline void SetHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords = std::move(value); }
    inline HubContentInfo& WithHubContentSearchKeywords(const Aws::Vector<Aws::String>& value) { SetHubContentSearchKeywords(value); return *this;}
    inline HubContentInfo& WithHubContentSearchKeywords(Aws::Vector<Aws::String>&& value) { SetHubContentSearchKeywords(std::move(value)); return *this;}
    inline HubContentInfo& AddHubContentSearchKeywords(const Aws::String& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(value); return *this; }
    inline HubContentInfo& AddHubContentSearchKeywords(Aws::String&& value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(std::move(value)); return *this; }
    inline HubContentInfo& AddHubContentSearchKeywords(const char* value) { m_hubContentSearchKeywordsHasBeenSet = true; m_hubContentSearchKeywords.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the hub content.</p>
     */
    inline const HubContentStatus& GetHubContentStatus() const{ return m_hubContentStatus; }
    inline bool HubContentStatusHasBeenSet() const { return m_hubContentStatusHasBeenSet; }
    inline void SetHubContentStatus(const HubContentStatus& value) { m_hubContentStatusHasBeenSet = true; m_hubContentStatus = value; }
    inline void SetHubContentStatus(HubContentStatus&& value) { m_hubContentStatusHasBeenSet = true; m_hubContentStatus = std::move(value); }
    inline HubContentInfo& WithHubContentStatus(const HubContentStatus& value) { SetHubContentStatus(value); return *this;}
    inline HubContentInfo& WithHubContentStatus(HubContentStatus&& value) { SetHubContentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the hub content was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline HubContentInfo& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline HubContentInfo& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the hub content was originally created, before any
     * updates or revisions.</p>
     */
    inline const Aws::Utils::DateTime& GetOriginalCreationTime() const{ return m_originalCreationTime; }
    inline bool OriginalCreationTimeHasBeenSet() const { return m_originalCreationTimeHasBeenSet; }
    inline void SetOriginalCreationTime(const Aws::Utils::DateTime& value) { m_originalCreationTimeHasBeenSet = true; m_originalCreationTime = value; }
    inline void SetOriginalCreationTime(Aws::Utils::DateTime&& value) { m_originalCreationTimeHasBeenSet = true; m_originalCreationTime = std::move(value); }
    inline HubContentInfo& WithOriginalCreationTime(const Aws::Utils::DateTime& value) { SetOriginalCreationTime(value); return *this;}
    inline HubContentInfo& WithOriginalCreationTime(Aws::Utils::DateTime&& value) { SetOriginalCreationTime(std::move(value)); return *this;}
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

    HubContentType m_hubContentType;
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_documentSchemaVersion;
    bool m_documentSchemaVersionHasBeenSet = false;

    Aws::String m_hubContentDisplayName;
    bool m_hubContentDisplayNameHasBeenSet = false;

    Aws::String m_hubContentDescription;
    bool m_hubContentDescriptionHasBeenSet = false;

    HubContentSupportStatus m_supportStatus;
    bool m_supportStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_hubContentSearchKeywords;
    bool m_hubContentSearchKeywordsHasBeenSet = false;

    HubContentStatus m_hubContentStatus;
    bool m_hubContentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_originalCreationTime;
    bool m_originalCreationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
