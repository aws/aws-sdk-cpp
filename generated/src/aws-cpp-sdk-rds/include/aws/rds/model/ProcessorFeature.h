﻿/**
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
   * <p>Contains the processor features of a DB instance class.</p> <p>To specify the
   * number of CPU cores, use the <code>coreCount</code> feature name for the
   * <code>Name</code> parameter. To specify the number of threads per core, use the
   * <code>threadsPerCore</code> feature name for the <code>Name</code>
   * parameter.</p> <p>You can set the processor features of the DB instance class
   * for a DB instance when you call one of the following actions:</p> <ul> <li> <p>
   * <code>CreateDBInstance</code> </p> </li> <li> <p> <code>ModifyDBInstance</code>
   * </p> </li> <li> <p> <code>RestoreDBInstanceFromDBSnapshot</code> </p> </li> <li>
   * <p> <code>RestoreDBInstanceFromS3</code> </p> </li> <li> <p>
   * <code>RestoreDBInstanceToPointInTime</code> </p> </li> </ul> <p>You can view the
   * valid processor values for a particular instance class by calling the
   * <code>DescribeOrderableDBInstanceOptions</code> action and specifying the
   * instance class for the <code>DBInstanceClass</code> parameter.</p> <p>In
   * addition, you can use the following actions for DB instance class processor
   * information:</p> <ul> <li> <p> <code>DescribeDBInstances</code> </p> </li> <li>
   * <p> <code>DescribeDBSnapshots</code> </p> </li> <li> <p>
   * <code>DescribeValidDBInstanceModifications</code> </p> </li> </ul> <p>If you
   * call <code>DescribeDBInstances</code>, <code>ProcessorFeature</code> returns
   * non-null values only if the following conditions are met:</p> <ul> <li> <p>You
   * are accessing an Oracle DB instance.</p> </li> <li> <p>Your Oracle DB instance
   * class supports configuring the number of CPU cores and threads per core.</p>
   * </li> <li> <p>The current number CPU cores and threads is set to a non-default
   * value.</p> </li> </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html#USER_ConfigureProcessor">
   * Configuring the processor for a DB instance class in RDS for Oracle</a> in the
   * <i>Amazon RDS User Guide. </i> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ProcessorFeature">AWS
   * API Reference</a></p>
   */
  class ProcessorFeature
  {
  public:
    AWS_RDS_API ProcessorFeature() = default;
    AWS_RDS_API ProcessorFeature(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ProcessorFeature& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the processor feature. Valid names are <code>coreCount</code> and
     * <code>threadsPerCore</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProcessorFeature& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a processor feature.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ProcessorFeature& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
