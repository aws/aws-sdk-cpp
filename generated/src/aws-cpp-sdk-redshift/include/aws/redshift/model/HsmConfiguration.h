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
    AWS_REDSHIFT_API HsmConfiguration();
    AWS_REDSHIFT_API HsmConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API HsmConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the Amazon Redshift HSM configuration.</p>
     */
    inline const Aws::String& GetHsmConfigurationIdentifier() const{ return m_hsmConfigurationIdentifier; }
    inline bool HsmConfigurationIdentifierHasBeenSet() const { return m_hsmConfigurationIdentifierHasBeenSet; }
    inline void SetHsmConfigurationIdentifier(const Aws::String& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = value; }
    inline void SetHsmConfigurationIdentifier(Aws::String&& value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier = std::move(value); }
    inline void SetHsmConfigurationIdentifier(const char* value) { m_hsmConfigurationIdentifierHasBeenSet = true; m_hsmConfigurationIdentifier.assign(value); }
    inline HsmConfiguration& WithHsmConfigurationIdentifier(const Aws::String& value) { SetHsmConfigurationIdentifier(value); return *this;}
    inline HsmConfiguration& WithHsmConfigurationIdentifier(Aws::String&& value) { SetHsmConfigurationIdentifier(std::move(value)); return *this;}
    inline HsmConfiguration& WithHsmConfigurationIdentifier(const char* value) { SetHsmConfigurationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A text description of the HSM configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline HsmConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline HsmConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline HsmConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline HsmConfiguration& WithHsmIpAddress(const Aws::String& value) { SetHsmIpAddress(value); return *this;}
    inline HsmConfiguration& WithHsmIpAddress(Aws::String&& value) { SetHsmIpAddress(std::move(value)); return *this;}
    inline HsmConfiguration& WithHsmIpAddress(const char* value) { SetHsmIpAddress(value); return *this;}
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
    inline HsmConfiguration& WithHsmPartitionName(const Aws::String& value) { SetHsmPartitionName(value); return *this;}
    inline HsmConfiguration& WithHsmPartitionName(Aws::String&& value) { SetHsmPartitionName(std::move(value)); return *this;}
    inline HsmConfiguration& WithHsmPartitionName(const char* value) { SetHsmPartitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the HSM configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline HsmConfiguration& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline HsmConfiguration& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline HsmConfiguration& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline HsmConfiguration& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
