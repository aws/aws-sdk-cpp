/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HubS3StorageConfig.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateHubRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateHubRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHub"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the hub to create.</p>
     */
    inline const Aws::String& GetHubName() const { return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    template<typename HubNameT = Aws::String>
    void SetHubName(HubNameT&& value) { m_hubNameHasBeenSet = true; m_hubName = std::forward<HubNameT>(value); }
    template<typename HubNameT = Aws::String>
    CreateHubRequest& WithHubName(HubNameT&& value) { SetHubName(std::forward<HubNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the hub.</p>
     */
    inline const Aws::String& GetHubDescription() const { return m_hubDescription; }
    inline bool HubDescriptionHasBeenSet() const { return m_hubDescriptionHasBeenSet; }
    template<typename HubDescriptionT = Aws::String>
    void SetHubDescription(HubDescriptionT&& value) { m_hubDescriptionHasBeenSet = true; m_hubDescription = std::forward<HubDescriptionT>(value); }
    template<typename HubDescriptionT = Aws::String>
    CreateHubRequest& WithHubDescription(HubDescriptionT&& value) { SetHubDescription(std::forward<HubDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the hub.</p>
     */
    inline const Aws::String& GetHubDisplayName() const { return m_hubDisplayName; }
    inline bool HubDisplayNameHasBeenSet() const { return m_hubDisplayNameHasBeenSet; }
    template<typename HubDisplayNameT = Aws::String>
    void SetHubDisplayName(HubDisplayNameT&& value) { m_hubDisplayNameHasBeenSet = true; m_hubDisplayName = std::forward<HubDisplayNameT>(value); }
    template<typename HubDisplayNameT = Aws::String>
    CreateHubRequest& WithHubDisplayName(HubDisplayNameT&& value) { SetHubDisplayName(std::forward<HubDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubSearchKeywords() const { return m_hubSearchKeywords; }
    inline bool HubSearchKeywordsHasBeenSet() const { return m_hubSearchKeywordsHasBeenSet; }
    template<typename HubSearchKeywordsT = Aws::Vector<Aws::String>>
    void SetHubSearchKeywords(HubSearchKeywordsT&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords = std::forward<HubSearchKeywordsT>(value); }
    template<typename HubSearchKeywordsT = Aws::Vector<Aws::String>>
    CreateHubRequest& WithHubSearchKeywords(HubSearchKeywordsT&& value) { SetHubSearchKeywords(std::forward<HubSearchKeywordsT>(value)); return *this;}
    template<typename HubSearchKeywordsT = Aws::String>
    CreateHubRequest& AddHubSearchKeywords(HubSearchKeywordsT&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.emplace_back(std::forward<HubSearchKeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline const HubS3StorageConfig& GetS3StorageConfig() const { return m_s3StorageConfig; }
    inline bool S3StorageConfigHasBeenSet() const { return m_s3StorageConfigHasBeenSet; }
    template<typename S3StorageConfigT = HubS3StorageConfig>
    void SetS3StorageConfig(S3StorageConfigT&& value) { m_s3StorageConfigHasBeenSet = true; m_s3StorageConfig = std::forward<S3StorageConfigT>(value); }
    template<typename S3StorageConfigT = HubS3StorageConfig>
    CreateHubRequest& WithS3StorageConfig(S3StorageConfigT&& value) { SetS3StorageConfig(std::forward<S3StorageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags to associate with the hub.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateHubRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateHubRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    Aws::String m_hubDescription;
    bool m_hubDescriptionHasBeenSet = false;

    Aws::String m_hubDisplayName;
    bool m_hubDisplayNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_hubSearchKeywords;
    bool m_hubSearchKeywordsHasBeenSet = false;

    HubS3StorageConfig m_s3StorageConfig;
    bool m_s3StorageConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
