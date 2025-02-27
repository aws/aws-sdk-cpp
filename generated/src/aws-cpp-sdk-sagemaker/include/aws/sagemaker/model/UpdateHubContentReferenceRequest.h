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
  class UpdateHubContentReferenceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateHubContentReferenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHubContentReference"; }

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
    inline UpdateHubContentReferenceRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}
    inline UpdateHubContentReferenceRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}
    inline UpdateHubContentReferenceRequest& WithHubName(const char* value) { SetHubName(value); return *this;}
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
    inline UpdateHubContentReferenceRequest& WithHubContentName(const Aws::String& value) { SetHubContentName(value); return *this;}
    inline UpdateHubContentReferenceRequest& WithHubContentName(Aws::String&& value) { SetHubContentName(std::move(value)); return *this;}
    inline UpdateHubContentReferenceRequest& WithHubContentName(const char* value) { SetHubContentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the resource that you want to update. Only specify a
     * <code>ModelReference</code> resource for this API. To update a
     * <code>Model</code> or <code>Notebook</code> resource, use the
     * <code>UpdateHubContent</code> API instead.</p>
     */
    inline const HubContentType& GetHubContentType() const{ return m_hubContentType; }
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
    inline void SetHubContentType(const HubContentType& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline void SetHubContentType(HubContentType&& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = std::move(value); }
    inline UpdateHubContentReferenceRequest& WithHubContentType(const HubContentType& value) { SetHubContentType(value); return *this;}
    inline UpdateHubContentReferenceRequest& WithHubContentType(HubContentType&& value) { SetHubContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum hub content version of the referenced model that you want to use.
     * The minimum version must be older than the latest available version of the
     * referenced model. To support all versions of a model, set the value to
     * <code>1.0.0</code>.</p>
     */
    inline const Aws::String& GetMinVersion() const{ return m_minVersion; }
    inline bool MinVersionHasBeenSet() const { return m_minVersionHasBeenSet; }
    inline void SetMinVersion(const Aws::String& value) { m_minVersionHasBeenSet = true; m_minVersion = value; }
    inline void SetMinVersion(Aws::String&& value) { m_minVersionHasBeenSet = true; m_minVersion = std::move(value); }
    inline void SetMinVersion(const char* value) { m_minVersionHasBeenSet = true; m_minVersion.assign(value); }
    inline UpdateHubContentReferenceRequest& WithMinVersion(const Aws::String& value) { SetMinVersion(value); return *this;}
    inline UpdateHubContentReferenceRequest& WithMinVersion(Aws::String&& value) { SetMinVersion(std::move(value)); return *this;}
    inline UpdateHubContentReferenceRequest& WithMinVersion(const char* value) { SetMinVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;

    HubContentType m_hubContentType;
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_minVersion;
    bool m_minVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
