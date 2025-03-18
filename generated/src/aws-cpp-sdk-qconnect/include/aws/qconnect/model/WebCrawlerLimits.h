/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>

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
   * <p>The configuration of crawl limits for the web URLs.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/WebCrawlerLimits">AWS
   * API Reference</a></p>
   */
  class WebCrawlerLimits
  {
  public:
    AWS_QCONNECT_API WebCrawlerLimits() = default;
    AWS_QCONNECT_API WebCrawlerLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API WebCrawlerLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Rate of web URLs retrieved per minute.</p>
     */
    inline int GetRateLimit() const { return m_rateLimit; }
    inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }
    inline void SetRateLimit(int value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }
    inline WebCrawlerLimits& WithRateLimit(int value) { SetRateLimit(value); return *this;}
    ///@}
  private:

    int m_rateLimit{0};
    bool m_rateLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
