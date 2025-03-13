/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /**
   * <p>Response from <code>GetEndpointAttributes</code> of the
   * <code>EndpointArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetEndpointAttributesResponse">AWS
   * API Reference</a></p>
   */
  class GetEndpointAttributesResult
  {
  public:
    AWS_SNS_API GetEndpointAttributesResult() = default;
    AWS_SNS_API GetEndpointAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API GetEndpointAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Attributes include the following:</p> <ul> <li> <p>
     * <code>CustomUserData</code> – arbitrary user data to associate with the
     * endpoint. Amazon SNS does not use this data. The data must be in UTF-8 format
     * and less than 2KB.</p> </li> <li> <p> <code>Enabled</code> – flag that
     * enables/disables delivery to the endpoint. Amazon SNS will set this to false
     * when a notification service indicates to Amazon SNS that the endpoint is
     * invalid. Users can set it back to true, typically after updating Token.</p>
     * </li> <li> <p> <code>Token</code> – device token, also referred to as a
     * registration id, for an app and mobile device. This is returned from the
     * notification service when an app and mobile device are registered with the
     * notification service.</p>  <p>The device token for the iOS platform is
     * returned in lowercase.</p>  </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    GetEndpointAttributesResult& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    GetEndpointAttributesResult& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetEndpointAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
