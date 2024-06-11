﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Contains the delivery stream Amazon Resource Name (ARN), and the ARN of the
   * Identity and Access Management (IAM) role associated with a Kinesis Data
   * Firehose event destination.</p> <p>Event destinations, such as Kinesis Data
   * Firehose, are associated with configuration sets, which enable you to publish
   * message sending events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/KinesisFirehoseDestination">AWS
   * API Reference</a></p>
   */
  class KinesisFirehoseDestination
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API KinesisFirehoseDestination();
    AWS_PINPOINTSMSVOICEV2_API KinesisFirehoseDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API KinesisFirehoseDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of an Identity and Access Management role that is able to write event
     * data to an Amazon Kinesis Data Firehose destination.</p>
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

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the delivery stream.</p>
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
  private:

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_deliveryStreamArn;
    bool m_deliveryStreamArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
