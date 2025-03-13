/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/AquaStatus.h>
#include <aws/redshift/model/AquaConfigurationStatus.h>
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
   * <p>The operation that uses this structure is retired. Amazon Redshift
   * automatically determines whether to use AQUA (Advanced Query
   * Accelerator).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AquaConfiguration">AWS
   * API Reference</a></p>
   */
  class AquaConfiguration
  {
  public:
    AWS_REDSHIFT_API AquaConfiguration() = default;
    AWS_REDSHIFT_API AquaConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API AquaConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>This field is retired. Amazon Redshift automatically determines whether to
     * use AQUA (Advanced Query Accelerator).</p>
     */
    inline AquaStatus GetAquaStatus() const { return m_aquaStatus; }
    inline bool AquaStatusHasBeenSet() const { return m_aquaStatusHasBeenSet; }
    inline void SetAquaStatus(AquaStatus value) { m_aquaStatusHasBeenSet = true; m_aquaStatus = value; }
    inline AquaConfiguration& WithAquaStatus(AquaStatus value) { SetAquaStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field is retired. Amazon Redshift automatically determines whether to
     * use AQUA (Advanced Query Accelerator).</p>
     */
    inline AquaConfigurationStatus GetAquaConfigurationStatus() const { return m_aquaConfigurationStatus; }
    inline bool AquaConfigurationStatusHasBeenSet() const { return m_aquaConfigurationStatusHasBeenSet; }
    inline void SetAquaConfigurationStatus(AquaConfigurationStatus value) { m_aquaConfigurationStatusHasBeenSet = true; m_aquaConfigurationStatus = value; }
    inline AquaConfiguration& WithAquaConfigurationStatus(AquaConfigurationStatus value) { SetAquaConfigurationStatus(value); return *this;}
    ///@}
  private:

    AquaStatus m_aquaStatus{AquaStatus::NOT_SET};
    bool m_aquaStatusHasBeenSet = false;

    AquaConfigurationStatus m_aquaConfigurationStatus{AquaConfigurationStatus::NOT_SET};
    bool m_aquaConfigurationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
