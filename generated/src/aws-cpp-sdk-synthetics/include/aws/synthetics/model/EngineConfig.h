/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A structure of engine configurations for the canary, one for each browser
   * type that the canary is configured to run on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/EngineConfig">AWS
   * API Reference</a></p>
   */
  class EngineConfig
  {
  public:
    AWS_SYNTHETICS_API EngineConfig() = default;
    AWS_SYNTHETICS_API EngineConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API EngineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Each engine configuration contains the ARN of the Lambda function that is
     * used as the canary's engine for a specific browser type. </p>
     */
    inline const Aws::String& GetEngineArn() const { return m_engineArn; }
    inline bool EngineArnHasBeenSet() const { return m_engineArnHasBeenSet; }
    template<typename EngineArnT = Aws::String>
    void SetEngineArn(EngineArnT&& value) { m_engineArnHasBeenSet = true; m_engineArn = std::forward<EngineArnT>(value); }
    template<typename EngineArnT = Aws::String>
    EngineConfig& WithEngineArn(EngineArnT&& value) { SetEngineArn(std::forward<EngineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The browser type associated with this engine configuration.</p>
     */
    inline BrowserType GetBrowserType() const { return m_browserType; }
    inline bool BrowserTypeHasBeenSet() const { return m_browserTypeHasBeenSet; }
    inline void SetBrowserType(BrowserType value) { m_browserTypeHasBeenSet = true; m_browserType = value; }
    inline EngineConfig& WithBrowserType(BrowserType value) { SetBrowserType(value); return *this;}
    ///@}
  private:

    Aws::String m_engineArn;
    bool m_engineArnHasBeenSet = false;

    BrowserType m_browserType{BrowserType::NOT_SET};
    bool m_browserTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
