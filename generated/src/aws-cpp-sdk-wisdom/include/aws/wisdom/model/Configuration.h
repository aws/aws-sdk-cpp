/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/ConnectConfiguration.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/Configuration">AWS
   * API Reference</a></p>
   */
  class Configuration
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API Configuration();
    AWS_CONNECTWISDOMSERVICE_API Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration information of the Amazon Connect data source.</p>
     */
    inline const ConnectConfiguration& GetConnectConfiguration() const{ return m_connectConfiguration; }

    /**
     * <p>The configuration information of the Amazon Connect data source.</p>
     */
    inline bool ConnectConfigurationHasBeenSet() const { return m_connectConfigurationHasBeenSet; }

    /**
     * <p>The configuration information of the Amazon Connect data source.</p>
     */
    inline void SetConnectConfiguration(const ConnectConfiguration& value) { m_connectConfigurationHasBeenSet = true; m_connectConfiguration = value; }

    /**
     * <p>The configuration information of the Amazon Connect data source.</p>
     */
    inline void SetConnectConfiguration(ConnectConfiguration&& value) { m_connectConfigurationHasBeenSet = true; m_connectConfiguration = std::move(value); }

    /**
     * <p>The configuration information of the Amazon Connect data source.</p>
     */
    inline Configuration& WithConnectConfiguration(const ConnectConfiguration& value) { SetConnectConfiguration(value); return *this;}

    /**
     * <p>The configuration information of the Amazon Connect data source.</p>
     */
    inline Configuration& WithConnectConfiguration(ConnectConfiguration&& value) { SetConnectConfiguration(std::move(value)); return *this;}

  private:

    ConnectConfiguration m_connectConfiguration;
    bool m_connectConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
