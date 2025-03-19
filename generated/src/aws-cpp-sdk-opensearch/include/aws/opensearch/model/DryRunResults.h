/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Results of a dry run performed in an update domain request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DryRunResults">AWS
   * API Reference</a></p>
   */
  class DryRunResults
  {
  public:
    AWS_OPENSEARCHSERVICE_API DryRunResults() = default;
    AWS_OPENSEARCHSERVICE_API DryRunResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DryRunResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the way in which OpenSearch Service will apply an update. Possible
     * values are:</p> <ul> <li> <p> <b>Blue/Green</b> - The update requires a
     * blue/green deployment.</p> </li> <li> <p> <b>DynamicUpdate</b> - No blue/green
     * deployment required</p> </li> <li> <p> <b>Undetermined</b> - The domain is in
     * the middle of an update and can't predict the deployment type. Try again after
     * the update is complete.</p> </li> <li> <p> <b>None</b> - The request doesn't
     * include any configuration changes.</p> </li> </ul>
     */
    inline const Aws::String& GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    template<typename DeploymentTypeT = Aws::String>
    void SetDeploymentType(DeploymentTypeT&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::forward<DeploymentTypeT>(value); }
    template<typename DeploymentTypeT = Aws::String>
    DryRunResults& WithDeploymentType(DeploymentTypeT&& value) { SetDeploymentType(std::forward<DeploymentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message corresponding to the deployment type.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DryRunResults& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
