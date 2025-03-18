/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes the status of a parameter group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterParameterStatus">AWS
   * API Reference</a></p>
   */
  class ClusterParameterStatus
  {
  public:
    AWS_REDSHIFT_API ClusterParameterStatus() = default;
    AWS_REDSHIFT_API ClusterParameterStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterParameterStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const { return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    template<typename ParameterNameT = Aws::String>
    void SetParameterName(ParameterNameT&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::forward<ParameterNameT>(value); }
    template<typename ParameterNameT = Aws::String>
    ClusterParameterStatus& WithParameterName(ParameterNameT&& value) { SetParameterName(std::forward<ParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the parameter that indicates whether the parameter is in sync
     * with the database, waiting for a cluster reboot, or encountered an error when
     * being applied.</p> <p>The following are possible statuses and descriptions.</p>
     * <ul> <li> <p> <code>in-sync</code>: The parameter value is in sync with the
     * database.</p> </li> <li> <p> <code>pending-reboot</code>: The parameter value
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>applying</code>: The parameter value is being applied to the database.</p>
     * </li> <li> <p> <code>invalid-parameter</code>: Cannot apply the parameter value
     * because it has an invalid value or syntax.</p> </li> <li> <p>
     * <code>apply-deferred</code>: The parameter contains static property changes. The
     * changes are deferred until the cluster reboots.</p> </li> <li> <p>
     * <code>apply-error</code>: Cannot connect to the cluster. The parameter change
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>unknown-error</code>: Cannot apply the parameter change right now. The
     * change will be applied after the cluster reboots.</p> </li> </ul>
     */
    inline const Aws::String& GetParameterApplyStatus() const { return m_parameterApplyStatus; }
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }
    template<typename ParameterApplyStatusT = Aws::String>
    void SetParameterApplyStatus(ParameterApplyStatusT&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::forward<ParameterApplyStatusT>(value); }
    template<typename ParameterApplyStatusT = Aws::String>
    ClusterParameterStatus& WithParameterApplyStatus(ParameterApplyStatusT&& value) { SetParameterApplyStatus(std::forward<ParameterApplyStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline const Aws::String& GetParameterApplyErrorDescription() const { return m_parameterApplyErrorDescription; }
    inline bool ParameterApplyErrorDescriptionHasBeenSet() const { return m_parameterApplyErrorDescriptionHasBeenSet; }
    template<typename ParameterApplyErrorDescriptionT = Aws::String>
    void SetParameterApplyErrorDescription(ParameterApplyErrorDescriptionT&& value) { m_parameterApplyErrorDescriptionHasBeenSet = true; m_parameterApplyErrorDescription = std::forward<ParameterApplyErrorDescriptionT>(value); }
    template<typename ParameterApplyErrorDescriptionT = Aws::String>
    ClusterParameterStatus& WithParameterApplyErrorDescription(ParameterApplyErrorDescriptionT&& value) { SetParameterApplyErrorDescription(std::forward<ParameterApplyErrorDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet = false;

    Aws::String m_parameterApplyErrorDescription;
    bool m_parameterApplyErrorDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
