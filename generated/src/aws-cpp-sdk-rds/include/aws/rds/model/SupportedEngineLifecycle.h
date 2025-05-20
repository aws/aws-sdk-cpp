/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/rds/model/LifecycleSupportName.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>This data type is used as a response element in the operation
   * <code>DescribeDBMajorEngineVersions</code>.</p> <p>You can use the information
   * that this data type returns to plan for upgrades.</p> <p>This data type only
   * returns information for the open source engines Amazon RDS for MariaDB, Amazon
   * RDS for MySQL, Amazon RDS for PostgreSQL, Aurora MySQL, and Aurora
   * PostgreSQL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/SupportedEngineLifecycle">AWS
   * API Reference</a></p>
   */
  class SupportedEngineLifecycle
  {
  public:
    AWS_RDS_API SupportedEngineLifecycle() = default;
    AWS_RDS_API SupportedEngineLifecycle(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API SupportedEngineLifecycle& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of lifecycle support that the engine version is in.</p> <p>This
     * parameter returns the following values:</p> <ul> <li> <p>
     * <code>open-source-rds-standard-support</code> - Indicates RDS standard support
     * or Aurora standard support.</p> </li> <li> <p>
     * <code>open-source-rds-extended-support</code> - Indicates Amazon RDS Extended
     * Support.</p> </li> </ul> <p>For Amazon RDS for MySQL, Amazon RDS for PostgreSQL,
     * Aurora MySQL, and Aurora PostgreSQL, this parameter returns both
     * <code>open-source-rds-standard-support</code> and
     * <code>open-source-rds-extended-support</code>.</p> <p>For Amazon RDS for
     * MariaDB, this parameter only returns the value
     * <code>open-source-rds-standard-support</code>.</p> <p>For information about
     * Amazon RDS Extended Support, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/extended-support.html">Amazon
     * RDS Extended Support with Amazon RDS</a> in the <i>Amazon RDS User Guide</i> and
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/extended-support.html">Amazon
     * RDS Extended Support with Amazon Aurora</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline LifecycleSupportName GetLifecycleSupportName() const { return m_lifecycleSupportName; }
    inline bool LifecycleSupportNameHasBeenSet() const { return m_lifecycleSupportNameHasBeenSet; }
    inline void SetLifecycleSupportName(LifecycleSupportName value) { m_lifecycleSupportNameHasBeenSet = true; m_lifecycleSupportName = value; }
    inline SupportedEngineLifecycle& WithLifecycleSupportName(LifecycleSupportName value) { SetLifecycleSupportName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the type of support returned by
     * <code>LifecycleSupportName</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLifecycleSupportStartDate() const { return m_lifecycleSupportStartDate; }
    inline bool LifecycleSupportStartDateHasBeenSet() const { return m_lifecycleSupportStartDateHasBeenSet; }
    template<typename LifecycleSupportStartDateT = Aws::Utils::DateTime>
    void SetLifecycleSupportStartDate(LifecycleSupportStartDateT&& value) { m_lifecycleSupportStartDateHasBeenSet = true; m_lifecycleSupportStartDate = std::forward<LifecycleSupportStartDateT>(value); }
    template<typename LifecycleSupportStartDateT = Aws::Utils::DateTime>
    SupportedEngineLifecycle& WithLifecycleSupportStartDate(LifecycleSupportStartDateT&& value) { SetLifecycleSupportStartDate(std::forward<LifecycleSupportStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date for the type of support returned by
     * <code>LifecycleSupportName</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLifecycleSupportEndDate() const { return m_lifecycleSupportEndDate; }
    inline bool LifecycleSupportEndDateHasBeenSet() const { return m_lifecycleSupportEndDateHasBeenSet; }
    template<typename LifecycleSupportEndDateT = Aws::Utils::DateTime>
    void SetLifecycleSupportEndDate(LifecycleSupportEndDateT&& value) { m_lifecycleSupportEndDateHasBeenSet = true; m_lifecycleSupportEndDate = std::forward<LifecycleSupportEndDateT>(value); }
    template<typename LifecycleSupportEndDateT = Aws::Utils::DateTime>
    SupportedEngineLifecycle& WithLifecycleSupportEndDate(LifecycleSupportEndDateT&& value) { SetLifecycleSupportEndDate(std::forward<LifecycleSupportEndDateT>(value)); return *this;}
    ///@}
  private:

    LifecycleSupportName m_lifecycleSupportName{LifecycleSupportName::NOT_SET};
    bool m_lifecycleSupportNameHasBeenSet = false;

    Aws::Utils::DateTime m_lifecycleSupportStartDate{};
    bool m_lifecycleSupportStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_lifecycleSupportEndDate{};
    bool m_lifecycleSupportEndDateHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
