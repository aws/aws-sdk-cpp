﻿/**
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
   * <p> Result structure used in response to a request to create a project.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/CreateProjectResult">AWS
   * API Reference</a></p>
   */
  class CreateProjectResult
  {
  public:
    AWS_MOBILE_API CreateProjectResult();
    AWS_MOBILE_API CreateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MOBILE_API CreateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Detailed information about the created AWS Mobile Hub project. </p>
     */
    inline const ProjectDetails& GetDetails() const{ return m_details; }

    /**
     * <p> Detailed information about the created AWS Mobile Hub project. </p>
     */
    inline void SetDetails(const ProjectDetails& value) { m_details = value; }

    /**
     * <p> Detailed information about the created AWS Mobile Hub project. </p>
     */
    inline void SetDetails(ProjectDetails&& value) { m_details = std::move(value); }

    /**
     * <p> Detailed information about the created AWS Mobile Hub project. </p>
     */
    inline CreateProjectResult& WithDetails(const ProjectDetails& value) { SetDetails(value); return *this;}

    /**
     * <p> Detailed information about the created AWS Mobile Hub project. </p>
     */
    inline CreateProjectResult& WithDetails(ProjectDetails&& value) { SetDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProjectDetails m_details;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
