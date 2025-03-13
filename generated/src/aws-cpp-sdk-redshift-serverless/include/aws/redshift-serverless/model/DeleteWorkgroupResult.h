/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/Workgroup.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class DeleteWorkgroupResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API DeleteWorkgroupResult() = default;
    AWS_REDSHIFTSERVERLESS_API DeleteWorkgroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API DeleteWorkgroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The deleted workgroup object.</p>
     */
    inline const Workgroup& GetWorkgroup() const { return m_workgroup; }
    template<typename WorkgroupT = Workgroup>
    void SetWorkgroup(WorkgroupT&& value) { m_workgroupHasBeenSet = true; m_workgroup = std::forward<WorkgroupT>(value); }
    template<typename WorkgroupT = Workgroup>
    DeleteWorkgroupResult& WithWorkgroup(WorkgroupT&& value) { SetWorkgroup(std::forward<WorkgroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteWorkgroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Workgroup m_workgroup;
    bool m_workgroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
