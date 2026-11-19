/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ContactWindow.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>The time window during which the sender prefers to be contacted about an
 * account plan. This information is advisory. Both fields are
 * optional.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/PreferredContactWindow">AWS
 * API Reference</a></p>
 */
class PreferredContactWindow {
 public:
  AWS_PARTNERCENTRALSELLING_API PreferredContactWindow() = default;
  AWS_PARTNERCENTRALSELLING_API PreferredContactWindow(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API PreferredContactWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The preferred time-of-day band for contact.</p>
   */
  inline ContactWindow GetWindow() const { return m_window; }
  inline bool WindowHasBeenSet() const { return m_windowHasBeenSet; }
  inline void SetWindow(ContactWindow value) {
    m_windowHasBeenSet = true;
    m_window = value;
  }
  inline PreferredContactWindow& WithWindow(ContactWindow value) {
    SetWindow(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IANA time zone name that the window is expressed in, for example
   * <code>America/Chicago</code>.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  PreferredContactWindow& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}
 private:
  ContactWindow m_window{ContactWindow::NOT_SET};

  Aws::String m_timezone;
  bool m_windowHasBeenSet = false;
  bool m_timezoneHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
