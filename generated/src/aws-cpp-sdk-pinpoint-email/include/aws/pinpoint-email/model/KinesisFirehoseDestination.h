/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
   * events. You can use Amazon Kinesis Data Firehose to stream data to other
   * services, such as Amazon S3 and Amazon Redshift.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/KinesisFirehoseDestination">AWS
   * API Reference</a></p>
   */
  class KinesisFirehoseDestination
  {
  public:
    AWS_PINPOINTEMAIL_API KinesisFirehoseDestination() = default;
    AWS_PINPOINTEMAIL_API KinesisFirehoseDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API KinesisFirehoseDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Pinpoint uses when
     * sending email events to the Amazon Kinesis Data Firehose stream.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    KinesisFirehoseDestination& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose stream
     * that Amazon Pinpoint sends email events to.</p>
     */
    inline const Aws::String& GetDeliveryStreamArn() const { return m_deliveryStreamArn; }
    inline bool DeliveryStreamArnHasBeenSet() const { return m_deliveryStreamArnHasBeenSet; }
    template<typename DeliveryStreamArnT = Aws::String>
    void SetDeliveryStreamArn(DeliveryStreamArnT&& value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn = std::forward<DeliveryStreamArnT>(value); }
    template<typename DeliveryStreamArnT = Aws::String>
    KinesisFirehoseDestination& WithDeliveryStreamArn(DeliveryStreamArnT&& value) { SetDeliveryStreamArn(std::forward<DeliveryStreamArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_deliveryStreamArn;
    bool m_deliveryStreamArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
