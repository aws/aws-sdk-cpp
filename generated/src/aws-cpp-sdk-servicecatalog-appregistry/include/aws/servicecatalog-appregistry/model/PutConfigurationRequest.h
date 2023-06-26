/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/AppRegistryRequest.h>
#include <aws/servicecatalog-appregistry/model/AppRegistryConfiguration.h>
#include <utility>

namespace Aws
{
namespace AppRegistry
{
namespace Model
{

  /**
   */
  class PutConfigurationRequest : public AppRegistryRequest
  {
  public:
    AWS_APPREGISTRY_API PutConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfiguration"; }

    AWS_APPREGISTRY_API Aws::String SerializePayload() const override;


    /**
     * <p> Associates a <code>TagKey</code> configuration to an account. </p>
     */
    inline const AppRegistryConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p> Associates a <code>TagKey</code> configuration to an account. </p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p> Associates a <code>TagKey</code> configuration to an account. </p>
     */
    inline void SetConfiguration(const AppRegistryConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p> Associates a <code>TagKey</code> configuration to an account. </p>
     */
    inline void SetConfiguration(AppRegistryConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p> Associates a <code>TagKey</code> configuration to an account. </p>
     */
    inline PutConfigurationRequest& WithConfiguration(const AppRegistryConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p> Associates a <code>TagKey</code> configuration to an account. </p>
     */
    inline PutConfigurationRequest& WithConfiguration(AppRegistryConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    AppRegistryConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
