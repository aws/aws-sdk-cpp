﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SimpleDB
{
namespace Model
{

  /**
   * <p>The item name was specified more than once. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/DuplicateItemName">AWS
   * API Reference</a></p>
   */
  class DuplicateItemName
  {
  public:
    AWS_SIMPLEDB_API DuplicateItemName() = default;
    AWS_SIMPLEDB_API DuplicateItemName(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SIMPLEDB_API DuplicateItemName& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline double GetBoxUsage() const { return m_boxUsage; }
    inline bool BoxUsageHasBeenSet() const { return m_boxUsageHasBeenSet; }
    inline void SetBoxUsage(double value) { m_boxUsageHasBeenSet = true; m_boxUsage = value; }
    inline DuplicateItemName& WithBoxUsage(double value) { SetBoxUsage(value); return *this;}
    ///@}
  private:

    double m_boxUsage{0.0};
    bool m_boxUsageHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
