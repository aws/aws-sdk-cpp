/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>This structure contains information about the canary's Lambda handler and
   * where its code is stored by CloudWatch Synthetics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryCodeOutput">AWS
   * API Reference</a></p>
   */
  class CanaryCodeOutput
  {
  public:
    AWS_SYNTHETICS_API CanaryCodeOutput() = default;
    AWS_SYNTHETICS_API CanaryCodeOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryCodeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Lambda layer where Synthetics stores the canary script
     * code.</p>
     */
    inline const Aws::String& GetSourceLocationArn() const { return m_sourceLocationArn; }
    inline bool SourceLocationArnHasBeenSet() const { return m_sourceLocationArnHasBeenSet; }
    template<typename SourceLocationArnT = Aws::String>
    void SetSourceLocationArn(SourceLocationArnT&& value) { m_sourceLocationArnHasBeenSet = true; m_sourceLocationArn = std::forward<SourceLocationArnT>(value); }
    template<typename SourceLocationArnT = Aws::String>
    CanaryCodeOutput& WithSourceLocationArn(SourceLocationArnT&& value) { SetSourceLocationArn(std::forward<SourceLocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entry point to use for the source code when running the canary.</p>
     */
    inline const Aws::String& GetHandler() const { return m_handler; }
    inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }
    template<typename HandlerT = Aws::String>
    void SetHandler(HandlerT&& value) { m_handlerHasBeenSet = true; m_handler = std::forward<HandlerT>(value); }
    template<typename HandlerT = Aws::String>
    CanaryCodeOutput& WithHandler(HandlerT&& value) { SetHandler(std::forward<HandlerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceLocationArn;
    bool m_sourceLocationArnHasBeenSet = false;

    Aws::String m_handler;
    bool m_handlerHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
