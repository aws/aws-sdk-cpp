/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/SamlConfiguration.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides the authorization configuration information needed to deploy a
   * Amazon Q web experience to end users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/WebExperienceAuthConfiguration">AWS
   * API Reference</a></p>
   */
  class WebExperienceAuthConfiguration
  {
  public:
    AWS_QBUSINESS_API WebExperienceAuthConfiguration();
    AWS_QBUSINESS_API WebExperienceAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API WebExperienceAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const SamlConfiguration& GetSamlConfiguration() const{ return m_samlConfiguration; }

    
    inline bool SamlConfigurationHasBeenSet() const { return m_samlConfigurationHasBeenSet; }

    
    inline void SetSamlConfiguration(const SamlConfiguration& value) { m_samlConfigurationHasBeenSet = true; m_samlConfiguration = value; }

    
    inline void SetSamlConfiguration(SamlConfiguration&& value) { m_samlConfigurationHasBeenSet = true; m_samlConfiguration = std::move(value); }

    
    inline WebExperienceAuthConfiguration& WithSamlConfiguration(const SamlConfiguration& value) { SetSamlConfiguration(value); return *this;}

    
    inline WebExperienceAuthConfiguration& WithSamlConfiguration(SamlConfiguration&& value) { SetSamlConfiguration(std::move(value)); return *this;}

  private:

    SamlConfiguration m_samlConfiguration;
    bool m_samlConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
