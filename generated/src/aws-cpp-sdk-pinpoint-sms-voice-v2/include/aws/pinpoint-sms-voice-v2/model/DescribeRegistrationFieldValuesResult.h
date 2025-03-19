/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationFieldValueInformation.h>
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
  class DescribeRegistrationFieldValuesResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldValuesResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldValuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldValuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline const Aws::String& GetRegistrationArn() const { return m_registrationArn; }
    template<typename RegistrationArnT = Aws::String>
    void SetRegistrationArn(RegistrationArnT&& value) { m_registrationArnHasBeenSet = true; m_registrationArn = std::forward<RegistrationArnT>(value); }
    template<typename RegistrationArnT = Aws::String>
    DescribeRegistrationFieldValuesResult& WithRegistrationArn(RegistrationArnT&& value) { SetRegistrationArn(std::forward<RegistrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    DescribeRegistrationFieldValuesResult& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the registration.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline DescribeRegistrationFieldValuesResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of RegistrationFieldValues objects that contain the values for the
     * requested registration. </p>
     */
    inline const Aws::Vector<RegistrationFieldValueInformation>& GetRegistrationFieldValues() const { return m_registrationFieldValues; }
    template<typename RegistrationFieldValuesT = Aws::Vector<RegistrationFieldValueInformation>>
    void SetRegistrationFieldValues(RegistrationFieldValuesT&& value) { m_registrationFieldValuesHasBeenSet = true; m_registrationFieldValues = std::forward<RegistrationFieldValuesT>(value); }
    template<typename RegistrationFieldValuesT = Aws::Vector<RegistrationFieldValueInformation>>
    DescribeRegistrationFieldValuesResult& WithRegistrationFieldValues(RegistrationFieldValuesT&& value) { SetRegistrationFieldValues(std::forward<RegistrationFieldValuesT>(value)); return *this;}
    template<typename RegistrationFieldValuesT = RegistrationFieldValueInformation>
    DescribeRegistrationFieldValuesResult& AddRegistrationFieldValues(RegistrationFieldValuesT&& value) { m_registrationFieldValuesHasBeenSet = true; m_registrationFieldValues.emplace_back(std::forward<RegistrationFieldValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRegistrationFieldValuesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRegistrationFieldValuesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationArn;
    bool m_registrationArnHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    Aws::Vector<RegistrationFieldValueInformation> m_registrationFieldValues;
    bool m_registrationFieldValuesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
