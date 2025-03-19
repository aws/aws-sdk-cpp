/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ActionRemoteIpDetails.h>
#include <aws/securityhub/model/AwsApiCallActionDomainDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Provided if <code>ActionType</code> is <code>AWS_API_CALL</code>. It provides
   * details about the API call that was detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiCallAction">AWS
   * API Reference</a></p>
   */
  class AwsApiCallAction
  {
  public:
    AWS_SECURITYHUB_API AwsApiCallAction() = default;
    AWS_SECURITYHUB_API AwsApiCallAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiCallAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the API method that was issued.</p> <p>Length Constraints:
     * 128.</p>
     */
    inline const Aws::String& GetApi() const { return m_api; }
    inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }
    template<typename ApiT = Aws::String>
    void SetApi(ApiT&& value) { m_apiHasBeenSet = true; m_api = std::forward<ApiT>(value); }
    template<typename ApiT = Aws::String>
    AwsApiCallAction& WithApi(ApiT&& value) { SetApi(std::forward<ApiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services service that the API method belongs
     * to.</p> <p>Length Constraints: 128.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    AwsApiCallAction& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the API call originated from a remote IP address
     * (<code>remoteip</code>) or from a DNS domain (<code>domain</code>).</p>
     */
    inline const Aws::String& GetCallerType() const { return m_callerType; }
    inline bool CallerTypeHasBeenSet() const { return m_callerTypeHasBeenSet; }
    template<typename CallerTypeT = Aws::String>
    void SetCallerType(CallerTypeT&& value) { m_callerTypeHasBeenSet = true; m_callerType = std::forward<CallerTypeT>(value); }
    template<typename CallerTypeT = Aws::String>
    AwsApiCallAction& WithCallerType(CallerTypeT&& value) { SetCallerType(std::forward<CallerTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provided if <code>CallerType</code> is <code>remoteip</code>. Provides
     * information about the remote IP address that the API call originated from.</p>
     */
    inline const ActionRemoteIpDetails& GetRemoteIpDetails() const { return m_remoteIpDetails; }
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }
    template<typename RemoteIpDetailsT = ActionRemoteIpDetails>
    void SetRemoteIpDetails(RemoteIpDetailsT&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::forward<RemoteIpDetailsT>(value); }
    template<typename RemoteIpDetailsT = ActionRemoteIpDetails>
    AwsApiCallAction& WithRemoteIpDetails(RemoteIpDetailsT&& value) { SetRemoteIpDetails(std::forward<RemoteIpDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provided if <code>CallerType</code> is <code>domain</code>. Provides
     * information about the DNS domain that the API call originated from.</p>
     */
    inline const AwsApiCallActionDomainDetails& GetDomainDetails() const { return m_domainDetails; }
    inline bool DomainDetailsHasBeenSet() const { return m_domainDetailsHasBeenSet; }
    template<typename DomainDetailsT = AwsApiCallActionDomainDetails>
    void SetDomainDetails(DomainDetailsT&& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = std::forward<DomainDetailsT>(value); }
    template<typename DomainDetailsT = AwsApiCallActionDomainDetails>
    AwsApiCallAction& WithDomainDetails(DomainDetailsT&& value) { SetDomainDetails(std::forward<DomainDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAffectedResources() const { return m_affectedResources; }
    inline bool AffectedResourcesHasBeenSet() const { return m_affectedResourcesHasBeenSet; }
    template<typename AffectedResourcesT = Aws::Map<Aws::String, Aws::String>>
    void SetAffectedResources(AffectedResourcesT&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources = std::forward<AffectedResourcesT>(value); }
    template<typename AffectedResourcesT = Aws::Map<Aws::String, Aws::String>>
    AwsApiCallAction& WithAffectedResources(AffectedResourcesT&& value) { SetAffectedResources(std::forward<AffectedResourcesT>(value)); return *this;}
    template<typename AffectedResourcesKeyT = Aws::String, typename AffectedResourcesValueT = Aws::String>
    AwsApiCallAction& AddAffectedResources(AffectedResourcesKeyT&& key, AffectedResourcesValueT&& value) {
      m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(std::forward<AffectedResourcesKeyT>(key), std::forward<AffectedResourcesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the API call was first observed.</p> <p>For
     * more information about the validation and formatting of timestamp fields in
     * Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetFirstSeen() const { return m_firstSeen; }
    inline bool FirstSeenHasBeenSet() const { return m_firstSeenHasBeenSet; }
    template<typename FirstSeenT = Aws::String>
    void SetFirstSeen(FirstSeenT&& value) { m_firstSeenHasBeenSet = true; m_firstSeen = std::forward<FirstSeenT>(value); }
    template<typename FirstSeenT = Aws::String>
    AwsApiCallAction& WithFirstSeen(FirstSeenT&& value) { SetFirstSeen(std::forward<FirstSeenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the API call was most recently observed.</p>
     * <p>For more information about the validation and formatting of timestamp fields
     * in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastSeen() const { return m_lastSeen; }
    inline bool LastSeenHasBeenSet() const { return m_lastSeenHasBeenSet; }
    template<typename LastSeenT = Aws::String>
    void SetLastSeen(LastSeenT&& value) { m_lastSeenHasBeenSet = true; m_lastSeen = std::forward<LastSeenT>(value); }
    template<typename LastSeenT = Aws::String>
    AwsApiCallAction& WithLastSeen(LastSeenT&& value) { SetLastSeen(std::forward<LastSeenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_api;
    bool m_apiHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_callerType;
    bool m_callerTypeHasBeenSet = false;

    ActionRemoteIpDetails m_remoteIpDetails;
    bool m_remoteIpDetailsHasBeenSet = false;

    AwsApiCallActionDomainDetails m_domainDetails;
    bool m_domainDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_affectedResources;
    bool m_affectedResourcesHasBeenSet = false;

    Aws::String m_firstSeen;
    bool m_firstSeenHasBeenSet = false;

    Aws::String m_lastSeen;
    bool m_lastSeenHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
