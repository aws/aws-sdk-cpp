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
    AWS_WORKMAIL_API PersonalAccessTokenSummary() = default;
    AWS_WORKMAIL_API PersonalAccessTokenSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API PersonalAccessTokenSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Personal Access Token. </p>
     */
    inline const Aws::String& GetPersonalAccessTokenId() const { return m_personalAccessTokenId; }
    inline bool PersonalAccessTokenIdHasBeenSet() const { return m_personalAccessTokenIdHasBeenSet; }
    template<typename PersonalAccessTokenIdT = Aws::String>
    void SetPersonalAccessTokenId(PersonalAccessTokenIdT&& value) { m_personalAccessTokenIdHasBeenSet = true; m_personalAccessTokenId = std::forward<PersonalAccessTokenIdT>(value); }
    template<typename PersonalAccessTokenIdT = Aws::String>
    PersonalAccessTokenSummary& WithPersonalAccessTokenId(PersonalAccessTokenIdT&& value) { SetPersonalAccessTokenId(std::forward<PersonalAccessTokenIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user ID of the WorkMail user associated with the Personal Access Token.
     * </p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    PersonalAccessTokenSummary& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Personal Access Token. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PersonalAccessTokenSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the Personal Access Token was created. </p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    PersonalAccessTokenSummary& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the Personal Access Token was last used. </p>
     */
    inline const Aws::Utils::DateTime& GetDateLastUsed() const { return m_dateLastUsed; }
    inline bool DateLastUsedHasBeenSet() const { return m_dateLastUsedHasBeenSet; }
    template<typename DateLastUsedT = Aws::Utils::DateTime>
    void SetDateLastUsed(DateLastUsedT&& value) { m_dateLastUsedHasBeenSet = true; m_dateLastUsed = std::forward<DateLastUsedT>(value); }
    template<typename DateLastUsedT = Aws::Utils::DateTime>
    PersonalAccessTokenSummary& WithDateLastUsed(DateLastUsedT&& value) { SetDateLastUsed(std::forward<DateLastUsedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the Personal Access Token will expire. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresTime() const { return m_expiresTime; }
    inline bool ExpiresTimeHasBeenSet() const { return m_expiresTimeHasBeenSet; }
    template<typename ExpiresTimeT = Aws::Utils::DateTime>
    void SetExpiresTime(ExpiresTimeT&& value) { m_expiresTimeHasBeenSet = true; m_expiresTime = std::forward<ExpiresTimeT>(value); }
    template<typename ExpiresTimeT = Aws::Utils::DateTime>
    PersonalAccessTokenSummary& WithExpiresTime(ExpiresTimeT&& value) { SetExpiresTime(std::forward<ExpiresTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists all the Personal Access Token permissions for a mailbox. </p>
     */
    inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    void SetScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes = std::forward<ScopesT>(value); }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    PersonalAccessTokenSummary& WithScopes(ScopesT&& value) { SetScopes(std::forward<ScopesT>(value)); return *this;}
    template<typename ScopesT = Aws::String>
    PersonalAccessTokenSummary& AddScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes.emplace_back(std::forward<ScopesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_personalAccessTokenId;
    bool m_personalAccessTokenIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated{};
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateLastUsed{};
    bool m_dateLastUsedHasBeenSet = false;

    Aws::Utils::DateTime m_expiresTime{};
    bool m_expiresTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_scopes;
    bool m_scopesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
