/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/OutputLocation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class CreateWorldExportJobRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API CreateWorldExportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorldExportJob"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorldExportJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorldExportJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorldExportJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * export.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorlds() const{ return m_worlds; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * export.</p>
     */
    inline bool WorldsHasBeenSet() const { return m_worldsHasBeenSet; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * export.</p>
     */
    inline void SetWorlds(const Aws::Vector<Aws::String>& value) { m_worldsHasBeenSet = true; m_worlds = value; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * export.</p>
     */
    inline void SetWorlds(Aws::Vector<Aws::String>&& value) { m_worldsHasBeenSet = true; m_worlds = std::move(value); }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * export.</p>
     */
    inline CreateWorldExportJobRequest& WithWorlds(const Aws::Vector<Aws::String>& value) { SetWorlds(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * export.</p>
     */
    inline CreateWorldExportJobRequest& WithWorlds(Aws::Vector<Aws::String>&& value) { SetWorlds(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * export.</p>
     */
    inline CreateWorldExportJobRequest& AddWorlds(const Aws::String& value) { m_worldsHasBeenSet = true; m_worlds.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * export.</p>
     */
    inline CreateWorldExportJobRequest& AddWorlds(Aws::String&& value) { m_worldsHasBeenSet = true; m_worlds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Resource Names (arns) that correspond to worlds to
     * export.</p>
     */
    inline CreateWorldExportJobRequest& AddWorlds(const char* value) { m_worldsHasBeenSet = true; m_worlds.push_back(value); return *this; }


    
    inline const OutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    
    inline void SetOutputLocation(const OutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    
    inline void SetOutputLocation(OutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    
    inline CreateWorldExportJobRequest& WithOutputLocation(const OutputLocation& value) { SetOutputLocation(value); return *this;}

    
    inline CreateWorldExportJobRequest& WithOutputLocation(OutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}


    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline CreateWorldExportJobRequest& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline CreateWorldExportJobRequest& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that the world export process uses to access the Amazon S3
     * bucket and put the export.</p>
     */
    inline CreateWorldExportJobRequest& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline CreateWorldExportJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline CreateWorldExportJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline CreateWorldExportJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline CreateWorldExportJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline CreateWorldExportJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline CreateWorldExportJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline CreateWorldExportJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline CreateWorldExportJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the world
     * export job.</p>
     */
    inline CreateWorldExportJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_worlds;
    bool m_worldsHasBeenSet = false;

    OutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
