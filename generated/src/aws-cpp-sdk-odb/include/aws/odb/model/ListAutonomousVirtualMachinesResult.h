/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/AutonomousVirtualMachineSummary.h>
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
namespace odb
{
namespace Model
{
  class ListAutonomousVirtualMachinesResult
  {
  public:
    AWS_ODB_API ListAutonomousVirtualMachinesResult() = default;
    AWS_ODB_API ListAutonomousVirtualMachinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API ListAutonomousVirtualMachinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token from which to continue listing.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAutonomousVirtualMachinesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Autonomous VMs in the specified Autonomous VM cluster.</p>
     */
    inline const Aws::Vector<AutonomousVirtualMachineSummary>& GetAutonomousVirtualMachines() const { return m_autonomousVirtualMachines; }
    template<typename AutonomousVirtualMachinesT = Aws::Vector<AutonomousVirtualMachineSummary>>
    void SetAutonomousVirtualMachines(AutonomousVirtualMachinesT&& value) { m_autonomousVirtualMachinesHasBeenSet = true; m_autonomousVirtualMachines = std::forward<AutonomousVirtualMachinesT>(value); }
    template<typename AutonomousVirtualMachinesT = Aws::Vector<AutonomousVirtualMachineSummary>>
    ListAutonomousVirtualMachinesResult& WithAutonomousVirtualMachines(AutonomousVirtualMachinesT&& value) { SetAutonomousVirtualMachines(std::forward<AutonomousVirtualMachinesT>(value)); return *this;}
    template<typename AutonomousVirtualMachinesT = AutonomousVirtualMachineSummary>
    ListAutonomousVirtualMachinesResult& AddAutonomousVirtualMachines(AutonomousVirtualMachinesT&& value) { m_autonomousVirtualMachinesHasBeenSet = true; m_autonomousVirtualMachines.emplace_back(std::forward<AutonomousVirtualMachinesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAutonomousVirtualMachinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AutonomousVirtualMachineSummary> m_autonomousVirtualMachines;
    bool m_autonomousVirtualMachinesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
