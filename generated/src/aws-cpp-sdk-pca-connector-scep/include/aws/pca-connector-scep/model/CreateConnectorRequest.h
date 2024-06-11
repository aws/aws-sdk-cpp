/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/pca-connector-scep/PcaConnectorScepRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pca-connector-scep/model/MobileDeviceManagement.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PcaConnectorScep
{
namespace Model
{

  /**
   */
  class CreateConnectorRequest : public PcaConnectorScepRequest
  {
  public:
    AWS_PCACONNECTORSCEP_API CreateConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnector"; }

    AWS_PCACONNECTORSCEP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Private Certificate
     * Authority certificate authority to use with this connector. Due to security
     * vulnerabilities present in the SCEP protocol, we recommend using a private CA
     * that's dedicated for use with the connector.</p> <p>To retrieve the private CAs
     * associated with your account, you can call <a
     * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_ListCertificateAuthorities.html">ListCertificateAuthorities</a>
     * using the Amazon Web Services Private CA API.</p>
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
     * <p>If you don't supply a value, by default Connector for SCEP creates a
     * connector for general-purpose use. A general-purpose connector is designed to
     * work with clients or endpoints that support the SCEP protocol, except Connector
     * for SCEP for Microsoft Intune. With connectors for general-purpose use, you
     * manage SCEP challenge passwords using Connector for SCEP. For information about
     * considerations and limitations with using Connector for SCEP, see <a
     * href="https://docs.aws.amazon.com/privateca/latest/userguide/scep-connector.htmlc4scep-considerations-limitations.html">Considerations
     * and Limitations</a>.</p> <p>If you provide an <code>IntuneConfiguration</code>,
     * Connector for SCEP creates a connector for use with Microsoft Intune, and you
     * manage the challenge passwords using Microsoft Intune. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/privateca/latest/userguide/scep-connector.htmlconnector-for-scep-intune.html">Using
     * Connector for SCEP for Microsoft Intune</a>.</p>
     */
    inline const MobileDeviceManagement& GetMobileDeviceManagement() const{ return m_mobileDeviceManagement; }
    inline bool MobileDeviceManagementHasBeenSet() const { return m_mobileDeviceManagementHasBeenSet; }
    inline void SetMobileDeviceManagement(const MobileDeviceManagement& value) { m_mobileDeviceManagementHasBeenSet = true; m_mobileDeviceManagement = value; }
    inline void SetMobileDeviceManagement(MobileDeviceManagement&& value) { m_mobileDeviceManagementHasBeenSet = true; m_mobileDeviceManagement = std::move(value); }
    inline CreateConnectorRequest& WithMobileDeviceManagement(const MobileDeviceManagement& value) { SetMobileDeviceManagement(value); return *this;}
    inline CreateConnectorRequest& WithMobileDeviceManagement(MobileDeviceManagement&& value) { SetMobileDeviceManagement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom string that can be used to distinguish between calls to the <a
     * href="https://docs.aws.amazon.com/C4SCEP_API/pca-connector-scep/latest/APIReference/API_CreateChallenge.html">CreateChallenge</a>
     * action. Client tokens for <code>CreateChallenge</code> time out after five
     * minutes. Therefore, if you call <code>CreateChallenge</code> multiple times with
     * the same client token within five minutes, Connector for SCEP recognizes that
     * you are requesting only one challenge and will only respond with one. If you
     * change the client token for each call, Connector for SCEP recognizes that you
     * are requesting multiple challenge passwords.</p>
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
     * <p>The key-value pairs to associate with the resource.</p>
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
  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    MobileDeviceManagement m_mobileDeviceManagement;
    bool m_mobileDeviceManagementHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
