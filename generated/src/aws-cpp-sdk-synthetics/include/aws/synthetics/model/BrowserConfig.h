/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/BrowserType.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>A structure that specifies the browser type to use for a canary
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/BrowserConfig">AWS
   * API Reference</a></p>
   */
  class BrowserConfig
  {
  public:
    AWS_SYNTHETICS_API BrowserConfig() = default;
    AWS_SYNTHETICS_API BrowserConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API BrowserConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The browser type associated with this browser configuration.</p>
     */
    inline BrowserType GetBrowserType() const { return m_browserType; }
    inline bool BrowserTypeHasBeenSet() const { return m_browserTypeHasBeenSet; }
    inline void SetBrowserType(BrowserType value) { m_browserTypeHasBeenSet = true; m_browserType = value; }
    inline BrowserConfig& WithBrowserType(BrowserType value) { SetBrowserType(value); return *this;}
    ///@}
  private:

    BrowserType m_browserType{BrowserType::NOT_SET};
    bool m_browserTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
