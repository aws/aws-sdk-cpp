/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p> A filter condition that specifies the object age range of included objects
   * in days. Only integers are supported. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/MatchObjectAge">AWS
   * API Reference</a></p>
   */
  class MatchObjectAge
  {
  public:
    AWS_S3CONTROL_API MatchObjectAge();
    AWS_S3CONTROL_API MatchObjectAge(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API MatchObjectAge& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> Specifies the maximum object age in days. Must be a positive whole number,
     * greater than the minimum object age and less than or equal to 2,147,483,647.
     * </p>
     */
    inline int GetDaysGreaterThan() const{ return m_daysGreaterThan; }

    /**
     * <p> Specifies the maximum object age in days. Must be a positive whole number,
     * greater than the minimum object age and less than or equal to 2,147,483,647.
     * </p>
     */
    inline bool DaysGreaterThanHasBeenSet() const { return m_daysGreaterThanHasBeenSet; }

    /**
     * <p> Specifies the maximum object age in days. Must be a positive whole number,
     * greater than the minimum object age and less than or equal to 2,147,483,647.
     * </p>
     */
    inline void SetDaysGreaterThan(int value) { m_daysGreaterThanHasBeenSet = true; m_daysGreaterThan = value; }

    /**
     * <p> Specifies the maximum object age in days. Must be a positive whole number,
     * greater than the minimum object age and less than or equal to 2,147,483,647.
     * </p>
     */
    inline MatchObjectAge& WithDaysGreaterThan(int value) { SetDaysGreaterThan(value); return *this;}


    /**
     * <p> Specifies the minimum object age in days. The value must be a positive whole
     * number, greater than 0 and less than or equal to 2,147,483,647. </p>
     */
    inline int GetDaysLessThan() const{ return m_daysLessThan; }

    /**
     * <p> Specifies the minimum object age in days. The value must be a positive whole
     * number, greater than 0 and less than or equal to 2,147,483,647. </p>
     */
    inline bool DaysLessThanHasBeenSet() const { return m_daysLessThanHasBeenSet; }

    /**
     * <p> Specifies the minimum object age in days. The value must be a positive whole
     * number, greater than 0 and less than or equal to 2,147,483,647. </p>
     */
    inline void SetDaysLessThan(int value) { m_daysLessThanHasBeenSet = true; m_daysLessThan = value; }

    /**
     * <p> Specifies the minimum object age in days. The value must be a positive whole
     * number, greater than 0 and less than or equal to 2,147,483,647. </p>
     */
    inline MatchObjectAge& WithDaysLessThan(int value) { SetDaysLessThan(value); return *this;}

  private:

    int m_daysGreaterThan;
    bool m_daysGreaterThanHasBeenSet = false;

    int m_daysLessThan;
    bool m_daysLessThanHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
