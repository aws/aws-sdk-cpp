/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CreateHsmConfigurationMessage">AWS
   * API Reference</a></p>
   */
  class CreateHsmConfigurationRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API CreateHsmConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHsmConfiguration"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier to be assigned to the new Amazon Redshift HSM
     * configuration.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const{ return m_hsmConfigurationIdentifier; }
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }
    inline void SetHsmConfigurationIdentifier(const Aws::String& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = value; }
    inline void SetHsmConfigurationIdentifier(Aws::String&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::move(value); }
    inline void SetHsmConfigurationIdentifier(const char* value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier.assign(value); }
    inline CreateHsmConfigurationRequest& WithHsmConfigurationIdentifier(const Aws::String& value) { SetHsmConfigurationIdentifier(value); return *this;}
    inline CreateHsmConfigurationRequest& WithHsmConfigurationIdentifier(Aws::String&& value) { SetHsmConfigurationIdentifier(std::move(value)); return *this;}
    inline CreateHsmConfigurationRequest& WithHsmConfigurationIdentifier(const char* value) { SetHsmConfigurationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A text description of the HSM configuration to be created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateHsmConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateHsmConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateHsmConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline const Aws::String& GetHsmIpAddress() const{ return m_hsmIpAddress; }
    inline bool HsmIpAddressHasBeenSet() const { return m_hsmIpAddressHasBeenSet; }
    inline void SetHsmIpAddress(const Aws::String& value) { m_hsmIpAddressHasBeenSet = true; m_hsmIpAddress = value; }
    inline void SetHsmIpAddress(Aws::String&& value) { m_hsmIpAddressHasBeenSet = true; m_hsmIpAddress = std::move(value); }
    inline void SetHsmIpAddress(const char* value) { m_hsmIpAddressHasBeenSet = true; m_hsmIpAddress.assign(value); }
    inline CreateHsmConfigurationRequest& WithHsmIpAddress(const Aws::String& value) { SetHsmIpAddress(value); return *this;}
    inline CreateHsmConfigurationRequest& WithHsmIpAddress(Aws::String&& value) { SetHsmIpAddress(std::move(value)); return *this;}
    inline CreateHsmConfigurationRequest& WithHsmIpAddress(const char* value) { SetHsmIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline const Aws::String& GetHsmPartitionName() const{ return m_hsmPartitionName; }
    inline bool HsmPartitionNameHasBeenSet() const { return m_hsmPartitionNameHasBeenSet; }
    inline void SetHsmPartitionName(const Aws::String& value) { m_hsmPartitionNameHasBeenSet = true; m_hsmPartitionName = value; }
    inline void SetHsmPartitionName(Aws::String&& value) { m_hsmPartitionNameHasBeenSet = true; m_hsmPartitionName = std::move(value); }
    inline void SetHsmPartitionName(const char* value) { m_hsmPartitionNameHasBeenSet = true; m_hsmPartitionName.assign(value); }
    inline CreateHsmConfigurationRequest& WithHsmPartitionName(const Aws::String& value) { SetHsmPartitionName(value); return *this;}
    inline CreateHsmConfigurationRequest& WithHsmPartitionName(Aws::String&& value) { SetHsmPartitionName(std::move(value)); return *this;}
    inline CreateHsmConfigurationRequest& WithHsmPartitionName(const char* value) { SetHsmPartitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password required to access the HSM partition.</p>
     */
    inline const Aws::String& GetHsmPartitionPassword() const{ return m_hsmPartitionPassword; }
    inline bool HsmPartitionPasswordHasBeenSet() const { return m_hsmPartitionPasswordHasBeenSet; }
    inline void SetHsmPartitionPassword(const Aws::String& value) { m_hsmPartitionPasswordHasBeenSet = true; m_hsmPartitionPassword = value; }
    inline void SetHsmPartitionPassword(Aws::String&& value) { m_hsmPartitionPasswordHasBeenSet = true; m_hsmPartitionPassword = std::move(value); }
    inline void SetHsmPartitionPassword(const char* value) { m_hsmPartitionPasswordHasBeenSet = true; m_hsmPartitionPassword.assign(value); }
    inline CreateHsmConfigurationRequest& WithHsmPartitionPassword(const Aws::String& value) { SetHsmPartitionPassword(value); return *this;}
    inline CreateHsmConfigurationRequest& WithHsmPartitionPassword(Aws::String&& value) { SetHsmPartitionPassword(std::move(value)); return *this;}
    inline CreateHsmConfigurationRequest& WithHsmPartitionPassword(const char* value) { SetHsmPartitionPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSMs public certificate file. When using Cloud HSM, the file name is
     * server.pem.</p>
     */
    inline const Aws::String& GetHsmServerPublicCertificate() const{ return m_hsmServerPublicCertificate; }
    inline bool HsmServerPublicCertificateHasBeenSet() const { return m_hsmServerPublicCertificateHasBeenSet; }
    inline void SetHsmServerPublicCertificate(const Aws::String& value) { m_hsmServerPublicCertificateHasBeenSet = true; m_hsmServerPublicCertificate = value; }
    inline void SetHsmServerPublicCertificate(Aws::String&& value) { m_hsmServerPublicCertificateHasBeenSet = true; m_hsmServerPublicCertificate = std::move(value); }
    inline void SetHsmServerPublicCertificate(const char* value) { m_hsmServerPublicCertificateHasBeenSet = true; m_hsmServerPublicCertificate.assign(value); }
    inline CreateHsmConfigurationRequest& WithHsmServerPublicCertificate(const Aws::String& value) { SetHsmServerPublicCertificate(value); return *this;}
    inline CreateHsmConfigurationRequest& WithHsmServerPublicCertificate(Aws::String&& value) { SetHsmServerPublicCertificate(std::move(value)); return *this;}
    inline CreateHsmConfigurationRequest& WithHsmServerPublicCertificate(const char* value) { SetHsmServerPublicCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateHsmConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateHsmConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateHsmConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateHsmConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_hsmConfigurationIdentifier;
    bool m_hsmConfigurationIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_hsmIpAddress;
    bool m_hsmIpAddressHasBeenSet = false;

    Aws::String m_hsmPartitionName;
    bool m_hsmPartitionNameHasBeenSet = false;

    Aws::String m_hsmPartitionPassword;
    bool m_hsmPartitionPasswordHasBeenSet = false;

    Aws::String m_hsmServerPublicCertificate;
    bool m_hsmServerPublicCertificateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
