/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/ResourceCountsSummary.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>Summary counts of each Proton resource type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CountsSummary">AWS
   * API Reference</a></p>
   */
  class CountsSummary
  {
  public:
    AWS_PROTON_API CountsSummary() = default;
    AWS_PROTON_API CountsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API CountsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of components in the Amazon Web Services account.</p> <p>The
     * semantics of the <code>components</code> field are different from the semantics
     * of results for other infrastructure-provisioning resources. That's because at
     * this time components don't have associated templates, therefore they don't have
     * the concept of staleness. The <code>components</code> object will only contain
     * <code>total</code> and <code>failed</code> members.</p>
     */
    inline const ResourceCountsSummary& GetComponents() const { return m_components; }
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
    template<typename ComponentsT = ResourceCountsSummary>
    void SetComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components = std::forward<ComponentsT>(value); }
    template<typename ComponentsT = ResourceCountsSummary>
    CountsSummary& WithComponents(ComponentsT&& value) { SetComponents(std::forward<ComponentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of environment templates in the Amazon Web Services account.
     * The <code>environmentTemplates</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline const ResourceCountsSummary& GetEnvironmentTemplates() const { return m_environmentTemplates; }
    inline bool EnvironmentTemplatesHasBeenSet() const { return m_environmentTemplatesHasBeenSet; }
    template<typename EnvironmentTemplatesT = ResourceCountsSummary>
    void SetEnvironmentTemplates(EnvironmentTemplatesT&& value) { m_environmentTemplatesHasBeenSet = true; m_environmentTemplates = std::forward<EnvironmentTemplatesT>(value); }
    template<typename EnvironmentTemplatesT = ResourceCountsSummary>
    CountsSummary& WithEnvironmentTemplates(EnvironmentTemplatesT&& value) { SetEnvironmentTemplates(std::forward<EnvironmentTemplatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The staleness counts for Proton environments in the Amazon Web Services
     * account. The <code>environments</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline const ResourceCountsSummary& GetEnvironments() const { return m_environments; }
    inline bool EnvironmentsHasBeenSet() const { return m_environmentsHasBeenSet; }
    template<typename EnvironmentsT = ResourceCountsSummary>
    void SetEnvironments(EnvironmentsT&& value) { m_environmentsHasBeenSet = true; m_environments = std::forward<EnvironmentsT>(value); }
    template<typename EnvironmentsT = ResourceCountsSummary>
    CountsSummary& WithEnvironments(EnvironmentsT&& value) { SetEnvironments(std::forward<EnvironmentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The staleness counts for Proton pipelines in the Amazon Web Services
     * account.</p>
     */
    inline const ResourceCountsSummary& GetPipelines() const { return m_pipelines; }
    inline bool PipelinesHasBeenSet() const { return m_pipelinesHasBeenSet; }
    template<typename PipelinesT = ResourceCountsSummary>
    void SetPipelines(PipelinesT&& value) { m_pipelinesHasBeenSet = true; m_pipelines = std::forward<PipelinesT>(value); }
    template<typename PipelinesT = ResourceCountsSummary>
    CountsSummary& WithPipelines(PipelinesT&& value) { SetPipelines(std::forward<PipelinesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The staleness counts for Proton service instances in the Amazon Web Services
     * account.</p>
     */
    inline const ResourceCountsSummary& GetServiceInstances() const { return m_serviceInstances; }
    inline bool ServiceInstancesHasBeenSet() const { return m_serviceInstancesHasBeenSet; }
    template<typename ServiceInstancesT = ResourceCountsSummary>
    void SetServiceInstances(ServiceInstancesT&& value) { m_serviceInstancesHasBeenSet = true; m_serviceInstances = std::forward<ServiceInstancesT>(value); }
    template<typename ServiceInstancesT = ResourceCountsSummary>
    CountsSummary& WithServiceInstances(ServiceInstancesT&& value) { SetServiceInstances(std::forward<ServiceInstancesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of service templates in the Amazon Web Services account. The
     * <code>serviceTemplates</code> object will only contain <code>total</code>
     * members.</p>
     */
    inline const ResourceCountsSummary& GetServiceTemplates() const { return m_serviceTemplates; }
    inline bool ServiceTemplatesHasBeenSet() const { return m_serviceTemplatesHasBeenSet; }
    template<typename ServiceTemplatesT = ResourceCountsSummary>
    void SetServiceTemplates(ServiceTemplatesT&& value) { m_serviceTemplatesHasBeenSet = true; m_serviceTemplates = std::forward<ServiceTemplatesT>(value); }
    template<typename ServiceTemplatesT = ResourceCountsSummary>
    CountsSummary& WithServiceTemplates(ServiceTemplatesT&& value) { SetServiceTemplates(std::forward<ServiceTemplatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The staleness counts for Proton services in the Amazon Web Services
     * account.</p>
     */
    inline const ResourceCountsSummary& GetServices() const { return m_services; }
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }
    template<typename ServicesT = ResourceCountsSummary>
    void SetServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services = std::forward<ServicesT>(value); }
    template<typename ServicesT = ResourceCountsSummary>
    CountsSummary& WithServices(ServicesT&& value) { SetServices(std::forward<ServicesT>(value)); return *this;}
    ///@}
  private:

    ResourceCountsSummary m_components;
    bool m_componentsHasBeenSet = false;

    ResourceCountsSummary m_environmentTemplates;
    bool m_environmentTemplatesHasBeenSet = false;

    ResourceCountsSummary m_environments;
    bool m_environmentsHasBeenSet = false;

    ResourceCountsSummary m_pipelines;
    bool m_pipelinesHasBeenSet = false;

    ResourceCountsSummary m_serviceInstances;
    bool m_serviceInstancesHasBeenSet = false;

    ResourceCountsSummary m_serviceTemplates;
    bool m_serviceTemplatesHasBeenSet = false;

    ResourceCountsSummary m_services;
    bool m_servicesHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
