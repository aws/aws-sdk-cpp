/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/Configuration.h>
#include <aws/wisdom/model/ExternalSource.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>The configuration information of the external data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ExternalSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class ExternalSourceConfiguration
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ExternalSourceConfiguration() = default;
    AWS_CONNECTWISDOMSERVICE_API ExternalSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API ExternalSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration information of the external data source.</p>
     */
    inline const Configuration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Configuration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Configuration>
    ExternalSourceConfiguration& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the external data source.</p>
     */
    inline ExternalSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(ExternalSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline ExternalSourceConfiguration& WithSource(ExternalSource value) { SetSource(value); return *this;}
    ///@}
  private:

    Configuration m_configuration;
    bool m_configurationHasBeenSet = false;

    ExternalSource m_source{ExternalSource::NOT_SET};
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
