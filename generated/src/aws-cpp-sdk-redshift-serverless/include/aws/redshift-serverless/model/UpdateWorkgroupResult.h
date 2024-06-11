﻿/**
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
  class UpdateWorkgroupResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateWorkgroupResult();
    AWS_REDSHIFTSERVERLESS_API UpdateWorkgroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API UpdateWorkgroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated workgroup object.</p>
     */
    inline const Workgroup& GetWorkgroup() const{ return m_workgroup; }
    inline void SetWorkgroup(const Workgroup& value) { m_workgroup = value; }
    inline void SetWorkgroup(Workgroup&& value) { m_workgroup = std::move(value); }
    inline UpdateWorkgroupResult& WithWorkgroup(const Workgroup& value) { SetWorkgroup(value); return *this;}
    inline UpdateWorkgroupResult& WithWorkgroup(Workgroup&& value) { SetWorkgroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateWorkgroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateWorkgroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateWorkgroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Workgroup m_workgroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
