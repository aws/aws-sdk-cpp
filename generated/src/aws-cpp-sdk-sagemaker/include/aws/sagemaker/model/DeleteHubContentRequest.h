/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentType.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DeleteHubContentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteHubContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHubContent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the hub that you want to delete content in.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }

    /**
     * <p>The name of the hub that you want to delete content in.</p>
     */
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }

    /**
     * <p>The name of the hub that you want to delete content in.</p>
     */
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }

    /**
     * <p>The name of the hub that you want to delete content in.</p>
     */
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }

    /**
     * <p>The name of the hub that you want to delete content in.</p>
     */
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }

    /**
     * <p>The name of the hub that you want to delete content in.</p>
     */
    inline DeleteHubContentRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}

    /**
     * <p>The name of the hub that you want to delete content in.</p>
     */
    inline DeleteHubContentRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}

    /**
     * <p>The name of the hub that you want to delete content in.</p>
     */
    inline DeleteHubContentRequest& WithHubName(const char* value) { SetHubName(value); return *this;}


    /**
     * <p>The type of content that you want to delete from a hub.</p>
     */
    inline const HubContentType& GetHubContentType() const{ return m_hubContentType; }

    /**
     * <p>The type of content that you want to delete from a hub.</p>
     */
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }

    /**
     * <p>The type of content that you want to delete from a hub.</p>
     */
    inline void SetHubContentType(const HubContentType& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }

    /**
     * <p>The type of content that you want to delete from a hub.</p>
     */
    inline void SetHubContentType(HubContentType&& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = std::move(value); }

    /**
     * <p>The type of content that you want to delete from a hub.</p>
     */
    inline DeleteHubContentRequest& WithHubContentType(const HubContentType& value) { SetHubContentType(value); return *this;}

    /**
     * <p>The type of content that you want to delete from a hub.</p>
     */
    inline DeleteHubContentRequest& WithHubContentType(HubContentType&& value) { SetHubContentType(std::move(value)); return *this;}


    /**
     * <p>The name of the content that you want to delete from a hub.</p>
     */
    inline const Aws::String& GetHubContentName() const{ return m_hubContentName; }

    /**
     * <p>The name of the content that you want to delete from a hub.</p>
     */
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }

    /**
     * <p>The name of the content that you want to delete from a hub.</p>
     */
    inline void SetHubContentName(const Aws::String& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = value; }

    /**
     * <p>The name of the content that you want to delete from a hub.</p>
     */
    inline void SetHubContentName(Aws::String&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::move(value); }

    /**
     * <p>The name of the content that you want to delete from a hub.</p>
     */
    inline void SetHubContentName(const char* value) { m_hubContentNameHasBeenSet = true; m_hubContentName.assign(value); }

    /**
     * <p>The name of the content that you want to delete from a hub.</p>
     */
    inline DeleteHubContentRequest& WithHubContentName(const Aws::String& value) { SetHubContentName(value); return *this;}

    /**
     * <p>The name of the content that you want to delete from a hub.</p>
     */
    inline DeleteHubContentRequest& WithHubContentName(Aws::String&& value) { SetHubContentName(std::move(value)); return *this;}

    /**
     * <p>The name of the content that you want to delete from a hub.</p>
     */
    inline DeleteHubContentRequest& WithHubContentName(const char* value) { SetHubContentName(value); return *this;}


    /**
     * <p>The version of the content that you want to delete from a hub.</p>
     */
    inline const Aws::String& GetHubContentVersion() const{ return m_hubContentVersion; }

    /**
     * <p>The version of the content that you want to delete from a hub.</p>
     */
    inline bool HubContentVersionHasBeenSet() const { return m_hubContentVersionHasBeenSet; }

    /**
     * <p>The version of the content that you want to delete from a hub.</p>
     */
    inline void SetHubContentVersion(const Aws::String& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = value; }

    /**
     * <p>The version of the content that you want to delete from a hub.</p>
     */
    inline void SetHubContentVersion(Aws::String&& value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion = std::move(value); }

    /**
     * <p>The version of the content that you want to delete from a hub.</p>
     */
    inline void SetHubContentVersion(const char* value) { m_hubContentVersionHasBeenSet = true; m_hubContentVersion.assign(value); }

    /**
     * <p>The version of the content that you want to delete from a hub.</p>
     */
    inline DeleteHubContentRequest& WithHubContentVersion(const Aws::String& value) { SetHubContentVersion(value); return *this;}

    /**
     * <p>The version of the content that you want to delete from a hub.</p>
     */
    inline DeleteHubContentRequest& WithHubContentVersion(Aws::String&& value) { SetHubContentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the content that you want to delete from a hub.</p>
     */
    inline DeleteHubContentRequest& WithHubContentVersion(const char* value) { SetHubContentVersion(value); return *this;}

  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    HubContentType m_hubContentType;
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    Aws::String m_hubContentVersion;
    bool m_hubContentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
