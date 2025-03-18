/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/UpgradeStep.h>
#include <aws/opensearch/model/UpgradeStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for the response returned by the <code>GetUpgradeStatus</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetUpgradeStatusResponse">AWS
   * API Reference</a></p>
   */
  class GetUpgradeStatusResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetUpgradeStatusResult() = default;
    AWS_OPENSEARCHSERVICE_API GetUpgradeStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API GetUpgradeStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>One of three steps that an upgrade or upgrade eligibility check goes
     * through.</p>
     */
    inline UpgradeStep GetUpgradeStep() const { return m_upgradeStep; }
    inline void SetUpgradeStep(UpgradeStep value) { m_upgradeStepHasBeenSet = true; m_upgradeStep = value; }
    inline GetUpgradeStatusResult& WithUpgradeStep(UpgradeStep value) { SetUpgradeStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the current step that an upgrade is on.</p>
     */
    inline UpgradeStatus GetStepStatus() const { return m_stepStatus; }
    inline void SetStepStatus(UpgradeStatus value) { m_stepStatusHasBeenSet = true; m_stepStatus = value; }
    inline GetUpgradeStatusResult& WithStepStatus(UpgradeStatus value) { SetStepStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that describes the update.</p>
     */
    inline const Aws::String& GetUpgradeName() const { return m_upgradeName; }
    template<typename UpgradeNameT = Aws::String>
    void SetUpgradeName(UpgradeNameT&& value) { m_upgradeNameHasBeenSet = true; m_upgradeName = std::forward<UpgradeNameT>(value); }
    template<typename UpgradeNameT = Aws::String>
    GetUpgradeStatusResult& WithUpgradeName(UpgradeNameT&& value) { SetUpgradeName(std::forward<UpgradeNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUpgradeStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UpgradeStep m_upgradeStep{UpgradeStep::NOT_SET};
    bool m_upgradeStepHasBeenSet = false;

    UpgradeStatus m_stepStatus{UpgradeStatus::NOT_SET};
    bool m_stepStatusHasBeenSet = false;

    Aws::String m_upgradeName;
    bool m_upgradeNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
