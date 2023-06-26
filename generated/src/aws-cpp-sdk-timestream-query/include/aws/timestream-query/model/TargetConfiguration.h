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
    AWS_TIMESTREAMQUERY_API TargetConfiguration();
    AWS_TIMESTREAMQUERY_API TargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API TargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration needed to write data into the Timestream database and
     * table.</p>
     */
    inline const TimestreamConfiguration& GetTimestreamConfiguration() const{ return m_timestreamConfiguration; }

    /**
     * <p>Configuration needed to write data into the Timestream database and
     * table.</p>
     */
    inline bool TimestreamConfigurationHasBeenSet() const { return m_timestreamConfigurationHasBeenSet; }

    /**
     * <p>Configuration needed to write data into the Timestream database and
     * table.</p>
     */
    inline void SetTimestreamConfiguration(const TimestreamConfiguration& value) { m_timestreamConfigurationHasBeenSet = true; m_timestreamConfiguration = value; }

    /**
     * <p>Configuration needed to write data into the Timestream database and
     * table.</p>
     */
    inline void SetTimestreamConfiguration(TimestreamConfiguration&& value) { m_timestreamConfigurationHasBeenSet = true; m_timestreamConfiguration = std::move(value); }

    /**
     * <p>Configuration needed to write data into the Timestream database and
     * table.</p>
     */
    inline TargetConfiguration& WithTimestreamConfiguration(const TimestreamConfiguration& value) { SetTimestreamConfiguration(value); return *this;}

    /**
     * <p>Configuration needed to write data into the Timestream database and
     * table.</p>
     */
    inline TargetConfiguration& WithTimestreamConfiguration(TimestreamConfiguration&& value) { SetTimestreamConfiguration(std::move(value)); return *this;}

  private:

    TimestreamConfiguration m_timestreamConfiguration;
    bool m_timestreamConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
