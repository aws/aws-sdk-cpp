/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/CloudFormationStackUpdate.h>
#include <aws/ssm-incidents/model/CodeDeployDeployment.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Extended textual information about the finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/FindingDetails">AWS
   * API Reference</a></p>
   */
  class FindingDetails
  {
  public:
    AWS_SSMINCIDENTS_API FindingDetails() = default;
    AWS_SSMINCIDENTS_API FindingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API FindingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the CloudFormation stack creation or update associated with
     * the finding.</p>
     */
    inline const CloudFormationStackUpdate& GetCloudFormationStackUpdate() const { return m_cloudFormationStackUpdate; }
    inline bool CloudFormationStackUpdateHasBeenSet() const { return m_cloudFormationStackUpdateHasBeenSet; }
    template<typename CloudFormationStackUpdateT = CloudFormationStackUpdate>
    void SetCloudFormationStackUpdate(CloudFormationStackUpdateT&& value) { m_cloudFormationStackUpdateHasBeenSet = true; m_cloudFormationStackUpdate = std::forward<CloudFormationStackUpdateT>(value); }
    template<typename CloudFormationStackUpdateT = CloudFormationStackUpdate>
    FindingDetails& WithCloudFormationStackUpdate(CloudFormationStackUpdateT&& value) { SetCloudFormationStackUpdate(std::forward<CloudFormationStackUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the CodeDeploy deployment associated with the finding.</p>
     */
    inline const CodeDeployDeployment& GetCodeDeployDeployment() const { return m_codeDeployDeployment; }
    inline bool CodeDeployDeploymentHasBeenSet() const { return m_codeDeployDeploymentHasBeenSet; }
    template<typename CodeDeployDeploymentT = CodeDeployDeployment>
    void SetCodeDeployDeployment(CodeDeployDeploymentT&& value) { m_codeDeployDeploymentHasBeenSet = true; m_codeDeployDeployment = std::forward<CodeDeployDeploymentT>(value); }
    template<typename CodeDeployDeploymentT = CodeDeployDeployment>
    FindingDetails& WithCodeDeployDeployment(CodeDeployDeploymentT&& value) { SetCodeDeployDeployment(std::forward<CodeDeployDeploymentT>(value)); return *this;}
    ///@}
  private:

    CloudFormationStackUpdate m_cloudFormationStackUpdate;
    bool m_cloudFormationStackUpdateHasBeenSet = false;

    CodeDeployDeployment m_codeDeployDeployment;
    bool m_codeDeployDeploymentHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
