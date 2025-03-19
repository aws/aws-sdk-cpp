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
   * <p>Information about logging for the S3 bucket</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketLoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketLoggingConfiguration
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketLoggingConfiguration() = default;
    AWS_SECURITYHUB_API AwsS3BucketLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 bucket where log files for the S3 bucket are stored.</p>
     */
    inline const Aws::String& GetDestinationBucketName() const { return m_destinationBucketName; }
    inline bool DestinationBucketNameHasBeenSet() const { return m_destinationBucketNameHasBeenSet; }
    template<typename DestinationBucketNameT = Aws::String>
    void SetDestinationBucketName(DestinationBucketNameT&& value) { m_destinationBucketNameHasBeenSet = true; m_destinationBucketName = std::forward<DestinationBucketNameT>(value); }
    template<typename DestinationBucketNameT = Aws::String>
    AwsS3BucketLoggingConfiguration& WithDestinationBucketName(DestinationBucketNameT&& value) { SetDestinationBucketName(std::forward<DestinationBucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix added to log files for the S3 bucket.</p>
     */
    inline const Aws::String& GetLogFilePrefix() const { return m_logFilePrefix; }
    inline bool LogFilePrefixHasBeenSet() const { return m_logFilePrefixHasBeenSet; }
    template<typename LogFilePrefixT = Aws::String>
    void SetLogFilePrefix(LogFilePrefixT&& value) { m_logFilePrefixHasBeenSet = true; m_logFilePrefix = std::forward<LogFilePrefixT>(value); }
    template<typename LogFilePrefixT = Aws::String>
    AwsS3BucketLoggingConfiguration& WithLogFilePrefix(LogFilePrefixT&& value) { SetLogFilePrefix(std::forward<LogFilePrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationBucketName;
    bool m_destinationBucketNameHasBeenSet = false;

    Aws::String m_logFilePrefix;
    bool m_logFilePrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
