/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentType.h>
#include <aws/sagemaker/model/PresignedUrlAccessConfig.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateHubContentPresignedUrlsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateHubContentPresignedUrlsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHubContentPresignedUrls"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the hub that contains the content.
     * For public content, use <code>SageMakerPublicHub</code>.</p>
     */
    inline const Aws::String& GetHubName() const { return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    template<typename HubNameT = Aws::String>
    void SetHubName(HubNameT&& value) { m_hubNameHasBeenSet = true; m_hubName = std::forward<HubNameT>(value); }
    template<typename HubNameT = Aws::String>
    CreateHubContentPresignedUrlsRequest& WithHubName(HubNameT&& value) { SetHubName(std::forward<HubNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hub content to access. Valid values include <code>Model</code>,
     * <code>Notebook</code>, and <code>ModelReference</code>.</p>
     */
    inline HubContentType GetHubContentType() const { return m_hubContentType; }
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
    inline void SetHubContentType(HubContentType value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline CreateHubContentPresignedUrlsRequest& WithHubContentType(HubContentType value) { SetHubContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub content for which to generate presigned URLs. This
     * identifies the specific model or content within the hub.</p>
     */
    inline const Aws::String& GetHubContentName() const { return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    template<typename HubContentNameT = Aws::String>
    void SetHubContentName(HubContentNameT&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::forward<HubContentNameT>(value); }
    template<typename HubContentNameT = Aws::String>
    CreateHubContentPresignedUrlsRequest& WithHubContentName(HubContentNameT&& value) { SetHubContentName(std::forward<HubContentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the hub content. If not specified, the latest version is
     * used.</p>
     */
    inline const Aws::String& GetHubContentVersion() const { return m_hubContentVersion; }
    inline bool HubContentVersionHasBeenSet() const { return m_hubContentVersionHasBeenSet; }
    template<typename HubContentVersionT = Aws::String>
    void SetHubContentVersion(HubContentVersionT&& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = std::forward<HubContentVersionT>(value); }
    template<typename HubContentVersionT = Aws::String>
    CreateHubContentPresignedUrlsRequest& WithHubContentVersion(HubContentVersionT&& value) { SetHubContentVersion(std::forward<HubContentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for accessing the hub content, including end-user
     * license agreement acceptance for gated models and expected S3 URL
     * validation.</p>
     */
    inline const PresignedUrlAccessConfig& GetAccessConfig() const { return m_accessConfig; }
    inline bool AccessConfigHasBeenSet() const { return m_accessConfigHasBeenSet; }
    template<typename AccessConfigT = PresignedUrlAccessConfig>
    void SetAccessConfig(AccessConfigT&& value) { m_accessConfigHasBeenSet = true; m_accessConfig = std::forward<AccessConfigT>(value); }
    template<typename AccessConfigT = PresignedUrlAccessConfig>
    CreateHubContentPresignedUrlsRequest& WithAccessConfig(AccessConfigT&& value) { SetAccessConfig(std::forward<AccessConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of presigned URLs to return in the response. Default value
     * is 100. Large models may contain hundreds of files, requiring pagination to
     * retrieve all URLs.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline CreateHubContentPresignedUrlsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A token for pagination. Use this token to retrieve the next set of presigned
     * URLs when the response is truncated.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    CreateHubContentPresignedUrlsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    HubContentType m_hubContentType{HubContentType::NOT_SET};
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    Aws::String m_hubContentVersion;
    bool m_hubContentVersionHasBeenSet = false;

    PresignedUrlAccessConfig m_accessConfig;
    bool m_accessConfigHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
