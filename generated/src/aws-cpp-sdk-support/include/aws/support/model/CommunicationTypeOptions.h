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
    AWS_SUPPORT_API CommunicationTypeOptions();
    AWS_SUPPORT_API CommunicationTypeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API CommunicationTypeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A string value indicating the communication type. At the moment the type
     * value can assume one of 3 values at the moment chat, web and call. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p> A string value indicating the communication type. At the moment the type
     * value can assume one of 3 values at the moment chat, web and call. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> A string value indicating the communication type. At the moment the type
     * value can assume one of 3 values at the moment chat, web and call. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> A string value indicating the communication type. At the moment the type
     * value can assume one of 3 values at the moment chat, web and call. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> A string value indicating the communication type. At the moment the type
     * value can assume one of 3 values at the moment chat, web and call. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p> A string value indicating the communication type. At the moment the type
     * value can assume one of 3 values at the moment chat, web and call. </p>
     */
    inline CommunicationTypeOptions& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p> A string value indicating the communication type. At the moment the type
     * value can assume one of 3 values at the moment chat, web and call. </p>
     */
    inline CommunicationTypeOptions& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> A string value indicating the communication type. At the moment the type
     * value can assume one of 3 values at the moment chat, web and call. </p>
     */
    inline CommunicationTypeOptions& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p> A JSON-formatted list containing time ranges when support is available. </p>
     */
    inline const Aws::Vector<SupportedHour>& GetSupportedHours() const{ return m_supportedHours; }

    /**
     * <p> A JSON-formatted list containing time ranges when support is available. </p>
     */
    inline bool SupportedHoursHasBeenSet() const { return m_supportedHoursHasBeenSet; }

    /**
     * <p> A JSON-formatted list containing time ranges when support is available. </p>
     */
    inline void SetSupportedHours(const Aws::Vector<SupportedHour>& value) { m_supportedHoursHasBeenSet = true; m_supportedHours = value; }

    /**
     * <p> A JSON-formatted list containing time ranges when support is available. </p>
     */
    inline void SetSupportedHours(Aws::Vector<SupportedHour>&& value) { m_supportedHoursHasBeenSet = true; m_supportedHours = std::move(value); }

    /**
     * <p> A JSON-formatted list containing time ranges when support is available. </p>
     */
    inline CommunicationTypeOptions& WithSupportedHours(const Aws::Vector<SupportedHour>& value) { SetSupportedHours(value); return *this;}

    /**
     * <p> A JSON-formatted list containing time ranges when support is available. </p>
     */
    inline CommunicationTypeOptions& WithSupportedHours(Aws::Vector<SupportedHour>&& value) { SetSupportedHours(std::move(value)); return *this;}

    /**
     * <p> A JSON-formatted list containing time ranges when support is available. </p>
     */
    inline CommunicationTypeOptions& AddSupportedHours(const SupportedHour& value) { m_supportedHoursHasBeenSet = true; m_supportedHours.push_back(value); return *this; }

    /**
     * <p> A JSON-formatted list containing time ranges when support is available. </p>
     */
    inline CommunicationTypeOptions& AddSupportedHours(SupportedHour&& value) { m_supportedHoursHasBeenSet = true; m_supportedHours.push_back(std::move(value)); return *this; }


    /**
     * <p> A JSON-formatted list containing date and time ranges for periods without
     * support </p>
     */
    inline const Aws::Vector<DateInterval>& GetDatesWithoutSupport() const{ return m_datesWithoutSupport; }

    /**
     * <p> A JSON-formatted list containing date and time ranges for periods without
     * support </p>
     */
    inline bool DatesWithoutSupportHasBeenSet() const { return m_datesWithoutSupportHasBeenSet; }

    /**
     * <p> A JSON-formatted list containing date and time ranges for periods without
     * support </p>
     */
    inline void SetDatesWithoutSupport(const Aws::Vector<DateInterval>& value) { m_datesWithoutSupportHasBeenSet = true; m_datesWithoutSupport = value; }

    /**
     * <p> A JSON-formatted list containing date and time ranges for periods without
     * support </p>
     */
    inline void SetDatesWithoutSupport(Aws::Vector<DateInterval>&& value) { m_datesWithoutSupportHasBeenSet = true; m_datesWithoutSupport = std::move(value); }

    /**
     * <p> A JSON-formatted list containing date and time ranges for periods without
     * support </p>
     */
    inline CommunicationTypeOptions& WithDatesWithoutSupport(const Aws::Vector<DateInterval>& value) { SetDatesWithoutSupport(value); return *this;}

    /**
     * <p> A JSON-formatted list containing date and time ranges for periods without
     * support </p>
     */
    inline CommunicationTypeOptions& WithDatesWithoutSupport(Aws::Vector<DateInterval>&& value) { SetDatesWithoutSupport(std::move(value)); return *this;}

    /**
     * <p> A JSON-formatted list containing date and time ranges for periods without
     * support </p>
     */
    inline CommunicationTypeOptions& AddDatesWithoutSupport(const DateInterval& value) { m_datesWithoutSupportHasBeenSet = true; m_datesWithoutSupport.push_back(value); return *this; }

    /**
     * <p> A JSON-formatted list containing date and time ranges for periods without
     * support </p>
     */
    inline CommunicationTypeOptions& AddDatesWithoutSupport(DateInterval&& value) { m_datesWithoutSupportHasBeenSet = true; m_datesWithoutSupport.push_back(std::move(value)); return *this; }

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
