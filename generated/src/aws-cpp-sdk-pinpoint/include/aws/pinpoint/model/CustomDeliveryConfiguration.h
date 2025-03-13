/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/__EndpointTypesElement.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the delivery configuration settings for sending a campaign or
   * campaign treatment through a custom channel. This object is required if you use
   * the CampaignCustomMessage object to define the message to send for the campaign
   * or campaign treatment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CustomDeliveryConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomDeliveryConfiguration
  {
  public:
    AWS_PINPOINT_API CustomDeliveryConfiguration() = default;
    AWS_PINPOINT_API CustomDeliveryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CustomDeliveryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination to send the campaign or treatment to. This value can be one
     * of the following:</p> <ul><li><p>The name or Amazon Resource Name (ARN) of an
     * AWS Lambda function to invoke to handle delivery of the campaign or
     * treatment.</p></li> <li><p>The URL for a web application or service that
     * supports HTTPS and can receive the message. The URL has to be a full URL,
     * including the HTTPS protocol.</p></li></ul> 
     */
    inline const Aws::String& GetDeliveryUri() const { return m_deliveryUri; }
    inline bool DeliveryUriHasBeenSet() const { return m_deliveryUriHasBeenSet; }
    template<typename DeliveryUriT = Aws::String>
    void SetDeliveryUri(DeliveryUriT&& value) { m_deliveryUriHasBeenSet = true; m_deliveryUri = std::forward<DeliveryUriT>(value); }
    template<typename DeliveryUriT = Aws::String>
    CustomDeliveryConfiguration& WithDeliveryUri(DeliveryUriT&& value) { SetDeliveryUri(std::forward<DeliveryUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of endpoints to send the campaign or treatment to. Each valid value
     * maps to a type of channel that you can associate with an endpoint by using the
     * ChannelType property of an endpoint.</p>
     */
    inline const Aws::Vector<__EndpointTypesElement>& GetEndpointTypes() const { return m_endpointTypes; }
    inline bool EndpointTypesHasBeenSet() const { return m_endpointTypesHasBeenSet; }
    template<typename EndpointTypesT = Aws::Vector<__EndpointTypesElement>>
    void SetEndpointTypes(EndpointTypesT&& value) { m_endpointTypesHasBeenSet = true; m_endpointTypes = std::forward<EndpointTypesT>(value); }
    template<typename EndpointTypesT = Aws::Vector<__EndpointTypesElement>>
    CustomDeliveryConfiguration& WithEndpointTypes(EndpointTypesT&& value) { SetEndpointTypes(std::forward<EndpointTypesT>(value)); return *this;}
    inline CustomDeliveryConfiguration& AddEndpointTypes(__EndpointTypesElement value) { m_endpointTypesHasBeenSet = true; m_endpointTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_deliveryUri;
    bool m_deliveryUriHasBeenSet = false;

    Aws::Vector<__EndpointTypesElement> m_endpointTypes;
    bool m_endpointTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
