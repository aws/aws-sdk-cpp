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
  class DeleteHubContentReferenceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteHubContentReferenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHubContentReference"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the hub to delete the hub content reference from.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }
    inline DeleteHubContentReferenceRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}
    inline DeleteHubContentReferenceRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}
    inline DeleteHubContentReferenceRequest& WithHubName(const char* value) { SetHubName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hub content reference to delete. The only supported type of hub
     * content reference to delete is <code>ModelReference</code>.</p>
     */
    inline const HubContentType& GetHubContentType() const{ return m_hubContentType; }
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }
    inline void SetHubContentType(const HubContentType& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }
    inline void SetHubContentType(HubContentType&& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = std::move(value); }
    inline DeleteHubContentReferenceRequest& WithHubContentType(const HubContentType& value) { SetHubContentType(value); return *this;}
    inline DeleteHubContentReferenceRequest& WithHubContentType(HubContentType&& value) { SetHubContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hub content to delete.</p>
     */
    inline const Aws::String& GetHubContentName() const{ return m_hubContentName; }
    inline bool HubContentNameHasBeenSet() const { return m_hubContentNameHasBeenSet; }
    inline void SetHubContentName(const Aws::String& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = value; }
    inline void SetHubContentName(Aws::String&& value) { m_hubContentNameHasBeenSet = true; m_hubContentName = std::move(value); }
    inline void SetHubContentName(const char* value) { m_hubContentNameHasBeenSet = true; m_hubContentName.assign(value); }
    inline DeleteHubContentReferenceRequest& WithHubContentName(const Aws::String& value) { SetHubContentName(value); return *this;}
    inline DeleteHubContentReferenceRequest& WithHubContentName(Aws::String&& value) { SetHubContentName(std::move(value)); return *this;}
    inline DeleteHubContentReferenceRequest& WithHubContentName(const char* value) { SetHubContentName(value); return *this;}
    ///@}
  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    HubContentType m_hubContentType;
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_hubContentName;
    bool m_hubContentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
