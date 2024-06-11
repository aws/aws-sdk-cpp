﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
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
  class DeleteViewResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API DeleteViewResult();
    AWS_RESOURCEEXPLORER2_API DeleteViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API DeleteViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that you successfully deleted.</p>
     */
    inline const Aws::String& GetViewArn() const{ return m_viewArn; }
    inline void SetViewArn(const Aws::String& value) { m_viewArn = value; }
    inline void SetViewArn(Aws::String&& value) { m_viewArn = std::move(value); }
    inline void SetViewArn(const char* value) { m_viewArn.assign(value); }
    inline DeleteViewResult& WithViewArn(const Aws::String& value) { SetViewArn(value); return *this;}
    inline DeleteViewResult& WithViewArn(Aws::String&& value) { SetViewArn(std::move(value)); return *this;}
    inline DeleteViewResult& WithViewArn(const char* value) { SetViewArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteViewResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteViewResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteViewResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_viewArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
