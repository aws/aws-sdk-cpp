/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/EncryptionContractConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * A configuration for accessing an external Secure Packager and Encoder Key
   * Exchange (SPEKE) service that will provide encryption keys.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/SpekeKeyProvider">AWS
   * API Reference</a></p>
   */
  class SpekeKeyProvider
  {
  public:
    AWS_MEDIAPACKAGE_API SpekeKeyProvider() = default;
    AWS_MEDIAPACKAGE_API SpekeKeyProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API SpekeKeyProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * An Amazon Resource Name (ARN) of a Certificate Manager certificate
that
     * MediaPackage will use for enforcing secure end-to-end data
transfer with the key
     * provider service.

     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    SpekeKeyProvider& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionContractConfiguration& GetEncryptionContractConfiguration() const { return m_encryptionContractConfiguration; }
    inline bool EncryptionContractConfigurationHasBeenSet() const { return m_encryptionContractConfigurationHasBeenSet; }
    template<typename EncryptionContractConfigurationT = EncryptionContractConfiguration>
    void SetEncryptionContractConfiguration(EncryptionContractConfigurationT&& value) { m_encryptionContractConfigurationHasBeenSet = true; m_encryptionContractConfiguration = std::forward<EncryptionContractConfigurationT>(value); }
    template<typename EncryptionContractConfigurationT = EncryptionContractConfiguration>
    SpekeKeyProvider& WithEncryptionContractConfiguration(EncryptionContractConfigurationT&& value) { SetEncryptionContractConfiguration(std::forward<EncryptionContractConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The resource ID to include in key requests.
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    SpekeKeyProvider& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An Amazon Resource Name (ARN) of an IAM role that AWS Elemental
MediaPackage
     * will assume when accessing the key provider service.

     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    SpekeKeyProvider& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The system IDs to include in key requests.
     */
    inline const Aws::Vector<Aws::String>& GetSystemIds() const { return m_systemIds; }
    inline bool SystemIdsHasBeenSet() const { return m_systemIdsHasBeenSet; }
    template<typename SystemIdsT = Aws::Vector<Aws::String>>
    void SetSystemIds(SystemIdsT&& value) { m_systemIdsHasBeenSet = true; m_systemIds = std::forward<SystemIdsT>(value); }
    template<typename SystemIdsT = Aws::Vector<Aws::String>>
    SpekeKeyProvider& WithSystemIds(SystemIdsT&& value) { SetSystemIds(std::forward<SystemIdsT>(value)); return *this;}
    template<typename SystemIdsT = Aws::String>
    SpekeKeyProvider& AddSystemIds(SystemIdsT&& value) { m_systemIdsHasBeenSet = true; m_systemIds.emplace_back(std::forward<SystemIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The URL of the external key provider service.
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    SpekeKeyProvider& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    EncryptionContractConfiguration m_encryptionContractConfiguration;
    bool m_encryptionContractConfigurationHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_systemIds;
    bool m_systemIdsHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
