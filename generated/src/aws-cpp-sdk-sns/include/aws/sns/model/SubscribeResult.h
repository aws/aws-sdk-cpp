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
   * <p>Response for Subscribe action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SubscribeResponse">AWS
   * API Reference</a></p>
   */
  class SubscribeResult
  {
  public:
    AWS_SNS_API SubscribeResult();
    AWS_SNS_API SubscribeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API SubscribeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ARN of the subscription if it is confirmed, or the string "pending
     * confirmation" if the subscription requires confirmation. However, if the API
     * request parameter <code>ReturnSubscriptionArn</code> is true, then the value is
     * always the subscription ARN, even if the subscription requires confirmation.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }

    /**
     * <p>The ARN of the subscription if it is confirmed, or the string "pending
     * confirmation" if the subscription requires confirmation. However, if the API
     * request parameter <code>ReturnSubscriptionArn</code> is true, then the value is
     * always the subscription ARN, even if the subscription requires confirmation.</p>
     */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArn = value; }

    /**
     * <p>The ARN of the subscription if it is confirmed, or the string "pending
     * confirmation" if the subscription requires confirmation. However, if the API
     * request parameter <code>ReturnSubscriptionArn</code> is true, then the value is
     * always the subscription ARN, even if the subscription requires confirmation.</p>
     */
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArn = std::move(value); }

    /**
     * <p>The ARN of the subscription if it is confirmed, or the string "pending
     * confirmation" if the subscription requires confirmation. However, if the API
     * request parameter <code>ReturnSubscriptionArn</code> is true, then the value is
     * always the subscription ARN, even if the subscription requires confirmation.</p>
     */
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArn.assign(value); }

    /**
     * <p>The ARN of the subscription if it is confirmed, or the string "pending
     * confirmation" if the subscription requires confirmation. However, if the API
     * request parameter <code>ReturnSubscriptionArn</code> is true, then the value is
     * always the subscription ARN, even if the subscription requires confirmation.</p>
     */
    inline SubscribeResult& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of the subscription if it is confirmed, or the string "pending
     * confirmation" if the subscription requires confirmation. However, if the API
     * request parameter <code>ReturnSubscriptionArn</code> is true, then the value is
     * always the subscription ARN, even if the subscription requires confirmation.</p>
     */
    inline SubscribeResult& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the subscription if it is confirmed, or the string "pending
     * confirmation" if the subscription requires confirmation. However, if the API
     * request parameter <code>ReturnSubscriptionArn</code> is true, then the value is
     * always the subscription ARN, even if the subscription requires confirmation.</p>
     */
    inline SubscribeResult& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline SubscribeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SubscribeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_subscriptionArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
