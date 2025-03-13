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
  /**
   * <p>Temporary credentials with authorization to log on to an Amazon Redshift
   * database. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterCredentials">AWS
   * API Reference</a></p>
   */
  class GetClusterCredentialsResult
  {
  public:
    AWS_REDSHIFT_API GetClusterCredentialsResult() = default;
    AWS_REDSHIFT_API GetClusterCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API GetClusterCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A database user name that is authorized to log on to the database
     * <code>DbName</code> using the password <code>DbPassword</code>. If the specified
     * DbUser exists in the database, the new user name has the same database
     * permissions as the the user named in DbUser. By default, the user is added to
     * PUBLIC. If the <code>DbGroups</code> parameter is specifed, <code>DbUser</code>
     * is added to the listed groups for any sessions created using these
     * credentials.</p>
     */
    inline const Aws::String& GetDbUser() const { return m_dbUser; }
    template<typename DbUserT = Aws::String>
    void SetDbUser(DbUserT&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::forward<DbUserT>(value); }
    template<typename DbUserT = Aws::String>
    GetClusterCredentialsResult& WithDbUser(DbUserT&& value) { SetDbUser(std::forward<DbUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A temporary password that authorizes the user name returned by
     * <code>DbUser</code> to log on to the database <code>DbName</code>. </p>
     */
    inline const Aws::String& GetDbPassword() const { return m_dbPassword; }
    template<typename DbPasswordT = Aws::String>
    void SetDbPassword(DbPasswordT&& value) { m_dbPasswordHasBeenSet = true; m_dbPassword = std::forward<DbPasswordT>(value); }
    template<typename DbPasswordT = Aws::String>
    GetClusterCredentialsResult& WithDbPassword(DbPasswordT&& value) { SetDbPassword(std::forward<DbPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the password in <code>DbPassword</code> expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
    template<typename ExpirationT = Aws::Utils::DateTime>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::Utils::DateTime>
    GetClusterCredentialsResult& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetClusterCredentialsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::String m_dbPassword;
    bool m_dbPasswordHasBeenSet = false;

    Aws::Utils::DateTime m_expiration{};
    bool m_expirationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
