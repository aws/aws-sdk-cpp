﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/SimSpaceWeaverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   */
  class DescribeAppRequest : public SimSpaceWeaverRequest
  {
  public:
    AWS_SIMSPACEWEAVER_API DescribeAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApp"; }

    AWS_SIMSPACEWEAVER_API Aws::String SerializePayload() const override;

    AWS_SIMSPACEWEAVER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetApp() const{ return m_app; }
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }
    inline void SetApp(const Aws::String& value) { m_appHasBeenSet = true; m_app = value; }
    inline void SetApp(Aws::String&& value) { m_appHasBeenSet = true; m_app = std::move(value); }
    inline void SetApp(const char* value) { m_appHasBeenSet = true; m_app.assign(value); }
    inline DescribeAppRequest& WithApp(const Aws::String& value) { SetApp(value); return *this;}
    inline DescribeAppRequest& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}
    inline DescribeAppRequest& WithApp(const char* value) { SetApp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain of the app.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline DescribeAppRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DescribeAppRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DescribeAppRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the simulation of the app.</p>
     */
    inline const Aws::String& GetSimulation() const{ return m_simulation; }
    inline bool SimulationHasBeenSet() const { return m_simulationHasBeenSet; }
    inline void SetSimulation(const Aws::String& value) { m_simulationHasBeenSet = true; m_simulation = value; }
    inline void SetSimulation(Aws::String&& value) { m_simulationHasBeenSet = true; m_simulation = std::move(value); }
    inline void SetSimulation(const char* value) { m_simulationHasBeenSet = true; m_simulation.assign(value); }
    inline DescribeAppRequest& WithSimulation(const Aws::String& value) { SetSimulation(value); return *this;}
    inline DescribeAppRequest& WithSimulation(Aws::String&& value) { SetSimulation(std::move(value)); return *this;}
    inline DescribeAppRequest& WithSimulation(const char* value) { SetSimulation(value); return *this;}
    ///@}
  private:

    Aws::String m_app;
    bool m_appHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_simulation;
    bool m_simulationHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
