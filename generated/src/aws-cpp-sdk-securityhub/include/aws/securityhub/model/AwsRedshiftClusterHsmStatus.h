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
   * <p>Information about whether an Amazon Redshift cluster finished applying any
   * hardware changes to security module (HSM) settings that were specified in a
   * modify cluster command.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterHsmStatus">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterHsmStatus
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterHsmStatus();
    AWS_SECURITYHUB_API AwsRedshiftClusterHsmStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterHsmStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the HSM client certificate that the Amazon Redshift cluster uses
     * to retrieve the data encryption keys that are stored in an HSM.</p>
     */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const{ return m_hsmClientCertificateIdentifier; }

    /**
     * <p>The name of the HSM client certificate that the Amazon Redshift cluster uses
     * to retrieve the data encryption keys that are stored in an HSM.</p>
     */
    inline bool HsmClientCertificateIdentifierHasBeenSet() const { return m_hsmClientCertificateIdentifierHasBeenSet; }

    /**
     * <p>The name of the HSM client certificate that the Amazon Redshift cluster uses
     * to retrieve the data encryption keys that are stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const Aws::String& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = value; }

    /**
     * <p>The name of the HSM client certificate that the Amazon Redshift cluster uses
     * to retrieve the data encryption keys that are stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(Aws::String&& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = std::move(value); }

    /**
     * <p>The name of the HSM client certificate that the Amazon Redshift cluster uses
     * to retrieve the data encryption keys that are stored in an HSM.</p>
     */
    inline void SetHsmClientCertificateIdentifier(const char* value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier.assign(value); }

    /**
     * <p>The name of the HSM client certificate that the Amazon Redshift cluster uses
     * to retrieve the data encryption keys that are stored in an HSM.</p>
     */
    inline AwsRedshiftClusterHsmStatus& WithHsmClientCertificateIdentifier(const Aws::String& value) { SetHsmClientCertificateIdentifier(value); return *this;}

    /**
     * <p>The name of the HSM client certificate that the Amazon Redshift cluster uses
     * to retrieve the data encryption keys that are stored in an HSM.</p>
     */
    inline AwsRedshiftClusterHsmStatus& WithHsmClientCertificateIdentifier(Aws::String&& value) { SetHsmClientCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the HSM client certificate that the Amazon Redshift cluster uses
     * to retrieve the data encryption keys that are stored in an HSM.</p>
     */
    inline AwsRedshiftClusterHsmStatus& WithHsmClientCertificateIdentifier(const char* value) { SetHsmClientCertificateIdentifier(value); return *this;}


    /**
     * <p>The name of the HSM configuration that contains the information that the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const{ return m_hsmConfigurationIdentifier; }

    /**
     * <p>The name of the HSM configuration that contains the information that the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }

    /**
     * <p>The name of the HSM configuration that contains the information that the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(const Aws::String& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = value; }

    /**
     * <p>The name of the HSM configuration that contains the information that the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(Aws::String&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::move(value); }

    /**
     * <p>The name of the HSM configuration that contains the information that the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline void SetHsmConfigurationIdentifier(const char* value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier.assign(value); }

    /**
     * <p>The name of the HSM configuration that contains the information that the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline AwsRedshiftClusterHsmStatus& WithHsmConfigurationIdentifier(const Aws::String& value) { SetHsmConfigurationIdentifier(value); return *this;}

    /**
     * <p>The name of the HSM configuration that contains the information that the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline AwsRedshiftClusterHsmStatus& WithHsmConfigurationIdentifier(Aws::String&& value) { SetHsmConfigurationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the HSM configuration that contains the information that the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline AwsRedshiftClusterHsmStatus& WithHsmConfigurationIdentifier(const char* value) { SetHsmConfigurationIdentifier(value); return *this;}


    /**
     * <p>Indicates whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Type: String</p>
     * <p>Valid values: <code>active</code> | <code>applying</code> </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Type: String</p>
     * <p>Valid values: <code>active</code> | <code>applying</code> </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Type: String</p>
     * <p>Valid values: <code>active</code> | <code>applying</code> </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Type: String</p>
     * <p>Valid values: <code>active</code> | <code>applying</code> </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Type: String</p>
     * <p>Valid values: <code>active</code> | <code>applying</code> </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Indicates whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Type: String</p>
     * <p>Valid values: <code>active</code> | <code>applying</code> </p>
     */
    inline AwsRedshiftClusterHsmStatus& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Type: String</p>
     * <p>Valid values: <code>active</code> | <code>applying</code> </p>
     */
    inline AwsRedshiftClusterHsmStatus& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Type: String</p>
     * <p>Valid values: <code>active</code> | <code>applying</code> </p>
     */
    inline AwsRedshiftClusterHsmStatus& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet = false;

    Aws::String m_hsmConfigurationIdentifier;
    bool m_hsmConfigurationIdentifierHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
