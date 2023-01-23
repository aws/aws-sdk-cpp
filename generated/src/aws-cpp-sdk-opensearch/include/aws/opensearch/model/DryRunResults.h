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
    AWS_OPENSEARCHSERVICE_API DryRunResults();
    AWS_OPENSEARCHSERVICE_API DryRunResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DryRunResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the way in which OpenSearch Service will apply an update. Possible
     * values are:</p> <ul> <li> <p> <b>Blue/Green</b> - The update requires a
     * blue/green deployment.</p> </li> <li> <p> <b>DynamicUpdate</b> - No blue/green
     * deployment required</p> </li> <li> <p> <b>Undetermined</b> - The domain is in
     * the middle of an update and can't predict the deployment type. Try again after
     * the update is complete.</p> </li> <li> <p> <b>None</b> - The request doesn't
     * include any configuration changes.</p> </li> </ul>
     */
    inline const Aws::String& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p> Specifies the way in which OpenSearch Service will apply an update. Possible
     * values are:</p> <ul> <li> <p> <b>Blue/Green</b> - The update requires a
     * blue/green deployment.</p> </li> <li> <p> <b>DynamicUpdate</b> - No blue/green
     * deployment required</p> </li> <li> <p> <b>Undetermined</b> - The domain is in
     * the middle of an update and can't predict the deployment type. Try again after
     * the update is complete.</p> </li> <li> <p> <b>None</b> - The request doesn't
     * include any configuration changes.</p> </li> </ul>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p> Specifies the way in which OpenSearch Service will apply an update. Possible
     * values are:</p> <ul> <li> <p> <b>Blue/Green</b> - The update requires a
     * blue/green deployment.</p> </li> <li> <p> <b>DynamicUpdate</b> - No blue/green
     * deployment required</p> </li> <li> <p> <b>Undetermined</b> - The domain is in
     * the middle of an update and can't predict the deployment type. Try again after
     * the update is complete.</p> </li> <li> <p> <b>None</b> - The request doesn't
     * include any configuration changes.</p> </li> </ul>
     */
    inline void SetDeploymentType(const Aws::String& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p> Specifies the way in which OpenSearch Service will apply an update. Possible
     * values are:</p> <ul> <li> <p> <b>Blue/Green</b> - The update requires a
     * blue/green deployment.</p> </li> <li> <p> <b>DynamicUpdate</b> - No blue/green
     * deployment required</p> </li> <li> <p> <b>Undetermined</b> - The domain is in
     * the middle of an update and can't predict the deployment type. Try again after
     * the update is complete.</p> </li> <li> <p> <b>None</b> - The request doesn't
     * include any configuration changes.</p> </li> </ul>
     */
    inline void SetDeploymentType(Aws::String&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p> Specifies the way in which OpenSearch Service will apply an update. Possible
     * values are:</p> <ul> <li> <p> <b>Blue/Green</b> - The update requires a
     * blue/green deployment.</p> </li> <li> <p> <b>DynamicUpdate</b> - No blue/green
     * deployment required</p> </li> <li> <p> <b>Undetermined</b> - The domain is in
     * the middle of an update and can't predict the deployment type. Try again after
     * the update is complete.</p> </li> <li> <p> <b>None</b> - The request doesn't
     * include any configuration changes.</p> </li> </ul>
     */
    inline void SetDeploymentType(const char* value) { m_deploymentTypeHasBeenSet = true; m_deploymentType.assign(value); }

    /**
     * <p> Specifies the way in which OpenSearch Service will apply an update. Possible
     * values are:</p> <ul> <li> <p> <b>Blue/Green</b> - The update requires a
     * blue/green deployment.</p> </li> <li> <p> <b>DynamicUpdate</b> - No blue/green
     * deployment required</p> </li> <li> <p> <b>Undetermined</b> - The domain is in
     * the middle of an update and can't predict the deployment type. Try again after
     * the update is complete.</p> </li> <li> <p> <b>None</b> - The request doesn't
     * include any configuration changes.</p> </li> </ul>
     */
    inline DryRunResults& WithDeploymentType(const Aws::String& value) { SetDeploymentType(value); return *this;}

    /**
     * <p> Specifies the way in which OpenSearch Service will apply an update. Possible
     * values are:</p> <ul> <li> <p> <b>Blue/Green</b> - The update requires a
     * blue/green deployment.</p> </li> <li> <p> <b>DynamicUpdate</b> - No blue/green
     * deployment required</p> </li> <li> <p> <b>Undetermined</b> - The domain is in
     * the middle of an update and can't predict the deployment type. Try again after
     * the update is complete.</p> </li> <li> <p> <b>None</b> - The request doesn't
     * include any configuration changes.</p> </li> </ul>
     */
    inline DryRunResults& WithDeploymentType(Aws::String&& value) { SetDeploymentType(std::move(value)); return *this;}

    /**
     * <p> Specifies the way in which OpenSearch Service will apply an update. Possible
     * values are:</p> <ul> <li> <p> <b>Blue/Green</b> - The update requires a
     * blue/green deployment.</p> </li> <li> <p> <b>DynamicUpdate</b> - No blue/green
     * deployment required</p> </li> <li> <p> <b>Undetermined</b> - The domain is in
     * the middle of an update and can't predict the deployment type. Try again after
     * the update is complete.</p> </li> <li> <p> <b>None</b> - The request doesn't
     * include any configuration changes.</p> </li> </ul>
     */
    inline DryRunResults& WithDeploymentType(const char* value) { SetDeploymentType(value); return *this;}


    /**
     * <p>A message corresponding to the deployment type.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message corresponding to the deployment type.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message corresponding to the deployment type.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message corresponding to the deployment type.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message corresponding to the deployment type.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message corresponding to the deployment type.</p>
     */
    inline DryRunResults& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message corresponding to the deployment type.</p>
     */
    inline DryRunResults& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message corresponding to the deployment type.</p>
     */
    inline DryRunResults& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
