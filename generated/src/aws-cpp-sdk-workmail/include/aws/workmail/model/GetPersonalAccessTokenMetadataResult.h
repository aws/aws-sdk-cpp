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
    AWS_WORKMAIL_API GetPersonalAccessTokenMetadataResult();
    AWS_WORKMAIL_API GetPersonalAccessTokenMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetPersonalAccessTokenMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Personal Access Token ID.</p>
     */
    inline const Aws::String& GetPersonalAccessTokenId() const{ return m_personalAccessTokenId; }
    inline void SetPersonalAccessTokenId(const Aws::String& value) { m_personalAccessTokenId = value; }
    inline void SetPersonalAccessTokenId(Aws::String&& value) { m_personalAccessTokenId = std::move(value); }
    inline void SetPersonalAccessTokenId(const char* value) { m_personalAccessTokenId.assign(value); }
    inline GetPersonalAccessTokenMetadataResult& WithPersonalAccessTokenId(const Aws::String& value) { SetPersonalAccessTokenId(value); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithPersonalAccessTokenId(Aws::String&& value) { SetPersonalAccessTokenId(std::move(value)); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithPersonalAccessTokenId(const char* value) { SetPersonalAccessTokenId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The WorkMail User ID. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline void SetUserId(const Aws::String& value) { m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userId.assign(value); }
    inline GetPersonalAccessTokenMetadataResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Personal Access Token name. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetPersonalAccessTokenMetadataResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the Personal Access Token ID was created. </p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreated = value; }
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreated = std::move(value); }
    inline GetPersonalAccessTokenMetadataResult& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date when the Personal Access Token ID was last used. </p>
     */
    inline const Aws::Utils::DateTime& GetDateLastUsed() const{ return m_dateLastUsed; }
    inline void SetDateLastUsed(const Aws::Utils::DateTime& value) { m_dateLastUsed = value; }
    inline void SetDateLastUsed(Aws::Utils::DateTime&& value) { m_dateLastUsed = std::move(value); }
    inline GetPersonalAccessTokenMetadataResult& WithDateLastUsed(const Aws::Utils::DateTime& value) { SetDateLastUsed(value); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithDateLastUsed(Aws::Utils::DateTime&& value) { SetDateLastUsed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the Personal Access Token ID will expire. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresTime() const{ return m_expiresTime; }
    inline void SetExpiresTime(const Aws::Utils::DateTime& value) { m_expiresTime = value; }
    inline void SetExpiresTime(Aws::Utils::DateTime&& value) { m_expiresTime = std::move(value); }
    inline GetPersonalAccessTokenMetadataResult& WithExpiresTime(const Aws::Utils::DateTime& value) { SetExpiresTime(value); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithExpiresTime(Aws::Utils::DateTime&& value) { SetExpiresTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists all the Personal Access Token permissions for a mailbox. </p>
     */
    inline const Aws::Vector<Aws::String>& GetScopes() const{ return m_scopes; }
    inline void SetScopes(const Aws::Vector<Aws::String>& value) { m_scopes = value; }
    inline void SetScopes(Aws::Vector<Aws::String>&& value) { m_scopes = std::move(value); }
    inline GetPersonalAccessTokenMetadataResult& WithScopes(const Aws::Vector<Aws::String>& value) { SetScopes(value); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithScopes(Aws::Vector<Aws::String>&& value) { SetScopes(std::move(value)); return *this;}
    inline GetPersonalAccessTokenMetadataResult& AddScopes(const Aws::String& value) { m_scopes.push_back(value); return *this; }
    inline GetPersonalAccessTokenMetadataResult& AddScopes(Aws::String&& value) { m_scopes.push_back(std::move(value)); return *this; }
    inline GetPersonalAccessTokenMetadataResult& AddScopes(const char* value) { m_scopes.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPersonalAccessTokenMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPersonalAccessTokenMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_personalAccessTokenId;

    Aws::String m_userId;

    Aws::String m_name;

    Aws::Utils::DateTime m_dateCreated;

    Aws::Utils::DateTime m_dateLastUsed;

    Aws::Utils::DateTime m_expiresTime;

    Aws::Vector<Aws::String> m_scopes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
