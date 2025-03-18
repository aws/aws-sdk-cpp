/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The service setting data structure.</p> <p> <code>ServiceSetting</code> is an
   * account-level setting for an Amazon Web Services service. This setting defines
   * how a user interacts with or uses a service or a feature of a service. For
   * example, if an Amazon Web Services service charges money to the account based on
   * feature or service usage, then the Amazon Web Services service team might create
   * a default setting of "false". This means the user can't use this feature unless
   * they change the setting to "true" and intentionally opt in for a paid
   * feature.</p> <p>Services map a <code>SettingId</code> object to a setting value.
   * Amazon Web Services services teams define the default value for a
   * <code>SettingId</code>. You can't create a new <code>SettingId</code>, but you
   * can overwrite the default value if you have the
   * <code>ssm:UpdateServiceSetting</code> permission for the setting. Use the
   * <a>UpdateServiceSetting</a> API operation to change the default setting. Or, use
   * the <a>ResetServiceSetting</a> to change the value back to the original value
   * defined by the Amazon Web Services service team.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ServiceSetting">AWS
   * API Reference</a></p>
   */
  class ServiceSetting
  {
  public:
    AWS_SSM_API ServiceSetting() = default;
    AWS_SSM_API ServiceSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ServiceSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the service setting.</p>
     */
    inline const Aws::String& GetSettingId() const { return m_settingId; }
    inline bool SettingIdHasBeenSet() const { return m_settingIdHasBeenSet; }
    template<typename SettingIdT = Aws::String>
    void SetSettingId(SettingIdT&& value) { m_settingIdHasBeenSet = true; m_settingId = std::forward<SettingIdT>(value); }
    template<typename SettingIdT = Aws::String>
    ServiceSetting& WithSettingId(SettingIdT&& value) { SetSettingId(std::forward<SettingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the service setting.</p>
     */
    inline const Aws::String& GetSettingValue() const { return m_settingValue; }
    inline bool SettingValueHasBeenSet() const { return m_settingValueHasBeenSet; }
    template<typename SettingValueT = Aws::String>
    void SetSettingValue(SettingValueT&& value) { m_settingValueHasBeenSet = true; m_settingValue = std::forward<SettingValueT>(value); }
    template<typename SettingValueT = Aws::String>
    ServiceSetting& WithSettingValue(SettingValueT&& value) { SetSettingValue(std::forward<SettingValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the service setting was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    ServiceSetting& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the last modified user. This field is populated only if the
     * setting value was overwritten.</p>
     */
    inline const Aws::String& GetLastModifiedUser() const { return m_lastModifiedUser; }
    inline bool LastModifiedUserHasBeenSet() const { return m_lastModifiedUserHasBeenSet; }
    template<typename LastModifiedUserT = Aws::String>
    void SetLastModifiedUser(LastModifiedUserT&& value) { m_lastModifiedUserHasBeenSet = true; m_lastModifiedUser = std::forward<LastModifiedUserT>(value); }
    template<typename LastModifiedUserT = Aws::String>
    ServiceSetting& WithLastModifiedUser(LastModifiedUserT&& value) { SetLastModifiedUser(std::forward<LastModifiedUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the service setting.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    ServiceSetting& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service setting. The value can be Default, Customized or
     * PendingUpdate.</p> <ul> <li> <p>Default: The current setting uses a default
     * value provisioned by the Amazon Web Services service team.</p> </li> <li>
     * <p>Customized: The current setting use a custom value specified by the
     * customer.</p> </li> <li> <p>PendingUpdate: The current setting uses a default or
     * custom value, but a setting change request is pending approval.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ServiceSetting& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_settingId;
    bool m_settingIdHasBeenSet = false;

    Aws::String m_settingValue;
    bool m_settingValueHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_lastModifiedUser;
    bool m_lastModifiedUserHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
