/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides Amazon Web Services account information of the user involved in an
   * Amazon GuardDuty Extended Threat Detection attack sequence. GuardDuty generates
   * an attack sequence finding when multiple events align to a potentially
   * suspicious activity. To receive GuardDuty attack sequence findings in Security
   * Hub, you must have GuardDuty enabled. For more information, see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty-extended-threat-detection.html">GuardDuty
   * Extended Threat Detection </a> in the <i>Amazon GuardDuty User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UserAccount">AWS
   * API Reference</a></p>
   */
  class UserAccount
  {
  public:
    AWS_SECURITYHUB_API UserAccount();
    AWS_SECURITYHUB_API UserAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API UserAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the user account involved in the attack sequence.
     * </p>
     */
    inline const Aws::String& GetUid() const{ return m_uid; }
    inline bool UidHasBeenSet() const { return m_uidHasBeenSet; }
    inline void SetUid(const Aws::String& value) { m_uidHasBeenSet = true; m_uid = value; }
    inline void SetUid(Aws::String&& value) { m_uidHasBeenSet = true; m_uid = std::move(value); }
    inline void SetUid(const char* value) { m_uidHasBeenSet = true; m_uid.assign(value); }
    inline UserAccount& WithUid(const Aws::String& value) { SetUid(value); return *this;}
    inline UserAccount& WithUid(Aws::String&& value) { SetUid(std::move(value)); return *this;}
    inline UserAccount& WithUid(const char* value) { SetUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the user account involved in the attack sequence. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UserAccount& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UserAccount& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UserAccount& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_uid;
    bool m_uidHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
