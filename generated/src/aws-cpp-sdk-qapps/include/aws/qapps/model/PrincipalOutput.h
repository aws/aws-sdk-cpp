/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/PrincipalOutputUserTypeEnum.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The principal for which the permission applies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/PrincipalOutput">AWS
   * API Reference</a></p>
   */
  class PrincipalOutput
  {
  public:
    AWS_QAPPS_API PrincipalOutput();
    AWS_QAPPS_API PrincipalOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API PrincipalOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline PrincipalOutput& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline PrincipalOutput& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline PrincipalOutput& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the user.</p>
     */
    inline const PrincipalOutputUserTypeEnum& GetUserType() const{ return m_userType; }
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
    inline void SetUserType(const PrincipalOutputUserTypeEnum& value) { m_userTypeHasBeenSet = true; m_userType = value; }
    inline void SetUserType(PrincipalOutputUserTypeEnum&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }
    inline PrincipalOutput& WithUserType(const PrincipalOutputUserTypeEnum& value) { SetUserType(value); return *this;}
    inline PrincipalOutput& WithUserType(PrincipalOutputUserTypeEnum&& value) { SetUserType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address associated with the user.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline PrincipalOutput& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline PrincipalOutput& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline PrincipalOutput& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    PrincipalOutputUserTypeEnum m_userType;
    bool m_userTypeHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
