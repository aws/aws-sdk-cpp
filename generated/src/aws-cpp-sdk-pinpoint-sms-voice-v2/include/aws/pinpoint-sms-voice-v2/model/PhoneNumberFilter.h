/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/PhoneNumberFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The information for a phone number that meets a specified
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PhoneNumberFilter">AWS
   * API Reference</a></p>
   */
  class PhoneNumberFilter
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PhoneNumberFilter();
    AWS_PINPOINTSMSVOICEV2_API PhoneNumberFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API PhoneNumberFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline const PhoneNumberFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline void SetName(const PhoneNumberFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline void SetName(PhoneNumberFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline PhoneNumberFilter& WithName(const PhoneNumberFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline PhoneNumberFilter& WithName(PhoneNumberFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>An array values to filter for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>An array values to filter for.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array values to filter for.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array values to filter for.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array values to filter for.</p>
     */
    inline PhoneNumberFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>An array values to filter for.</p>
     */
    inline PhoneNumberFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array values to filter for.</p>
     */
    inline PhoneNumberFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array values to filter for.</p>
     */
    inline PhoneNumberFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>An array values to filter for.</p>
     */
    inline PhoneNumberFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    PhoneNumberFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
