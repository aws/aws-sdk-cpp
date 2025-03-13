/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/AccountAttribute.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class DescribeAccountAttributesResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountAttributesResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of AccountAttributes objects.</p>
     */
    inline const Aws::Vector<AccountAttribute>& GetAccountAttributes() const { return m_accountAttributes; }
    template<typename AccountAttributesT = Aws::Vector<AccountAttribute>>
    void SetAccountAttributes(AccountAttributesT&& value) { m_accountAttributesHasBeenSet = true; m_accountAttributes = std::forward<AccountAttributesT>(value); }
    template<typename AccountAttributesT = Aws::Vector<AccountAttribute>>
    DescribeAccountAttributesResult& WithAccountAttributes(AccountAttributesT&& value) { SetAccountAttributes(std::forward<AccountAttributesT>(value)); return *this;}
    template<typename AccountAttributesT = AccountAttribute>
    DescribeAccountAttributesResult& AddAccountAttributes(AccountAttributesT&& value) { m_accountAttributesHasBeenSet = true; m_accountAttributes.emplace_back(std::forward<AccountAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAccountAttributesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountAttributesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountAttribute> m_accountAttributes;
    bool m_accountAttributesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
