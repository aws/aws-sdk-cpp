/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class CreateSimulationApplicationVersionRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API CreateSimulationApplicationVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSimulationApplicationVersion"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The application information for the simulation application.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>The application information for the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline const Aws::String& GetCurrentRevisionId() const{ return m_currentRevisionId; }

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline bool CurrentRevisionIdHasBeenSet() const { return m_currentRevisionIdHasBeenSet; }

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline void SetCurrentRevisionId(const Aws::String& value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId = value; }

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline void SetCurrentRevisionId(Aws::String&& value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId = std::move(value); }

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline void SetCurrentRevisionId(const char* value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId.assign(value); }

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithCurrentRevisionId(const Aws::String& value) { SetCurrentRevisionId(value); return *this;}

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithCurrentRevisionId(Aws::String&& value) { SetCurrentRevisionId(std::move(value)); return *this;}

    /**
     * <p>The current revision id for the simulation application. If you provide a
     * value and it matches the latest revision ID, a new version will be created.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithCurrentRevisionId(const char* value) { SetCurrentRevisionId(value); return *this;}


    /**
     * <p>The Amazon S3 eTag identifier for the zip file bundle that you use to create
     * the simulation application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetS3Etags() const{ return m_s3Etags; }

    /**
     * <p>The Amazon S3 eTag identifier for the zip file bundle that you use to create
     * the simulation application.</p>
     */
    inline bool S3EtagsHasBeenSet() const { return m_s3EtagsHasBeenSet; }

    /**
     * <p>The Amazon S3 eTag identifier for the zip file bundle that you use to create
     * the simulation application.</p>
     */
    inline void SetS3Etags(const Aws::Vector<Aws::String>& value) { m_s3EtagsHasBeenSet = true; m_s3Etags = value; }

    /**
     * <p>The Amazon S3 eTag identifier for the zip file bundle that you use to create
     * the simulation application.</p>
     */
    inline void SetS3Etags(Aws::Vector<Aws::String>&& value) { m_s3EtagsHasBeenSet = true; m_s3Etags = std::move(value); }

    /**
     * <p>The Amazon S3 eTag identifier for the zip file bundle that you use to create
     * the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithS3Etags(const Aws::Vector<Aws::String>& value) { SetS3Etags(value); return *this;}

    /**
     * <p>The Amazon S3 eTag identifier for the zip file bundle that you use to create
     * the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithS3Etags(Aws::Vector<Aws::String>&& value) { SetS3Etags(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 eTag identifier for the zip file bundle that you use to create
     * the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& AddS3Etags(const Aws::String& value) { m_s3EtagsHasBeenSet = true; m_s3Etags.push_back(value); return *this; }

    /**
     * <p>The Amazon S3 eTag identifier for the zip file bundle that you use to create
     * the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& AddS3Etags(Aws::String&& value) { m_s3EtagsHasBeenSet = true; m_s3Etags.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon S3 eTag identifier for the zip file bundle that you use to create
     * the simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& AddS3Etags(const char* value) { m_s3EtagsHasBeenSet = true; m_s3Etags.push_back(value); return *this; }


    /**
     * <p>The SHA256 digest used to identify the Docker image URI used to created the
     * simulation application.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }

    /**
     * <p>The SHA256 digest used to identify the Docker image URI used to created the
     * simulation application.</p>
     */
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }

    /**
     * <p>The SHA256 digest used to identify the Docker image URI used to created the
     * simulation application.</p>
     */
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }

    /**
     * <p>The SHA256 digest used to identify the Docker image URI used to created the
     * simulation application.</p>
     */
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::move(value); }

    /**
     * <p>The SHA256 digest used to identify the Docker image URI used to created the
     * simulation application.</p>
     */
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }

    /**
     * <p>The SHA256 digest used to identify the Docker image URI used to created the
     * simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}

    /**
     * <p>The SHA256 digest used to identify the Docker image URI used to created the
     * simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}

    /**
     * <p>The SHA256 digest used to identify the Docker image URI used to created the
     * simulation application.</p>
     */
    inline CreateSimulationApplicationVersionRequest& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}

  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    Aws::String m_currentRevisionId;
    bool m_currentRevisionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_s3Etags;
    bool m_s3EtagsHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
