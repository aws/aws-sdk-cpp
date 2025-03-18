/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/OpenSearchPartitionInstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Lists all instance types and available features for a given OpenSearch or
   * Elasticsearch version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InstanceTypeDetails">AWS
   * API Reference</a></p>
   */
  class InstanceTypeDetails
  {
  public:
    AWS_OPENSEARCHSERVICE_API InstanceTypeDetails() = default;
    AWS_OPENSEARCHSERVICE_API InstanceTypeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API InstanceTypeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline OpenSearchPartitionInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(OpenSearchPartitionInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline InstanceTypeDetails& WithInstanceType(OpenSearchPartitionInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether encryption at rest and node-to-node encryption are supported for the
     * instance type.</p>
     */
    inline bool GetEncryptionEnabled() const { return m_encryptionEnabled; }
    inline bool EncryptionEnabledHasBeenSet() const { return m_encryptionEnabledHasBeenSet; }
    inline void SetEncryptionEnabled(bool value) { m_encryptionEnabledHasBeenSet = true; m_encryptionEnabled = value; }
    inline InstanceTypeDetails& WithEncryptionEnabled(bool value) { SetEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether Amazon Cognito access is supported for the instance type.</p>
     */
    inline bool GetCognitoEnabled() const { return m_cognitoEnabled; }
    inline bool CognitoEnabledHasBeenSet() const { return m_cognitoEnabledHasBeenSet; }
    inline void SetCognitoEnabled(bool value) { m_cognitoEnabledHasBeenSet = true; m_cognitoEnabled = value; }
    inline InstanceTypeDetails& WithCognitoEnabled(bool value) { SetCognitoEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether logging is supported for the instance type.</p>
     */
    inline bool GetAppLogsEnabled() const { return m_appLogsEnabled; }
    inline bool AppLogsEnabledHasBeenSet() const { return m_appLogsEnabledHasBeenSet; }
    inline void SetAppLogsEnabled(bool value) { m_appLogsEnabledHasBeenSet = true; m_appLogsEnabled = value; }
    inline InstanceTypeDetails& WithAppLogsEnabled(bool value) { SetAppLogsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether fine-grained access control is supported for the instance type.</p>
     */
    inline bool GetAdvancedSecurityEnabled() const { return m_advancedSecurityEnabled; }
    inline bool AdvancedSecurityEnabledHasBeenSet() const { return m_advancedSecurityEnabledHasBeenSet; }
    inline void SetAdvancedSecurityEnabled(bool value) { m_advancedSecurityEnabledHasBeenSet = true; m_advancedSecurityEnabled = value; }
    inline InstanceTypeDetails& WithAdvancedSecurityEnabled(bool value) { SetAdvancedSecurityEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether UltraWarm is supported for the instance type.</p>
     */
    inline bool GetWarmEnabled() const { return m_warmEnabled; }
    inline bool WarmEnabledHasBeenSet() const { return m_warmEnabledHasBeenSet; }
    inline void SetWarmEnabled(bool value) { m_warmEnabledHasBeenSet = true; m_warmEnabled = value; }
    inline InstanceTypeDetails& WithWarmEnabled(bool value) { SetWarmEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the instance acts as a data node, a dedicated master node, or an
     * UltraWarm node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceRole() const { return m_instanceRole; }
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }
    template<typename InstanceRoleT = Aws::Vector<Aws::String>>
    void SetInstanceRole(InstanceRoleT&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = std::forward<InstanceRoleT>(value); }
    template<typename InstanceRoleT = Aws::Vector<Aws::String>>
    InstanceTypeDetails& WithInstanceRole(InstanceRoleT&& value) { SetInstanceRole(std::forward<InstanceRoleT>(value)); return *this;}
    template<typename InstanceRoleT = Aws::String>
    InstanceTypeDetails& AddInstanceRole(InstanceRoleT&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole.emplace_back(std::forward<InstanceRoleT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported Availability Zones for the instance type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    InstanceTypeDetails& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    InstanceTypeDetails& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}
  private:

    OpenSearchPartitionInstanceType m_instanceType{OpenSearchPartitionInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    bool m_encryptionEnabled{false};
    bool m_encryptionEnabledHasBeenSet = false;

    bool m_cognitoEnabled{false};
    bool m_cognitoEnabledHasBeenSet = false;

    bool m_appLogsEnabled{false};
    bool m_appLogsEnabledHasBeenSet = false;

    bool m_advancedSecurityEnabled{false};
    bool m_advancedSecurityEnabledHasBeenSet = false;

    bool m_warmEnabled{false};
    bool m_warmEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceRole;
    bool m_instanceRoleHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
