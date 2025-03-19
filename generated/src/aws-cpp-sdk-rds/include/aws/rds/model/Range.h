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
   * <p>A range of integer values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Range">AWS API
   * Reference</a></p>
   */
  class Range
  {
  public:
    AWS_RDS_API Range() = default;
    AWS_RDS_API Range(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API Range& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The minimum value in the range.</p>
     */
    inline int GetFrom() const { return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    inline void SetFrom(int value) { m_fromHasBeenSet = true; m_from = value; }
    inline Range& WithFrom(int value) { SetFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value in the range.</p>
     */
    inline int GetTo() const { return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    inline void SetTo(int value) { m_toHasBeenSet = true; m_to = value; }
    inline Range& WithTo(int value) { SetTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step value for the range. For example, if you have a range of 5,000 to
     * 10,000, with a step value of 1,000, the valid values start at 5,000 and step up
     * by 1,000. Even though 7,500 is within the range, it isn't a valid value for the
     * range. The valid values are 5,000, 6,000, 7,000, 8,000...</p>
     */
    inline int GetStep() const { return m_step; }
    inline bool StepHasBeenSet() const { return m_stepHasBeenSet; }
    inline void SetStep(int value) { m_stepHasBeenSet = true; m_step = value; }
    inline Range& WithStep(int value) { SetStep(value); return *this;}
    ///@}
  private:

    int m_from{0};
    bool m_fromHasBeenSet = false;

    int m_to{0};
    bool m_toHasBeenSet = false;

    int m_step{0};
    bool m_stepHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
