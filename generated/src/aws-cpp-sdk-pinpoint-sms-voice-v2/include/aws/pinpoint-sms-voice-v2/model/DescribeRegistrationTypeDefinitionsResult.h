/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationTypeDefinition.h>
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
  class DescribeRegistrationTypeDefinitionsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationTypeDefinitionsResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationTypeDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeRegistrationTypeDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of registration form. The list of <b>RegistrationTypes</b> can be
     * found using the <a>DescribeRegistrationTypeDefinitions</a> action.</p>
     */
    inline const Aws::Vector<RegistrationTypeDefinition>& GetRegistrationTypeDefinitions() const { return m_registrationTypeDefinitions; }
    template<typename RegistrationTypeDefinitionsT = Aws::Vector<RegistrationTypeDefinition>>
    void SetRegistrationTypeDefinitions(RegistrationTypeDefinitionsT&& value) { m_registrationTypeDefinitionsHasBeenSet = true; m_registrationTypeDefinitions = std::forward<RegistrationTypeDefinitionsT>(value); }
    template<typename RegistrationTypeDefinitionsT = Aws::Vector<RegistrationTypeDefinition>>
    DescribeRegistrationTypeDefinitionsResult& WithRegistrationTypeDefinitions(RegistrationTypeDefinitionsT&& value) { SetRegistrationTypeDefinitions(std::forward<RegistrationTypeDefinitionsT>(value)); return *this;}
    template<typename RegistrationTypeDefinitionsT = RegistrationTypeDefinition>
    DescribeRegistrationTypeDefinitionsResult& AddRegistrationTypeDefinitions(RegistrationTypeDefinitionsT&& value) { m_registrationTypeDefinitionsHasBeenSet = true; m_registrationTypeDefinitions.emplace_back(std::forward<RegistrationTypeDefinitionsT>(value)); return *this; }
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
    DescribeRegistrationTypeDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRegistrationTypeDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RegistrationTypeDefinition> m_registrationTypeDefinitions;
    bool m_registrationTypeDefinitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
