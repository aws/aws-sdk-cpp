/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The Amazon Kinesis Data Firehose logging configuration settings for the
   * pipe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/FirehoseLogDestination">AWS
   * API Reference</a></p>
   */
  class FirehoseLogDestination
  {
  public:
    AWS_PIPES_API FirehoseLogDestination();
    AWS_PIPES_API FirehoseLogDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API FirehoseLogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Data Firehose delivery stream
     * to which EventBridge delivers the pipe log records.</p>
     */
    inline const Aws::String& GetDeliveryStreamArn() const{ return m_deliveryStreamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Data Firehose delivery stream
     * to which EventBridge delivers the pipe log records.</p>
     */
    inline bool DeliveryStreamArnHasBeenSet() const { return m_deliveryStreamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Data Firehose delivery stream
     * to which EventBridge delivers the pipe log records.</p>
     */
    inline void SetDeliveryStreamArn(const Aws::String& value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Data Firehose delivery stream
     * to which EventBridge delivers the pipe log records.</p>
     */
    inline void SetDeliveryStreamArn(Aws::String&& value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Data Firehose delivery stream
     * to which EventBridge delivers the pipe log records.</p>
     */
    inline void SetDeliveryStreamArn(const char* value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Data Firehose delivery stream
     * to which EventBridge delivers the pipe log records.</p>
     */
    inline FirehoseLogDestination& WithDeliveryStreamArn(const Aws::String& value) { SetDeliveryStreamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Data Firehose delivery stream
     * to which EventBridge delivers the pipe log records.</p>
     */
    inline FirehoseLogDestination& WithDeliveryStreamArn(Aws::String&& value) { SetDeliveryStreamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Data Firehose delivery stream
     * to which EventBridge delivers the pipe log records.</p>
     */
    inline FirehoseLogDestination& WithDeliveryStreamArn(const char* value) { SetDeliveryStreamArn(value); return *this;}

  private:

    Aws::String m_deliveryStreamArn;
    bool m_deliveryStreamArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
