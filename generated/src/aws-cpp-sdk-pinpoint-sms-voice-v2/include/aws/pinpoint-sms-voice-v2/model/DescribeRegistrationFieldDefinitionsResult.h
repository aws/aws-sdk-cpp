/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationFieldDefinition.h>
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
  class DescribeRegistrationFieldDefinitionsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldDefinitionsResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationFieldDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline const Aws::String& GetRegistrationType() const { return m_registrationType; }
    template<typename RegistrationTypeT = Aws::String>
    void SetRegistrationType(RegistrationTypeT&& value) { m_registrationTypeHasBeenSet = true; m_registrationType = std::forward<RegistrationTypeT>(value); }
    template<typename RegistrationTypeT = Aws::String>
    DescribeRegistrationFieldDefinitionsResult& WithRegistrationType(RegistrationTypeT&& value) { SetRegistrationType(std::forward<RegistrationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of RegistrationFieldDefinitions objects that contain the details for
     * the requested fields. </p>
     */
    inline const Aws::Vector<RegistrationFieldDefinition>& GetRegistrationFieldDefinitions() const { return m_registrationFieldDefinitions; }
    template<typename RegistrationFieldDefinitionsT = Aws::Vector<RegistrationFieldDefinition>>
    void SetRegistrationFieldDefinitions(RegistrationFieldDefinitionsT&& value) { m_registrationFieldDefinitionsHasBeenSet = true; m_registrationFieldDefinitions = std::forward<RegistrationFieldDefinitionsT>(value); }
    template<typename RegistrationFieldDefinitionsT = Aws::Vector<RegistrationFieldDefinition>>
    DescribeRegistrationFieldDefinitionsResult& WithRegistrationFieldDefinitions(RegistrationFieldDefinitionsT&& value) { SetRegistrationFieldDefinitions(std::forward<RegistrationFieldDefinitionsT>(value)); return *this;}
    template<typename RegistrationFieldDefinitionsT = RegistrationFieldDefinition>
    DescribeRegistrationFieldDefinitionsResult& AddRegistrationFieldDefinitions(RegistrationFieldDefinitionsT&& value) { m_registrationFieldDefinitionsHasBeenSet = true; m_registrationFieldDefinitions.emplace_back(std::forward<RegistrationFieldDefinitionsT>(value)); return *this; }
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
    DescribeRegistrationFieldDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRegistrationFieldDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationType;
    bool m_registrationTypeHasBeenSet = false;

    Aws::Vector<RegistrationFieldDefinition> m_registrationFieldDefinitions;
    bool m_registrationFieldDefinitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
