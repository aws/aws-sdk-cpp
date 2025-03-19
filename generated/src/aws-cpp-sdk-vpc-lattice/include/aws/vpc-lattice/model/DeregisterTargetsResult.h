/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/Target.h>
#include <aws/vpc-lattice/model/TargetFailure.h>
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
  class DeregisterTargetsResult
  {
  public:
    AWS_VPCLATTICE_API DeregisterTargetsResult() = default;
    AWS_VPCLATTICE_API DeregisterTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API DeregisterTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The targets that were successfully deregistered.</p>
     */
    inline const Aws::Vector<Target>& GetSuccessful() const { return m_successful; }
    template<typename SuccessfulT = Aws::Vector<Target>>
    void SetSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful = std::forward<SuccessfulT>(value); }
    template<typename SuccessfulT = Aws::Vector<Target>>
    DeregisterTargetsResult& WithSuccessful(SuccessfulT&& value) { SetSuccessful(std::forward<SuccessfulT>(value)); return *this;}
    template<typename SuccessfulT = Target>
    DeregisterTargetsResult& AddSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful.emplace_back(std::forward<SuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The targets that the operation couldn't deregister.</p>
     */
    inline const Aws::Vector<TargetFailure>& GetUnsuccessful() const { return m_unsuccessful; }
    template<typename UnsuccessfulT = Aws::Vector<TargetFailure>>
    void SetUnsuccessful(UnsuccessfulT&& value) { m_unsuccessfulHasBeenSet = true; m_unsuccessful = std::forward<UnsuccessfulT>(value); }
    template<typename UnsuccessfulT = Aws::Vector<TargetFailure>>
    DeregisterTargetsResult& WithUnsuccessful(UnsuccessfulT&& value) { SetUnsuccessful(std::forward<UnsuccessfulT>(value)); return *this;}
    template<typename UnsuccessfulT = TargetFailure>
    DeregisterTargetsResult& AddUnsuccessful(UnsuccessfulT&& value) { m_unsuccessfulHasBeenSet = true; m_unsuccessful.emplace_back(std::forward<UnsuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeregisterTargetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Target> m_successful;
    bool m_successfulHasBeenSet = false;

    Aws::Vector<TargetFailure> m_unsuccessful;
    bool m_unsuccessfulHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
