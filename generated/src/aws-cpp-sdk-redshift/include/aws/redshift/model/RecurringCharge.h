/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a recurring charge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RecurringCharge">AWS
   * API Reference</a></p>
   */
  class RecurringCharge
  {
  public:
    AWS_REDSHIFT_API RecurringCharge() = default;
    AWS_REDSHIFT_API RecurringCharge(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API RecurringCharge& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The amount charged per the period of time specified by the recurring charge
     * frequency.</p>
     */
    inline double GetRecurringChargeAmount() const { return m_recurringChargeAmount; }
    inline bool RecurringChargeAmountHasBeenSet() const { return m_recurringChargeAmountHasBeenSet; }
    inline void SetRecurringChargeAmount(double value) { m_recurringChargeAmountHasBeenSet = true; m_recurringChargeAmount = value; }
    inline RecurringCharge& WithRecurringChargeAmount(double value) { SetRecurringChargeAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency at which the recurring charge amount is applied.</p>
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
} // namespace Redshift
} // namespace Aws
