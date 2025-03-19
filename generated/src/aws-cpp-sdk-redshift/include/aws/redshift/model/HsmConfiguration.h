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
   * <p>Returns information about an HSM configuration, which is an object that
   * describes to Amazon Redshift clusters the information they require to connect to
   * an HSM where they can store database encryption keys.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/HsmConfiguration">AWS
   * API Reference</a></p>
   */
  class HsmConfiguration
  {
  public:
    AWS_REDSHIFT_API HsmConfiguration() = default;
    AWS_REDSHIFT_API HsmConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API HsmConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Amazon Redshift HSM configuration.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const { return m_hsmConfigurationIdentifier; }
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }
    template<typename HsmConfigurationIdentifierT = Aws::String>
    void SetHsmConfigurationIdentifier(HsmConfigurationIdentifierT&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::forward<HsmConfigurationIdentifierT>(value); }
    template<typename HsmConfigurationIdentifierT = Aws::String>
    HsmConfiguration& WithHsmConfigurationIdentifier(HsmConfigurationIdentifierT&& value) { SetHsmConfigurationIdentifier(std::forward<HsmConfigurationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A text description of the HSM configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    HsmConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    HsmConfiguration& WithHsmIpAddress(HsmIpAddressT&& value) { SetHsmIpAddress(std::forward<HsmIpAddressT>(value)); return *this;}
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
    HsmConfiguration& WithHsmPartitionName(HsmPartitionNameT&& value) { SetHsmPartitionName(std::forward<HsmPartitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the HSM configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    HsmConfiguration& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    HsmConfiguration& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
