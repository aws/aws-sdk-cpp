/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/mobile/model/ProjectDetails.h>
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
namespace Mobile
{
namespace Model
{
  /**
   * <p> Result structure used for requests of project details. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeProjectResult">AWS
   * API Reference</a></p>
   */
  class DescribeProjectResult
  {
  public:
    AWS_MOBILE_API DescribeProjectResult();
    AWS_MOBILE_API DescribeProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MOBILE_API DescribeProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ProjectDetails& GetDetails() const{ return m_details; }

    
    inline void SetDetails(const ProjectDetails& value) { m_details = value; }

    
    inline void SetDetails(ProjectDetails&& value) { m_details = std::move(value); }

    
    inline DescribeProjectResult& WithDetails(const ProjectDetails& value) { SetDetails(value); return *this;}

    
    inline DescribeProjectResult& WithDetails(ProjectDetails&& value) { SetDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProjectDetails m_details;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
