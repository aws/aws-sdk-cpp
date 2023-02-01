/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class GetJobManifestRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API GetJobManifestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJobManifest"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID for a job that you want to get the manifest file for, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID for a job that you want to get the manifest file for, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID for a job that you want to get the manifest file for, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID for a job that you want to get the manifest file for, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID for a job that you want to get the manifest file for, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID for a job that you want to get the manifest file for, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline GetJobManifestRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID for a job that you want to get the manifest file for, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline GetJobManifestRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID for a job that you want to get the manifest file for, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline GetJobManifestRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
