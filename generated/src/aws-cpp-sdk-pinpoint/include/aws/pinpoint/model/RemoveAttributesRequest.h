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
    AWS_PINPOINT_API RemoveAttributesRequest() = default;

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
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    RemoveAttributesRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
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
    inline const Aws::String& GetAttributeType() const { return m_attributeType; }
    inline bool AttributeTypeHasBeenSet() const { return m_attributeTypeHasBeenSet; }
    template<typename AttributeTypeT = Aws::String>
    void SetAttributeType(AttributeTypeT&& value) { m_attributeTypeHasBeenSet = true; m_attributeType = std::forward<AttributeTypeT>(value); }
    template<typename AttributeTypeT = Aws::String>
    RemoveAttributesRequest& WithAttributeType(AttributeTypeT&& value) { SetAttributeType(std::forward<AttributeTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UpdateAttributesRequest& GetUpdateAttributesRequest() const { return m_updateAttributesRequest; }
    inline bool UpdateAttributesRequestHasBeenSet() const { return m_updateAttributesRequestHasBeenSet; }
    template<typename UpdateAttributesRequestT = UpdateAttributesRequest>
    void SetUpdateAttributesRequest(UpdateAttributesRequestT&& value) { m_updateAttributesRequestHasBeenSet = true; m_updateAttributesRequest = std::forward<UpdateAttributesRequestT>(value); }
    template<typename UpdateAttributesRequestT = UpdateAttributesRequest>
    RemoveAttributesRequest& WithUpdateAttributesRequest(UpdateAttributesRequestT&& value) { SetUpdateAttributesRequest(std::forward<UpdateAttributesRequestT>(value)); return *this;}
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
