/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/TagQueryConfiguration.h>
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
   * <p> Includes all of the Service Catalog AppRegistry settings. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/AppRegistryConfiguration">AWS
   * API Reference</a></p>
   */
  class AppRegistryConfiguration
  {
  public:
    AWS_APPREGISTRY_API AppRegistryConfiguration();
    AWS_APPREGISTRY_API AppRegistryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API AppRegistryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Includes the definition of a <code>tagQuery</code>. </p>
     */
    inline const TagQueryConfiguration& GetTagQueryConfiguration() const{ return m_tagQueryConfiguration; }

    /**
     * <p> Includes the definition of a <code>tagQuery</code>. </p>
     */
    inline bool TagQueryConfigurationHasBeenSet() const { return m_tagQueryConfigurationHasBeenSet; }

    /**
     * <p> Includes the definition of a <code>tagQuery</code>. </p>
     */
    inline void SetTagQueryConfiguration(const TagQueryConfiguration& value) { m_tagQueryConfigurationHasBeenSet = true; m_tagQueryConfiguration = value; }

    /**
     * <p> Includes the definition of a <code>tagQuery</code>. </p>
     */
    inline void SetTagQueryConfiguration(TagQueryConfiguration&& value) { m_tagQueryConfigurationHasBeenSet = true; m_tagQueryConfiguration = std::move(value); }

    /**
     * <p> Includes the definition of a <code>tagQuery</code>. </p>
     */
    inline AppRegistryConfiguration& WithTagQueryConfiguration(const TagQueryConfiguration& value) { SetTagQueryConfiguration(value); return *this;}

    /**
     * <p> Includes the definition of a <code>tagQuery</code>. </p>
     */
    inline AppRegistryConfiguration& WithTagQueryConfiguration(TagQueryConfiguration&& value) { SetTagQueryConfiguration(std::move(value)); return *this;}

  private:

    TagQueryConfiguration m_tagQueryConfiguration;
    bool m_tagQueryConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
