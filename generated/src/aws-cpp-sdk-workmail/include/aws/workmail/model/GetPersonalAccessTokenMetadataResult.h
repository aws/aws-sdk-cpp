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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkMail
{
namespace Model
{
  class GetPersonalAccessTokenMetadataResult
  {
  public:
    AWS_WORKMAIL_API GetPersonalAccessTokenMetadataResult() = default;
    AWS_WORKMAIL_API GetPersonalAccessTokenMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetPersonalAccessTokenMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Personal Access Token ID.</p>
     */
    inline const Aws::String& GetPersonalAccessTokenId() const { return m_personalAccessTokenId; }
    template<typename PersonalAccessTokenIdT = Aws::String>
    void SetPersonalAccessTokenId(PersonalAccessTokenIdT&& value) { m_personalAccessTokenIdHasBeenSet = true; m_personalAccessTokenId = std::forward<PersonalAccessTokenIdT>(value); }
    template<typename PersonalAccessTokenIdT = Aws::String>
    GetPersonalAccessTokenMetadataResult& WithPersonalAccessTokenId(PersonalAccessTokenIdT&& value) { SetPersonalAccessTokenId(std::forward<PersonalAccessTokenIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The WorkMail User ID. </p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    GetPersonalAccessTokenMetadataResult& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Personal Access Token name. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetPersonalAccessTokenMetadataResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the Personal Access Token ID was created. </p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const { return m_dateCreated; }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    GetPersonalAccessTokenMetadataResult& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the Personal Access Token ID was last used. </p>
     */
    inline const Aws::Utils::DateTime& GetDateLastUsed() const { return m_dateLastUsed; }
    template<typename DateLastUsedT = Aws::Utils::DateTime>
    void SetDateLastUsed(DateLastUsedT&& value) { m_dateLastUsedHasBeenSet = true; m_dateLastUsed = std::forward<DateLastUsedT>(value); }
    template<typename DateLastUsedT = Aws::Utils::DateTime>
    GetPersonalAccessTokenMetadataResult& WithDateLastUsed(DateLastUsedT&& value) { SetDateLastUsed(std::forward<DateLastUsedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the Personal Access Token ID will expire. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresTime() const { return m_expiresTime; }
    template<typename ExpiresTimeT = Aws::Utils::DateTime>
    void SetExpiresTime(ExpiresTimeT&& value) { m_expiresTimeHasBeenSet = true; m_expiresTime = std::forward<ExpiresTimeT>(value); }
    template<typename ExpiresTimeT = Aws::Utils::DateTime>
    GetPersonalAccessTokenMetadataResult& WithExpiresTime(ExpiresTimeT&& value) { SetExpiresTime(std::forward<ExpiresTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists all the Personal Access Token permissions for a mailbox. </p>
     */
    inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    void SetScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes = std::forward<ScopesT>(value); }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    GetPersonalAccessTokenMetadataResult& WithScopes(ScopesT&& value) { SetScopes(std::forward<ScopesT>(value)); return *this;}
    template<typename ScopesT = Aws::String>
    GetPersonalAccessTokenMetadataResult& AddScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes.emplace_back(std::forward<ScopesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPersonalAccessTokenMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
