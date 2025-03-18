/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/ConfigurationDetail.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class GetIdentitySourceResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API GetIdentitySourceResult() = default;
    AWS_VERIFIEDPERMISSIONS_API GetIdentitySourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API GetIdentitySourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time that the identity source was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    GetIdentitySourceResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the identity source.</p>
     */
    inline const Aws::String& GetIdentitySourceId() const { return m_identitySourceId; }
    template<typename IdentitySourceIdT = Aws::String>
    void SetIdentitySourceId(IdentitySourceIdT&& value) { m_identitySourceIdHasBeenSet = true; m_identitySourceId = std::forward<IdentitySourceIdT>(value); }
    template<typename IdentitySourceIdT = Aws::String>
    GetIdentitySourceResult& WithIdentitySourceId(IdentitySourceIdT&& value) { SetIdentitySourceId(std::forward<IdentitySourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the identity source was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::Utils::DateTime>
    GetIdentitySourceResult& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the policy store that contains the identity source.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const { return m_policyStoreId; }
    template<typename PolicyStoreIdT = Aws::String>
    void SetPolicyStoreId(PolicyStoreIdT&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::forward<PolicyStoreIdT>(value); }
    template<typename PolicyStoreIdT = Aws::String>
    GetIdentitySourceResult& WithPolicyStoreId(PolicyStoreIdT&& value) { SetPolicyStoreId(std::forward<PolicyStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of principals generated for identities authenticated by this
     * identity source.</p>
     */
    inline const Aws::String& GetPrincipalEntityType() const { return m_principalEntityType; }
    template<typename PrincipalEntityTypeT = Aws::String>
    void SetPrincipalEntityType(PrincipalEntityTypeT&& value) { m_principalEntityTypeHasBeenSet = true; m_principalEntityType = std::forward<PrincipalEntityTypeT>(value); }
    template<typename PrincipalEntityTypeT = Aws::String>
    GetIdentitySourceResult& WithPrincipalEntityType(PrincipalEntityTypeT&& value) { SetPrincipalEntityType(std::forward<PrincipalEntityTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration information about an identity source.</p>
     */
    inline const ConfigurationDetail& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = ConfigurationDetail>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ConfigurationDetail>
    GetIdentitySourceResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIdentitySourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_identitySourceId;
    bool m_identitySourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDate{};
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_principalEntityType;
    bool m_principalEntityTypeHasBeenSet = false;

    ConfigurationDetail m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
