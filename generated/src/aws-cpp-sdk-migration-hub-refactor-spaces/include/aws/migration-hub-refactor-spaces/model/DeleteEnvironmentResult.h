/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/EnvironmentState.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  class DeleteEnvironmentResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API DeleteEnvironmentResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API DeleteEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API DeleteEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline DeleteEnvironmentResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline DeleteEnvironmentResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline DeleteEnvironmentResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline DeleteEnvironmentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline DeleteEnvironmentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline DeleteEnvironmentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>A timestamp that indicates when the environment was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>A timestamp that indicates when the environment was last updated. </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>A timestamp that indicates when the environment was last updated. </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the environment was last updated. </p>
     */
    inline DeleteEnvironmentResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the environment was last updated. </p>
     */
    inline DeleteEnvironmentResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline DeleteEnvironmentResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline DeleteEnvironmentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline DeleteEnvironmentResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current state of the environment. </p>
     */
    inline const EnvironmentState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the environment. </p>
     */
    inline void SetState(const EnvironmentState& value) { m_state = value; }

    /**
     * <p>The current state of the environment. </p>
     */
    inline void SetState(EnvironmentState&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the environment. </p>
     */
    inline DeleteEnvironmentResult& WithState(const EnvironmentState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the environment. </p>
     */
    inline DeleteEnvironmentResult& WithState(EnvironmentState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_environmentId;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_name;

    EnvironmentState m_state;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
