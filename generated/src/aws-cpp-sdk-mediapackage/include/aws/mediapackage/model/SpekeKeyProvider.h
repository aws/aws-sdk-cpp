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
    AWS_MEDIAPACKAGE_API SpekeKeyProvider();
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
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline SpekeKeyProvider& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline SpekeKeyProvider& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline SpekeKeyProvider& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionContractConfiguration& GetEncryptionContractConfiguration() const{ return m_encryptionContractConfiguration; }
    inline bool EncryptionContractConfigurationHasBeenSet() const { return m_encryptionContractConfigurationHasBeenSet; }
    inline void SetEncryptionContractConfiguration(const EncryptionContractConfiguration& value) { m_encryptionContractConfigurationHasBeenSet = true; m_encryptionContractConfiguration = value; }
    inline void SetEncryptionContractConfiguration(EncryptionContractConfiguration&& value) { m_encryptionContractConfigurationHasBeenSet = true; m_encryptionContractConfiguration = std::move(value); }
    inline SpekeKeyProvider& WithEncryptionContractConfiguration(const EncryptionContractConfiguration& value) { SetEncryptionContractConfiguration(value); return *this;}
    inline SpekeKeyProvider& WithEncryptionContractConfiguration(EncryptionContractConfiguration&& value) { SetEncryptionContractConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The resource ID to include in key requests.
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline SpekeKeyProvider& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline SpekeKeyProvider& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline SpekeKeyProvider& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * An Amazon Resource Name (ARN) of an IAM role that AWS Elemental
MediaPackage
     * will assume when accessing the key provider service.

     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline SpekeKeyProvider& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline SpekeKeyProvider& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline SpekeKeyProvider& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The system IDs to include in key requests.
     */
    inline const Aws::Vector<Aws::String>& GetSystemIds() const{ return m_systemIds; }
    inline bool SystemIdsHasBeenSet() const { return m_systemIdsHasBeenSet; }
    inline void SetSystemIds(const Aws::Vector<Aws::String>& value) { m_systemIdsHasBeenSet = true; m_systemIds = value; }
    inline void SetSystemIds(Aws::Vector<Aws::String>&& value) { m_systemIdsHasBeenSet = true; m_systemIds = std::move(value); }
    inline SpekeKeyProvider& WithSystemIds(const Aws::Vector<Aws::String>& value) { SetSystemIds(value); return *this;}
    inline SpekeKeyProvider& WithSystemIds(Aws::Vector<Aws::String>&& value) { SetSystemIds(std::move(value)); return *this;}
    inline SpekeKeyProvider& AddSystemIds(const Aws::String& value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(value); return *this; }
    inline SpekeKeyProvider& AddSystemIds(Aws::String&& value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(std::move(value)); return *this; }
    inline SpekeKeyProvider& AddSystemIds(const char* value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The URL of the external key provider service.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline SpekeKeyProvider& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline SpekeKeyProvider& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline SpekeKeyProvider& WithUrl(const char* value) { SetUrl(value); return *this;}
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
