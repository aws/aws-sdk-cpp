/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  class GetClusterCredentialsWithIAMResult
  {
  public:
    AWS_REDSHIFT_API GetClusterCredentialsWithIAMResult() = default;
    AWS_REDSHIFT_API GetClusterCredentialsWithIAMResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API GetClusterCredentialsWithIAMResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A database user name that you provide when you connect to a database. The
     * database user is mapped 1:1 to the source IAM identity. </p>
     */
    inline const Aws::String& GetDbUser() const { return m_dbUser; }
    template<typename DbUserT = Aws::String>
    void SetDbUser(DbUserT&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::forward<DbUserT>(value); }
    template<typename DbUserT = Aws::String>
    GetClusterCredentialsWithIAMResult& WithDbUser(DbUserT&& value) { SetDbUser(std::forward<DbUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A temporary password that you provide when you connect to a database.</p>
     */
    inline const Aws::String& GetDbPassword() const { return m_dbPassword; }
    template<typename DbPasswordT = Aws::String>
    void SetDbPassword(DbPasswordT&& value) { m_dbPasswordHasBeenSet = true; m_dbPassword = std::forward<DbPasswordT>(value); }
    template<typename DbPasswordT = Aws::String>
    GetClusterCredentialsWithIAMResult& WithDbPassword(DbPasswordT&& value) { SetDbPassword(std::forward<DbPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the temporary password expires. After this timestamp, a
     * log in with the temporary password fails.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
    template<typename ExpirationT = Aws::Utils::DateTime>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::Utils::DateTime>
    GetClusterCredentialsWithIAMResult& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::Utils::DateTime& GetNextRefreshTime() const { return m_nextRefreshTime; }
    template<typename NextRefreshTimeT = Aws::Utils::DateTime>
    void SetNextRefreshTime(NextRefreshTimeT&& value) { m_nextRefreshTimeHasBeenSet = true; m_nextRefreshTime = std::forward<NextRefreshTimeT>(value); }
    template<typename NextRefreshTimeT = Aws::Utils::DateTime>
    GetClusterCredentialsWithIAMResult& WithNextRefreshTime(NextRefreshTimeT&& value) { SetNextRefreshTime(std::forward<NextRefreshTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetClusterCredentialsWithIAMResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::String m_dbPassword;
    bool m_dbPasswordHasBeenSet = false;

    Aws::Utils::DateTime m_expiration{};
    bool m_expirationHasBeenSet = false;

    Aws::Utils::DateTime m_nextRefreshTime{};
    bool m_nextRefreshTimeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
