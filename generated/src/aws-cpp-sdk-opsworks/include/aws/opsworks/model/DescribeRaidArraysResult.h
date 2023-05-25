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
    AWS_OPSWORKS_API DescribeRaidArraysResult();
    AWS_OPSWORKS_API DescribeRaidArraysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeRaidArraysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline const Aws::Vector<RaidArray>& GetRaidArrays() const{ return m_raidArrays; }

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline void SetRaidArrays(const Aws::Vector<RaidArray>& value) { m_raidArrays = value; }

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline void SetRaidArrays(Aws::Vector<RaidArray>&& value) { m_raidArrays = std::move(value); }

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline DescribeRaidArraysResult& WithRaidArrays(const Aws::Vector<RaidArray>& value) { SetRaidArrays(value); return *this;}

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline DescribeRaidArraysResult& WithRaidArrays(Aws::Vector<RaidArray>&& value) { SetRaidArrays(std::move(value)); return *this;}

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline DescribeRaidArraysResult& AddRaidArrays(const RaidArray& value) { m_raidArrays.push_back(value); return *this; }

    /**
     * <p>A <code>RaidArrays</code> object that describes the specified RAID
     * arrays.</p>
     */
    inline DescribeRaidArraysResult& AddRaidArrays(RaidArray&& value) { m_raidArrays.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRaidArraysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRaidArraysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRaidArraysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RaidArray> m_raidArrays;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
