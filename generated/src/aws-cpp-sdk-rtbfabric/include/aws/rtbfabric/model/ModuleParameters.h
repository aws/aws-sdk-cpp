/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/NoBidModuleParameters.h>
#include <aws/rtbfabric/model/OpenRtbAttributeModuleParameters.h>
#include <aws/rtbfabric/model/RateLimiterModuleParameters.h>
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
namespace RTBFabric
{
namespace Model
{

  /**
   * <p>Describes the parameters of a module.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/ModuleParameters">AWS
   * API Reference</a></p>
   */
  class ModuleParameters
  {
  public:
    AWS_RTBFABRIC_API ModuleParameters() = default;
    AWS_RTBFABRIC_API ModuleParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API ModuleParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the parameters of a no bid module.</p>
     */
    inline const NoBidModuleParameters& GetNoBid() const { return m_noBid; }
    inline bool NoBidHasBeenSet() const { return m_noBidHasBeenSet; }
    template<typename NoBidT = NoBidModuleParameters>
    void SetNoBid(NoBidT&& value) { m_noBidHasBeenSet = true; m_noBid = std::forward<NoBidT>(value); }
    template<typename NoBidT = NoBidModuleParameters>
    ModuleParameters& WithNoBid(NoBidT&& value) { SetNoBid(std::forward<NoBidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the parameters of an open RTB attribute module.</p>
     */
    inline const OpenRtbAttributeModuleParameters& GetOpenRtbAttribute() const { return m_openRtbAttribute; }
    inline bool OpenRtbAttributeHasBeenSet() const { return m_openRtbAttributeHasBeenSet; }
    template<typename OpenRtbAttributeT = OpenRtbAttributeModuleParameters>
    void SetOpenRtbAttribute(OpenRtbAttributeT&& value) { m_openRtbAttributeHasBeenSet = true; m_openRtbAttribute = std::forward<OpenRtbAttributeT>(value); }
    template<typename OpenRtbAttributeT = OpenRtbAttributeModuleParameters>
    ModuleParameters& WithOpenRtbAttribute(OpenRtbAttributeT&& value) { SetOpenRtbAttribute(std::forward<OpenRtbAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the parameters of a rate limit.</p>
     */
    inline const RateLimiterModuleParameters& GetRateLimiter() const { return m_rateLimiter; }
    inline bool RateLimiterHasBeenSet() const { return m_rateLimiterHasBeenSet; }
    template<typename RateLimiterT = RateLimiterModuleParameters>
    void SetRateLimiter(RateLimiterT&& value) { m_rateLimiterHasBeenSet = true; m_rateLimiter = std::forward<RateLimiterT>(value); }
    template<typename RateLimiterT = RateLimiterModuleParameters>
    ModuleParameters& WithRateLimiter(RateLimiterT&& value) { SetRateLimiter(std::forward<RateLimiterT>(value)); return *this;}
    ///@}
  private:

    NoBidModuleParameters m_noBid;
    bool m_noBidHasBeenSet = false;

    OpenRtbAttributeModuleParameters m_openRtbAttribute;
    bool m_openRtbAttributeHasBeenSet = false;

    RateLimiterModuleParameters m_rateLimiter;
    bool m_rateLimiterHasBeenSet = false;
  };

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
