/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/RaidArray.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeRaidArrays</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeRaidArraysResult">AWS
   * API Reference</a></p>
   */
  class DescribeRaidArraysResult
  {
  public:
    AWS_OPSWORKS_API DescribeRaidArraysResult() = default;
    AWS_OPSWORKS_API DescribeRaidArraysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeRaidArraysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline const Aws::Vector<RaidArray>& GetRaidArrays() const { return m_raidArrays; }
    template<typename RaidArraysT = Aws::Vector<RaidArray>>
    void SetRaidArrays(RaidArraysT&& value) { m_raidArraysHasBeenSet = true; m_raidArrays = std::forward<RaidArraysT>(value); }
    template<typename RaidArraysT = Aws::Vector<RaidArray>>
    DescribeRaidArraysResult& WithRaidArrays(RaidArraysT&& value) { SetRaidArrays(std::forward<RaidArraysT>(value)); return *this;}
    template<typename RaidArraysT = RaidArray>
    DescribeRaidArraysResult& AddRaidArrays(RaidArraysT&& value) { m_raidArraysHasBeenSet = true; m_raidArrays.emplace_back(std::forward<RaidArraysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRaidArraysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RaidArray> m_raidArrays;
    bool m_raidArraysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
