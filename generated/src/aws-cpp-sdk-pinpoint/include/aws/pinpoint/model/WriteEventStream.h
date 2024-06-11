/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the Amazon Resource Name (ARN) of an event stream to publish events
   * to and the AWS Identity and Access Management (IAM) role to use when publishing
   * those events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WriteEventStream">AWS
   * API Reference</a></p>
   */
  class WriteEventStream
  {
  public:
    AWS_PINPOINT_API WriteEventStream();
    AWS_PINPOINT_API WriteEventStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API WriteEventStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis data stream or Amazon
     * Kinesis Data Firehose delivery stream that you want to publish event data
     * to.</p> <p>For a Kinesis data stream, the ARN format is:
     * arn:aws:kinesis:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:stream/<replaceable>stream_name</replaceable>

     * </p> <p>For a Kinesis Data Firehose delivery stream, the ARN format is:
     * arn:aws:firehose:<replaceable>region</replaceable>:<replaceable>account-id</replaceable>:deliverystream/<replaceable>stream_name</replaceable>

     *               </p>
     */
    inline const Aws::String& GetDestinationStreamArn() const{ return m_destinationStreamArn; }
    inline bool DestinationStreamArnHasBeenSet() const { return m_destinationStreamArnHasBeenSet; }
    inline void SetDestinationStreamArn(const Aws::String& value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn = value; }
    inline void SetDestinationStreamArn(Aws::String&& value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn = std::move(value); }
    inline void SetDestinationStreamArn(const char* value) { m_destinationStreamArnHasBeenSet = true; m_destinationStreamArn.assign(value); }
    inline WriteEventStream& WithDestinationStreamArn(const Aws::String& value) { SetDestinationStreamArn(value); return *this;}
    inline WriteEventStream& WithDestinationStreamArn(Aws::String&& value) { SetDestinationStreamArn(std::move(value)); return *this;}
    inline WriteEventStream& WithDestinationStreamArn(const char* value) { SetDestinationStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Identity and Access Management (IAM) role that authorizes Amazon
     * Pinpoint to publish event data to the stream in your AWS account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline WriteEventStream& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline WriteEventStream& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline WriteEventStream& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationStreamArn;
    bool m_destinationStreamArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
