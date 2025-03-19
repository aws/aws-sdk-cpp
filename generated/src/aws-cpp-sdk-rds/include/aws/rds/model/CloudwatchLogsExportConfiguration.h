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
   * <p>The configuration setting for the log types to be enabled for export to
   * CloudWatch Logs for a specific DB instance or DB cluster.</p> <p>The
   * <code>EnableLogTypes</code> and <code>DisableLogTypes</code> arrays determine
   * which logs will be exported (or not exported) to CloudWatch Logs. The values
   * within these arrays depend on the DB engine being used.</p> <p>For more
   * information about exporting CloudWatch Logs for Amazon RDS DB instances, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
   * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
   * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
   * Amazon Aurora DB clusters, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
   * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CloudwatchLogsExportConfiguration">AWS
   * API Reference</a></p>
   */
  class CloudwatchLogsExportConfiguration
  {
  public:
    AWS_RDS_API CloudwatchLogsExportConfiguration() = default;
    AWS_RDS_API CloudwatchLogsExportConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API CloudwatchLogsExportConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The list of log types to enable.</p> <p>The following values are valid for
     * each DB engine:</p> <ul> <li> <p>Aurora MySQL - <code>audit | error | general |
     * slowquery</code> </p> </li> <li> <p>Aurora PostgreSQL - <code>postgresql</code>
     * </p> </li> <li> <p>RDS for MySQL - <code>error | general | slowquery</code> </p>
     * </li> <li> <p>RDS for PostgreSQL - <code>postgresql | upgrade</code> </p> </li>
     * </ul>
     */
    inline const Aws::Vector<Aws::String>& GetEnableLogTypes() const { return m_enableLogTypes; }
    inline bool EnableLogTypesHasBeenSet() const { return m_enableLogTypesHasBeenSet; }
    template<typename EnableLogTypesT = Aws::Vector<Aws::String>>
    void SetEnableLogTypes(EnableLogTypesT&& value) { m_enableLogTypesHasBeenSet = true; m_enableLogTypes = std::forward<EnableLogTypesT>(value); }
    template<typename EnableLogTypesT = Aws::Vector<Aws::String>>
    CloudwatchLogsExportConfiguration& WithEnableLogTypes(EnableLogTypesT&& value) { SetEnableLogTypes(std::forward<EnableLogTypesT>(value)); return *this;}
    template<typename EnableLogTypesT = Aws::String>
    CloudwatchLogsExportConfiguration& AddEnableLogTypes(EnableLogTypesT&& value) { m_enableLogTypesHasBeenSet = true; m_enableLogTypes.emplace_back(std::forward<EnableLogTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of log types to disable.</p> <p>The following values are valid for
     * each DB engine:</p> <ul> <li> <p>Aurora MySQL - <code>audit | error | general |
     * slowquery</code> </p> </li> <li> <p>Aurora PostgreSQL - <code>postgresql</code>
     * </p> </li> <li> <p>RDS for MySQL - <code>error | general | slowquery</code> </p>
     * </li> <li> <p>RDS for PostgreSQL - <code>postgresql | upgrade</code> </p> </li>
     * </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDisableLogTypes() const { return m_disableLogTypes; }
    inline bool DisableLogTypesHasBeenSet() const { return m_disableLogTypesHasBeenSet; }
    template<typename DisableLogTypesT = Aws::Vector<Aws::String>>
    void SetDisableLogTypes(DisableLogTypesT&& value) { m_disableLogTypesHasBeenSet = true; m_disableLogTypes = std::forward<DisableLogTypesT>(value); }
    template<typename DisableLogTypesT = Aws::Vector<Aws::String>>
    CloudwatchLogsExportConfiguration& WithDisableLogTypes(DisableLogTypesT&& value) { SetDisableLogTypes(std::forward<DisableLogTypesT>(value)); return *this;}
    template<typename DisableLogTypesT = Aws::String>
    CloudwatchLogsExportConfiguration& AddDisableLogTypes(DisableLogTypesT&& value) { m_disableLogTypesHasBeenSet = true; m_disableLogTypes.emplace_back(std::forward<DisableLogTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_enableLogTypes;
    bool m_enableLogTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_disableLogTypes;
    bool m_disableLogTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
