/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * An object that contains information about an event destination that sends data
   * to Amazon Kinesis Data Firehose.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/KinesisFirehoseDestination">AWS
   * API Reference</a></p>
   */
  class KinesisFirehoseDestination
  {
  public:
    AWS_PINPOINTSMSVOICE_API KinesisFirehoseDestination();
    AWS_PINPOINTSMSVOICE_API KinesisFirehoseDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICE_API KinesisFirehoseDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Amazon Resource Name (ARN) of an IAM role that can write data to an Amazon
     * Kinesis Data Firehose stream.
     */
    inline const Aws::String& GetDeliveryStreamArn() const{ return m_deliveryStreamArn; }
    inline bool DeliveryStreamArnHasBeenSet() const { return m_deliveryStreamArnHasBeenSet; }
    inline void SetDeliveryStreamArn(const Aws::String& value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn = value; }
    inline void SetDeliveryStreamArn(Aws::String&& value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn = std::move(value); }
    inline void SetDeliveryStreamArn(const char* value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn.assign(value); }
    inline KinesisFirehoseDestination& WithDeliveryStreamArn(const Aws::String& value) { SetDeliveryStreamArn(value); return *this;}
    inline KinesisFirehoseDestination& WithDeliveryStreamArn(Aws::String&& value) { SetDeliveryStreamArn(std::move(value)); return *this;}
    inline KinesisFirehoseDestination& WithDeliveryStreamArn(const char* value) { SetDeliveryStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose destination
     * that you want to use in the event destination.
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline KinesisFirehoseDestination& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline KinesisFirehoseDestination& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline KinesisFirehoseDestination& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamArn;
    bool m_deliveryStreamArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
