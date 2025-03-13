/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/SupportedPlatform.h>
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
   * <p>Describes an availability zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AvailabilityZone
  {
  public:
    AWS_REDSHIFT_API AvailabilityZone() = default;
    AWS_REDSHIFT_API AvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API AvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the availability zone.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AvailabilityZone& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<SupportedPlatform>& GetSupportedPlatforms() const { return m_supportedPlatforms; }
    inline bool SupportedPlatformsHasBeenSet() const { return m_supportedPlatformsHasBeenSet; }
    template<typename SupportedPlatformsT = Aws::Vector<SupportedPlatform>>
    void SetSupportedPlatforms(SupportedPlatformsT&& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms = std::forward<SupportedPlatformsT>(value); }
    template<typename SupportedPlatformsT = Aws::Vector<SupportedPlatform>>
    AvailabilityZone& WithSupportedPlatforms(SupportedPlatformsT&& value) { SetSupportedPlatforms(std::forward<SupportedPlatformsT>(value)); return *this;}
    template<typename SupportedPlatformsT = SupportedPlatform>
    AvailabilityZone& AddSupportedPlatforms(SupportedPlatformsT&& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms.emplace_back(std::forward<SupportedPlatformsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SupportedPlatform> m_supportedPlatforms;
    bool m_supportedPlatformsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
