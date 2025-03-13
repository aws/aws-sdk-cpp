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
  class CreateRobotApplicationVersionRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API CreateRobotApplicationVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRobotApplicationVersion"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The application information for the robot application.</p>
     */
    inline const Aws::String& GetApplication() const { return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    template<typename ApplicationT = Aws::String>
    void SetApplication(ApplicationT&& value) { m_applicationHasBeenSet = true; m_application = std::forward<ApplicationT>(value); }
    template<typename ApplicationT = Aws::String>
    CreateRobotApplicationVersionRequest& WithApplication(ApplicationT&& value) { SetApplication(std::forward<ApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current revision id for the robot application. If you provide a value and
     * it matches the latest revision ID, a new version will be created.</p>
     */
    inline const Aws::String& GetCurrentRevisionId() const { return m_currentRevisionId; }
    inline bool CurrentRevisionIdHasBeenSet() const { return m_currentRevisionIdHasBeenSet; }
    template<typename CurrentRevisionIdT = Aws::String>
    void SetCurrentRevisionId(CurrentRevisionIdT&& value) { m_currentRevisionIdHasBeenSet = true; m_currentRevisionId = std::forward<CurrentRevisionIdT>(value); }
    template<typename CurrentRevisionIdT = Aws::String>
    CreateRobotApplicationVersionRequest& WithCurrentRevisionId(CurrentRevisionIdT&& value) { SetCurrentRevisionId(std::forward<CurrentRevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 identifier for the zip file bundle that you use for your robot
     * application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetS3Etags() const { return m_s3Etags; }
    inline bool S3EtagsHasBeenSet() const { return m_s3EtagsHasBeenSet; }
    template<typename S3EtagsT = Aws::Vector<Aws::String>>
    void SetS3Etags(S3EtagsT&& value) { m_s3EtagsHasBeenSet = true; m_s3Etags = std::forward<S3EtagsT>(value); }
    template<typename S3EtagsT = Aws::Vector<Aws::String>>
    CreateRobotApplicationVersionRequest& WithS3Etags(S3EtagsT&& value) { SetS3Etags(std::forward<S3EtagsT>(value)); return *this;}
    template<typename S3EtagsT = Aws::String>
    CreateRobotApplicationVersionRequest& AddS3Etags(S3EtagsT&& value) { m_s3EtagsHasBeenSet = true; m_s3Etags.emplace_back(std::forward<S3EtagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A SHA256 identifier for the Docker image that you use for your robot
     * application.</p>
     */
    inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    template<typename ImageDigestT = Aws::String>
    void SetImageDigest(ImageDigestT&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::forward<ImageDigestT>(value); }
    template<typename ImageDigestT = Aws::String>
    CreateRobotApplicationVersionRequest& WithImageDigest(ImageDigestT&& value) { SetImageDigest(std::forward<ImageDigestT>(value)); return *this;}
    ///@}
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
