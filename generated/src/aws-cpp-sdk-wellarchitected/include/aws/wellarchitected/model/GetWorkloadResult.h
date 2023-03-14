/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/Workload.h>
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
namespace WellArchitected
{
namespace Model
{
  /**
   * <p>Output of a get workload call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetWorkloadOutput">AWS
   * API Reference</a></p>
   */
  class GetWorkloadResult
  {
  public:
    AWS_WELLARCHITECTED_API GetWorkloadResult();
    AWS_WELLARCHITECTED_API GetWorkloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetWorkloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Workload& GetWorkload() const{ return m_workload; }

    
    inline void SetWorkload(const Workload& value) { m_workload = value; }

    
    inline void SetWorkload(Workload&& value) { m_workload = std::move(value); }

    
    inline GetWorkloadResult& WithWorkload(const Workload& value) { SetWorkload(value); return *this;}

    
    inline GetWorkloadResult& WithWorkload(Workload&& value) { SetWorkload(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetWorkloadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetWorkloadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetWorkloadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Workload m_workload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
