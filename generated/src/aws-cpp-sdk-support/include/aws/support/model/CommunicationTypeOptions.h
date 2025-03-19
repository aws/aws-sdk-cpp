/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/SupportedHour.h>
#include <aws/support/model/DateInterval.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Support
{
namespace Model
{

  /**
   * <p>A JSON-formatted object that contains the CommunicationTypeOptions for
   * creating a case for a certain communication channel. It is contained in the
   * response from a <a>DescribeCreateCaseOptions</a> request.
   * <b>CommunicationTypeOptions</b> contains the following fields:</p> <ul> <li> <p>
   * <b>datesWithoutSupport</b> - A JSON-formatted list containing date and time
   * ranges for periods without support in UTC time. Date and time format is RFC 3339
   * : 'yyyy-MM-dd'T'HH:mm:ss.SSSZZ'. </p> </li> <li> <p> <b>supportedHours</b> - A
   * JSON-formatted list containing time ranges when support are available. Time
   * format is RFC 3339 : 'HH:mm:ss.SSS'. </p> </li> <li> <p> <b>type</b> - A string
   * value indicating the communication type that the aforementioned rules apply to.
   * At the moment the type value can assume one of 3 values at the moment
   * <code>chat</code>, <code>web</code> and <code>call</code>. </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CommunicationTypeOptions">AWS
   * API Reference</a></p>
   */
  class CommunicationTypeOptions
  {
  public:
    AWS_SUPPORT_API CommunicationTypeOptions() = default;
    AWS_SUPPORT_API CommunicationTypeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API CommunicationTypeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A string value indicating the communication type. At the moment the type
     * value can assume one of 3 values at the moment chat, web and call. </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    CommunicationTypeOptions& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A JSON-formatted list containing time ranges when support is available. </p>
     */
    inline const Aws::Vector<SupportedHour>& GetSupportedHours() const { return m_supportedHours; }
    inline bool SupportedHoursHasBeenSet() const { return m_supportedHoursHasBeenSet; }
    template<typename SupportedHoursT = Aws::Vector<SupportedHour>>
    void SetSupportedHours(SupportedHoursT&& value) { m_supportedHoursHasBeenSet = true; m_supportedHours = std::forward<SupportedHoursT>(value); }
    template<typename SupportedHoursT = Aws::Vector<SupportedHour>>
    CommunicationTypeOptions& WithSupportedHours(SupportedHoursT&& value) { SetSupportedHours(std::forward<SupportedHoursT>(value)); return *this;}
    template<typename SupportedHoursT = SupportedHour>
    CommunicationTypeOptions& AddSupportedHours(SupportedHoursT&& value) { m_supportedHoursHasBeenSet = true; m_supportedHours.emplace_back(std::forward<SupportedHoursT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A JSON-formatted list containing date and time ranges for periods without
     * support </p>
     */
    inline const Aws::Vector<DateInterval>& GetDatesWithoutSupport() const { return m_datesWithoutSupport; }
    inline bool DatesWithoutSupportHasBeenSet() const { return m_datesWithoutSupportHasBeenSet; }
    template<typename DatesWithoutSupportT = Aws::Vector<DateInterval>>
    void SetDatesWithoutSupport(DatesWithoutSupportT&& value) { m_datesWithoutSupportHasBeenSet = true; m_datesWithoutSupport = std::forward<DatesWithoutSupportT>(value); }
    template<typename DatesWithoutSupportT = Aws::Vector<DateInterval>>
    CommunicationTypeOptions& WithDatesWithoutSupport(DatesWithoutSupportT&& value) { SetDatesWithoutSupport(std::forward<DatesWithoutSupportT>(value)); return *this;}
    template<typename DatesWithoutSupportT = DateInterval>
    CommunicationTypeOptions& AddDatesWithoutSupport(DatesWithoutSupportT&& value) { m_datesWithoutSupportHasBeenSet = true; m_datesWithoutSupport.emplace_back(std::forward<DatesWithoutSupportT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<SupportedHour> m_supportedHours;
    bool m_supportedHoursHasBeenSet = false;

    Aws::Vector<DateInterval> m_datesWithoutSupport;
    bool m_datesWithoutSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
