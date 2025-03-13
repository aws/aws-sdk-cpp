/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for <code>SetEndpointAttributes</code> action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetEndpointAttributesInput">AWS
   * API Reference</a></p>
   */
  class SetEndpointAttributesRequest : public SNSRequest
  {
  public:
    AWS_SNS_API SetEndpointAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetEndpointAttributes"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>EndpointArn used for <code>SetEndpointAttributes</code> action.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    SetEndpointAttributesRequest& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the endpoint attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>CustomUserData</code> – arbitrary user data
     * to associate with the endpoint. Amazon SNS does not use this data. The data must
     * be in UTF-8 format and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> –
     * flag that enables/disables delivery to the endpoint. Amazon SNS will set this to
     * false when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    SetEndpointAttributesRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    SetEndpointAttributesRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
