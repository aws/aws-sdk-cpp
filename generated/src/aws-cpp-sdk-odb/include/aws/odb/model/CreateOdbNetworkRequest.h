/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/OdbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/Access.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace odb
{
namespace Model
{

  /**
   */
  class CreateOdbNetworkRequest : public OdbRequest
  {
  public:
    AWS_ODB_API CreateOdbNetworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOdbNetwork"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A user-friendly name for the ODB network.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateOdbNetworkRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Availability Zone (AZ) where the ODB network is
     * located.</p> <p>This operation requires that you specify a value for either
     * <code>availabilityZone</code> or <code>availabilityZoneId</code>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateOdbNetworkRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AZ ID of the AZ where the ODB network is located.</p> <p>This operation
     * requires that you specify a value for either <code>availabilityZone</code> or
     * <code>availabilityZoneId</code>.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CreateOdbNetworkRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR range of the client subnet for the ODB network.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must not overlap with the CIDR range of the
     * backup subnet.</p> </li> <li> <p>Must not overlap with the CIDR ranges of the
     * VPCs that are connected to the ODB network.</p> </li> <li> <p>Must not use the
     * following CIDR ranges that are reserved by OCI:</p> <ul> <li> <p>
     * <code>100.106.0.0/16</code> and <code>100.107.0.0/16</code> </p> </li> <li> <p>
     * <code>169.254.0.0/16</code> </p> </li> <li> <p> <code>224.0.0.0 -
     * 239.255.255.255</code> </p> </li> <li> <p> <code>240.0.0.0 -
     * 255.255.255.255</code> </p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetClientSubnetCidr() const { return m_clientSubnetCidr; }
    inline bool ClientSubnetCidrHasBeenSet() const { return m_clientSubnetCidrHasBeenSet; }
    template<typename ClientSubnetCidrT = Aws::String>
    void SetClientSubnetCidr(ClientSubnetCidrT&& value) { m_clientSubnetCidrHasBeenSet = true; m_clientSubnetCidr = std::forward<ClientSubnetCidrT>(value); }
    template<typename ClientSubnetCidrT = Aws::String>
    CreateOdbNetworkRequest& WithClientSubnetCidr(ClientSubnetCidrT&& value) { SetClientSubnetCidr(std::forward<ClientSubnetCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR range of the backup subnet for the ODB network.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must not overlap with the CIDR range of the
     * client subnet.</p> </li> <li> <p>Must not overlap with the CIDR ranges of the
     * VPCs that are connected to the ODB network.</p> </li> <li> <p>Must not use the
     * following CIDR ranges that are reserved by OCI:</p> <ul> <li> <p>
     * <code>100.106.0.0/16</code> and <code>100.107.0.0/16</code> </p> </li> <li> <p>
     * <code>169.254.0.0/16</code> </p> </li> <li> <p> <code>224.0.0.0 -
     * 239.255.255.255</code> </p> </li> <li> <p> <code>240.0.0.0 -
     * 255.255.255.255</code> </p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetBackupSubnetCidr() const { return m_backupSubnetCidr; }
    inline bool BackupSubnetCidrHasBeenSet() const { return m_backupSubnetCidrHasBeenSet; }
    template<typename BackupSubnetCidrT = Aws::String>
    void SetBackupSubnetCidr(BackupSubnetCidrT&& value) { m_backupSubnetCidrHasBeenSet = true; m_backupSubnetCidr = std::forward<BackupSubnetCidrT>(value); }
    template<typename BackupSubnetCidrT = Aws::String>
    CreateOdbNetworkRequest& WithBackupSubnetCidr(BackupSubnetCidrT&& value) { SetBackupSubnetCidr(std::forward<BackupSubnetCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name to use for the resources in the ODB network.</p>
     */
    inline const Aws::String& GetCustomDomainName() const { return m_customDomainName; }
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }
    template<typename CustomDomainNameT = Aws::String>
    void SetCustomDomainName(CustomDomainNameT&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::forward<CustomDomainNameT>(value); }
    template<typename CustomDomainNameT = Aws::String>
    CreateOdbNetworkRequest& WithCustomDomainName(CustomDomainNameT&& value) { SetCustomDomainName(std::forward<CustomDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS prefix to the default DNS domain name. The default DNS domain name is
     * oraclevcn.com.</p>
     */
    inline const Aws::String& GetDefaultDnsPrefix() const { return m_defaultDnsPrefix; }
    inline bool DefaultDnsPrefixHasBeenSet() const { return m_defaultDnsPrefixHasBeenSet; }
    template<typename DefaultDnsPrefixT = Aws::String>
    void SetDefaultDnsPrefix(DefaultDnsPrefixT&& value) { m_defaultDnsPrefixHasBeenSet = true; m_defaultDnsPrefix = std::forward<DefaultDnsPrefixT>(value); }
    template<typename DefaultDnsPrefixT = Aws::String>
    CreateOdbNetworkRequest& WithDefaultDnsPrefix(DefaultDnsPrefixT&& value) { SetDefaultDnsPrefix(std::forward<DefaultDnsPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you don't specify a client token, the Amazon Web
     * Services SDK automatically generates a client token and uses it for the request
     * to ensure idempotency. The client token is valid for up to 24 hours after it's
     * first used.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateOdbNetworkRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration for Amazon S3 access from the ODB network.</p>
     */
    inline Access GetS3Access() const { return m_s3Access; }
    inline bool S3AccessHasBeenSet() const { return m_s3AccessHasBeenSet; }
    inline void SetS3Access(Access value) { m_s3AccessHasBeenSet = true; m_s3Access = value; }
    inline CreateOdbNetworkRequest& WithS3Access(Access value) { SetS3Access(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration for Zero-ETL access from the ODB network.</p>
     */
    inline Access GetZeroEtlAccess() const { return m_zeroEtlAccess; }
    inline bool ZeroEtlAccessHasBeenSet() const { return m_zeroEtlAccessHasBeenSet; }
    inline void SetZeroEtlAccess(Access value) { m_zeroEtlAccessHasBeenSet = true; m_zeroEtlAccess = value; }
    inline CreateOdbNetworkRequest& WithZeroEtlAccess(Access value) { SetZeroEtlAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the endpoint policy for Amazon S3 access from the ODB network.</p>
     */
    inline const Aws::String& GetS3PolicyDocument() const { return m_s3PolicyDocument; }
    inline bool S3PolicyDocumentHasBeenSet() const { return m_s3PolicyDocumentHasBeenSet; }
    template<typename S3PolicyDocumentT = Aws::String>
    void SetS3PolicyDocument(S3PolicyDocumentT&& value) { m_s3PolicyDocumentHasBeenSet = true; m_s3PolicyDocument = std::forward<S3PolicyDocumentT>(value); }
    template<typename S3PolicyDocumentT = Aws::String>
    CreateOdbNetworkRequest& WithS3PolicyDocument(S3PolicyDocumentT&& value) { SetS3PolicyDocument(std::forward<S3PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of resource tags to apply to the ODB network.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateOdbNetworkRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateOdbNetworkRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_clientSubnetCidr;
    bool m_clientSubnetCidrHasBeenSet = false;

    Aws::String m_backupSubnetCidr;
    bool m_backupSubnetCidrHasBeenSet = false;

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;

    Aws::String m_defaultDnsPrefix;
    bool m_defaultDnsPrefixHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Access m_s3Access{Access::NOT_SET};
    bool m_s3AccessHasBeenSet = false;

    Access m_zeroEtlAccess{Access::NOT_SET};
    bool m_zeroEtlAccessHasBeenSet = false;

    Aws::String m_s3PolicyDocument;
    bool m_s3PolicyDocumentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
