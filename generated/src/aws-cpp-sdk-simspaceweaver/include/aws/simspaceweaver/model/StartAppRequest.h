/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/SimSpaceWeaverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simspaceweaver/model/LaunchOverrides.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   */
  class StartAppRequest : public SimSpaceWeaverRequest
  {
  public:
    AWS_SIMSPACEWEAVER_API StartAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartApp"; }

    AWS_SIMSPACEWEAVER_API Aws::String SerializePayload() const override;


    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline StartAppRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline StartAppRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A value that you provide to ensure that repeated calls to this API operation
     * using the same parameters complete only once. A <code>ClientToken</code> is also
     * known as an <i>idempotency token</i>. A <code>ClientToken</code> expires after
     * 24 hours.</p>
     */
    inline StartAppRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description of the app.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the app.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the app.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the app.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the app.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the app.</p>
     */
    inline StartAppRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the app.</p>
     */
    inline StartAppRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the app.</p>
     */
    inline StartAppRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the domain of the app.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline StartAppRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline StartAppRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain of the app.</p>
     */
    inline StartAppRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    
    inline const LaunchOverrides& GetLaunchOverrides() const{ return m_launchOverrides; }

    
    inline bool LaunchOverridesHasBeenSet() const { return m_launchOverridesHasBeenSet; }

    
    inline void SetLaunchOverrides(const LaunchOverrides& value) { m_launchOverridesHasBeenSet = true; m_launchOverrides = value; }

    
    inline void SetLaunchOverrides(LaunchOverrides&& value) { m_launchOverridesHasBeenSet = true; m_launchOverrides = std::move(value); }

    
    inline StartAppRequest& WithLaunchOverrides(const LaunchOverrides& value) { SetLaunchOverrides(value); return *this;}

    
    inline StartAppRequest& WithLaunchOverrides(LaunchOverrides&& value) { SetLaunchOverrides(std::move(value)); return *this;}


    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the app.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the app.</p>
     */
    inline StartAppRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline StartAppRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the app.</p>
     */
    inline StartAppRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline const Aws::String& GetSimulation() const{ return m_simulation; }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline bool SimulationHasBeenSet() const { return m_simulationHasBeenSet; }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(const Aws::String& value) { m_simulationHasBeenSet = true; m_simulation = value; }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(Aws::String&& value) { m_simulationHasBeenSet = true; m_simulation = std::move(value); }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline void SetSimulation(const char* value) { m_simulationHasBeenSet = true; m_simulation.assign(value); }

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline StartAppRequest& WithSimulation(const Aws::String& value) { SetSimulation(value); return *this;}

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline StartAppRequest& WithSimulation(Aws::String&& value) { SetSimulation(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline StartAppRequest& WithSimulation(const char* value) { SetSimulation(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    LaunchOverrides m_launchOverrides;
    bool m_launchOverridesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_simulation;
    bool m_simulationHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
