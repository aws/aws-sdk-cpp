﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/ResourceGroup.h>
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
namespace AppRegistry
{
namespace Model
{

  /**
   * <p> The information about the service integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/Integrations">AWS
   * API Reference</a></p>
   */
  class Integrations
  {
  public:
    AWS_APPREGISTRY_API Integrations();
    AWS_APPREGISTRY_API Integrations(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Integrations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The information about the resource group integration.</p>
     */
    inline const ResourceGroup& GetResourceGroup() const{ return m_resourceGroup; }
    inline bool ResourceGroupHasBeenSet() const { return m_resourceGroupHasBeenSet; }
    inline void SetResourceGroup(const ResourceGroup& value) { m_resourceGroupHasBeenSet = true; m_resourceGroup = value; }
    inline void SetResourceGroup(ResourceGroup&& value) { m_resourceGroupHasBeenSet = true; m_resourceGroup = std::move(value); }
    inline Integrations& WithResourceGroup(const ResourceGroup& value) { SetResourceGroup(value); return *this;}
    inline Integrations& WithResourceGroup(ResourceGroup&& value) { SetResourceGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResourceGroup& GetApplicationTagResourceGroup() const{ return m_applicationTagResourceGroup; }
    inline bool ApplicationTagResourceGroupHasBeenSet() const { return m_applicationTagResourceGroupHasBeenSet; }
    inline void SetApplicationTagResourceGroup(const ResourceGroup& value) { m_applicationTagResourceGroupHasBeenSet = true; m_applicationTagResourceGroup = value; }
    inline void SetApplicationTagResourceGroup(ResourceGroup&& value) { m_applicationTagResourceGroupHasBeenSet = true; m_applicationTagResourceGroup = std::move(value); }
    inline Integrations& WithApplicationTagResourceGroup(const ResourceGroup& value) { SetApplicationTagResourceGroup(value); return *this;}
    inline Integrations& WithApplicationTagResourceGroup(ResourceGroup&& value) { SetApplicationTagResourceGroup(std::move(value)); return *this;}
    ///@}
  private:

    ResourceGroup m_resourceGroup;
    bool m_resourceGroupHasBeenSet = false;

    ResourceGroup m_applicationTagResourceGroup;
    bool m_applicationTagResourceGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
