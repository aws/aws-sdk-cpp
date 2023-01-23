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


    /**
     * <p>The name of the hub to update.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }

    /**
     * <p>The name of the hub to update.</p>
     */
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }

    /**
     * <p>The name of the hub to update.</p>
     */
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }

    /**
     * <p>The name of the hub to update.</p>
     */
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }

    /**
     * <p>The name of the hub to update.</p>
     */
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }

    /**
     * <p>The name of the hub to update.</p>
     */
    inline UpdateHubRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}

    /**
     * <p>The name of the hub to update.</p>
     */
    inline UpdateHubRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}

    /**
     * <p>The name of the hub to update.</p>
     */
    inline UpdateHubRequest& WithHubName(const char* value) { SetHubName(value); return *this;}


    /**
     * <p>A description of the updated hub.</p>
     */
    inline const Aws::String& GetHubDescription() const{ return m_hubDescription; }

    /**
     * <p>A description of the updated hub.</p>
     */
    inline bool HubDescriptionHasBeenSet() const { return m_hubDescriptionHasBeenSet; }

    /**
     * <p>A description of the updated hub.</p>
     */
    inline void SetHubDescription(const Aws::String& value) { m_hubDescriptionHasBeenSet = true; m_hubDescription = value; }

    /**
     * <p>A description of the updated hub.</p>
     */
    inline void SetHubDescription(Aws::String&& value) { m_hubDescriptionHasBeenSet = true; m_hubDescription = std::move(value); }

    /**
     * <p>A description of the updated hub.</p>
     */
    inline void SetHubDescription(const char* value) { m_hubDescriptionHasBeenSet = true; m_hubDescription.assign(value); }

    /**
     * <p>A description of the updated hub.</p>
     */
    inline UpdateHubRequest& WithHubDescription(const Aws::String& value) { SetHubDescription(value); return *this;}

    /**
     * <p>A description of the updated hub.</p>
     */
    inline UpdateHubRequest& WithHubDescription(Aws::String&& value) { SetHubDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the updated hub.</p>
     */
    inline UpdateHubRequest& WithHubDescription(const char* value) { SetHubDescription(value); return *this;}


    /**
     * <p>The display name of the hub.</p>
     */
    inline const Aws::String& GetHubDisplayName() const{ return m_hubDisplayName; }

    /**
     * <p>The display name of the hub.</p>
     */
    inline bool HubDisplayNameHasBeenSet() const { return m_hubDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the hub.</p>
     */
    inline void SetHubDisplayName(const Aws::String& value) { m_hubDisplayNameHasBeenSet = true; m_hubDisplayName = value; }

    /**
     * <p>The display name of the hub.</p>
     */
    inline void SetHubDisplayName(Aws::String&& value) { m_hubDisplayNameHasBeenSet = true; m_hubDisplayName = std::move(value); }

    /**
     * <p>The display name of the hub.</p>
     */
    inline void SetHubDisplayName(const char* value) { m_hubDisplayNameHasBeenSet = true; m_hubDisplayName.assign(value); }

    /**
     * <p>The display name of the hub.</p>
     */
    inline UpdateHubRequest& WithHubDisplayName(const Aws::String& value) { SetHubDisplayName(value); return *this;}

    /**
     * <p>The display name of the hub.</p>
     */
    inline UpdateHubRequest& WithHubDisplayName(Aws::String&& value) { SetHubDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the hub.</p>
     */
    inline UpdateHubRequest& WithHubDisplayName(const char* value) { SetHubDisplayName(value); return *this;}


    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubSearchKeywords() const{ return m_hubSearchKeywords; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline bool HubSearchKeywordsHasBeenSet() const { return m_hubSearchKeywordsHasBeenSet; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline void SetHubSearchKeywords(const Aws::Vector<Aws::String>& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords = value; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline void SetHubSearchKeywords(Aws::Vector<Aws::String>&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords = std::move(value); }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline UpdateHubRequest& WithHubSearchKeywords(const Aws::Vector<Aws::String>& value) { SetHubSearchKeywords(value); return *this;}

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline UpdateHubRequest& WithHubSearchKeywords(Aws::Vector<Aws::String>&& value) { SetHubSearchKeywords(std::move(value)); return *this;}

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline UpdateHubRequest& AddHubSearchKeywords(const Aws::String& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(value); return *this; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline UpdateHubRequest& AddHubSearchKeywords(Aws::String&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(std::move(value)); return *this; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline UpdateHubRequest& AddHubSearchKeywords(const char* value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.push_back(value); return *this; }

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
