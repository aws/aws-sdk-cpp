/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateHubRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateHubRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHub"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the hub to update.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }
    inline UpdateHubRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}
    inline UpdateHubRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}
    inline UpdateHubRequest& WithHubName(const char* value) { SetHubName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the updated hub.</p>
     */
    inline const Aws::String& GetHubDescription() const{ return m_hubDescription; }
    inline bool HubDescriptionHasBeenSet() const { return m_hubDescriptionHasBeenSet; }
    inline void SetHubDescription(const Aws::String& value) { m_hubDescriptionHasBeenSet = true; m_hubDescription = value; }
    inline void SetHubDescription(Aws::String&& value) { m_hubDescriptionHasBeenSet = true; m_hubDescription = std::move(value); }
    inline void SetHubDescription(const char* value) { m_hubDescriptionHasBeenSet = true; m_hubDescription.assign(value); }
    inline UpdateHubRequest& WithHubDescription(const Aws::String& value) { SetHubDescription(value); return *this;}
    inline UpdateHubRequest& WithHubDescription(Aws::String&& value) { SetHubDescription(std::move(value)); return *this;}
    inline UpdateHubRequest& WithHubDescription(const char* value) { SetHubDescription(value); return *this;}
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
    inline UpdateHubRequest& WithHubDisplayName(const Aws::String& value) { SetHubDisplayName(value); return *this;}
    inline UpdateHubRequest& WithHubDisplayName(Aws::String&& value) { SetHubDisplayName(std::move(value)); return *this;}
    inline UpdateHubRequest& WithHubDisplayName(const char* value) { SetHubDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubSearchKeywords() const{ return m_hubSearchKeywords; }
    inline bool HubSearchKeywordsHasBeenSet() const { return m_hubSearchKeywordsHasBeenSet; }
    inline void SetHubSearchKeywords(const Aws::Vector<Aws::String>& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords = value; }
    inline void SetHubSearchKeywords(Aws::Vector<Aws::String>&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords = std::move(value); }
    inline UpdateHubRequest& WithHubSearchKeywords(const Aws::Vector<Aws::String>& value) { SetHubSearchKeywords(value); return *this;}
    inline UpdateHubRequest& WithHubSearchKeywords(Aws::Vector<Aws::String>&& value) { SetHubSearchKeywords(std::move(value)); return *this;}
    inline UpdateHubRequest& AddHubSearchKeywords(const Aws::String& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(value); return *this; }
    inline UpdateHubRequest& AddHubSearchKeywords(Aws::String&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(std::move(value)); return *this; }
    inline UpdateHubRequest& AddHubSearchKeywords(const char* value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(value); return *this; }
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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
