/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>A range of double values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DoubleRange">AWS API
   * Reference</a></p>
   */
  class DoubleRange
  {
  public:
    AWS_RDS_API DoubleRange();
    AWS_RDS_API DoubleRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DoubleRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum value in the range.</p>
     */
    inline double GetFrom() const{ return m_from; }

    /**
     * <p>The minimum value in the range.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The minimum value in the range.</p>
     */
    inline void SetFrom(double value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The minimum value in the range.</p>
     */
    inline DoubleRange& WithFrom(double value) { SetFrom(value); return *this;}


    /**
     * <p>The maximum value in the range.</p>
     */
    inline double GetTo() const{ return m_to; }

    /**
     * <p>The maximum value in the range.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The maximum value in the range.</p>
     */
    inline void SetTo(double value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The maximum value in the range.</p>
     */
    inline DoubleRange& WithTo(double value) { SetTo(value); return *this;}

  private:

    double m_from;
    bool m_fromHasBeenSet = false;

    double m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
