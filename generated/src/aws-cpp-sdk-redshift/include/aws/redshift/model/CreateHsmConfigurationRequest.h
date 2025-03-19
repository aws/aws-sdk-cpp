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
    AWS_REDSHIFT_API CreateHsmConfigurationRequest() = default;

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
    inline const Aws::String& GetHsmConfigurationIdentifier() const { return m_hsmConfigurationIdentifier; }
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }
    template<typename HsmConfigurationIdentifierT = Aws::String>
    void SetHsmConfigurationIdentifier(HsmConfigurationIdentifierT&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::forward<HsmConfigurationIdentifierT>(value); }
    template<typename HsmConfigurationIdentifierT = Aws::String>
    CreateHsmConfigurationRequest& WithHsmConfigurationIdentifier(HsmConfigurationIdentifierT&& value) { SetHsmConfigurationIdentifier(std::forward<HsmConfigurationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A text description of the HSM configuration to be created.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateHsmConfigurationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address that the Amazon Redshift cluster must use to access the
     * HSM.</p>
     */
    inline const Aws::String& GetHsmIpAddress() const { return m_hsmIpAddress; }
    inline bool HsmIpAddressHasBeenSet() const { return m_hsmIpAddressHasBeenSet; }
    template<typename HsmIpAddressT = Aws::String>
    void SetHsmIpAddress(HsmIpAddressT&& value) { m_hsmIpAddressHasBeenSet = true; m_hsmIpAddress = std::forward<HsmIpAddressT>(value); }
    template<typename HsmIpAddressT = Aws::String>
    CreateHsmConfigurationRequest& WithHsmIpAddress(HsmIpAddressT&& value) { SetHsmIpAddress(std::forward<HsmIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partition in the HSM where the Amazon Redshift clusters will
     * store their database encryption keys.</p>
     */
    inline const Aws::String& GetHsmPartitionName() const { return m_hsmPartitionName; }
    inline bool HsmPartitionNameHasBeenSet() const { return m_hsmPartitionNameHasBeenSet; }
    template<typename HsmPartitionNameT = Aws::String>
    void SetHsmPartitionName(HsmPartitionNameT&& value) { m_hsmPartitionNameHasBeenSet = true; m_hsmPartitionName = std::forward<HsmPartitionNameT>(value); }
    template<typename HsmPartitionNameT = Aws::String>
    CreateHsmConfigurationRequest& WithHsmPartitionName(HsmPartitionNameT&& value) { SetHsmPartitionName(std::forward<HsmPartitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password required to access the HSM partition.</p>
     */
    inline const Aws::String& GetHsmPartitionPassword() const { return m_hsmPartitionPassword; }
    inline bool HsmPartitionPasswordHasBeenSet() const { return m_hsmPartitionPasswordHasBeenSet; }
    template<typename HsmPartitionPasswordT = Aws::String>
    void SetHsmPartitionPassword(HsmPartitionPasswordT&& value) { m_hsmPartitionPasswordHasBeenSet = true; m_hsmPartitionPassword = std::forward<HsmPartitionPasswordT>(value); }
    template<typename HsmPartitionPasswordT = Aws::String>
    CreateHsmConfigurationRequest& WithHsmPartitionPassword(HsmPartitionPasswordT&& value) { SetHsmPartitionPassword(std::forward<HsmPartitionPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HSMs public certificate file. When using Cloud HSM, the file name is
     * server.pem.</p>
     */
    inline const Aws::String& GetHsmServerPublicCertificate() const { return m_hsmServerPublicCertificate; }
    inline bool HsmServerPublicCertificateHasBeenSet() const { return m_hsmServerPublicCertificateHasBeenSet; }
    template<typename HsmServerPublicCertificateT = Aws::String>
    void SetHsmServerPublicCertificate(HsmServerPublicCertificateT&& value) { m_hsmServerPublicCertificateHasBeenSet = true; m_hsmServerPublicCertificate = std::forward<HsmServerPublicCertificateT>(value); }
    template<typename HsmServerPublicCertificateT = Aws::String>
    CreateHsmConfigurationRequest& WithHsmServerPublicCertificate(HsmServerPublicCertificateT&& value) { SetHsmServerPublicCertificate(std::forward<HsmServerPublicCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateHsmConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateHsmConfigurationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
