/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/LogConfiguration.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>A collection of log configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/LogConfigurations">AWS
   * API Reference</a></p>
   */
  class LogConfigurations
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API LogConfigurations() = default;
    AWS_MANAGEDBLOCKCHAIN_API LogConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API LogConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters for publishing logs to Amazon CloudWatch Logs.</p>
     */
    inline const LogConfiguration& GetCloudwatch() const { return m_cloudwatch; }
    inline bool CloudwatchHasBeenSet() const { return m_cloudwatchHasBeenSet; }
    template<typename CloudwatchT = LogConfiguration>
    void SetCloudwatch(CloudwatchT&& value) { m_cloudwatchHasBeenSet = true; m_cloudwatch = std::forward<CloudwatchT>(value); }
    template<typename CloudwatchT = LogConfiguration>
    LogConfigurations& WithCloudwatch(CloudwatchT&& value) { SetCloudwatch(std::forward<CloudwatchT>(value)); return *this;}
    ///@}
  private:

    LogConfiguration m_cloudwatch;
    bool m_cloudwatchHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
