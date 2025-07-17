/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/synthetics/model/Dependency.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>Use this structure to input your script code for the canary. This structure
   * contains the Lambda handler with the location where the canary should start
   * running the script. If the script is stored in an Amazon S3 bucket, the bucket
   * name, key, and version are also included. If the script was passed into the
   * canary directly, the script code is contained in the value of
   * <code>Zipfile</code>. </p> <p>If you are uploading your canary scripts with an
   * Amazon S3 bucket, your zip file should include your script in a certain folder
   * structure.</p> <ul> <li> <p>For Node.js canaries, the folder structure must be
   * <code>nodejs/node_modules/<i>myCanaryFilename.js</i> </code> For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_WritingCanary_Nodejs.html#CloudWatch_Synthetics_Canaries_package">Packaging
   * your Node.js canary files</a> </p> </li> <li> <p>For Python canaries, the folder
   * structure must be <code>python/<i>myCanaryFilename.py</i> </code> or
   * <code>python/<i>myFolder/myCanaryFilename.py</i> </code> For more information,
   * see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_WritingCanary_Python.html#CloudWatch_Synthetics_Canaries_WritingCanary_Python_package">Packaging
   * your Python canary files</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryCodeInput">AWS
   * API Reference</a></p>
   */
  class CanaryCodeInput
  {
  public:
    AWS_SYNTHETICS_API CanaryCodeInput() = default;
    AWS_SYNTHETICS_API CanaryCodeInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryCodeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If your canary script is located in Amazon S3, specify the bucket name here.
     * Do not include <code>s3://</code> as the start of the bucket name.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    CanaryCodeInput& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 key of your script. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingObjects.html">Working
     * with Amazon S3 Objects</a>.</p>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    CanaryCodeInput& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 version ID of your script.</p>
     */
    inline const Aws::String& GetS3Version() const { return m_s3Version; }
    inline bool S3VersionHasBeenSet() const { return m_s3VersionHasBeenSet; }
    template<typename S3VersionT = Aws::String>
    void SetS3Version(S3VersionT&& value) { m_s3VersionHasBeenSet = true; m_s3Version = std::forward<S3VersionT>(value); }
    template<typename S3VersionT = Aws::String>
    CanaryCodeInput& WithS3Version(S3VersionT&& value) { SetS3Version(std::forward<S3VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you input your canary script directly into the canary instead of referring
     * to an Amazon S3 location, the value of this parameter is the base64-encoded
     * contents of the .zip file that contains the script. It must be smaller than 225
     * Kb.</p> <p>For large canary scripts, we recommend that you use an Amazon S3
     * location instead of inputting it directly with this parameter.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetZipFile() const { return m_zipFile; }
    inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }
    template<typename ZipFileT = Aws::Utils::ByteBuffer>
    void SetZipFile(ZipFileT&& value) { m_zipFileHasBeenSet = true; m_zipFile = std::forward<ZipFileT>(value); }
    template<typename ZipFileT = Aws::Utils::ByteBuffer>
    CanaryCodeInput& WithZipFile(ZipFileT&& value) { SetZipFile(std::forward<ZipFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entry point to use for the source code when running the canary. For
     * canaries that use the <code>syn-python-selenium-1.0</code> runtime or a
     * <code>syn-nodejs.puppeteer</code> runtime earlier than
     * <code>syn-nodejs.puppeteer-3.4</code>, the handler must be specified as <code>
     * <i>fileName</i>.handler</code>. For <code>syn-python-selenium-1.1</code>,
     * <code>syn-nodejs.puppeteer-3.4</code>, and later runtimes, the handler can be
     * specified as <code> <i>fileName</i>.<i>functionName</i> </code>, or you can
     * specify a folder where canary scripts reside as <code>
     * <i>folder</i>/<i>fileName</i>.<i>functionName</i> </code>.</p>
     */
    inline const Aws::String& GetHandler() const { return m_handler; }
    inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }
    template<typename HandlerT = Aws::String>
    void SetHandler(HandlerT&& value) { m_handlerHasBeenSet = true; m_handler = std::forward<HandlerT>(value); }
    template<typename HandlerT = Aws::String>
    CanaryCodeInput& WithHandler(HandlerT&& value) { SetHandler(std::forward<HandlerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of dependencies that should be used for running this canary. Specify
     * the dependencies as a key-value pair, where the key is the type of dependency
     * and the value is the dependency reference.</p>
     */
    inline const Aws::Vector<Dependency>& GetDependencies() const { return m_dependencies; }
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }
    template<typename DependenciesT = Aws::Vector<Dependency>>
    void SetDependencies(DependenciesT&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::forward<DependenciesT>(value); }
    template<typename DependenciesT = Aws::Vector<Dependency>>
    CanaryCodeInput& WithDependencies(DependenciesT&& value) { SetDependencies(std::forward<DependenciesT>(value)); return *this;}
    template<typename DependenciesT = Dependency>
    CanaryCodeInput& AddDependencies(DependenciesT&& value) { m_dependenciesHasBeenSet = true; m_dependencies.emplace_back(std::forward<DependenciesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_s3Version;
    bool m_s3VersionHasBeenSet = false;

    Aws::Utils::ByteBuffer m_zipFile{};
    bool m_zipFileHasBeenSet = false;

    Aws::String m_handler;
    bool m_handlerHasBeenSet = false;

    Aws::Vector<Dependency> m_dependencies;
    bool m_dependenciesHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
