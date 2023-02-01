/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>

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
namespace PinpointSMSVoice
{
namespace Model
{
  /**
   * An empty object that indicates that the configuration set was successfully
   * created.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/CreateConfigurationSetResponse">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationSetResult
  {
  public:
    AWS_PINPOINTSMSVOICE_API CreateConfigurationSetResult();
    AWS_PINPOINTSMSVOICE_API CreateConfigurationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICE_API CreateConfigurationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
