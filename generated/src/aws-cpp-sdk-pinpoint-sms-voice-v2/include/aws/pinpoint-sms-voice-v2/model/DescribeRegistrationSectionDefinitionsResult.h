/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationSectionDefinition.h>
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
  class DescribeRegistrationSectionDefinitionsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationSectionDefinitionsResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationSectionDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationSectionDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline const Aws::String& GetRegistrationType() const { return m_registrationType; }
    template<typename RegistrationTypeT = Aws::String>
    void SetRegistrationType(RegistrationTypeT&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::forward<RegistrationTypeT>(value); }
    template<typename RegistrationTypeT = Aws::String>
    DescribeRegistrationSectionDefinitionsResult& WithRegistrationType(RegistrationTypeT&& value) { SetRegistrationType(std::forward<RegistrationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of RegistrationSectionDefinition objects.</p>
     */
    inline const Aws::Vector<RegistrationSectionDefinition>& GetRegistrationSectionDefinitions() const { return m_registrationSectionDefinitions; }
    template<typename RegistrationSectionDefinitionsT = Aws::Vector<RegistrationSectionDefinition>>
    void SetRegistrationSectionDefinitions(RegistrationSectionDefinitionsT&& value) { m_registrationSectionDefinitionsHasBeenSet = true; m_registrationSectionDefinitions = std::forward<RegistrationSectionDefinitionsT>(value); }
    template<typename RegistrationSectionDefinitionsT = Aws::Vector<RegistrationSectionDefinition>>
    DescribeRegistrationSectionDefinitionsResult& WithRegistrationSectionDefinitions(RegistrationSectionDefinitionsT&& value) { SetRegistrationSectionDefinitions(std::forward<RegistrationSectionDefinitionsT>(value)); return *this;}
    template<typename RegistrationSectionDefinitionsT = RegistrationSectionDefinition>
    DescribeRegistrationSectionDefinitionsResult& AddRegistrationSectionDefinitions(RegistrationSectionDefinitionsT&& value) { m_registrationSectionDefinitionsHasBeenSet = true; m_registrationSectionDefinitions.emplace_back(std::forward<RegistrationSectionDefinitionsT>(value)); return *this; }
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
    DescribeRegistrationSectionDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRegistrationSectionDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationType;
    bool m_registrationTypeHasBeenSet = false;

    Aws::Vector<RegistrationSectionDefinition> m_registrationSectionDefinitions;
    bool m_registrationSectionDefinitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
