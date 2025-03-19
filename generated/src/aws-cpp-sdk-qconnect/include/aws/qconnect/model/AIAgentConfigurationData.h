/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>A type that specifies the AI Agent ID configuration data when mapping an AI
   * Agents to be used for an AI Agent type on a session or assistant.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIAgentConfigurationData">AWS
   * API Reference</a></p>
   */
  class AIAgentConfigurationData
  {
  public:
    AWS_QCONNECT_API AIAgentConfigurationData() = default;
    AWS_QCONNECT_API AIAgentConfigurationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIAgentConfigurationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the AI Agent to be configured.</p>
     */
    inline const Aws::String& GetAiAgentId() const { return m_aiAgentId; }
    inline bool AiAgentIdHasBeenSet() const { return m_aiAgentIdHasBeenSet; }
    template<typename AiAgentIdT = Aws::String>
    void SetAiAgentId(AiAgentIdT&& value) { m_aiAgentIdHasBeenSet = true; m_aiAgentId = std::forward<AiAgentIdT>(value); }
    template<typename AiAgentIdT = Aws::String>
    AIAgentConfigurationData& WithAiAgentId(AiAgentIdT&& value) { SetAiAgentId(std::forward<AiAgentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aiAgentId;
    bool m_aiAgentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
