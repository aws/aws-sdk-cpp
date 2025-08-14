/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the image import source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImageSourceIdentifier">AWS
   * API Reference</a></p>
   */
  class ImageSourceIdentifier
  {
  public:
    AWS_WORKSPACES_API ImageSourceIdentifier() = default;
    AWS_WORKSPACES_API ImageSourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ImageSourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The EC2 import task ID to import the image from the Amazon EC2 VM import
     * process.</p>
     */
    inline const Aws::String& GetEc2ImportTaskId() const { return m_ec2ImportTaskId; }
    inline bool Ec2ImportTaskIdHasBeenSet() const { return m_ec2ImportTaskIdHasBeenSet; }
    template<typename Ec2ImportTaskIdT = Aws::String>
    void SetEc2ImportTaskId(Ec2ImportTaskIdT&& value) { m_ec2ImportTaskIdHasBeenSet = true; m_ec2ImportTaskId = std::forward<Ec2ImportTaskIdT>(value); }
    template<typename Ec2ImportTaskIdT = Aws::String>
    ImageSourceIdentifier& WithEc2ImportTaskId(Ec2ImportTaskIdT&& value) { SetEc2ImportTaskId(std::forward<Ec2ImportTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the EC2 Image Builder image.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const { return m_imageBuildVersionArn; }
    inline bool ImageBuildVersionArnHasBeenSet() const { return m_imageBuildVersionArnHasBeenSet; }
    template<typename ImageBuildVersionArnT = Aws::String>
    void SetImageBuildVersionArn(ImageBuildVersionArnT&& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = std::forward<ImageBuildVersionArnT>(value); }
    template<typename ImageBuildVersionArnT = Aws::String>
    ImageSourceIdentifier& WithImageBuildVersionArn(ImageBuildVersionArnT&& value) { SetImageBuildVersionArn(std::forward<ImageBuildVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the EC2 image.</p>
     */
    inline const Aws::String& GetEc2ImageId() const { return m_ec2ImageId; }
    inline bool Ec2ImageIdHasBeenSet() const { return m_ec2ImageIdHasBeenSet; }
    template<typename Ec2ImageIdT = Aws::String>
    void SetEc2ImageId(Ec2ImageIdT&& value) { m_ec2ImageIdHasBeenSet = true; m_ec2ImageId = std::forward<Ec2ImageIdT>(value); }
    template<typename Ec2ImageIdT = Aws::String>
    ImageSourceIdentifier& WithEc2ImageId(Ec2ImageIdT&& value) { SetEc2ImageId(std::forward<Ec2ImageIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ec2ImportTaskId;
    bool m_ec2ImportTaskIdHasBeenSet = false;

    Aws::String m_imageBuildVersionArn;
    bool m_imageBuildVersionArnHasBeenSet = false;

    Aws::String m_ec2ImageId;
    bool m_ec2ImageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
