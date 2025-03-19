/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HubStatus.h>
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
   * <p>Information about a hub.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HubInfo">AWS
   * API Reference</a></p>
   */
  class HubInfo
  {
  public:
    AWS_SAGEMAKER_API HubInfo() = default;
    AWS_SAGEMAKER_API HubInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HubInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the hub.</p>
     */
    inline const Aws::String& GetHubName() const { return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    template<typename HubNameT = Aws::String>
    void SetHubName(HubNameT&& value) { m_hubNameHasBeenSet = true; m_hubName = std::forward<HubNameT>(value); }
    template<typename HubNameT = Aws::String>
    HubInfo& WithHubName(HubNameT&& value) { SetHubName(std::forward<HubNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hub.</p>
     */
    inline const Aws::String& GetHubArn() const { return m_hubArn; }
    inline bool HubArnHasBeenSet() const { return m_hubArnHasBeenSet; }
    template<typename HubArnT = Aws::String>
    void SetHubArn(HubArnT&& value) { m_hubArnHasBeenSet = true; m_hubArn = std::forward<HubArnT>(value); }
    template<typename HubArnT = Aws::String>
    HubInfo& WithHubArn(HubArnT&& value) { SetHubArn(std::forward<HubArnT>(value)); return *this;}
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
    HubInfo& WithHubDisplayName(HubDisplayNameT&& value) { SetHubDisplayName(std::forward<HubDisplayNameT>(value)); return *this;}
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
    HubInfo& WithHubDescription(HubDescriptionT&& value) { SetHubDescription(std::forward<HubDescriptionT>(value)); return *this;}
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
    HubInfo& WithHubSearchKeywords(HubSearchKeywordsT&& value) { SetHubSearchKeywords(std::forward<HubSearchKeywordsT>(value)); return *this;}
    template<typename HubSearchKeywordsT = Aws::String>
    HubInfo& AddHubSearchKeywords(HubSearchKeywordsT&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.emplace_back(std::forward<HubSearchKeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the hub.</p>
     */
    inline HubStatus GetHubStatus() const { return m_hubStatus; }
    inline bool HubStatusHasBeenSet() const { return m_hubStatusHasBeenSet; }
    inline void SetHubStatus(HubStatus value) { m_hubStatusHasBeenSet = true; m_hubStatus = value; }
    inline HubInfo& WithHubStatus(HubStatus value) { SetHubStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the hub was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    HubInfo& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the hub was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    HubInfo& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    Aws::String m_hubArn;
    bool m_hubArnHasBeenSet = false;

    Aws::String m_hubDisplayName;
    bool m_hubDisplayNameHasBeenSet = false;

    Aws::String m_hubDescription;
    bool m_hubDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_hubSearchKeywords;
    bool m_hubSearchKeywordsHasBeenSet = false;

    HubStatus m_hubStatus{HubStatus::NOT_SET};
    bool m_hubStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
