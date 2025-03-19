/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/UploadBehavior.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Provides upload configuration information. Files are uploaded from the
   * simulation job to a location you specify. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UploadConfiguration">AWS
   * API Reference</a></p>
   */
  class UploadConfiguration
  {
  public:
    AWS_ROBOMAKER_API UploadConfiguration() = default;
    AWS_ROBOMAKER_API UploadConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API UploadConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A prefix that specifies where files will be uploaded in Amazon S3. It is
     * appended to the simulation output location to determine the final path. </p> <p>
     * For example, if your simulation output location is
     * <code>s3://amzn-s3-demo-bucket</code> and your upload configuration name is
     * <code>robot-test</code>, your files will be uploaded to
     * <code>s3://amzn-s3-demo-bucket/&lt;simid&gt;/&lt;runid&gt;/robot-test</code>.
     * </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UploadConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the path of the file(s) to upload. Standard Unix glob matching
     * rules are accepted, with the addition of <code>**</code> as a <i>super
     * asterisk</i>. For example, specifying <code>/var/log/ **.log</code> causes all
     * .log files in the <code>/var/log</code> directory tree to be collected. For more
     * examples, see <a href="https://github.com/gobwas/glob">Glob Library</a>. </p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    UploadConfiguration& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies when to upload the files:</p> <dl> <dt>UPLOAD_ON_TERMINATE</dt>
     * <dd> <p>Matching files are uploaded once the simulation enters the
     * <code>TERMINATING</code> state. Matching files are not uploaded until all of
     * your code (including tools) have stopped. </p> <p>If there is a problem
     * uploading a file, the upload is retried. If problems persist, no further upload
     * attempts will be made.</p> </dd> <dt>UPLOAD_ROLLING_AUTO_REMOVE</dt> <dd>
     * <p>Matching files are uploaded as they are created. They are deleted after they
     * are uploaded. The specified path is checked every 5 seconds. A final check is
     * made when all of your code (including tools) have stopped. </p> </dd> </dl>
     */
    inline UploadBehavior GetUploadBehavior() const { return m_uploadBehavior; }
    inline bool UploadBehaviorHasBeenSet() const { return m_uploadBehaviorHasBeenSet; }
    inline void SetUploadBehavior(UploadBehavior value) { m_uploadBehaviorHasBeenSet = true; m_uploadBehavior = value; }
    inline UploadConfiguration& WithUploadBehavior(UploadBehavior value) { SetUploadBehavior(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    UploadBehavior m_uploadBehavior{UploadBehavior::NOT_SET};
    bool m_uploadBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
