/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsSecurityFinding.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class BatchImportFindingsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchImportFindingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchImportFindings"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of findings to import. To successfully import a finding, it must
     * follow the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">Amazon
     * Web Services Security Finding Format</a>. Maximum of 100 findings per
     * request.</p>
     */
    inline const Aws::Vector<AwsSecurityFinding>& GetFindings() const { return m_findings; }
    inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
    template<typename FindingsT = Aws::Vector<AwsSecurityFinding>>
    void SetFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings = std::forward<FindingsT>(value); }
    template<typename FindingsT = Aws::Vector<AwsSecurityFinding>>
    BatchImportFindingsRequest& WithFindings(FindingsT&& value) { SetFindings(std::forward<FindingsT>(value)); return *this;}
    template<typename FindingsT = AwsSecurityFinding>
    BatchImportFindingsRequest& AddFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings.emplace_back(std::forward<FindingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AwsSecurityFinding> m_findings;
    bool m_findingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
