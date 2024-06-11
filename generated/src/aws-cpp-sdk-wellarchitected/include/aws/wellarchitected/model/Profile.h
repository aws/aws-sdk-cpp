/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wellarchitected/model/ProfileQuestion.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Profile">AWS
   * API Reference</a></p>
   */
  class Profile
  {
  public:
    AWS_WELLARCHITECTED_API Profile();
    AWS_WELLARCHITECTED_API Profile(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Profile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }
    inline Profile& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}
    inline Profile& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}
    inline Profile& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile version.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersionHasBeenSet = true; m_profileVersion = value; }
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::move(value); }
    inline void SetProfileVersion(const char* value) { m_profileVersionHasBeenSet = true; m_profileVersion.assign(value); }
    inline Profile& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}
    inline Profile& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}
    inline Profile& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile name.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }
    inline Profile& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}
    inline Profile& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}
    inline Profile& WithProfileName(const char* value) { SetProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile description.</p>
     */
    inline const Aws::String& GetProfileDescription() const{ return m_profileDescription; }
    inline bool ProfileDescriptionHasBeenSet() const { return m_profileDescriptionHasBeenSet; }
    inline void SetProfileDescription(const Aws::String& value) { m_profileDescriptionHasBeenSet = true; m_profileDescription = value; }
    inline void SetProfileDescription(Aws::String&& value) { m_profileDescriptionHasBeenSet = true; m_profileDescription = std::move(value); }
    inline void SetProfileDescription(const char* value) { m_profileDescriptionHasBeenSet = true; m_profileDescription.assign(value); }
    inline Profile& WithProfileDescription(const Aws::String& value) { SetProfileDescription(value); return *this;}
    inline Profile& WithProfileDescription(Aws::String&& value) { SetProfileDescription(std::move(value)); return *this;}
    inline Profile& WithProfileDescription(const char* value) { SetProfileDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Profile questions.</p>
     */
    inline const Aws::Vector<ProfileQuestion>& GetProfileQuestions() const{ return m_profileQuestions; }
    inline bool ProfileQuestionsHasBeenSet() const { return m_profileQuestionsHasBeenSet; }
    inline void SetProfileQuestions(const Aws::Vector<ProfileQuestion>& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions = value; }
    inline void SetProfileQuestions(Aws::Vector<ProfileQuestion>&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions = std::move(value); }
    inline Profile& WithProfileQuestions(const Aws::Vector<ProfileQuestion>& value) { SetProfileQuestions(value); return *this;}
    inline Profile& WithProfileQuestions(Aws::Vector<ProfileQuestion>&& value) { SetProfileQuestions(std::move(value)); return *this;}
    inline Profile& AddProfileQuestions(const ProfileQuestion& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions.push_back(value); return *this; }
    inline Profile& AddProfileQuestions(ProfileQuestion&& value) { m_profileQuestionsHasBeenSet = true; m_profileQuestions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline Profile& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline Profile& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline Profile& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Profile& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Profile& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Profile& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Profile& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline const Aws::String& GetShareInvitationId() const{ return m_shareInvitationId; }
    inline bool ShareInvitationIdHasBeenSet() const { return m_shareInvitationIdHasBeenSet; }
    inline void SetShareInvitationId(const Aws::String& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = value; }
    inline void SetShareInvitationId(Aws::String&& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = std::move(value); }
    inline void SetShareInvitationId(const char* value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId.assign(value); }
    inline Profile& WithShareInvitationId(const Aws::String& value) { SetShareInvitationId(value); return *this;}
    inline Profile& WithShareInvitationId(Aws::String&& value) { SetShareInvitationId(std::move(value)); return *this;}
    inline Profile& WithShareInvitationId(const char* value) { SetShareInvitationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Profile& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Profile& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Profile& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Profile& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Profile& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Profile& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Profile& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Profile& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Profile& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileDescription;
    bool m_profileDescriptionHasBeenSet = false;

    Aws::Vector<ProfileQuestion> m_profileQuestions;
    bool m_profileQuestionsHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_shareInvitationId;
    bool m_shareInvitationIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
