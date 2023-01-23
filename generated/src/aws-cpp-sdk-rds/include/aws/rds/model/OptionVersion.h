/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>The version for an option. Option group option versions are returned by the
   * <code>DescribeOptionGroupOptions</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionVersion">AWS
   * API Reference</a></p>
   */
  class OptionVersion
  {
  public:
    AWS_RDS_API OptionVersion();
    AWS_RDS_API OptionVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The version of the option.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the option.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the option.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the option.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the option.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the option.</p>
     */
    inline OptionVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the option.</p>
     */
    inline OptionVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the option.</p>
     */
    inline OptionVersion& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>True if the version is the default version of the option, and otherwise
     * false.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>True if the version is the default version of the option, and otherwise
     * false.</p>
     */
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }

    /**
     * <p>True if the version is the default version of the option, and otherwise
     * false.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>True if the version is the default version of the option, and otherwise
     * false.</p>
     */
    inline OptionVersion& WithIsDefault(bool value) { SetIsDefault(value); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
