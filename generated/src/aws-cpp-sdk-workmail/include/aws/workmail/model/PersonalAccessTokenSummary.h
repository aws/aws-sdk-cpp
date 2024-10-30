/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p> The summary of the Personal Access Token. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/PersonalAccessTokenSummary">AWS
   * API Reference</a></p>
   */
  class PersonalAccessTokenSummary
  {
  public:
    AWS_WORKMAIL_API PersonalAccessTokenSummary();
    AWS_WORKMAIL_API PersonalAccessTokenSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API PersonalAccessTokenSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Personal Access Token. </p>
     */
    inline const Aws::String& GetPersonalAccessTokenId() const{ return m_personalAccessTokenId; }
    inline bool PersonalAccessTokenIdHasBeenSet() const { return m_personalAccessTokenIdHasBeenSet; }
    inline void SetPersonalAccessTokenId(const Aws::String& value) { m_personalAccessTokenIdHasBeenSet = true; m_personalAccessTokenId = value; }
    inline void SetPersonalAccessTokenId(Aws::String&& value) { m_personalAccessTokenIdHasBeenSet = true; m_personalAccessTokenId = std::move(value); }
    inline void SetPersonalAccessTokenId(const char* value) { m_personalAccessTokenIdHasBeenSet = true; m_personalAccessTokenId.assign(value); }
    inline PersonalAccessTokenSummary& WithPersonalAccessTokenId(const Aws::String& value) { SetPersonalAccessTokenId(value); return *this;}
    inline PersonalAccessTokenSummary& WithPersonalAccessTokenId(Aws::String&& value) { SetPersonalAccessTokenId(std::move(value)); return *this;}
    inline PersonalAccessTokenSummary& WithPersonalAccessTokenId(const char* value) { SetPersonalAccessTokenId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user ID of the WorkMail user associated with the Personal Access Token.
     * </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline PersonalAccessTokenSummary& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline PersonalAccessTokenSummary& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline PersonalAccessTokenSummary& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Personal Access Token. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PersonalAccessTokenSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PersonalAccessTokenSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PersonalAccessTokenSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the Personal Access Token was created. </p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }
    inline PersonalAccessTokenSummary& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}
    inline PersonalAccessTokenSummary& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the Personal Access Token was last used. </p>
     */
    inline const Aws::Utils::DateTime& GetDateLastUsed() const{ return m_dateLastUsed; }
    inline bool DateLastUsedHasBeenSet() const { return m_dateLastUsedHasBeenSet; }
    inline void SetDateLastUsed(const Aws::Utils::DateTime& value) { m_dateLastUsedHasBeenSet = true; m_dateLastUsed = value; }
    inline void SetDateLastUsed(Aws::Utils::DateTime&& value) { m_dateLastUsedHasBeenSet = true; m_dateLastUsed = std::move(value); }
    inline PersonalAccessTokenSummary& WithDateLastUsed(const Aws::Utils::DateTime& value) { SetDateLastUsed(value); return *this;}
    inline PersonalAccessTokenSummary& WithDateLastUsed(Aws::Utils::DateTime&& value) { SetDateLastUsed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the Personal Access Token will expire. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresTime() const{ return m_expiresTime; }
    inline bool ExpiresTimeHasBeenSet() const { return m_expiresTimeHasBeenSet; }
    inline void SetExpiresTime(const Aws::Utils::DateTime& value) { m_expiresTimeHasBeenSet = true; m_expiresTime = value; }
    inline void SetExpiresTime(Aws::Utils::DateTime&& value) { m_expiresTimeHasBeenSet = true; m_expiresTime = std::move(value); }
    inline PersonalAccessTokenSummary& WithExpiresTime(const Aws::Utils::DateTime& value) { SetExpiresTime(value); return *this;}
    inline PersonalAccessTokenSummary& WithExpiresTime(Aws::Utils::DateTime&& value) { SetExpiresTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists all the Personal Access Token permissions for a mailbox. </p>
     */
    inline const Aws::Vector<Aws::String>& GetScopes() const{ return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    inline void SetScopes(const Aws::Vector<Aws::String>& value) { m_scopesHasBeenSet = true; m_scopes = value; }
    inline void SetScopes(Aws::Vector<Aws::String>&& value) { m_scopesHasBeenSet = true; m_scopes = std::move(value); }
    inline PersonalAccessTokenSummary& WithScopes(const Aws::Vector<Aws::String>& value) { SetScopes(value); return *this;}
    inline PersonalAccessTokenSummary& WithScopes(Aws::Vector<Aws::String>&& value) { SetScopes(std::move(value)); return *this;}
    inline PersonalAccessTokenSummary& AddScopes(const Aws::String& value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }
    inline PersonalAccessTokenSummary& AddScopes(Aws::String&& value) { m_scopesHasBeenSet = true; m_scopes.push_back(std::move(value)); return *this; }
    inline PersonalAccessTokenSummary& AddScopes(const char* value) { m_scopesHasBeenSet = true; m_scopes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_personalAccessTokenId;
    bool m_personalAccessTokenIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateLastUsed;
    bool m_dateLastUsedHasBeenSet = false;

    Aws::Utils::DateTime m_expiresTime;
    bool m_expiresTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_scopes;
    bool m_scopesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
