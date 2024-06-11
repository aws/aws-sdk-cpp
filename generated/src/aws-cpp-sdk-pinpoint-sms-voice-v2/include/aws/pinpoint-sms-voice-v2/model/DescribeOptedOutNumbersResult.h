﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/OptedOutNumberInformation.h>
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
  class DescribeOptedOutNumbersResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeOptedOutNumbersResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeOptedOutNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeOptedOutNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the OptOutList.</p>
     */
    inline const Aws::String& GetOptOutListArn() const{ return m_optOutListArn; }
    inline void SetOptOutListArn(const Aws::String& value) { m_optOutListArn = value; }
    inline void SetOptOutListArn(Aws::String&& value) { m_optOutListArn = std::move(value); }
    inline void SetOptOutListArn(const char* value) { m_optOutListArn.assign(value); }
    inline DescribeOptedOutNumbersResult& WithOptOutListArn(const Aws::String& value) { SetOptOutListArn(value); return *this;}
    inline DescribeOptedOutNumbersResult& WithOptOutListArn(Aws::String&& value) { SetOptOutListArn(std::move(value)); return *this;}
    inline DescribeOptedOutNumbersResult& WithOptOutListArn(const char* value) { SetOptOutListArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OptOutList.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListName = value; }
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListName = std::move(value); }
    inline void SetOptOutListName(const char* value) { m_optOutListName.assign(value); }
    inline DescribeOptedOutNumbersResult& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}
    inline DescribeOptedOutNumbersResult& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}
    inline DescribeOptedOutNumbersResult& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of OptedOutNumbersInformation objects that provide information about
     * the requested OptedOutNumbers.</p>
     */
    inline const Aws::Vector<OptedOutNumberInformation>& GetOptedOutNumbers() const{ return m_optedOutNumbers; }
    inline void SetOptedOutNumbers(const Aws::Vector<OptedOutNumberInformation>& value) { m_optedOutNumbers = value; }
    inline void SetOptedOutNumbers(Aws::Vector<OptedOutNumberInformation>&& value) { m_optedOutNumbers = std::move(value); }
    inline DescribeOptedOutNumbersResult& WithOptedOutNumbers(const Aws::Vector<OptedOutNumberInformation>& value) { SetOptedOutNumbers(value); return *this;}
    inline DescribeOptedOutNumbersResult& WithOptedOutNumbers(Aws::Vector<OptedOutNumberInformation>&& value) { SetOptedOutNumbers(std::move(value)); return *this;}
    inline DescribeOptedOutNumbersResult& AddOptedOutNumbers(const OptedOutNumberInformation& value) { m_optedOutNumbers.push_back(value); return *this; }
    inline DescribeOptedOutNumbersResult& AddOptedOutNumbers(OptedOutNumberInformation&& value) { m_optedOutNumbers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeOptedOutNumbersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeOptedOutNumbersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeOptedOutNumbersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeOptedOutNumbersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeOptedOutNumbersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeOptedOutNumbersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_optOutListArn;

    Aws::String m_optOutListName;

    Aws::Vector<OptedOutNumberInformation> m_optedOutNumbers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
