/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/RobotSoftwareSuite.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/Environment.h>
#include <aws/robomaker/model/Source.h>
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
namespace RoboMaker
{
namespace Model
{
  class CreateRobotApplicationResult
  {
  public:
    AWS_ROBOMAKER_API CreateRobotApplicationResult();
    AWS_ROBOMAKER_API CreateRobotApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API CreateRobotApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateRobotApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateRobotApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateRobotApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the robot application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateRobotApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateRobotApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateRobotApplicationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the robot application.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline CreateRobotApplicationResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreateRobotApplicationResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreateRobotApplicationResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sources of the robot application.</p>
     */
    inline const Aws::Vector<Source>& GetSources() const{ return m_sources; }
    inline void SetSources(const Aws::Vector<Source>& value) { m_sources = value; }
    inline void SetSources(Aws::Vector<Source>&& value) { m_sources = std::move(value); }
    inline CreateRobotApplicationResult& WithSources(const Aws::Vector<Source>& value) { SetSources(value); return *this;}
    inline CreateRobotApplicationResult& WithSources(Aws::Vector<Source>&& value) { SetSources(std::move(value)); return *this;}
    inline CreateRobotApplicationResult& AddSources(const Source& value) { m_sources.push_back(value); return *this; }
    inline CreateRobotApplicationResult& AddSources(Source&& value) { m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The robot software suite used by the robot application.</p>
     */
    inline const RobotSoftwareSuite& GetRobotSoftwareSuite() const{ return m_robotSoftwareSuite; }
    inline void SetRobotSoftwareSuite(const RobotSoftwareSuite& value) { m_robotSoftwareSuite = value; }
    inline void SetRobotSoftwareSuite(RobotSoftwareSuite&& value) { m_robotSoftwareSuite = std::move(value); }
    inline CreateRobotApplicationResult& WithRobotSoftwareSuite(const RobotSoftwareSuite& value) { SetRobotSoftwareSuite(value); return *this;}
    inline CreateRobotApplicationResult& WithRobotSoftwareSuite(RobotSoftwareSuite&& value) { SetRobotSoftwareSuite(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the robot application was
     * last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline CreateRobotApplicationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline CreateRobotApplicationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision id of the robot application.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }
    inline CreateRobotApplicationResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline CreateRobotApplicationResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline CreateRobotApplicationResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of all tags added to the robot application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateRobotApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateRobotApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRobotApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateRobotApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateRobotApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateRobotApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateRobotApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateRobotApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateRobotApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains the Docker image URI used to a create your robot
     * application.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }
    inline void SetEnvironment(const Environment& value) { m_environment = value; }
    inline void SetEnvironment(Environment&& value) { m_environment = std::move(value); }
    inline CreateRobotApplicationResult& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}
    inline CreateRobotApplicationResult& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRobotApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRobotApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRobotApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_version;

    Aws::Vector<Source> m_sources;

    RobotSoftwareSuite m_robotSoftwareSuite;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_revisionId;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Environment m_environment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
