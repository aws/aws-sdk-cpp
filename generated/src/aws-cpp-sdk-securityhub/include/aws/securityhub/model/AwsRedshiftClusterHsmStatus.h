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
    AWS_SECURITYHUB_API AwsRedshiftClusterHsmStatus() = default;
    AWS_SECURITYHUB_API AwsRedshiftClusterHsmStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterHsmStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the HSM client certificate that the Amazon Redshift cluster uses
     * to retrieve the data encryption keys that are stored in an HSM.</p>
     */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const { return m_hsmClientCertificateIdentifier; }
    inline bool HsmClientCertificateIdentifierHasBeenSet() const { return m_hsmClientCertificateIdentifierHasBeenSet; }
    template<typename HsmClientCertificateIdentifierT = Aws::String>
    void SetHsmClientCertificateIdentifier(HsmClientCertificateIdentifierT&& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = std::forward<HsmClientCertificateIdentifierT>(value); }
    template<typename HsmClientCertificateIdentifierT = Aws::String>
    AwsRedshiftClusterHsmStatus& WithHsmClientCertificateIdentifier(HsmClientCertificateIdentifierT&& value) { SetHsmClientCertificateIdentifier(std::forward<HsmClientCertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the HSM configuration that contains the information that the
     * Amazon Redshift cluster can use to retrieve and store keys in an HSM.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const { return m_hsmConfigurationIdentifier; }
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }
    template<typename HsmConfigurationIdentifierT = Aws::String>
    void SetHsmConfigurationIdentifier(HsmConfigurationIdentifierT&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::forward<HsmConfigurationIdentifierT>(value); }
    template<typename HsmConfigurationIdentifierT = Aws::String>
    AwsRedshiftClusterHsmStatus& WithHsmConfigurationIdentifier(HsmConfigurationIdentifierT&& value) { SetHsmConfigurationIdentifier(std::forward<HsmConfigurationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Amazon Redshift cluster has finished applying any HSM
     * settings changes specified in a modify cluster command.</p> <p>Type: String</p>
     * <p>Valid values: <code>active</code> | <code>applying</code> </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsRedshiftClusterHsmStatus& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
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
