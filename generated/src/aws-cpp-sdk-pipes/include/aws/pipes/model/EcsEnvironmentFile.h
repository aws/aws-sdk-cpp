/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/EcsEnvironmentFileType.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>A list of files containing the environment variables to pass to a container.
   * You can specify up to ten environment files. The file must have a
   * <code>.env</code> file extension. Each line in an environment file should
   * contain an environment variable in <code>VARIABLE=VALUE</code> format. Lines
   * beginning with <code>#</code> are treated as comments and are ignored. For more
   * information about the environment variable file syntax, see <a
   * href="https://docs.docker.com/compose/env-file/">Declare default environment
   * variables in file</a>.</p> <p>If there are environment variables specified using
   * the <code>environment</code> parameter in a container definition, they take
   * precedence over the variables contained within an environment file. If multiple
   * environment files are specified that contain the same variable, they're
   * processed from the top down. We recommend that you use unique variable names.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/taskdef-envfiles.html">Specifying
   * environment variables</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p> <p>This parameter is only supported for tasks hosted on Fargate
   * using the following platform versions:</p> <ul> <li> <p>Linux platform version
   * <code>1.4.0</code> or later.</p> </li> <li> <p>Windows platform version
   * <code>1.0.0</code> or later.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/EcsEnvironmentFile">AWS
   * API Reference</a></p>
   */
  class EcsEnvironmentFile
  {
  public:
    AWS_PIPES_API EcsEnvironmentFile();
    AWS_PIPES_API EcsEnvironmentFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API EcsEnvironmentFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline const EcsEnvironmentFileType& GetType() const{ return m_type; }

    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline void SetType(const EcsEnvironmentFileType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline void SetType(EcsEnvironmentFileType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline EcsEnvironmentFile& WithType(const EcsEnvironmentFileType& value) { SetType(value); return *this;}

    /**
     * <p>The file type to use. The only supported value is <code>s3</code>.</p>
     */
    inline EcsEnvironmentFile& WithType(EcsEnvironmentFileType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline EcsEnvironmentFile& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline EcsEnvironmentFile& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 object containing the
     * environment variable file.</p>
     */
    inline EcsEnvironmentFile& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    EcsEnvironmentFileType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
