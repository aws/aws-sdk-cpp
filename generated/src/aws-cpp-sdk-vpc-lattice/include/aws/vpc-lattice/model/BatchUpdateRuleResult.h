/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/RuleUpdateSuccess.h>
#include <aws/vpc-lattice/model/RuleUpdateFailure.h>
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
namespace VPCLattice
{
namespace Model
{
  class BatchUpdateRuleResult
  {
  public:
    AWS_VPCLATTICE_API BatchUpdateRuleResult() = default;
    AWS_VPCLATTICE_API BatchUpdateRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API BatchUpdateRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The rules that were successfully updated.</p>
     */
    inline const Aws::Vector<RuleUpdateSuccess>& GetSuccessful() const { return m_successful; }
    template<typename SuccessfulT = Aws::Vector<RuleUpdateSuccess>>
    void SetSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful = std::forward<SuccessfulT>(value); }
    template<typename SuccessfulT = Aws::Vector<RuleUpdateSuccess>>
    BatchUpdateRuleResult& WithSuccessful(SuccessfulT&& value) { SetSuccessful(std::forward<SuccessfulT>(value)); return *this;}
    template<typename SuccessfulT = RuleUpdateSuccess>
    BatchUpdateRuleResult& AddSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful.emplace_back(std::forward<SuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The rules that the operation couldn't update.</p>
     */
    inline const Aws::Vector<RuleUpdateFailure>& GetUnsuccessful() const { return m_unsuccessful; }
    template<typename UnsuccessfulT = Aws::Vector<RuleUpdateFailure>>
    void SetUnsuccessful(UnsuccessfulT&& value) { m_unsuccessfulHasBeenSet = true; m_unsuccessful = std::forward<UnsuccessfulT>(value); }
    template<typename UnsuccessfulT = Aws::Vector<RuleUpdateFailure>>
    BatchUpdateRuleResult& WithUnsuccessful(UnsuccessfulT&& value) { SetUnsuccessful(std::forward<UnsuccessfulT>(value)); return *this;}
    template<typename UnsuccessfulT = RuleUpdateFailure>
    BatchUpdateRuleResult& AddUnsuccessful(UnsuccessfulT&& value) { m_unsuccessfulHasBeenSet = true; m_unsuccessful.emplace_back(std::forward<UnsuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RuleUpdateSuccess> m_successful;
    bool m_successfulHasBeenSet = false;

    Aws::Vector<RuleUpdateFailure> m_unsuccessful;
    bool m_unsuccessfulHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
