/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A list of the log types whose configuration is still pending. In other words,
   * these log types are in the process of being activated or
   * deactivated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PendingCloudwatchLogsExports">AWS
   * API Reference</a></p>
   */
  class PendingCloudwatchLogsExports
  {
  public:
    AWS_RDS_API PendingCloudwatchLogsExports() = default;
    AWS_RDS_API PendingCloudwatchLogsExports(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API PendingCloudwatchLogsExports& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Log types that are in the process of being deactivated. After they are
     * deactivated, these log types aren't exported to CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogTypesToEnable() const { return m_logTypesToEnable; }
    inline bool LogTypesToEnableHasBeenSet() const { return m_logTypesToEnableHasBeenSet; }
    template<typename LogTypesToEnableT = Aws::Vector<Aws::String>>
    void SetLogTypesToEnable(LogTypesToEnableT&& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable = std::forward<LogTypesToEnableT>(value); }
    template<typename LogTypesToEnableT = Aws::Vector<Aws::String>>
    PendingCloudwatchLogsExports& WithLogTypesToEnable(LogTypesToEnableT&& value) { SetLogTypesToEnable(std::forward<LogTypesToEnableT>(value)); return *this;}
    template<typename LogTypesToEnableT = Aws::String>
    PendingCloudwatchLogsExports& AddLogTypesToEnable(LogTypesToEnableT&& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable.emplace_back(std::forward<LogTypesToEnableT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Log types that are in the process of being enabled. After they are enabled,
     * these log types are exported to CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogTypesToDisable() const { return m_logTypesToDisable; }
    inline bool LogTypesToDisableHasBeenSet() const { return m_logTypesToDisableHasBeenSet; }
    template<typename LogTypesToDisableT = Aws::Vector<Aws::String>>
    void SetLogTypesToDisable(LogTypesToDisableT&& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable = std::forward<LogTypesToDisableT>(value); }
    template<typename LogTypesToDisableT = Aws::Vector<Aws::String>>
    PendingCloudwatchLogsExports& WithLogTypesToDisable(LogTypesToDisableT&& value) { SetLogTypesToDisable(std::forward<LogTypesToDisableT>(value)); return *this;}
    template<typename LogTypesToDisableT = Aws::String>
    PendingCloudwatchLogsExports& AddLogTypesToDisable(LogTypesToDisableT&& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable.emplace_back(std::forward<LogTypesToDisableT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_logTypesToEnable;
    bool m_logTypesToEnableHasBeenSet = false;

    Aws::Vector<Aws::String> m_logTypesToDisable;
    bool m_logTypesToDisableHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
