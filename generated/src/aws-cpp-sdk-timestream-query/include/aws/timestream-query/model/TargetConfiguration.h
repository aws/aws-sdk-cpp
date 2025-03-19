/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/TimestreamConfiguration.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Configuration used for writing the output of a query.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/TargetConfiguration">AWS
   * API Reference</a></p>
   */
  class TargetConfiguration
  {
  public:
    AWS_TIMESTREAMQUERY_API TargetConfiguration() = default;
    AWS_TIMESTREAMQUERY_API TargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API TargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration needed to write data into the Timestream database and
     * table.</p>
     */
    inline const TimestreamConfiguration& GetTimestreamConfiguration() const { return m_timestreamConfiguration; }
    inline bool TimestreamConfigurationHasBeenSet() const { return m_timestreamConfigurationHasBeenSet; }
    template<typename TimestreamConfigurationT = TimestreamConfiguration>
    void SetTimestreamConfiguration(TimestreamConfigurationT&& value) { m_timestreamConfigurationHasBeenSet = true; m_timestreamConfiguration = std::forward<TimestreamConfigurationT>(value); }
    template<typename TimestreamConfigurationT = TimestreamConfiguration>
    TargetConfiguration& WithTimestreamConfiguration(TimestreamConfigurationT&& value) { SetTimestreamConfiguration(std::forward<TimestreamConfigurationT>(value)); return *this;}
    ///@}
  private:

    TimestreamConfiguration m_timestreamConfiguration;
    bool m_timestreamConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
