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
    AWS_OPENSEARCHSERVICE_API InstanceTypeDetails();
    AWS_OPENSEARCHSERVICE_API InstanceTypeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API InstanceTypeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const OpenSearchPartitionInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const OpenSearchPartitionInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(OpenSearchPartitionInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline InstanceTypeDetails& WithInstanceType(const OpenSearchPartitionInstanceType& value) { SetInstanceType(value); return *this;}
    inline InstanceTypeDetails& WithInstanceType(OpenSearchPartitionInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether encryption at rest and node-to-node encryption are supported for the
     * instance type.</p>
     */
    inline bool GetEncryptionEnabled() const{ return m_encryptionEnabled; }
    inline bool EncryptionEnabledHasBeenSet() const { return m_encryptionEnabledHasBeenSet; }
    inline void SetEncryptionEnabled(bool value) { m_encryptionEnabledHasBeenSet = true; m_encryptionEnabled = value; }
    inline InstanceTypeDetails& WithEncryptionEnabled(bool value) { SetEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether Amazon Cognito access is supported for the instance type.</p>
     */
    inline bool GetCognitoEnabled() const{ return m_cognitoEnabled; }
    inline bool CognitoEnabledHasBeenSet() const { return m_cognitoEnabledHasBeenSet; }
    inline void SetCognitoEnabled(bool value) { m_cognitoEnabledHasBeenSet = true; m_cognitoEnabled = value; }
    inline InstanceTypeDetails& WithCognitoEnabled(bool value) { SetCognitoEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether logging is supported for the instance type.</p>
     */
    inline bool GetAppLogsEnabled() const{ return m_appLogsEnabled; }
    inline bool AppLogsEnabledHasBeenSet() const { return m_appLogsEnabledHasBeenSet; }
    inline void SetAppLogsEnabled(bool value) { m_appLogsEnabledHasBeenSet = true; m_appLogsEnabled = value; }
    inline InstanceTypeDetails& WithAppLogsEnabled(bool value) { SetAppLogsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether fine-grained access control is supported for the instance type.</p>
     */
    inline bool GetAdvancedSecurityEnabled() const{ return m_advancedSecurityEnabled; }
    inline bool AdvancedSecurityEnabledHasBeenSet() const { return m_advancedSecurityEnabledHasBeenSet; }
    inline void SetAdvancedSecurityEnabled(bool value) { m_advancedSecurityEnabledHasBeenSet = true; m_advancedSecurityEnabled = value; }
    inline InstanceTypeDetails& WithAdvancedSecurityEnabled(bool value) { SetAdvancedSecurityEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether UltraWarm is supported for the instance type.</p>
     */
    inline bool GetWarmEnabled() const{ return m_warmEnabled; }
    inline bool WarmEnabledHasBeenSet() const { return m_warmEnabledHasBeenSet; }
    inline void SetWarmEnabled(bool value) { m_warmEnabledHasBeenSet = true; m_warmEnabled = value; }
    inline InstanceTypeDetails& WithWarmEnabled(bool value) { SetWarmEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the instance acts as a data node, a dedicated master node, or an
     * UltraWarm node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceRole() const{ return m_instanceRole; }
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }
    inline void SetInstanceRole(const Aws::Vector<Aws::String>& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }
    inline void SetInstanceRole(Aws::Vector<Aws::String>&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = std::move(value); }
    inline InstanceTypeDetails& WithInstanceRole(const Aws::Vector<Aws::String>& value) { SetInstanceRole(value); return *this;}
    inline InstanceTypeDetails& WithInstanceRole(Aws::Vector<Aws::String>&& value) { SetInstanceRole(std::move(value)); return *this;}
    inline InstanceTypeDetails& AddInstanceRole(const Aws::String& value) { m_instanceRoleHasBeenSet = true; m_instanceRole.push_back(value); return *this; }
    inline InstanceTypeDetails& AddInstanceRole(Aws::String&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole.push_back(std::move(value)); return *this; }
    inline InstanceTypeDetails& AddInstanceRole(const char* value) { m_instanceRoleHasBeenSet = true; m_instanceRole.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported Availability Zones for the instance type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline InstanceTypeDetails& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline InstanceTypeDetails& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline InstanceTypeDetails& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline InstanceTypeDetails& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline InstanceTypeDetails& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}
  private:

    OpenSearchPartitionInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    bool m_encryptionEnabled;
    bool m_encryptionEnabledHasBeenSet = false;

    bool m_cognitoEnabled;
    bool m_cognitoEnabledHasBeenSet = false;

    bool m_appLogsEnabled;
    bool m_appLogsEnabledHasBeenSet = false;

    bool m_advancedSecurityEnabled;
    bool m_advancedSecurityEnabledHasBeenSet = false;

    bool m_warmEnabled;
    bool m_warmEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceRole;
    bool m_instanceRoleHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
