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
    AWS_RDS_API OptionVersion() = default;
    AWS_RDS_API OptionVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The version of the option.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    OptionVersion& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the version is the default version of the option.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline OptionVersion& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
