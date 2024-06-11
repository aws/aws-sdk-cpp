﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/PcaConnectorAdRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pca-connector-ad/model/VpcInformation.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

  /**
   */
  class CreateConnectorRequest : public PcaConnectorAdRequest
  {
  public:
    AWS_PCACONNECTORAD_API CreateConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnector"; }

    AWS_PCACONNECTORAD_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the certificate authority being used.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }
    inline CreateConnectorRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}
    inline CreateConnectorRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}
    inline CreateConnectorRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateConnectorRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateConnectorRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateConnectorRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Active Directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline CreateConnectorRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline CreateConnectorRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline CreateConnectorRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata assigned to a connector consisting of a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateConnectorRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateConnectorRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConnectorRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateConnectorRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConnectorRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConnectorRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateConnectorRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateConnectorRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateConnectorRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Security group IDs that describe the inbound and outbound rules.</p>
     */
    inline const VpcInformation& GetVpcInformation() const{ return m_vpcInformation; }
    inline bool VpcInformationHasBeenSet() const { return m_vpcInformationHasBeenSet; }
    inline void SetVpcInformation(const VpcInformation& value) { m_vpcInformationHasBeenSet = true; m_vpcInformation = value; }
    inline void SetVpcInformation(VpcInformation&& value) { m_vpcInformationHasBeenSet = true; m_vpcInformation = std::move(value); }
    inline CreateConnectorRequest& WithVpcInformation(const VpcInformation& value) { SetVpcInformation(value); return *this;}
    inline CreateConnectorRequest& WithVpcInformation(VpcInformation&& value) { SetVpcInformation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VpcInformation m_vpcInformation;
    bool m_vpcInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
