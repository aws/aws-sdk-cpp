/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Stores the holiday featurization attributes applicable to each item of
   * time-series datasets during the training of a forecasting model. This allows the
   * model to identify patterns associated with specific holidays.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HolidayConfigAttributes">AWS
   * API Reference</a></p>
   */
  class HolidayConfigAttributes
  {
  public:
    AWS_SAGEMAKER_API HolidayConfigAttributes();
    AWS_SAGEMAKER_API HolidayConfigAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HolidayConfigAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The country code for the holiday calendar.</p> <p>For the list of public
     * holiday calendars supported by AutoML job V2, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-timeseries-forecasting-holiday-calendars.html#holiday-country-codes">Country
     * Codes</a>. Use the country code corresponding to the country of your choice.</p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>The country code for the holiday calendar.</p> <p>For the list of public
     * holiday calendars supported by AutoML job V2, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-timeseries-forecasting-holiday-calendars.html#holiday-country-codes">Country
     * Codes</a>. Use the country code corresponding to the country of your choice.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>The country code for the holiday calendar.</p> <p>For the list of public
     * holiday calendars supported by AutoML job V2, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-timeseries-forecasting-holiday-calendars.html#holiday-country-codes">Country
     * Codes</a>. Use the country code corresponding to the country of your choice.</p>
     */
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>The country code for the holiday calendar.</p> <p>For the list of public
     * holiday calendars supported by AutoML job V2, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-timeseries-forecasting-holiday-calendars.html#holiday-country-codes">Country
     * Codes</a>. Use the country code corresponding to the country of your choice.</p>
     */
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>The country code for the holiday calendar.</p> <p>For the list of public
     * holiday calendars supported by AutoML job V2, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-timeseries-forecasting-holiday-calendars.html#holiday-country-codes">Country
     * Codes</a>. Use the country code corresponding to the country of your choice.</p>
     */
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }

    /**
     * <p>The country code for the holiday calendar.</p> <p>For the list of public
     * holiday calendars supported by AutoML job V2, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-timeseries-forecasting-holiday-calendars.html#holiday-country-codes">Country
     * Codes</a>. Use the country code corresponding to the country of your choice.</p>
     */
    inline HolidayConfigAttributes& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}

    /**
     * <p>The country code for the holiday calendar.</p> <p>For the list of public
     * holiday calendars supported by AutoML job V2, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-timeseries-forecasting-holiday-calendars.html#holiday-country-codes">Country
     * Codes</a>. Use the country code corresponding to the country of your choice.</p>
     */
    inline HolidayConfigAttributes& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}

    /**
     * <p>The country code for the holiday calendar.</p> <p>For the list of public
     * holiday calendars supported by AutoML job V2, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-timeseries-forecasting-holiday-calendars.html#holiday-country-codes">Country
     * Codes</a>. Use the country code corresponding to the country of your choice.</p>
     */
    inline HolidayConfigAttributes& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}

  private:

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
