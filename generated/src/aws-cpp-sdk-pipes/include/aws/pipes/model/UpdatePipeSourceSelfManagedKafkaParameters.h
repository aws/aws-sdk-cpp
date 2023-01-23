/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/SelfManagedKafkaAccessConfigurationCredentials.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/SelfManagedKafkaAccessConfigurationVpc.h>
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
   * <p>The parameters for using a self-managed Apache Kafka stream as a
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/UpdatePipeSourceSelfManagedKafkaParameters">AWS
   * API Reference</a></p>
   */
  class UpdatePipeSourceSelfManagedKafkaParameters
  {
  public:
    AWS_PIPES_API UpdatePipeSourceSelfManagedKafkaParameters();
    AWS_PIPES_API UpdatePipeSourceSelfManagedKafkaParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API UpdatePipeSourceSelfManagedKafkaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }

    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline UpdatePipeSourceSelfManagedKafkaParameters& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline const SelfManagedKafkaAccessConfigurationCredentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline void SetCredentials(const SelfManagedKafkaAccessConfigurationCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline void SetCredentials(SelfManagedKafkaAccessConfigurationCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline UpdatePipeSourceSelfManagedKafkaParameters& WithCredentials(const SelfManagedKafkaAccessConfigurationCredentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline UpdatePipeSourceSelfManagedKafkaParameters& WithCredentials(SelfManagedKafkaAccessConfigurationCredentials&& value) { SetCredentials(std::move(value)); return *this;}


    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }

    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }

    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }

    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline UpdatePipeSourceSelfManagedKafkaParameters& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}


    /**
     * <p>The ARN of the Secrets Manager secret used for certification.</p>
     */
    inline const Aws::String& GetServerRootCaCertificate() const{ return m_serverRootCaCertificate; }

    /**
     * <p>The ARN of the Secrets Manager secret used for certification.</p>
     */
    inline bool ServerRootCaCertificateHasBeenSet() const { return m_serverRootCaCertificateHasBeenSet; }

    /**
     * <p>The ARN of the Secrets Manager secret used for certification.</p>
     */
    inline void SetServerRootCaCertificate(const Aws::String& value) { m_serverRootCaCertificateHasBeenSet = true; m_serverRootCaCertificate = value; }

    /**
     * <p>The ARN of the Secrets Manager secret used for certification.</p>
     */
    inline void SetServerRootCaCertificate(Aws::String&& value) { m_serverRootCaCertificateHasBeenSet = true; m_serverRootCaCertificate = std::move(value); }

    /**
     * <p>The ARN of the Secrets Manager secret used for certification.</p>
     */
    inline void SetServerRootCaCertificate(const char* value) { m_serverRootCaCertificateHasBeenSet = true; m_serverRootCaCertificate.assign(value); }

    /**
     * <p>The ARN of the Secrets Manager secret used for certification.</p>
     */
    inline UpdatePipeSourceSelfManagedKafkaParameters& WithServerRootCaCertificate(const Aws::String& value) { SetServerRootCaCertificate(value); return *this;}

    /**
     * <p>The ARN of the Secrets Manager secret used for certification.</p>
     */
    inline UpdatePipeSourceSelfManagedKafkaParameters& WithServerRootCaCertificate(Aws::String&& value) { SetServerRootCaCertificate(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Secrets Manager secret used for certification.</p>
     */
    inline UpdatePipeSourceSelfManagedKafkaParameters& WithServerRootCaCertificate(const char* value) { SetServerRootCaCertificate(value); return *this;}


    /**
     * <p>This structure specifies the VPC subnets and security groups for the stream,
     * and whether a public IP address is to be used.</p>
     */
    inline const SelfManagedKafkaAccessConfigurationVpc& GetVpc() const{ return m_vpc; }

    /**
     * <p>This structure specifies the VPC subnets and security groups for the stream,
     * and whether a public IP address is to be used.</p>
     */
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }

    /**
     * <p>This structure specifies the VPC subnets and security groups for the stream,
     * and whether a public IP address is to be used.</p>
     */
    inline void SetVpc(const SelfManagedKafkaAccessConfigurationVpc& value) { m_vpcHasBeenSet = true; m_vpc = value; }

    /**
     * <p>This structure specifies the VPC subnets and security groups for the stream,
     * and whether a public IP address is to be used.</p>
     */
    inline void SetVpc(SelfManagedKafkaAccessConfigurationVpc&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }

    /**
     * <p>This structure specifies the VPC subnets and security groups for the stream,
     * and whether a public IP address is to be used.</p>
     */
    inline UpdatePipeSourceSelfManagedKafkaParameters& WithVpc(const SelfManagedKafkaAccessConfigurationVpc& value) { SetVpc(value); return *this;}

    /**
     * <p>This structure specifies the VPC subnets and security groups for the stream,
     * and whether a public IP address is to be used.</p>
     */
    inline UpdatePipeSourceSelfManagedKafkaParameters& WithVpc(SelfManagedKafkaAccessConfigurationVpc&& value) { SetVpc(std::move(value)); return *this;}

  private:

    int m_batchSize;
    bool m_batchSizeHasBeenSet = false;

    SelfManagedKafkaAccessConfigurationCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    int m_maximumBatchingWindowInSeconds;
    bool m_maximumBatchingWindowInSecondsHasBeenSet = false;

    Aws::String m_serverRootCaCertificate;
    bool m_serverRootCaCertificateHasBeenSet = false;

    SelfManagedKafkaAccessConfigurationVpc m_vpc;
    bool m_vpcHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
