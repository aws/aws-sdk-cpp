/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>The state of the profile after a read or write operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/ProfileDetail">AWS
   * API Reference</a></p>
   */
  class ProfileDetail
  {
  public:
    AWS_ROLESANYWHERE_API ProfileDetail();
    AWS_ROLESANYWHERE_API ProfileDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API ProfileDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ISO-8601 timestamp when the profile was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The ISO-8601 timestamp when the profile was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The ISO-8601 timestamp when the profile was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The ISO-8601 timestamp when the profile was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The ISO-8601 timestamp when the profile was created. </p>
     */
    inline ProfileDetail& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The ISO-8601 timestamp when the profile was created. </p>
     */
    inline ProfileDetail& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account that created the profile.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon Web Services account that created the profile.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon Web Services account that created the profile.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon Web Services account that created the profile.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon Web Services account that created the profile.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon Web Services account that created the profile.</p>
     */
    inline ProfileDetail& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon Web Services account that created the profile.</p>
     */
    inline ProfileDetail& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account that created the profile.</p>
     */
    inline ProfileDetail& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p> The number of seconds the vended session credentials are valid for. </p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }

    /**
     * <p> The number of seconds the vended session credentials are valid for. </p>
     */
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }

    /**
     * <p> The number of seconds the vended session credentials are valid for. </p>
     */
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /**
     * <p> The number of seconds the vended session credentials are valid for. </p>
     */
    inline ProfileDetail& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}


    /**
     * <p>Indicates whether the profile is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the profile is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether the profile is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether the profile is enabled.</p>
     */
    inline ProfileDetail& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedPolicyArns() const{ return m_managedPolicyArns; }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline bool ManagedPolicyArnsHasBeenSet() const { return m_managedPolicyArnsHasBeenSet; }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline void SetManagedPolicyArns(const Aws::Vector<Aws::String>& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns = value; }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline void SetManagedPolicyArns(Aws::Vector<Aws::String>&& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns = std::move(value); }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline ProfileDetail& WithManagedPolicyArns(const Aws::Vector<Aws::String>& value) { SetManagedPolicyArns(value); return *this;}

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline ProfileDetail& WithManagedPolicyArns(Aws::Vector<Aws::String>&& value) { SetManagedPolicyArns(std::move(value)); return *this;}

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline ProfileDetail& AddManagedPolicyArns(const Aws::String& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.push_back(value); return *this; }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline ProfileDetail& AddManagedPolicyArns(Aws::String&& value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of managed policy ARNs that apply to the vended session credentials.
     * </p>
     */
    inline ProfileDetail& AddManagedPolicyArns(const char* value) { m_managedPolicyArnsHasBeenSet = true; m_managedPolicyArns.push_back(value); return *this; }


    /**
     * <p>The name of the profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the profile.</p>
     */
    inline ProfileDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the profile.</p>
     */
    inline ProfileDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the profile.</p>
     */
    inline ProfileDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the profile.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The ARN of the profile.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

    /**
     * <p>The ARN of the profile.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The ARN of the profile.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The ARN of the profile.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The ARN of the profile.</p>
     */
    inline ProfileDetail& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The ARN of the profile.</p>
     */
    inline ProfileDetail& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the profile.</p>
     */
    inline ProfileDetail& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline ProfileDetail& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline ProfileDetail& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline ProfileDetail& WithProfileId(const char* value) { SetProfileId(value); return *this;}


    /**
     * <p>Specifies whether instance properties are required in <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * requests with this profile. </p>
     */
    inline bool GetRequireInstanceProperties() const{ return m_requireInstanceProperties; }

    /**
     * <p>Specifies whether instance properties are required in <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * requests with this profile. </p>
     */
    inline bool RequireInstancePropertiesHasBeenSet() const { return m_requireInstancePropertiesHasBeenSet; }

    /**
     * <p>Specifies whether instance properties are required in <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * requests with this profile. </p>
     */
    inline void SetRequireInstanceProperties(bool value) { m_requireInstancePropertiesHasBeenSet = true; m_requireInstanceProperties = value; }

    /**
     * <p>Specifies whether instance properties are required in <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * requests with this profile. </p>
     */
    inline ProfileDetail& WithRequireInstanceProperties(bool value) { SetRequireInstanceProperties(value); return *this;}


    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoleArns() const{ return m_roleArns; }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline bool RoleArnsHasBeenSet() const { return m_roleArnsHasBeenSet; }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline void SetRoleArns(const Aws::Vector<Aws::String>& value) { m_roleArnsHasBeenSet = true; m_roleArns = value; }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline void SetRoleArns(Aws::Vector<Aws::String>&& value) { m_roleArnsHasBeenSet = true; m_roleArns = std::move(value); }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline ProfileDetail& WithRoleArns(const Aws::Vector<Aws::String>& value) { SetRoleArns(value); return *this;}

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline ProfileDetail& WithRoleArns(Aws::Vector<Aws::String>&& value) { SetRoleArns(std::move(value)); return *this;}

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline ProfileDetail& AddRoleArns(const Aws::String& value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(value); return *this; }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline ProfileDetail& AddRoleArns(Aws::String&& value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IAM roles that this profile can assume in a <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operation.</p>
     */
    inline ProfileDetail& AddRoleArns(const char* value) { m_roleArnsHasBeenSet = true; m_roleArns.push_back(value); return *this; }


    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline const Aws::String& GetSessionPolicy() const{ return m_sessionPolicy; }

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline bool SessionPolicyHasBeenSet() const { return m_sessionPolicyHasBeenSet; }

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline void SetSessionPolicy(const Aws::String& value) { m_sessionPolicyHasBeenSet = true; m_sessionPolicy = value; }

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline void SetSessionPolicy(Aws::String&& value) { m_sessionPolicyHasBeenSet = true; m_sessionPolicy = std::move(value); }

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline void SetSessionPolicy(const char* value) { m_sessionPolicyHasBeenSet = true; m_sessionPolicy.assign(value); }

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline ProfileDetail& WithSessionPolicy(const Aws::String& value) { SetSessionPolicy(value); return *this;}

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline ProfileDetail& WithSessionPolicy(Aws::String&& value) { SetSessionPolicy(std::move(value)); return *this;}

    /**
     * <p>A session policy that applies to the trust boundary of the vended session
     * credentials. </p>
     */
    inline ProfileDetail& WithSessionPolicy(const char* value) { SetSessionPolicy(value); return *this;}


    /**
     * <p>The ISO-8601 timestamp when the profile was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The ISO-8601 timestamp when the profile was last updated. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The ISO-8601 timestamp when the profile was last updated. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The ISO-8601 timestamp when the profile was last updated. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The ISO-8601 timestamp when the profile was last updated. </p>
     */
    inline ProfileDetail& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The ISO-8601 timestamp when the profile was last updated. </p>
     */
    inline ProfileDetail& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_managedPolicyArns;
    bool m_managedPolicyArnsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    bool m_requireInstanceProperties;
    bool m_requireInstancePropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_roleArns;
    bool m_roleArnsHasBeenSet = false;

    Aws::String m_sessionPolicy;
    bool m_sessionPolicyHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
