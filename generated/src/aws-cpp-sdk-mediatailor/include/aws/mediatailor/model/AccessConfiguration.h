/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/AccessType.h>
#include <aws/mediatailor/model/SecretsManagerAccessTokenConfiguration.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Access configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AccessConfiguration">AWS
   * API Reference</a></p>
   */
  class AccessConfiguration
  {
  public:
    AWS_MEDIATAILOR_API AccessConfiguration();
    AWS_MEDIATAILOR_API AccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API AccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of authentication used to access content from
     * <code>HttpConfiguration::BaseUrl</code> on your source location. Accepted value:
     * <code>S3_SIGV4</code>.</p> <p> <code>S3_SIGV4</code> - AWS Signature Version 4
     * authentication for Amazon S3 hosted virtual-style access. If your source
     * location base URL is an Amazon S3 bucket, MediaTailor can use AWS Signature
     * Version 4 (SigV4) authentication to access the bucket where your source content
     * is stored. Your MediaTailor source location baseURL must follow the S3 virtual
     * hosted-style request URL format. For example,
     * https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you can use
     * <code>S3_SIGV4</code>, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline const AccessType& GetAccessType() const{ return m_accessType; }

    /**
     * <p>The type of authentication used to access content from
     * <code>HttpConfiguration::BaseUrl</code> on your source location. Accepted value:
     * <code>S3_SIGV4</code>.</p> <p> <code>S3_SIGV4</code> - AWS Signature Version 4
     * authentication for Amazon S3 hosted virtual-style access. If your source
     * location base URL is an Amazon S3 bucket, MediaTailor can use AWS Signature
     * Version 4 (SigV4) authentication to access the bucket where your source content
     * is stored. Your MediaTailor source location baseURL must follow the S3 virtual
     * hosted-style request URL format. For example,
     * https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you can use
     * <code>S3_SIGV4</code>, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }

    /**
     * <p>The type of authentication used to access content from
     * <code>HttpConfiguration::BaseUrl</code> on your source location. Accepted value:
     * <code>S3_SIGV4</code>.</p> <p> <code>S3_SIGV4</code> - AWS Signature Version 4
     * authentication for Amazon S3 hosted virtual-style access. If your source
     * location base URL is an Amazon S3 bucket, MediaTailor can use AWS Signature
     * Version 4 (SigV4) authentication to access the bucket where your source content
     * is stored. Your MediaTailor source location baseURL must follow the S3 virtual
     * hosted-style request URL format. For example,
     * https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you can use
     * <code>S3_SIGV4</code>, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline void SetAccessType(const AccessType& value) { m_accessTypeHasBeenSet = true; m_accessType = value; }

    /**
     * <p>The type of authentication used to access content from
     * <code>HttpConfiguration::BaseUrl</code> on your source location. Accepted value:
     * <code>S3_SIGV4</code>.</p> <p> <code>S3_SIGV4</code> - AWS Signature Version 4
     * authentication for Amazon S3 hosted virtual-style access. If your source
     * location base URL is an Amazon S3 bucket, MediaTailor can use AWS Signature
     * Version 4 (SigV4) authentication to access the bucket where your source content
     * is stored. Your MediaTailor source location baseURL must follow the S3 virtual
     * hosted-style request URL format. For example,
     * https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you can use
     * <code>S3_SIGV4</code>, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline void SetAccessType(AccessType&& value) { m_accessTypeHasBeenSet = true; m_accessType = std::move(value); }

    /**
     * <p>The type of authentication used to access content from
     * <code>HttpConfiguration::BaseUrl</code> on your source location. Accepted value:
     * <code>S3_SIGV4</code>.</p> <p> <code>S3_SIGV4</code> - AWS Signature Version 4
     * authentication for Amazon S3 hosted virtual-style access. If your source
     * location base URL is an Amazon S3 bucket, MediaTailor can use AWS Signature
     * Version 4 (SigV4) authentication to access the bucket where your source content
     * is stored. Your MediaTailor source location baseURL must follow the S3 virtual
     * hosted-style request URL format. For example,
     * https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you can use
     * <code>S3_SIGV4</code>, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline AccessConfiguration& WithAccessType(const AccessType& value) { SetAccessType(value); return *this;}

    /**
     * <p>The type of authentication used to access content from
     * <code>HttpConfiguration::BaseUrl</code> on your source location. Accepted value:
     * <code>S3_SIGV4</code>.</p> <p> <code>S3_SIGV4</code> - AWS Signature Version 4
     * authentication for Amazon S3 hosted virtual-style access. If your source
     * location base URL is an Amazon S3 bucket, MediaTailor can use AWS Signature
     * Version 4 (SigV4) authentication to access the bucket where your source content
     * is stored. Your MediaTailor source location baseURL must follow the S3 virtual
     * hosted-style request URL format. For example,
     * https://bucket-name.s3.Region.amazonaws.com/key-name.</p> <p>Before you can use
     * <code>S3_SIGV4</code>, you must meet these requirements:</p> <p>• You must allow
     * MediaTailor to access your S3 bucket by granting mediatailor.amazonaws.com
     * principal access in IAM. For information about configuring access in IAM, see
     * Access management in the IAM User Guide.</p> <p>• The mediatailor.amazonaws.com
     * service principal must have permissions to read all top level manifests
     * referenced by the VodSource packaging configurations.</p> <p>• The caller of the
     * API must have s3:GetObject IAM permissions to read all top level manifests
     * referenced by your MediaTailor VodSource packaging configurations.</p>
     */
    inline AccessConfiguration& WithAccessType(AccessType&& value) { SetAccessType(std::move(value)); return *this;}


    /**
     * <p>AWS Secrets Manager access token configuration parameters.</p>
     */
    inline const SecretsManagerAccessTokenConfiguration& GetSecretsManagerAccessTokenConfiguration() const{ return m_secretsManagerAccessTokenConfiguration; }

    /**
     * <p>AWS Secrets Manager access token configuration parameters.</p>
     */
    inline bool SecretsManagerAccessTokenConfigurationHasBeenSet() const { return m_secretsManagerAccessTokenConfigurationHasBeenSet; }

    /**
     * <p>AWS Secrets Manager access token configuration parameters.</p>
     */
    inline void SetSecretsManagerAccessTokenConfiguration(const SecretsManagerAccessTokenConfiguration& value) { m_secretsManagerAccessTokenConfigurationHasBeenSet = true; m_secretsManagerAccessTokenConfiguration = value; }

    /**
     * <p>AWS Secrets Manager access token configuration parameters.</p>
     */
    inline void SetSecretsManagerAccessTokenConfiguration(SecretsManagerAccessTokenConfiguration&& value) { m_secretsManagerAccessTokenConfigurationHasBeenSet = true; m_secretsManagerAccessTokenConfiguration = std::move(value); }

    /**
     * <p>AWS Secrets Manager access token configuration parameters.</p>
     */
    inline AccessConfiguration& WithSecretsManagerAccessTokenConfiguration(const SecretsManagerAccessTokenConfiguration& value) { SetSecretsManagerAccessTokenConfiguration(value); return *this;}

    /**
     * <p>AWS Secrets Manager access token configuration parameters.</p>
     */
    inline AccessConfiguration& WithSecretsManagerAccessTokenConfiguration(SecretsManagerAccessTokenConfiguration&& value) { SetSecretsManagerAccessTokenConfiguration(std::move(value)); return *this;}

  private:

    AccessType m_accessType;
    bool m_accessTypeHasBeenSet = false;

    SecretsManagerAccessTokenConfiguration m_secretsManagerAccessTokenConfiguration;
    bool m_secretsManagerAccessTokenConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
