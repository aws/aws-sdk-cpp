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
    AWS_SECURITYHUB_API AwsApiCallAction();
    AWS_SECURITYHUB_API AwsApiCallAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiCallAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the API method that was issued.</p> <p>Length Constraints:
     * 128.</p>
     */
    inline const Aws::String& GetApi() const{ return m_api; }
    inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }
    inline void SetApi(const Aws::String& value) { m_apiHasBeenSet = true; m_api = value; }
    inline void SetApi(Aws::String&& value) { m_apiHasBeenSet = true; m_api = std::move(value); }
    inline void SetApi(const char* value) { m_apiHasBeenSet = true; m_api.assign(value); }
    inline AwsApiCallAction& WithApi(const Aws::String& value) { SetApi(value); return *this;}
    inline AwsApiCallAction& WithApi(Aws::String&& value) { SetApi(std::move(value)); return *this;}
    inline AwsApiCallAction& WithApi(const char* value) { SetApi(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services service that the API method belongs
     * to.</p> <p>Length Constraints: 128.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline AwsApiCallAction& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline AwsApiCallAction& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline AwsApiCallAction& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the API call originated from a remote IP address
     * (<code>remoteip</code>) or from a DNS domain (<code>domain</code>).</p>
     */
    inline const Aws::String& GetCallerType() const{ return m_callerType; }
    inline bool CallerTypeHasBeenSet() const { return m_callerTypeHasBeenSet; }
    inline void SetCallerType(const Aws::String& value) { m_callerTypeHasBeenSet = true; m_callerType = value; }
    inline void SetCallerType(Aws::String&& value) { m_callerTypeHasBeenSet = true; m_callerType = std::move(value); }
    inline void SetCallerType(const char* value) { m_callerTypeHasBeenSet = true; m_callerType.assign(value); }
    inline AwsApiCallAction& WithCallerType(const Aws::String& value) { SetCallerType(value); return *this;}
    inline AwsApiCallAction& WithCallerType(Aws::String&& value) { SetCallerType(std::move(value)); return *this;}
    inline AwsApiCallAction& WithCallerType(const char* value) { SetCallerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provided if <code>CallerType</code> is <code>remoteip</code>. Provides
     * information about the remote IP address that the API call originated from.</p>
     */
    inline const ActionRemoteIpDetails& GetRemoteIpDetails() const{ return m_remoteIpDetails; }
    inline bool RemoteIpDetailsHasBeenSet() const { return m_remoteIpDetailsHasBeenSet; }
    inline void SetRemoteIpDetails(const ActionRemoteIpDetails& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = value; }
    inline void SetRemoteIpDetails(ActionRemoteIpDetails&& value) { m_remoteIpDetailsHasBeenSet = true; m_remoteIpDetails = std::move(value); }
    inline AwsApiCallAction& WithRemoteIpDetails(const ActionRemoteIpDetails& value) { SetRemoteIpDetails(value); return *this;}
    inline AwsApiCallAction& WithRemoteIpDetails(ActionRemoteIpDetails&& value) { SetRemoteIpDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provided if <code>CallerType</code> is <code>domain</code>. Provides
     * information about the DNS domain that the API call originated from.</p>
     */
    inline const AwsApiCallActionDomainDetails& GetDomainDetails() const{ return m_domainDetails; }
    inline bool DomainDetailsHasBeenSet() const { return m_domainDetailsHasBeenSet; }
    inline void SetDomainDetails(const AwsApiCallActionDomainDetails& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = value; }
    inline void SetDomainDetails(AwsApiCallActionDomainDetails&& value) { m_domainDetailsHasBeenSet = true; m_domainDetails = std::move(value); }
    inline AwsApiCallAction& WithDomainDetails(const AwsApiCallActionDomainDetails& value) { SetDomainDetails(value); return *this;}
    inline AwsApiCallAction& WithDomainDetails(AwsApiCallActionDomainDetails&& value) { SetDomainDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the resources that were affected by the API call.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAffectedResources() const{ return m_affectedResources; }
    inline bool AffectedResourcesHasBeenSet() const { return m_affectedResourcesHasBeenSet; }
    inline void SetAffectedResources(const Aws::Map<Aws::String, Aws::String>& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources = value; }
    inline void SetAffectedResources(Aws::Map<Aws::String, Aws::String>&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources = std::move(value); }
    inline AwsApiCallAction& WithAffectedResources(const Aws::Map<Aws::String, Aws::String>& value) { SetAffectedResources(value); return *this;}
    inline AwsApiCallAction& WithAffectedResources(Aws::Map<Aws::String, Aws::String>&& value) { SetAffectedResources(std::move(value)); return *this;}
    inline AwsApiCallAction& AddAffectedResources(const Aws::String& key, const Aws::String& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, value); return *this; }
    inline AwsApiCallAction& AddAffectedResources(Aws::String&& key, const Aws::String& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(std::move(key), value); return *this; }
    inline AwsApiCallAction& AddAffectedResources(const Aws::String& key, Aws::String&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, std::move(value)); return *this; }
    inline AwsApiCallAction& AddAffectedResources(Aws::String&& key, Aws::String&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(std::move(key), std::move(value)); return *this; }
    inline AwsApiCallAction& AddAffectedResources(const char* key, Aws::String&& value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, std::move(value)); return *this; }
    inline AwsApiCallAction& AddAffectedResources(Aws::String&& key, const char* value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(std::move(key), value); return *this; }
    inline AwsApiCallAction& AddAffectedResources(const char* key, const char* value) { m_affectedResourcesHasBeenSet = true; m_affectedResources.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the API call was first observed.</p> <p>For
     * more information about the validation and formatting of timestamp fields in
     * Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetFirstSeen() const{ return m_firstSeen; }
    inline bool FirstSeenHasBeenSet() const { return m_firstSeenHasBeenSet; }
    inline void SetFirstSeen(const Aws::String& value) { m_firstSeenHasBeenSet = true; m_firstSeen = value; }
    inline void SetFirstSeen(Aws::String&& value) { m_firstSeenHasBeenSet = true; m_firstSeen = std::move(value); }
    inline void SetFirstSeen(const char* value) { m_firstSeenHasBeenSet = true; m_firstSeen.assign(value); }
    inline AwsApiCallAction& WithFirstSeen(const Aws::String& value) { SetFirstSeen(value); return *this;}
    inline AwsApiCallAction& WithFirstSeen(Aws::String&& value) { SetFirstSeen(std::move(value)); return *this;}
    inline AwsApiCallAction& WithFirstSeen(const char* value) { SetFirstSeen(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the API call was most recently observed.</p>
     * <p>For more information about the validation and formatting of timestamp fields
     * in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastSeen() const{ return m_lastSeen; }
    inline bool LastSeenHasBeenSet() const { return m_lastSeenHasBeenSet; }
    inline void SetLastSeen(const Aws::String& value) { m_lastSeenHasBeenSet = true; m_lastSeen = value; }
    inline void SetLastSeen(Aws::String&& value) { m_lastSeenHasBeenSet = true; m_lastSeen = std::move(value); }
    inline void SetLastSeen(const char* value) { m_lastSeenHasBeenSet = true; m_lastSeen.assign(value); }
    inline AwsApiCallAction& WithLastSeen(const Aws::String& value) { SetLastSeen(value); return *this;}
    inline AwsApiCallAction& WithLastSeen(Aws::String&& value) { SetLastSeen(std::move(value)); return *this;}
    inline AwsApiCallAction& WithLastSeen(const char* value) { SetLastSeen(value); return *this;}
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
