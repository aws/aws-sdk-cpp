/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
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
namespace OpsWorksCM
{
namespace Model
{

  /**
   * <p>Stores account attributes. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/AccountAttribute">AWS
   * API Reference</a></p>
   */
  class AccountAttribute
  {
  public:
    AWS_OPSWORKSCM_API AccountAttribute();
    AWS_OPSWORKSCM_API AccountAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API AccountAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of current servers/maximum number of
     * servers allowed. By default, you can have a maximum of 10 servers. </p> </li>
     * <li> <p> <i>ManualBackupLimit:</i> The number of current manual backups/maximum
     * number of backups allowed. By default, you can have a maximum of 50 manual
     * backups saved. </p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of current servers/maximum number of
     * servers allowed. By default, you can have a maximum of 10 servers. </p> </li>
     * <li> <p> <i>ManualBackupLimit:</i> The number of current manual backups/maximum
     * number of backups allowed. By default, you can have a maximum of 50 manual
     * backups saved. </p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of current servers/maximum number of
     * servers allowed. By default, you can have a maximum of 10 servers. </p> </li>
     * <li> <p> <i>ManualBackupLimit:</i> The number of current manual backups/maximum
     * number of backups allowed. By default, you can have a maximum of 50 manual
     * backups saved. </p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of current servers/maximum number of
     * servers allowed. By default, you can have a maximum of 10 servers. </p> </li>
     * <li> <p> <i>ManualBackupLimit:</i> The number of current manual backups/maximum
     * number of backups allowed. By default, you can have a maximum of 50 manual
     * backups saved. </p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of current servers/maximum number of
     * servers allowed. By default, you can have a maximum of 10 servers. </p> </li>
     * <li> <p> <i>ManualBackupLimit:</i> The number of current manual backups/maximum
     * number of backups allowed. By default, you can have a maximum of 50 manual
     * backups saved. </p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of current servers/maximum number of
     * servers allowed. By default, you can have a maximum of 10 servers. </p> </li>
     * <li> <p> <i>ManualBackupLimit:</i> The number of current manual backups/maximum
     * number of backups allowed. By default, you can have a maximum of 50 manual
     * backups saved. </p> </li> </ul>
     */
    inline AccountAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of current servers/maximum number of
     * servers allowed. By default, you can have a maximum of 10 servers. </p> </li>
     * <li> <p> <i>ManualBackupLimit:</i> The number of current manual backups/maximum
     * number of backups allowed. By default, you can have a maximum of 50 manual
     * backups saved. </p> </li> </ul>
     */
    inline AccountAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of current servers/maximum number of
     * servers allowed. By default, you can have a maximum of 10 servers. </p> </li>
     * <li> <p> <i>ManualBackupLimit:</i> The number of current manual backups/maximum
     * number of backups allowed. By default, you can have a maximum of 50 manual
     * backups saved. </p> </li> </ul>
     */
    inline AccountAttribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The maximum allowed value. </p>
     */
    inline int GetMaximum() const{ return m_maximum; }

    /**
     * <p> The maximum allowed value. </p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p> The maximum allowed value. </p>
     */
    inline void SetMaximum(int value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p> The maximum allowed value. </p>
     */
    inline AccountAttribute& WithMaximum(int value) { SetMaximum(value); return *this;}


    /**
     * <p> The current usage, such as the current number of servers that are associated
     * with the account. </p>
     */
    inline int GetUsed() const{ return m_used; }

    /**
     * <p> The current usage, such as the current number of servers that are associated
     * with the account. </p>
     */
    inline bool UsedHasBeenSet() const { return m_usedHasBeenSet; }

    /**
     * <p> The current usage, such as the current number of servers that are associated
     * with the account. </p>
     */
    inline void SetUsed(int value) { m_usedHasBeenSet = true; m_used = value; }

    /**
     * <p> The current usage, such as the current number of servers that are associated
     * with the account. </p>
     */
    inline AccountAttribute& WithUsed(int value) { SetUsed(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_maximum;
    bool m_maximumHasBeenSet = false;

    int m_used;
    bool m_usedHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
