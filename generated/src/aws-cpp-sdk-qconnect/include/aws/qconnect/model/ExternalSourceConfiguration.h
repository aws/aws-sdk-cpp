/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/Configuration.h>
#include <aws/qconnect/model/ExternalSource.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The configuration information of the external data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ExternalSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class ExternalSourceConfiguration
  {
  public:
    AWS_QCONNECT_API ExternalSourceConfiguration();
    AWS_QCONNECT_API ExternalSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ExternalSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration information of the external data source.</p>
     */
    inline const Configuration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration information of the external data source.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration information of the external data source.</p>
     */
    inline void SetConfiguration(const Configuration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration information of the external data source.</p>
     */
    inline void SetConfiguration(Configuration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration information of the external data source.</p>
     */
    inline ExternalSourceConfiguration& WithConfiguration(const Configuration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration information of the external data source.</p>
     */
    inline ExternalSourceConfiguration& WithConfiguration(Configuration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of the external data source.</p>
     */
    inline const ExternalSource& GetSource() const{ return m_source; }

    /**
     * <p>The type of the external data source.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The type of the external data source.</p>
     */
    inline void SetSource(const ExternalSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The type of the external data source.</p>
     */
    inline void SetSource(ExternalSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The type of the external data source.</p>
     */
    inline ExternalSourceConfiguration& WithSource(const ExternalSource& value) { SetSource(value); return *this;}

    /**
     * <p>The type of the external data source.</p>
     */
    inline ExternalSourceConfiguration& WithSource(ExternalSource&& value) { SetSource(std::move(value)); return *this;}

  private:

    Configuration m_configuration;
    bool m_configurationHasBeenSet = false;

    ExternalSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
