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
    AWS_PROTON_API CountsSummary();
    AWS_PROTON_API CountsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API CountsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of components in the Amazon Web Services account.</p> <p>The
     * semantics of the <code>components</code> field are different from the semantics
     * of results for other infrastructure-provisioning resources. That's because at
     * this time components don't have associated templates, therefore they don't have
     * the concept of staleness. The <code>components</code> object will only contain
     * <code>total</code> and <code>failed</code> members.</p>
     */
    inline const ResourceCountsSummary& GetComponents() const{ return m_components; }

    /**
     * <p>The total number of components in the Amazon Web Services account.</p> <p>The
     * semantics of the <code>components</code> field are different from the semantics
     * of results for other infrastructure-provisioning resources. That's because at
     * this time components don't have associated templates, therefore they don't have
     * the concept of staleness. The <code>components</code> object will only contain
     * <code>total</code> and <code>failed</code> members.</p>
     */
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }

    /**
     * <p>The total number of components in the Amazon Web Services account.</p> <p>The
     * semantics of the <code>components</code> field are different from the semantics
     * of results for other infrastructure-provisioning resources. That's because at
     * this time components don't have associated templates, therefore they don't have
     * the concept of staleness. The <code>components</code> object will only contain
     * <code>total</code> and <code>failed</code> members.</p>
     */
    inline void SetComponents(const ResourceCountsSummary& value) { m_componentsHasBeenSet = true; m_components = value; }

    /**
     * <p>The total number of components in the Amazon Web Services account.</p> <p>The
     * semantics of the <code>components</code> field are different from the semantics
     * of results for other infrastructure-provisioning resources. That's because at
     * this time components don't have associated templates, therefore they don't have
     * the concept of staleness. The <code>components</code> object will only contain
     * <code>total</code> and <code>failed</code> members.</p>
     */
    inline void SetComponents(ResourceCountsSummary&& value) { m_componentsHasBeenSet = true; m_components = std::move(value); }

    /**
     * <p>The total number of components in the Amazon Web Services account.</p> <p>The
     * semantics of the <code>components</code> field are different from the semantics
     * of results for other infrastructure-provisioning resources. That's because at
     * this time components don't have associated templates, therefore they don't have
     * the concept of staleness. The <code>components</code> object will only contain
     * <code>total</code> and <code>failed</code> members.</p>
     */
    inline CountsSummary& WithComponents(const ResourceCountsSummary& value) { SetComponents(value); return *this;}

    /**
     * <p>The total number of components in the Amazon Web Services account.</p> <p>The
     * semantics of the <code>components</code> field are different from the semantics
     * of results for other infrastructure-provisioning resources. That's because at
     * this time components don't have associated templates, therefore they don't have
     * the concept of staleness. The <code>components</code> object will only contain
     * <code>total</code> and <code>failed</code> members.</p>
     */
    inline CountsSummary& WithComponents(ResourceCountsSummary&& value) { SetComponents(std::move(value)); return *this;}


    /**
     * <p>The total number of environment templates in the Amazon Web Services account.
     * The <code>environmentTemplates</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline const ResourceCountsSummary& GetEnvironmentTemplates() const{ return m_environmentTemplates; }

    /**
     * <p>The total number of environment templates in the Amazon Web Services account.
     * The <code>environmentTemplates</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline bool EnvironmentTemplatesHasBeenSet() const { return m_environmentTemplatesHasBeenSet; }

    /**
     * <p>The total number of environment templates in the Amazon Web Services account.
     * The <code>environmentTemplates</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline void SetEnvironmentTemplates(const ResourceCountsSummary& value) { m_environmentTemplatesHasBeenSet = true; m_environmentTemplates = value; }

    /**
     * <p>The total number of environment templates in the Amazon Web Services account.
     * The <code>environmentTemplates</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline void SetEnvironmentTemplates(ResourceCountsSummary&& value) { m_environmentTemplatesHasBeenSet = true; m_environmentTemplates = std::move(value); }

    /**
     * <p>The total number of environment templates in the Amazon Web Services account.
     * The <code>environmentTemplates</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline CountsSummary& WithEnvironmentTemplates(const ResourceCountsSummary& value) { SetEnvironmentTemplates(value); return *this;}

    /**
     * <p>The total number of environment templates in the Amazon Web Services account.
     * The <code>environmentTemplates</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline CountsSummary& WithEnvironmentTemplates(ResourceCountsSummary&& value) { SetEnvironmentTemplates(std::move(value)); return *this;}


    /**
     * <p>The staleness counts for Proton environments in the Amazon Web Services
     * account. The <code>environments</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline const ResourceCountsSummary& GetEnvironments() const{ return m_environments; }

    /**
     * <p>The staleness counts for Proton environments in the Amazon Web Services
     * account. The <code>environments</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline bool EnvironmentsHasBeenSet() const { return m_environmentsHasBeenSet; }

    /**
     * <p>The staleness counts for Proton environments in the Amazon Web Services
     * account. The <code>environments</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline void SetEnvironments(const ResourceCountsSummary& value) { m_environmentsHasBeenSet = true; m_environments = value; }

    /**
     * <p>The staleness counts for Proton environments in the Amazon Web Services
     * account. The <code>environments</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline void SetEnvironments(ResourceCountsSummary&& value) { m_environmentsHasBeenSet = true; m_environments = std::move(value); }

    /**
     * <p>The staleness counts for Proton environments in the Amazon Web Services
     * account. The <code>environments</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline CountsSummary& WithEnvironments(const ResourceCountsSummary& value) { SetEnvironments(value); return *this;}

    /**
     * <p>The staleness counts for Proton environments in the Amazon Web Services
     * account. The <code>environments</code> object will only contain
     * <code>total</code> members.</p>
     */
    inline CountsSummary& WithEnvironments(ResourceCountsSummary&& value) { SetEnvironments(std::move(value)); return *this;}


    /**
     * <p>The staleness counts for Proton pipelines in the Amazon Web Services
     * account.</p>
     */
    inline const ResourceCountsSummary& GetPipelines() const{ return m_pipelines; }

    /**
     * <p>The staleness counts for Proton pipelines in the Amazon Web Services
     * account.</p>
     */
    inline bool PipelinesHasBeenSet() const { return m_pipelinesHasBeenSet; }

    /**
     * <p>The staleness counts for Proton pipelines in the Amazon Web Services
     * account.</p>
     */
    inline void SetPipelines(const ResourceCountsSummary& value) { m_pipelinesHasBeenSet = true; m_pipelines = value; }

    /**
     * <p>The staleness counts for Proton pipelines in the Amazon Web Services
     * account.</p>
     */
    inline void SetPipelines(ResourceCountsSummary&& value) { m_pipelinesHasBeenSet = true; m_pipelines = std::move(value); }

    /**
     * <p>The staleness counts for Proton pipelines in the Amazon Web Services
     * account.</p>
     */
    inline CountsSummary& WithPipelines(const ResourceCountsSummary& value) { SetPipelines(value); return *this;}

    /**
     * <p>The staleness counts for Proton pipelines in the Amazon Web Services
     * account.</p>
     */
    inline CountsSummary& WithPipelines(ResourceCountsSummary&& value) { SetPipelines(std::move(value)); return *this;}


    /**
     * <p>The staleness counts for Proton service instances in the Amazon Web Services
     * account.</p>
     */
    inline const ResourceCountsSummary& GetServiceInstances() const{ return m_serviceInstances; }

    /**
     * <p>The staleness counts for Proton service instances in the Amazon Web Services
     * account.</p>
     */
    inline bool ServiceInstancesHasBeenSet() const { return m_serviceInstancesHasBeenSet; }

    /**
     * <p>The staleness counts for Proton service instances in the Amazon Web Services
     * account.</p>
     */
    inline void SetServiceInstances(const ResourceCountsSummary& value) { m_serviceInstancesHasBeenSet = true; m_serviceInstances = value; }

    /**
     * <p>The staleness counts for Proton service instances in the Amazon Web Services
     * account.</p>
     */
    inline void SetServiceInstances(ResourceCountsSummary&& value) { m_serviceInstancesHasBeenSet = true; m_serviceInstances = std::move(value); }

    /**
     * <p>The staleness counts for Proton service instances in the Amazon Web Services
     * account.</p>
     */
    inline CountsSummary& WithServiceInstances(const ResourceCountsSummary& value) { SetServiceInstances(value); return *this;}

    /**
     * <p>The staleness counts for Proton service instances in the Amazon Web Services
     * account.</p>
     */
    inline CountsSummary& WithServiceInstances(ResourceCountsSummary&& value) { SetServiceInstances(std::move(value)); return *this;}


    /**
     * <p>The total number of service templates in the Amazon Web Services account. The
     * <code>serviceTemplates</code> object will only contain <code>total</code>
     * members.</p>
     */
    inline const ResourceCountsSummary& GetServiceTemplates() const{ return m_serviceTemplates; }

    /**
     * <p>The total number of service templates in the Amazon Web Services account. The
     * <code>serviceTemplates</code> object will only contain <code>total</code>
     * members.</p>
     */
    inline bool ServiceTemplatesHasBeenSet() const { return m_serviceTemplatesHasBeenSet; }

    /**
     * <p>The total number of service templates in the Amazon Web Services account. The
     * <code>serviceTemplates</code> object will only contain <code>total</code>
     * members.</p>
     */
    inline void SetServiceTemplates(const ResourceCountsSummary& value) { m_serviceTemplatesHasBeenSet = true; m_serviceTemplates = value; }

    /**
     * <p>The total number of service templates in the Amazon Web Services account. The
     * <code>serviceTemplates</code> object will only contain <code>total</code>
     * members.</p>
     */
    inline void SetServiceTemplates(ResourceCountsSummary&& value) { m_serviceTemplatesHasBeenSet = true; m_serviceTemplates = std::move(value); }

    /**
     * <p>The total number of service templates in the Amazon Web Services account. The
     * <code>serviceTemplates</code> object will only contain <code>total</code>
     * members.</p>
     */
    inline CountsSummary& WithServiceTemplates(const ResourceCountsSummary& value) { SetServiceTemplates(value); return *this;}

    /**
     * <p>The total number of service templates in the Amazon Web Services account. The
     * <code>serviceTemplates</code> object will only contain <code>total</code>
     * members.</p>
     */
    inline CountsSummary& WithServiceTemplates(ResourceCountsSummary&& value) { SetServiceTemplates(std::move(value)); return *this;}


    /**
     * <p>The staleness counts for Proton services in the Amazon Web Services
     * account.</p>
     */
    inline const ResourceCountsSummary& GetServices() const{ return m_services; }

    /**
     * <p>The staleness counts for Proton services in the Amazon Web Services
     * account.</p>
     */
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }

    /**
     * <p>The staleness counts for Proton services in the Amazon Web Services
     * account.</p>
     */
    inline void SetServices(const ResourceCountsSummary& value) { m_servicesHasBeenSet = true; m_services = value; }

    /**
     * <p>The staleness counts for Proton services in the Amazon Web Services
     * account.</p>
     */
    inline void SetServices(ResourceCountsSummary&& value) { m_servicesHasBeenSet = true; m_services = std::move(value); }

    /**
     * <p>The staleness counts for Proton services in the Amazon Web Services
     * account.</p>
     */
    inline CountsSummary& WithServices(const ResourceCountsSummary& value) { SetServices(value); return *this;}

    /**
     * <p>The staleness counts for Proton services in the Amazon Web Services
     * account.</p>
     */
    inline CountsSummary& WithServices(ResourceCountsSummary&& value) { SetServices(std::move(value)); return *this;}

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
