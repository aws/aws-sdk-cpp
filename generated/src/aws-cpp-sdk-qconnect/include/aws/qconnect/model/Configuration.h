﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ConnectConfiguration.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/Configuration">AWS
   * API Reference</a></p>
   */
  class Configuration
  {
  public:
    AWS_QCONNECT_API Configuration();
    AWS_QCONNECT_API Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration information of the Amazon Connect data source.</p>
     */
    inline const ConnectConfiguration& GetConnectConfiguration() const{ return m_connectConfiguration; }
    inline bool ConnectConfigurationHasBeenSet() const { return m_connectConfigurationHasBeenSet; }
    inline void SetConnectConfiguration(const ConnectConfiguration& value) { m_connectConfigurationHasBeenSet = true; m_connectConfiguration = value; }
    inline void SetConnectConfiguration(ConnectConfiguration&& value) { m_connectConfigurationHasBeenSet = true; m_connectConfiguration = std::move(value); }
    inline Configuration& WithConnectConfiguration(const ConnectConfiguration& value) { SetConnectConfiguration(value); return *this;}
    inline Configuration& WithConnectConfiguration(ConnectConfiguration&& value) { SetConnectConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ConnectConfiguration m_connectConfiguration;
    bool m_connectConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
