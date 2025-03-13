/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
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
   * <p>Response for ConfirmSubscriptions action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ConfirmSubscriptionResponse">AWS
   * API Reference</a></p>
   */
  class ConfirmSubscriptionResult
  {
  public:
    AWS_SNS_API ConfirmSubscriptionResult() = default;
    AWS_SNS_API ConfirmSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API ConfirmSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ARN of the created subscription.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const { return m_subscriptionArn; }
    template<typename SubscriptionArnT = Aws::String>
    void SetSubscriptionArn(SubscriptionArnT&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::forward<SubscriptionArnT>(value); }
    template<typename SubscriptionArnT = Aws::String>
    ConfirmSubscriptionResult& WithSubscriptionArn(SubscriptionArnT&& value) { SetSubscriptionArn(std::forward<SubscriptionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ConfirmSubscriptionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
