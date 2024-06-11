﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsKinesisStreamStreamEncryptionDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about an Amazon Kinesis data stream. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsKinesisStreamDetails">AWS
   * API Reference</a></p>
   */
  class AwsKinesisStreamDetails
  {
  public:
    AWS_SECURITYHUB_API AwsKinesisStreamDetails();
    AWS_SECURITYHUB_API AwsKinesisStreamDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsKinesisStreamDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Kinesis stream. If you don't specify a name, CloudFront
     * generates a unique physical ID and uses that ID for the stream name. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsKinesisStreamDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsKinesisStreamDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsKinesisStreamDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis data stream. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AwsKinesisStreamDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AwsKinesisStreamDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AwsKinesisStreamDetails& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When specified, enables or updates server-side encryption using an KMS key
     * for a specified stream. Removing this property from your stack template and
     * updating your stack disables encryption. </p>
     */
    inline const AwsKinesisStreamStreamEncryptionDetails& GetStreamEncryption() const{ return m_streamEncryption; }
    inline bool StreamEncryptionHasBeenSet() const { return m_streamEncryptionHasBeenSet; }
    inline void SetStreamEncryption(const AwsKinesisStreamStreamEncryptionDetails& value) { m_streamEncryptionHasBeenSet = true; m_streamEncryption = value; }
    inline void SetStreamEncryption(AwsKinesisStreamStreamEncryptionDetails&& value) { m_streamEncryptionHasBeenSet = true; m_streamEncryption = std::move(value); }
    inline AwsKinesisStreamDetails& WithStreamEncryption(const AwsKinesisStreamStreamEncryptionDetails& value) { SetStreamEncryption(value); return *this;}
    inline AwsKinesisStreamDetails& WithStreamEncryption(AwsKinesisStreamStreamEncryptionDetails&& value) { SetStreamEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards that the stream uses. </p>
     */
    inline int GetShardCount() const{ return m_shardCount; }
    inline bool ShardCountHasBeenSet() const { return m_shardCountHasBeenSet; }
    inline void SetShardCount(int value) { m_shardCountHasBeenSet = true; m_shardCount = value; }
    inline AwsKinesisStreamDetails& WithShardCount(int value) { SetShardCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours for the data records that are stored in shards to remain
     * accessible. </p>
     */
    inline int GetRetentionPeriodHours() const{ return m_retentionPeriodHours; }
    inline bool RetentionPeriodHoursHasBeenSet() const { return m_retentionPeriodHoursHasBeenSet; }
    inline void SetRetentionPeriodHours(int value) { m_retentionPeriodHoursHasBeenSet = true; m_retentionPeriodHours = value; }
    inline AwsKinesisStreamDetails& WithRetentionPeriodHours(int value) { SetRetentionPeriodHours(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AwsKinesisStreamStreamEncryptionDetails m_streamEncryption;
    bool m_streamEncryptionHasBeenSet = false;

    int m_shardCount;
    bool m_shardCountHasBeenSet = false;

    int m_retentionPeriodHours;
    bool m_retentionPeriodHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
