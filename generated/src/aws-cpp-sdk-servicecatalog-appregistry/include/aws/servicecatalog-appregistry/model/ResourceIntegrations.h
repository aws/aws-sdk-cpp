/**
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
   * <p>The service integration information about the resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ResourceIntegrations">AWS
   * API Reference</a></p>
   */
  class ResourceIntegrations
  {
  public:
    AWS_APPREGISTRY_API ResourceIntegrations() = default;
    AWS_APPREGISTRY_API ResourceIntegrations(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API ResourceIntegrations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The information about the integration of Resource Groups.</p>
     */
    inline const ResourceGroup& GetResourceGroup() const { return m_resourceGroup; }
    inline bool ResourceGroupHasBeenSet() const { return m_resourceGroupHasBeenSet; }
    template<typename ResourceGroupT = ResourceGroup>
    void SetResourceGroup(ResourceGroupT&& value) { m_resourceGroupHasBeenSet = true; m_resourceGroup = std::forward<ResourceGroupT>(value); }
    template<typename ResourceGroupT = ResourceGroup>
    ResourceIntegrations& WithResourceGroup(ResourceGroupT&& value) { SetResourceGroup(std::forward<ResourceGroupT>(value)); return *this;}
    ///@}
  private:

    ResourceGroup m_resourceGroup;
    bool m_resourceGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
