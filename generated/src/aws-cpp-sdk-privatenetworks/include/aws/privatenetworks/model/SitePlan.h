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
    AWS_PRIVATENETWORKS_API SitePlan();
    AWS_PRIVATENETWORKS_API SitePlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API SitePlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options of the plan.</p>
     */
    inline const Aws::Vector<NameValuePair>& GetOptions() const{ return m_options; }

    /**
     * <p>The options of the plan.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The options of the plan.</p>
     */
    inline void SetOptions(const Aws::Vector<NameValuePair>& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The options of the plan.</p>
     */
    inline void SetOptions(Aws::Vector<NameValuePair>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The options of the plan.</p>
     */
    inline SitePlan& WithOptions(const Aws::Vector<NameValuePair>& value) { SetOptions(value); return *this;}

    /**
     * <p>The options of the plan.</p>
     */
    inline SitePlan& WithOptions(Aws::Vector<NameValuePair>&& value) { SetOptions(std::move(value)); return *this;}

    /**
     * <p>The options of the plan.</p>
     */
    inline SitePlan& AddOptions(const NameValuePair& value) { m_optionsHasBeenSet = true; m_options.push_back(value); return *this; }

    /**
     * <p>The options of the plan.</p>
     */
    inline SitePlan& AddOptions(NameValuePair&& value) { m_optionsHasBeenSet = true; m_options.push_back(std::move(value)); return *this; }


    /**
     * <p>The resource definitions of the plan.</p>
     */
    inline const Aws::Vector<NetworkResourceDefinition>& GetResourceDefinitions() const{ return m_resourceDefinitions; }

    /**
     * <p>The resource definitions of the plan.</p>
     */
    inline bool ResourceDefinitionsHasBeenSet() const { return m_resourceDefinitionsHasBeenSet; }

    /**
     * <p>The resource definitions of the plan.</p>
     */
    inline void SetResourceDefinitions(const Aws::Vector<NetworkResourceDefinition>& value) { m_resourceDefinitionsHasBeenSet = true; m_resourceDefinitions = value; }

    /**
     * <p>The resource definitions of the plan.</p>
     */
    inline void SetResourceDefinitions(Aws::Vector<NetworkResourceDefinition>&& value) { m_resourceDefinitionsHasBeenSet = true; m_resourceDefinitions = std::move(value); }

    /**
     * <p>The resource definitions of the plan.</p>
     */
    inline SitePlan& WithResourceDefinitions(const Aws::Vector<NetworkResourceDefinition>& value) { SetResourceDefinitions(value); return *this;}

    /**
     * <p>The resource definitions of the plan.</p>
     */
    inline SitePlan& WithResourceDefinitions(Aws::Vector<NetworkResourceDefinition>&& value) { SetResourceDefinitions(std::move(value)); return *this;}

    /**
     * <p>The resource definitions of the plan.</p>
     */
    inline SitePlan& AddResourceDefinitions(const NetworkResourceDefinition& value) { m_resourceDefinitionsHasBeenSet = true; m_resourceDefinitions.push_back(value); return *this; }

    /**
     * <p>The resource definitions of the plan.</p>
     */
    inline SitePlan& AddResourceDefinitions(NetworkResourceDefinition&& value) { m_resourceDefinitionsHasBeenSet = true; m_resourceDefinitions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<NameValuePair> m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<NetworkResourceDefinition> m_resourceDefinitions;
    bool m_resourceDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
