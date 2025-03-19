/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Edge Manager agent version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AgentVersion">AWS
   * API Reference</a></p>
   */
  class AgentVersion
  {
  public:
    AWS_SAGEMAKER_API AgentVersion() = default;
    AWS_SAGEMAKER_API AgentVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AgentVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Version of the agent.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    AgentVersion& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Edge Manager agents.</p>
     */
    inline long long GetAgentCount() const { return m_agentCount; }
    inline bool AgentCountHasBeenSet() const { return m_agentCountHasBeenSet; }
    inline void SetAgentCount(long long value) { m_agentCountHasBeenSet = true; m_agentCount = value; }
    inline AgentVersion& WithAgentCount(long long value) { SetAgentCount(value); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    long long m_agentCount{0};
    bool m_agentCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
