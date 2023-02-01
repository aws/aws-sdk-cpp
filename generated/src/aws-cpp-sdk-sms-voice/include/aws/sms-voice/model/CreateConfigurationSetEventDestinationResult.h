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
   * An empty object that indicates that the event destination was created
   * successfully.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/CreateConfigurationSetEventDestinationResponse">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationSetEventDestinationResult
  {
  public:
    AWS_PINPOINTSMSVOICE_API CreateConfigurationSetEventDestinationResult();
    AWS_PINPOINTSMSVOICE_API CreateConfigurationSetEventDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICE_API CreateConfigurationSetEventDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
