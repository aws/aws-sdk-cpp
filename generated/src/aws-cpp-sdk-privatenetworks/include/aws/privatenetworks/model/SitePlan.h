/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/privatenetworks/model/NameValuePair.h>
#include <aws/privatenetworks/model/NetworkResourceDefinition.h>
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
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about a site plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/SitePlan">AWS
   * API Reference</a></p>
   */
  class SitePlan
  {
  public:
    AWS_PRIVATENETWORKS_API SitePlan() = default;
    AWS_PRIVATENETWORKS_API SitePlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API SitePlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options of the plan.</p>
     */
    inline const Aws::Vector<NameValuePair>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Vector<NameValuePair>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Vector<NameValuePair>>
    SitePlan& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsT = NameValuePair>
    SitePlan& AddOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options.emplace_back(std::forward<OptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource definitions of the plan.</p>
     */
    inline const Aws::Vector<NetworkResourceDefinition>& GetResourceDefinitions() const { return m_resourceDefinitions; }
    inline bool ResourceDefinitionsHasBeenSet() const { return m_resourceDefinitionsHasBeenSet; }
    template<typename ResourceDefinitionsT = Aws::Vector<NetworkResourceDefinition>>
    void SetResourceDefinitions(ResourceDefinitionsT&& value) { m_resourceDefinitionsHasBeenSet = true; m_resourceDefinitions = std::forward<ResourceDefinitionsT>(value); }
    template<typename ResourceDefinitionsT = Aws::Vector<NetworkResourceDefinition>>
    SitePlan& WithResourceDefinitions(ResourceDefinitionsT&& value) { SetResourceDefinitions(std::forward<ResourceDefinitionsT>(value)); return *this;}
    template<typename ResourceDefinitionsT = NetworkResourceDefinition>
    SitePlan& AddResourceDefinitions(ResourceDefinitionsT&& value) { m_resourceDefinitionsHasBeenSet = true; m_resourceDefinitions.emplace_back(std::forward<ResourceDefinitionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<NameValuePair> m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<NetworkResourceDefinition> m_resourceDefinitions;
    bool m_resourceDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
