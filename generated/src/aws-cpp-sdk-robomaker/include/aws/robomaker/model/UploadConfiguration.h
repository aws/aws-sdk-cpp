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
    AWS_ROBOMAKER_API UploadConfiguration();
    AWS_ROBOMAKER_API UploadConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API UploadConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A prefix that specifies where files will be uploaded in Amazon S3. It is
     * appended to the simulation output location to determine the final path. </p> <p>
     * For example, if your simulation output location is <code>s3://my-bucket</code>
     * and your upload configuration name is <code>robot-test</code>, your files will
     * be uploaded to
     * <code>s3://my-bucket/&lt;simid&gt;/&lt;runid&gt;/robot-test</code>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A prefix that specifies where files will be uploaded in Amazon S3. It is
     * appended to the simulation output location to determine the final path. </p> <p>
     * For example, if your simulation output location is <code>s3://my-bucket</code>
     * and your upload configuration name is <code>robot-test</code>, your files will
     * be uploaded to
     * <code>s3://my-bucket/&lt;simid&gt;/&lt;runid&gt;/robot-test</code>. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A prefix that specifies where files will be uploaded in Amazon S3. It is
     * appended to the simulation output location to determine the final path. </p> <p>
     * For example, if your simulation output location is <code>s3://my-bucket</code>
     * and your upload configuration name is <code>robot-test</code>, your files will
     * be uploaded to
     * <code>s3://my-bucket/&lt;simid&gt;/&lt;runid&gt;/robot-test</code>. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A prefix that specifies where files will be uploaded in Amazon S3. It is
     * appended to the simulation output location to determine the final path. </p> <p>
     * For example, if your simulation output location is <code>s3://my-bucket</code>
     * and your upload configuration name is <code>robot-test</code>, your files will
     * be uploaded to
     * <code>s3://my-bucket/&lt;simid&gt;/&lt;runid&gt;/robot-test</code>. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A prefix that specifies where files will be uploaded in Amazon S3. It is
     * appended to the simulation output location to determine the final path. </p> <p>
     * For example, if your simulation output location is <code>s3://my-bucket</code>
     * and your upload configuration name is <code>robot-test</code>, your files will
     * be uploaded to
     * <code>s3://my-bucket/&lt;simid&gt;/&lt;runid&gt;/robot-test</code>. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A prefix that specifies where files will be uploaded in Amazon S3. It is
     * appended to the simulation output location to determine the final path. </p> <p>
     * For example, if your simulation output location is <code>s3://my-bucket</code>
     * and your upload configuration name is <code>robot-test</code>, your files will
     * be uploaded to
     * <code>s3://my-bucket/&lt;simid&gt;/&lt;runid&gt;/robot-test</code>. </p>
     */
    inline UploadConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A prefix that specifies where files will be uploaded in Amazon S3. It is
     * appended to the simulation output location to determine the final path. </p> <p>
     * For example, if your simulation output location is <code>s3://my-bucket</code>
     * and your upload configuration name is <code>robot-test</code>, your files will
     * be uploaded to
     * <code>s3://my-bucket/&lt;simid&gt;/&lt;runid&gt;/robot-test</code>. </p>
     */
    inline UploadConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A prefix that specifies where files will be uploaded in Amazon S3. It is
     * appended to the simulation output location to determine the final path. </p> <p>
     * For example, if your simulation output location is <code>s3://my-bucket</code>
     * and your upload configuration name is <code>robot-test</code>, your files will
     * be uploaded to
     * <code>s3://my-bucket/&lt;simid&gt;/&lt;runid&gt;/robot-test</code>. </p>
     */
    inline UploadConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Specifies the path of the file(s) to upload. Standard Unix glob matching
     * rules are accepted, with the addition of <code>**</code> as a <i>super
     * asterisk</i>. For example, specifying <code>/var/log/ **.log</code> causes all
     * .log files in the <code>/var/log</code> directory tree to be collected. For more
     * examples, see <a href="https://github.com/gobwas/glob">Glob Library</a>. </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p> Specifies the path of the file(s) to upload. Standard Unix glob matching
     * rules are accepted, with the addition of <code>**</code> as a <i>super
     * asterisk</i>. For example, specifying <code>/var/log/ **.log</code> causes all
     * .log files in the <code>/var/log</code> directory tree to be collected. For more
     * examples, see <a href="https://github.com/gobwas/glob">Glob Library</a>. </p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p> Specifies the path of the file(s) to upload. Standard Unix glob matching
     * rules are accepted, with the addition of <code>**</code> as a <i>super
     * asterisk</i>. For example, specifying <code>/var/log/ **.log</code> causes all
     * .log files in the <code>/var/log</code> directory tree to be collected. For more
     * examples, see <a href="https://github.com/gobwas/glob">Glob Library</a>. </p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p> Specifies the path of the file(s) to upload. Standard Unix glob matching
     * rules are accepted, with the addition of <code>**</code> as a <i>super
     * asterisk</i>. For example, specifying <code>/var/log/ **.log</code> causes all
     * .log files in the <code>/var/log</code> directory tree to be collected. For more
     * examples, see <a href="https://github.com/gobwas/glob">Glob Library</a>. </p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p> Specifies the path of the file(s) to upload. Standard Unix glob matching
     * rules are accepted, with the addition of <code>**</code> as a <i>super
     * asterisk</i>. For example, specifying <code>/var/log/ **.log</code> causes all
     * .log files in the <code>/var/log</code> directory tree to be collected. For more
     * examples, see <a href="https://github.com/gobwas/glob">Glob Library</a>. </p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p> Specifies the path of the file(s) to upload. Standard Unix glob matching
     * rules are accepted, with the addition of <code>**</code> as a <i>super
     * asterisk</i>. For example, specifying <code>/var/log/ **.log</code> causes all
     * .log files in the <code>/var/log</code> directory tree to be collected. For more
     * examples, see <a href="https://github.com/gobwas/glob">Glob Library</a>. </p>
     */
    inline UploadConfiguration& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p> Specifies the path of the file(s) to upload. Standard Unix glob matching
     * rules are accepted, with the addition of <code>**</code> as a <i>super
     * asterisk</i>. For example, specifying <code>/var/log/ **.log</code> causes all
     * .log files in the <code>/var/log</code> directory tree to be collected. For more
     * examples, see <a href="https://github.com/gobwas/glob">Glob Library</a>. </p>
     */
    inline UploadConfiguration& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p> Specifies the path of the file(s) to upload. Standard Unix glob matching
     * rules are accepted, with the addition of <code>**</code> as a <i>super
     * asterisk</i>. For example, specifying <code>/var/log/ **.log</code> causes all
     * .log files in the <code>/var/log</code> directory tree to be collected. For more
     * examples, see <a href="https://github.com/gobwas/glob">Glob Library</a>. </p>
     */
    inline UploadConfiguration& WithPath(const char* value) { SetPath(value); return *this;}


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
    inline const UploadBehavior& GetUploadBehavior() const{ return m_uploadBehavior; }

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
    inline bool UploadBehaviorHasBeenSet() const { return m_uploadBehaviorHasBeenSet; }

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
    inline void SetUploadBehavior(const UploadBehavior& value) { m_uploadBehaviorHasBeenSet = true; m_uploadBehavior = value; }

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
    inline void SetUploadBehavior(UploadBehavior&& value) { m_uploadBehaviorHasBeenSet = true; m_uploadBehavior = std::move(value); }

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
    inline UploadConfiguration& WithUploadBehavior(const UploadBehavior& value) { SetUploadBehavior(value); return *this;}

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
    inline UploadConfiguration& WithUploadBehavior(UploadBehavior&& value) { SetUploadBehavior(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    UploadBehavior m_uploadBehavior;
    bool m_uploadBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
