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
    AWS_SAGEMAKER_API HubInfo();
    AWS_SAGEMAKER_API HubInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HubInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the hub.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }
    inline HubInfo& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}
    inline HubInfo& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}
    inline HubInfo& WithHubName(const char* value) { SetHubName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hub.</p>
     */
    inline const Aws::String& GetHubArn() const{ return m_hubArn; }
    inline bool HubArnHasBeenSet() const { return m_hubArnHasBeenSet; }
    inline void SetHubArn(const Aws::String& value) { m_hubArnHasBeenSet = true; m_hubArn = value; }
    inline void SetHubArn(Aws::String&& value) { m_hubArnHasBeenSet = true; m_hubArn = std::move(value); }
    inline void SetHubArn(const char* value) { m_hubArnHasBeenSet = true; m_hubArn.assign(value); }
    inline HubInfo& WithHubArn(const Aws::String& value) { SetHubArn(value); return *this;}
    inline HubInfo& WithHubArn(Aws::String&& value) { SetHubArn(std::move(value)); return *this;}
    inline HubInfo& WithHubArn(const char* value) { SetHubArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the hub.</p>
     */
    inline const Aws::String& GetHubDisplayName() const{ return m_hubDisplayName; }
    inline bool HubDisplayNameHasBeenSet() const { return m_hubDisplayNameHasBeenSet; }
    inline void SetHubDisplayName(const Aws::String& value) { m_hubDisplayNameHasBeenSet = true; m_hubDisplayName = value; }
    inline void SetHubDisplayName(Aws::String&& value) { m_hubDisplayNameHasBeenSet = true; m_hubDisplayName = std::move(value); }
    inline void SetHubDisplayName(const char* value) { m_hubDisplayNameHasBeenSet = true; m_hubDisplayName.assign(value); }
    inline HubInfo& WithHubDisplayName(const Aws::String& value) { SetHubDisplayName(value); return *this;}
    inline HubInfo& WithHubDisplayName(Aws::String&& value) { SetHubDisplayName(std::move(value)); return *this;}
    inline HubInfo& WithHubDisplayName(const char* value) { SetHubDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the hub.</p>
     */
    inline const Aws::String& GetHubDescription() const{ return m_hubDescription; }
    inline bool HubDescriptionHasBeenSet() const { return m_hubDescriptionHasBeenSet; }
    inline void SetHubDescription(const Aws::String& value) { m_hubDescriptionHasBeenSet = true; m_hubDescription = value; }
    inline void SetHubDescription(Aws::String&& value) { m_hubDescriptionHasBeenSet = true; m_hubDescription = std::move(value); }
    inline void SetHubDescription(const char* value) { m_hubDescriptionHasBeenSet = true; m_hubDescription.assign(value); }
    inline HubInfo& WithHubDescription(const Aws::String& value) { SetHubDescription(value); return *this;}
    inline HubInfo& WithHubDescription(Aws::String&& value) { SetHubDescription(std::move(value)); return *this;}
    inline HubInfo& WithHubDescription(const char* value) { SetHubDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubSearchKeywords() const{ return m_hubSearchKeywords; }
    inline bool HubSearchKeywordsHasBeenSet() const { return m_hubSearchKeywordsHasBeenSet; }
    inline void SetHubSearchKeywords(const Aws::Vector<Aws::String>& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords = value; }
    inline void SetHubSearchKeywords(Aws::Vector<Aws::String>&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords = std::move(value); }
    inline HubInfo& WithHubSearchKeywords(const Aws::Vector<Aws::String>& value) { SetHubSearchKeywords(value); return *this;}
    inline HubInfo& WithHubSearchKeywords(Aws::Vector<Aws::String>&& value) { SetHubSearchKeywords(std::move(value)); return *this;}
    inline HubInfo& AddHubSearchKeywords(const Aws::String& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(value); return *this; }
    inline HubInfo& AddHubSearchKeywords(Aws::String&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(std::move(value)); return *this; }
    inline HubInfo& AddHubSearchKeywords(const char* value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the hub.</p>
     */
    inline const HubStatus& GetHubStatus() const{ return m_hubStatus; }
    inline bool HubStatusHasBeenSet() const { return m_hubStatusHasBeenSet; }
    inline void SetHubStatus(const HubStatus& value) { m_hubStatusHasBeenSet = true; m_hubStatus = value; }
    inline void SetHubStatus(HubStatus&& value) { m_hubStatusHasBeenSet = true; m_hubStatus = std::move(value); }
    inline HubInfo& WithHubStatus(const HubStatus& value) { SetHubStatus(value); return *this;}
    inline HubInfo& WithHubStatus(HubStatus&& value) { SetHubStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the hub was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline HubInfo& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline HubInfo& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the hub was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline HubInfo& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline HubInfo& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
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

    HubStatus m_hubStatus;
    bool m_hubStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
