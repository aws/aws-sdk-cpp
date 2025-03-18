/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Returns information about an HSM client certificate. The certificate is
   * stored in a secure Hardware Storage Module (HSM), and used by the Amazon
   * Redshift cluster to encrypt data files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/HsmClientCertificate">AWS
   * API Reference</a></p>
   */
  class HsmClientCertificate
  {
  public:
    AWS_REDSHIFT_API HsmClientCertificate() = default;
    AWS_REDSHIFT_API HsmClientCertificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API HsmClientCertificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of the HSM client certificate.</p>
     */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const { return m_hsmClientCertificateIdentifier; }
    inline bool HsmClientCertificateIdentifierHasBeenSet() const { return m_hsmClientCertificateIdentifierHasBeenSet; }
    template<typename HsmClientCertificateIdentifierT = Aws::String>
    void SetHsmClientCertificateIdentifier(HsmClientCertificateIdentifierT&& value) { m_hsmClientCertificateIdentifierHasBeenSet = true; m_hsmClientCertificateIdentifier = std::forward<HsmClientCertificateIdentifierT>(value); }
    template<typename HsmClientCertificateIdentifierT = Aws::String>
    HsmClientCertificate& WithHsmClientCertificateIdentifier(HsmClientCertificateIdentifierT&& value) { SetHsmClientCertificateIdentifier(std::forward<HsmClientCertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key that the Amazon Redshift cluster will use to connect to the
     * HSM. You must register the public key in the HSM.</p>
     */
    inline const Aws::String& GetHsmClientCertificatePublicKey() const { return m_hsmClientCertificatePublicKey; }
    inline bool HsmClientCertificatePublicKeyHasBeenSet() const { return m_hsmClientCertificatePublicKeyHasBeenSet; }
    template<typename HsmClientCertificatePublicKeyT = Aws::String>
    void SetHsmClientCertificatePublicKey(HsmClientCertificatePublicKeyT&& value) { m_hsmClientCertificatePublicKeyHasBeenSet = true; m_hsmClientCertificatePublicKey = std::forward<HsmClientCertificatePublicKeyT>(value); }
    template<typename HsmClientCertificatePublicKeyT = Aws::String>
    HsmClientCertificate& WithHsmClientCertificatePublicKey(HsmClientCertificatePublicKeyT&& value) { SetHsmClientCertificatePublicKey(std::forward<HsmClientCertificatePublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the HSM client certificate.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    HsmClientCertificate& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    HsmClientCertificate& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_hsmClientCertificateIdentifier;
    bool m_hsmClientCertificateIdentifierHasBeenSet = false;

    Aws::String m_hsmClientCertificatePublicKey;
    bool m_hsmClientCertificatePublicKeyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
