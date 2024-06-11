/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/UpdateAttributesRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class RemoveAttributesRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API RemoveAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveAttributes"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline RemoveAttributesRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline RemoveAttributesRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline RemoveAttributesRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of attribute or attributes to remove. Valid values are:</p>
     * <ul><li><p>endpoint-custom-attributes - Custom attributes that describe
     * endpoints, such as the date when an associated user opted in or out of receiving
     * communications from you through a specific type of channel.</p></li>
     * <li><p>endpoint-metric-attributes - Custom metrics that your app reports to
     * Amazon Pinpoint for endpoints, such as the number of app sessions or the number
     * of items left in a cart.</p></li> <li><p>endpoint-user-attributes - Custom
     * attributes that describe users, such as first name, last name, and
     * age.</p></li></ul>
     */
    inline const Aws::String& GetAttributeType() const{ return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    inline void SetAttributeType(const Aws::String& value) { m_attributeTypeHasBeenSet = true; m_attributeType = value; }
    inline void SetAttributeType(Aws::String&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::move(value); }
    inline void SetAttributeType(const char* value) { m_attributeTypeHasBeenSet = true; m_attributeType.assign(value); }
    inline RemoveAttributesRequest& WithAttributeType(const Aws::String& value) { SetAttributeType(value); return *this;}
    inline RemoveAttributesRequest& WithAttributeType(Aws::String&& value) { SetAttributeType(std::move(value)); return *this;}
    inline RemoveAttributesRequest& WithAttributeType(const char* value) { SetAttributeType(value); return *this;}
    ///@}

    ///@{
    
    inline const UpdateAttributesRequest& GetUpdateAttributesRequest() const{ return m_updateAttributesRequest; }
    inline bool UpdateAttributesRequestHasBeenSet() const { return m_updateAttributesRequestHasBeenSet; }
    inline void SetUpdateAttributesRequest(const UpdateAttributesRequest& value) { m_updateAttributesRequestHasBeenSet = true; m_updateAttributesRequest = value; }
    inline void SetUpdateAttributesRequest(UpdateAttributesRequest&& value) { m_updateAttributesRequestHasBeenSet = true; m_updateAttributesRequest = std::move(value); }
    inline RemoveAttributesRequest& WithUpdateAttributesRequest(const UpdateAttributesRequest& value) { SetUpdateAttributesRequest(value); return *this;}
    inline RemoveAttributesRequest& WithUpdateAttributesRequest(UpdateAttributesRequest&& value) { SetUpdateAttributesRequest(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_attributeType;
    bool m_attributeTypeHasBeenSet = false;

    UpdateAttributesRequest m_updateAttributesRequest;
    bool m_updateAttributesRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
