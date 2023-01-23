/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/OptedOutFilterName.h>
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
   * <p>The information for opted out numbers that meet a specified
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/OptedOutFilter">AWS
   * API Reference</a></p>
   */
  class OptedOutFilter
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API OptedOutFilter();
    AWS_PINPOINTSMSVOICEV2_API OptedOutFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API OptedOutFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline const OptedOutFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline void SetName(const OptedOutFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline void SetName(OptedOutFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline OptedOutFilter& WithName(const OptedOutFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline OptedOutFilter& WithName(OptedOutFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>An array of values to filter for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>An array of values to filter for.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array of values to filter for.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array of values to filter for.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array of values to filter for.</p>
     */
    inline OptedOutFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>An array of values to filter for.</p>
     */
    inline OptedOutFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array of values to filter for.</p>
     */
    inline OptedOutFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array of values to filter for.</p>
     */
    inline OptedOutFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of values to filter for.</p>
     */
    inline OptedOutFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    OptedOutFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
