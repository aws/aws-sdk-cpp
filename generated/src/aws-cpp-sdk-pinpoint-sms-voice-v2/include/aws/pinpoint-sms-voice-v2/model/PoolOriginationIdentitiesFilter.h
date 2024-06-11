﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/PoolOriginationIdentitiesFilterName.h>
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
   * <p>Information about origination identities associated with a pool that meets a
   * specified criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PoolOriginationIdentitiesFilter">AWS
   * API Reference</a></p>
   */
  class PoolOriginationIdentitiesFilter
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PoolOriginationIdentitiesFilter();
    AWS_PINPOINTSMSVOICEV2_API PoolOriginationIdentitiesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API PoolOriginationIdentitiesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the attribute to filter on.</p>
     */
    inline const PoolOriginationIdentitiesFilterName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const PoolOriginationIdentitiesFilterName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(PoolOriginationIdentitiesFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline PoolOriginationIdentitiesFilter& WithName(const PoolOriginationIdentitiesFilterName& value) { SetName(value); return *this;}
    inline PoolOriginationIdentitiesFilter& WithName(PoolOriginationIdentitiesFilterName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array values to filter for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline PoolOriginationIdentitiesFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline PoolOriginationIdentitiesFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline PoolOriginationIdentitiesFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline PoolOriginationIdentitiesFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline PoolOriginationIdentitiesFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    PoolOriginationIdentitiesFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
