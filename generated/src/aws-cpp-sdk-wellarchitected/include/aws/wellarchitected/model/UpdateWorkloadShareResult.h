/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/WorkloadShare.h>
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
namespace WellArchitected
{
namespace Model
{
  /**
   * <p>Input for Update Workload Share</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkloadShareOutput">AWS
   * API Reference</a></p>
   */
  class UpdateWorkloadShareResult
  {
  public:
    AWS_WELLARCHITECTED_API UpdateWorkloadShareResult();
    AWS_WELLARCHITECTED_API UpdateWorkloadShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API UpdateWorkloadShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    
    inline UpdateWorkloadShareResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline UpdateWorkloadShareResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline UpdateWorkloadShareResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const WorkloadShare& GetWorkloadShare() const{ return m_workloadShare; }

    
    inline void SetWorkloadShare(const WorkloadShare& value) { m_workloadShare = value; }

    
    inline void SetWorkloadShare(WorkloadShare&& value) { m_workloadShare = std::move(value); }

    
    inline UpdateWorkloadShareResult& WithWorkloadShare(const WorkloadShare& value) { SetWorkloadShare(value); return *this;}

    
    inline UpdateWorkloadShareResult& WithWorkloadShare(WorkloadShare&& value) { SetWorkloadShare(std::move(value)); return *this;}

  private:

    Aws::String m_workloadId;

    WorkloadShare m_workloadShare;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
