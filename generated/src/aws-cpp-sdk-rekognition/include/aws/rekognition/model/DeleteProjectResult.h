/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ProjectStatus.h>
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
  class DeleteProjectResult
  {
  public:
    AWS_REKOGNITION_API DeleteProjectResult();
    AWS_REKOGNITION_API DeleteProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DeleteProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the delete project operation.</p>
     */
    inline const ProjectStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the delete project operation.</p>
     */
    inline void SetStatus(const ProjectStatus& value) { m_status = value; }

    /**
     * <p>The current status of the delete project operation.</p>
     */
    inline void SetStatus(ProjectStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the delete project operation.</p>
     */
    inline DeleteProjectResult& WithStatus(const ProjectStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the delete project operation.</p>
     */
    inline DeleteProjectResult& WithStatus(ProjectStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ProjectStatus m_status;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
