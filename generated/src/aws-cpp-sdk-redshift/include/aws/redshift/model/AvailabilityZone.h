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
    AWS_REDSHIFT_API AvailabilityZone();
    AWS_REDSHIFT_API AvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API AvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the availability zone.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the availability zone.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the availability zone.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the availability zone.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the availability zone.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the availability zone.</p>
     */
    inline AvailabilityZone& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the availability zone.</p>
     */
    inline AvailabilityZone& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the availability zone.</p>
     */
    inline AvailabilityZone& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<SupportedPlatform>& GetSupportedPlatforms() const{ return m_supportedPlatforms; }

    /**
     * <p/>
     */
    inline bool SupportedPlatformsHasBeenSet() const { return m_supportedPlatformsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSupportedPlatforms(const Aws::Vector<SupportedPlatform>& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms = value; }

    /**
     * <p/>
     */
    inline void SetSupportedPlatforms(Aws::Vector<SupportedPlatform>&& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms = std::move(value); }

    /**
     * <p/>
     */
    inline AvailabilityZone& WithSupportedPlatforms(const Aws::Vector<SupportedPlatform>& value) { SetSupportedPlatforms(value); return *this;}

    /**
     * <p/>
     */
    inline AvailabilityZone& WithSupportedPlatforms(Aws::Vector<SupportedPlatform>&& value) { SetSupportedPlatforms(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AvailabilityZone& AddSupportedPlatforms(const SupportedPlatform& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline AvailabilityZone& AddSupportedPlatforms(SupportedPlatform&& value) { m_supportedPlatformsHasBeenSet = true; m_supportedPlatforms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SupportedPlatform> m_supportedPlatforms;
    bool m_supportedPlatformsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
