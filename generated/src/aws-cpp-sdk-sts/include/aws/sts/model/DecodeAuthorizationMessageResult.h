/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/model/ResponseMetadata.h>
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
namespace STS
{
namespace Model
{
  /**
   * <p>A document that contains additional information about the authorization
   * status of a request from an encoded message that is returned in response to an
   * Amazon Web Services request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sts-2011-06-15/DecodeAuthorizationMessageResponse">AWS
   * API Reference</a></p>
   */
  class DecodeAuthorizationMessageResult
  {
  public:
    AWS_STS_API DecodeAuthorizationMessageResult() = default;
    AWS_STS_API DecodeAuthorizationMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_STS_API DecodeAuthorizationMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The API returns a response with the decoded message.</p>
     */
    inline const Aws::String& GetDecodedMessage() const { return m_decodedMessage; }
    template<typename DecodedMessageT = Aws::String>
    void SetDecodedMessage(DecodedMessageT&& value) { m_decodedMessageHasBeenSet = true; m_decodedMessage = std::forward<DecodedMessageT>(value); }
    template<typename DecodedMessageT = Aws::String>
    DecodeAuthorizationMessageResult& WithDecodedMessage(DecodedMessageT&& value) { SetDecodedMessage(std::forward<DecodedMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DecodeAuthorizationMessageResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_decodedMessage;
    bool m_decodedMessageHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
