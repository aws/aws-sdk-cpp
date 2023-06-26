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


    /**
     * <p> The information about the resource group integration.</p>
     */
    inline const ResourceGroup& GetResourceGroup() const{ return m_resourceGroup; }

    /**
     * <p> The information about the resource group integration.</p>
     */
    inline bool ResourceGroupHasBeenSet() const { return m_resourceGroupHasBeenSet; }

    /**
     * <p> The information about the resource group integration.</p>
     */
    inline void SetResourceGroup(const ResourceGroup& value) { m_resourceGroupHasBeenSet = true; m_resourceGroup = value; }

    /**
     * <p> The information about the resource group integration.</p>
     */
    inline void SetResourceGroup(ResourceGroup&& value) { m_resourceGroupHasBeenSet = true; m_resourceGroup = std::move(value); }

    /**
     * <p> The information about the resource group integration.</p>
     */
    inline Integrations& WithResourceGroup(const ResourceGroup& value) { SetResourceGroup(value); return *this;}

    /**
     * <p> The information about the resource group integration.</p>
     */
    inline Integrations& WithResourceGroup(ResourceGroup&& value) { SetResourceGroup(std::move(value)); return *this;}

  private:

    ResourceGroup m_resourceGroup;
    bool m_resourceGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
