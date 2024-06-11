﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsIamInstanceProfileRole.h>
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
   * <p>Information about an instance profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamInstanceProfile">AWS
   * API Reference</a></p>
   */
  class AwsIamInstanceProfile
  {
  public:
    AWS_SECURITYHUB_API AwsIamInstanceProfile();
    AWS_SECURITYHUB_API AwsIamInstanceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamInstanceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the instance profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AwsIamInstanceProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AwsIamInstanceProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AwsIamInstanceProfile& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the instance profile was created.</p> <p>This field accepts
     * only the specified formats. Timestamps can end with <code>Z</code> or <code>("+"
     * / "-") time-hour [":" time-minute]</code>. The time-secfrac after seconds is
     * limited to a maximum of 9 digits. The offset is bounded by +/-18:00. Here are
     * valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::String& GetCreateDate() const{ return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    inline void SetCreateDate(const Aws::String& value) { m_createDateHasBeenSet = true; m_createDate = value; }
    inline void SetCreateDate(Aws::String&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }
    inline void SetCreateDate(const char* value) { m_createDateHasBeenSet = true; m_createDate.assign(value); }
    inline AwsIamInstanceProfile& WithCreateDate(const Aws::String& value) { SetCreateDate(value); return *this;}
    inline AwsIamInstanceProfile& WithCreateDate(Aws::String&& value) { SetCreateDate(std::move(value)); return *this;}
    inline AwsIamInstanceProfile& WithCreateDate(const char* value) { SetCreateDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileId() const{ return m_instanceProfileId; }
    inline bool InstanceProfileIdHasBeenSet() const { return m_instanceProfileIdHasBeenSet; }
    inline void SetInstanceProfileId(const Aws::String& value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId = value; }
    inline void SetInstanceProfileId(Aws::String&& value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId = std::move(value); }
    inline void SetInstanceProfileId(const char* value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId.assign(value); }
    inline AwsIamInstanceProfile& WithInstanceProfileId(const Aws::String& value) { SetInstanceProfileId(value); return *this;}
    inline AwsIamInstanceProfile& WithInstanceProfileId(Aws::String&& value) { SetInstanceProfileId(std::move(value)); return *this;}
    inline AwsIamInstanceProfile& WithInstanceProfileId(const char* value) { SetInstanceProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileName() const{ return m_instanceProfileName; }
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }
    inline void SetInstanceProfileName(const Aws::String& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = value; }
    inline void SetInstanceProfileName(Aws::String&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::move(value); }
    inline void SetInstanceProfileName(const char* value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName.assign(value); }
    inline AwsIamInstanceProfile& WithInstanceProfileName(const Aws::String& value) { SetInstanceProfileName(value); return *this;}
    inline AwsIamInstanceProfile& WithInstanceProfileName(Aws::String&& value) { SetInstanceProfileName(std::move(value)); return *this;}
    inline AwsIamInstanceProfile& WithInstanceProfileName(const char* value) { SetInstanceProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the instance profile.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline AwsIamInstanceProfile& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline AwsIamInstanceProfile& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline AwsIamInstanceProfile& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The roles associated with the instance profile.</p>
     */
    inline const Aws::Vector<AwsIamInstanceProfileRole>& GetRoles() const{ return m_roles; }
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }
    inline void SetRoles(const Aws::Vector<AwsIamInstanceProfileRole>& value) { m_rolesHasBeenSet = true; m_roles = value; }
    inline void SetRoles(Aws::Vector<AwsIamInstanceProfileRole>&& value) { m_rolesHasBeenSet = true; m_roles = std::move(value); }
    inline AwsIamInstanceProfile& WithRoles(const Aws::Vector<AwsIamInstanceProfileRole>& value) { SetRoles(value); return *this;}
    inline AwsIamInstanceProfile& WithRoles(Aws::Vector<AwsIamInstanceProfileRole>&& value) { SetRoles(std::move(value)); return *this;}
    inline AwsIamInstanceProfile& AddRoles(const AwsIamInstanceProfileRole& value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }
    inline AwsIamInstanceProfile& AddRoles(AwsIamInstanceProfileRole&& value) { m_rolesHasBeenSet = true; m_roles.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_instanceProfileId;
    bool m_instanceProfileIdHasBeenSet = false;

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<AwsIamInstanceProfileRole> m_roles;
    bool m_rolesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
