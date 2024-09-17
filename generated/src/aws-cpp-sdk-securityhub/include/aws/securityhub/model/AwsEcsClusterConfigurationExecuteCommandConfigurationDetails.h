/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails.h>
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
   * <p>Contains the run command configuration for the cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsClusterConfigurationExecuteCommandConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsClusterConfigurationExecuteCommandConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationExecuteCommandConfigurationDetails();
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationExecuteCommandConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsClusterConfigurationExecuteCommandConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the KMS key that is used to encrypt the data between the
     * local client and the container.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log configuration for the results of the run command actions. Required if
     * <code>Logging</code> is <code>NONE</code>.</p>
     */
    inline const AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationDetails& WithLogConfiguration(const AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails& value) { SetLogConfiguration(value); return *this;}
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationDetails& WithLogConfiguration(AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log setting to use for redirecting logs for run command results.</p>
     */
    inline const Aws::String& GetLogging() const{ return m_logging; }
    inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
    inline void SetLogging(const Aws::String& value) { m_loggingHasBeenSet = true; m_logging = value; }
    inline void SetLogging(Aws::String&& value) { m_loggingHasBeenSet = true; m_logging = std::move(value); }
    inline void SetLogging(const char* value) { m_loggingHasBeenSet = true; m_logging.assign(value); }
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationDetails& WithLogging(const Aws::String& value) { SetLogging(value); return *this;}
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationDetails& WithLogging(Aws::String&& value) { SetLogging(std::move(value)); return *this;}
    inline AwsEcsClusterConfigurationExecuteCommandConfigurationDetails& WithLogging(const char* value) { SetLogging(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    AwsEcsClusterConfigurationExecuteCommandConfigurationLogConfigurationDetails m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::String m_logging;
    bool m_loggingHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
