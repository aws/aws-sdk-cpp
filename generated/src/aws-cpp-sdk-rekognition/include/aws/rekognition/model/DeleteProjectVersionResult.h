/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ProjectVersionStatus.h>
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
namespace Rekognition
{
namespace Model
{
  class DeleteProjectVersionResult
  {
  public:
    AWS_REKOGNITION_API DeleteProjectVersionResult();
    AWS_REKOGNITION_API DeleteProjectVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DeleteProjectVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the deletion operation.</p>
     */
    inline const ProjectVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the deletion operation.</p>
     */
    inline void SetStatus(const ProjectVersionStatus& value) { m_status = value; }

    /**
     * <p>The status of the deletion operation.</p>
     */
    inline void SetStatus(ProjectVersionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the deletion operation.</p>
     */
    inline DeleteProjectVersionResult& WithStatus(const ProjectVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the deletion operation.</p>
     */
    inline DeleteProjectVersionResult& WithStatus(ProjectVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteProjectVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteProjectVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteProjectVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProjectVersionStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
