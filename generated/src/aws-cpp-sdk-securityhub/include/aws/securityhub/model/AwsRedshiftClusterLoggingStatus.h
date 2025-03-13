/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about the logging status of the cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterLoggingStatus">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterLoggingStatus
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterLoggingStatus() = default;
    AWS_SECURITYHUB_API AwsRedshiftClusterLoggingStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterLoggingStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    AwsRedshiftClusterLoggingStatus& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message indicating that the logs failed to be delivered.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const { return m_lastFailureMessage; }
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }
    template<typename LastFailureMessageT = Aws::String>
    void SetLastFailureMessage(LastFailureMessageT&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::forward<LastFailureMessageT>(value); }
    template<typename LastFailureMessageT = Aws::String>
    AwsRedshiftClusterLoggingStatus& WithLastFailureMessage(LastFailureMessageT&& value) { SetLastFailureMessage(std::forward<LastFailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time when logs failed to be delivered.</p> <p>For more information
     * about the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastFailureTime() const { return m_lastFailureTime; }
    inline bool LastFailureTimeHasBeenSet() const { return m_lastFailureTimeHasBeenSet; }
    template<typename LastFailureTimeT = Aws::String>
    void SetLastFailureTime(LastFailureTimeT&& value) { m_lastFailureTimeHasBeenSet = true; m_lastFailureTime = std::forward<LastFailureTimeT>(value); }
    template<typename LastFailureTimeT = Aws::String>
    AwsRedshiftClusterLoggingStatus& WithLastFailureTime(LastFailureTimeT&& value) { SetLastFailureTime(std::forward<LastFailureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that logs were delivered successfully.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastSuccessfulDeliveryTime() const { return m_lastSuccessfulDeliveryTime; }
    inline bool LastSuccessfulDeliveryTimeHasBeenSet() const { return m_lastSuccessfulDeliveryTimeHasBeenSet; }
    template<typename LastSuccessfulDeliveryTimeT = Aws::String>
    void SetLastSuccessfulDeliveryTime(LastSuccessfulDeliveryTimeT&& value) { m_lastSuccessfulDeliveryTimeHasBeenSet = true; m_lastSuccessfulDeliveryTime = std::forward<LastSuccessfulDeliveryTimeT>(value); }
    template<typename LastSuccessfulDeliveryTimeT = Aws::String>
    AwsRedshiftClusterLoggingStatus& WithLastSuccessfulDeliveryTime(LastSuccessfulDeliveryTimeT&& value) { SetLastSuccessfulDeliveryTime(std::forward<LastSuccessfulDeliveryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline bool GetLoggingEnabled() const { return m_loggingEnabled; }
    inline bool LoggingEnabledHasBeenSet() const { return m_loggingEnabledHasBeenSet; }
    inline void SetLoggingEnabled(bool value) { m_loggingEnabledHasBeenSet = true; m_loggingEnabled = value; }
    inline AwsRedshiftClusterLoggingStatus& WithLoggingEnabled(bool value) { SetLoggingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the prefix applied to the log file names.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
    template<typename S3KeyPrefixT = Aws::String>
    void SetS3KeyPrefix(S3KeyPrefixT&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value); }
    template<typename S3KeyPrefixT = Aws::String>
    AwsRedshiftClusterLoggingStatus& WithS3KeyPrefix(S3KeyPrefixT&& value) { SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;

    Aws::String m_lastFailureTime;
    bool m_lastFailureTimeHasBeenSet = false;

    Aws::String m_lastSuccessfulDeliveryTime;
    bool m_lastSuccessfulDeliveryTimeHasBeenSet = false;

    bool m_loggingEnabled{false};
    bool m_loggingEnabledHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
