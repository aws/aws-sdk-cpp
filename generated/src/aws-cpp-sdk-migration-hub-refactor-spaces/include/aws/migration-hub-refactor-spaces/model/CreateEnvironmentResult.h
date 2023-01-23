/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/NetworkFabricType.h>
#include <aws/migration-hub-refactor-spaces/model/EnvironmentState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateEnvironmentResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateEnvironmentResult();
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateEnvironmentResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline CreateEnvironmentResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline CreateEnvironmentResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A timestamp that indicates when the environment is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>A timestamp that indicates when the environment is created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>A timestamp that indicates when the environment is created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the environment is created.</p>
     */
    inline CreateEnvironmentResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the environment is created.</p>
     */
    inline CreateEnvironmentResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>A description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the environment.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the environment.</p>
     */
    inline CreateEnvironmentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the environment.</p>
     */
    inline CreateEnvironmentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the environment.</p>
     */
    inline CreateEnvironmentResult& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateEnvironmentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline CreateEnvironmentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline CreateEnvironmentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


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
    inline CreateEnvironmentResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the environment was last updated. </p>
     */
    inline CreateEnvironmentResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


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
    inline CreateEnvironmentResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline CreateEnvironmentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline CreateEnvironmentResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The network fabric type of the environment.</p>
     */
    inline const NetworkFabricType& GetNetworkFabricType() const{ return m_networkFabricType; }

    /**
     * <p>The network fabric type of the environment.</p>
     */
    inline void SetNetworkFabricType(const NetworkFabricType& value) { m_networkFabricType = value; }

    /**
     * <p>The network fabric type of the environment.</p>
     */
    inline void SetNetworkFabricType(NetworkFabricType&& value) { m_networkFabricType = std::move(value); }

    /**
     * <p>The network fabric type of the environment.</p>
     */
    inline CreateEnvironmentResult& WithNetworkFabricType(const NetworkFabricType& value) { SetNetworkFabricType(value); return *this;}

    /**
     * <p>The network fabric type of the environment.</p>
     */
    inline CreateEnvironmentResult& WithNetworkFabricType(NetworkFabricType&& value) { SetNetworkFabricType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account ID of environment owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The Amazon Web Services account ID of environment owner.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of environment owner.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of environment owner.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of environment owner.</p>
     */
    inline CreateEnvironmentResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of environment owner.</p>
     */
    inline CreateEnvironmentResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of environment owner.</p>
     */
    inline CreateEnvironmentResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


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
    inline CreateEnvironmentResult& WithState(const EnvironmentState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the environment. </p>
     */
    inline CreateEnvironmentResult& WithState(EnvironmentState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline CreateEnvironmentResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline CreateEnvironmentResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline CreateEnvironmentResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline CreateEnvironmentResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline CreateEnvironmentResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline CreateEnvironmentResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline CreateEnvironmentResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline CreateEnvironmentResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the created environment. A tag is a label that you
     * assign to an Amazon Web Services resource. Each tag consists of a key-value
     * pair..</p>
     */
    inline CreateEnvironmentResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_description;

    Aws::String m_environmentId;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_name;

    NetworkFabricType m_networkFabricType;

    Aws::String m_ownerAccountId;

    EnvironmentState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
