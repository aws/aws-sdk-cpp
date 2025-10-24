/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

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
namespace RTBFabric
{
namespace Model
{

  /**
   * <p>Describes the parameters of a rate limit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/RateLimiterModuleParameters">AWS
   * API Reference</a></p>
   */
  class RateLimiterModuleParameters
  {
  public:
    AWS_RTBFABRIC_API RateLimiterModuleParameters() = default;
    AWS_RTBFABRIC_API RateLimiterModuleParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API RateLimiterModuleParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The transactions per second rate limit.</p>
     */
    inline double GetTps() const { return m_tps; }
    inline bool TpsHasBeenSet() const { return m_tpsHasBeenSet; }
    inline void SetTps(double value) { m_tpsHasBeenSet = true; m_tps = value; }
    inline RateLimiterModuleParameters& WithTps(double value) { SetTps(value); return *this;}
    ///@}
  private:

    double m_tps{0.0};
    bool m_tpsHasBeenSet = false;
  };

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
