/**
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
   * <p>This data type is used as a response element in the
   * <code>DescribeReservedDBInstances</code> and
   * <code>DescribeReservedDBInstancesOfferings</code> actions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RecurringCharge">AWS
   * API Reference</a></p>
   */
  class RecurringCharge
  {
  public:
    AWS_RDS_API RecurringCharge() = default;
    AWS_RDS_API RecurringCharge(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API RecurringCharge& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The amount of the recurring charge.</p>
     */
    inline double GetRecurringChargeAmount() const { return m_recurringChargeAmount; }
    inline bool RecurringChargeAmountHasBeenSet() const { return m_recurringChargeAmountHasBeenSet; }
    inline void SetRecurringChargeAmount(double value) { m_recurringChargeAmountHasBeenSet = true; m_recurringChargeAmount = value; }
    inline RecurringCharge& WithRecurringChargeAmount(double value) { SetRecurringChargeAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency of the recurring charge.</p>
     */
    inline const Aws::String& GetRecurringChargeFrequency() const { return m_recurringChargeFrequency; }
    inline bool RecurringChargeFrequencyHasBeenSet() const { return m_recurringChargeFrequencyHasBeenSet; }
    template<typename RecurringChargeFrequencyT = Aws::String>
    void SetRecurringChargeFrequency(RecurringChargeFrequencyT&& value) { m_recurringChargeFrequencyHasBeenSet = true; m_recurringChargeFrequency = std::forward<RecurringChargeFrequencyT>(value); }
    template<typename RecurringChargeFrequencyT = Aws::String>
    RecurringCharge& WithRecurringChargeFrequency(RecurringChargeFrequencyT&& value) { SetRecurringChargeFrequency(std::forward<RecurringChargeFrequencyT>(value)); return *this;}
    ///@}
  private:

    double m_recurringChargeAmount{0.0};
    bool m_recurringChargeAmountHasBeenSet = false;

    Aws::String m_recurringChargeFrequency;
    bool m_recurringChargeFrequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
