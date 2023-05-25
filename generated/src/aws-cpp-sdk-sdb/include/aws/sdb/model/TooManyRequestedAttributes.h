/**
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
   * <p>Too many attributes requested.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/TooManyRequestedAttributes">AWS
   * API Reference</a></p>
   */
  class TooManyRequestedAttributes
  {
  public:
    AWS_SIMPLEDB_API TooManyRequestedAttributes();
    AWS_SIMPLEDB_API TooManyRequestedAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SIMPLEDB_API TooManyRequestedAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SIMPLEDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline double GetBoxUsage() const{ return m_boxUsage; }

    
    inline bool BoxUsageHasBeenSet() const { return m_boxUsageHasBeenSet; }

    
    inline void SetBoxUsage(double value) { m_boxUsageHasBeenSet = true; m_boxUsage = value; }

    
    inline TooManyRequestedAttributes& WithBoxUsage(double value) { SetBoxUsage(value); return *this;}

  private:

    double m_boxUsage;
    bool m_boxUsageHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
