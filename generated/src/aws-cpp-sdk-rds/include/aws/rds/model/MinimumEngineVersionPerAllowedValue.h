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
   * <p>The minimum DB engine version required for each corresponding allowed value
   * for an option setting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/MinimumEngineVersionPerAllowedValue">AWS
   * API Reference</a></p>
   */
  class MinimumEngineVersionPerAllowedValue
  {
  public:
    AWS_RDS_API MinimumEngineVersionPerAllowedValue() = default;
    AWS_RDS_API MinimumEngineVersionPerAllowedValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API MinimumEngineVersionPerAllowedValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The allowed value for an option setting.</p>
     */
    inline const Aws::String& GetAllowedValue() const { return m_allowedValue; }
    inline bool AllowedValueHasBeenSet() const { return m_allowedValueHasBeenSet; }
    template<typename AllowedValueT = Aws::String>
    void SetAllowedValue(AllowedValueT&& value) { m_allowedValueHasBeenSet = true; m_allowedValue = std::forward<AllowedValueT>(value); }
    template<typename AllowedValueT = Aws::String>
    MinimumEngineVersionPerAllowedValue& WithAllowedValue(AllowedValueT&& value) { SetAllowedValue(std::forward<AllowedValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum DB engine version required for the allowed value.</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const { return m_minimumEngineVersion; }
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }
    template<typename MinimumEngineVersionT = Aws::String>
    void SetMinimumEngineVersion(MinimumEngineVersionT&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::forward<MinimumEngineVersionT>(value); }
    template<typename MinimumEngineVersionT = Aws::String>
    MinimumEngineVersionPerAllowedValue& WithMinimumEngineVersion(MinimumEngineVersionT&& value) { SetMinimumEngineVersion(std::forward<MinimumEngineVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_allowedValue;
    bool m_allowedValueHasBeenSet = false;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
