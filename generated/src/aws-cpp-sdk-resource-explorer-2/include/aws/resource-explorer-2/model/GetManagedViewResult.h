/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/ManagedView.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class GetManagedViewResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API GetManagedViewResult();
    AWS_RESOURCEEXPLORER2_API GetManagedViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API GetManagedViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the specified managed view. </p>
     */
    inline const ManagedView& GetManagedView() const{ return m_managedView; }
    inline void SetManagedView(const ManagedView& value) { m_managedView = value; }
    inline void SetManagedView(ManagedView&& value) { m_managedView = std::move(value); }
    inline GetManagedViewResult& WithManagedView(const ManagedView& value) { SetManagedView(value); return *this;}
    inline GetManagedViewResult& WithManagedView(ManagedView&& value) { SetManagedView(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetManagedViewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetManagedViewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetManagedViewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ManagedView m_managedView;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
