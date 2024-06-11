﻿/**
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
    AWS_RDS_API PendingCloudwatchLogsExports();
    AWS_RDS_API PendingCloudwatchLogsExports(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API PendingCloudwatchLogsExports& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Log types that are in the process of being deactivated. After they are
     * deactivated, these log types aren't exported to CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogTypesToEnable() const{ return m_logTypesToEnable; }
    inline bool LogTypesToEnableHasBeenSet() const { return m_logTypesToEnableHasBeenSet; }
    inline void SetLogTypesToEnable(const Aws::Vector<Aws::String>& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable = value; }
    inline void SetLogTypesToEnable(Aws::Vector<Aws::String>&& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable = std::move(value); }
    inline PendingCloudwatchLogsExports& WithLogTypesToEnable(const Aws::Vector<Aws::String>& value) { SetLogTypesToEnable(value); return *this;}
    inline PendingCloudwatchLogsExports& WithLogTypesToEnable(Aws::Vector<Aws::String>&& value) { SetLogTypesToEnable(std::move(value)); return *this;}
    inline PendingCloudwatchLogsExports& AddLogTypesToEnable(const Aws::String& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable.push_back(value); return *this; }
    inline PendingCloudwatchLogsExports& AddLogTypesToEnable(Aws::String&& value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable.push_back(std::move(value)); return *this; }
    inline PendingCloudwatchLogsExports& AddLogTypesToEnable(const char* value) { m_logTypesToEnableHasBeenSet = true; m_logTypesToEnable.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Log types that are in the process of being enabled. After they are enabled,
     * these log types are exported to CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogTypesToDisable() const{ return m_logTypesToDisable; }
    inline bool LogTypesToDisableHasBeenSet() const { return m_logTypesToDisableHasBeenSet; }
    inline void SetLogTypesToDisable(const Aws::Vector<Aws::String>& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable = value; }
    inline void SetLogTypesToDisable(Aws::Vector<Aws::String>&& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable = std::move(value); }
    inline PendingCloudwatchLogsExports& WithLogTypesToDisable(const Aws::Vector<Aws::String>& value) { SetLogTypesToDisable(value); return *this;}
    inline PendingCloudwatchLogsExports& WithLogTypesToDisable(Aws::Vector<Aws::String>&& value) { SetLogTypesToDisable(std::move(value)); return *this;}
    inline PendingCloudwatchLogsExports& AddLogTypesToDisable(const Aws::String& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable.push_back(value); return *this; }
    inline PendingCloudwatchLogsExports& AddLogTypesToDisable(Aws::String&& value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable.push_back(std::move(value)); return *this; }
    inline PendingCloudwatchLogsExports& AddLogTypesToDisable(const char* value) { m_logTypesToDisableHasBeenSet = true; m_logTypesToDisable.push_back(value); return *this; }
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
