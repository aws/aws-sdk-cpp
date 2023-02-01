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
   * An empty object that indicates that the event destination was deleted
   * successfully.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/DeleteConfigurationSetEventDestinationResponse">AWS
   * API Reference</a></p>
   */
  class DeleteConfigurationSetEventDestinationResult
  {
  public:
    AWS_PINPOINTSMSVOICE_API DeleteConfigurationSetEventDestinationResult();
    AWS_PINPOINTSMSVOICE_API DeleteConfigurationSetEventDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICE_API DeleteConfigurationSetEventDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
