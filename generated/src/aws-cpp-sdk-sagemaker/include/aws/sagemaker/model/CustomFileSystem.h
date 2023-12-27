/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EFSFileSystem.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A file system, created by you, that you assign to a user profile or space for
   * an Amazon SageMaker Domain. Permitted users can access this file system in
   * Amazon SageMaker Studio.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CustomFileSystem">AWS
   * API Reference</a></p>
   */
  class CustomFileSystem
  {
  public:
    AWS_SAGEMAKER_API CustomFileSystem();
    AWS_SAGEMAKER_API CustomFileSystem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CustomFileSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A custom file system in Amazon EFS.</p>
     */
    inline const EFSFileSystem& GetEFSFileSystem() const{ return m_eFSFileSystem; }

    /**
     * <p>A custom file system in Amazon EFS.</p>
     */
    inline bool EFSFileSystemHasBeenSet() const { return m_eFSFileSystemHasBeenSet; }

    /**
     * <p>A custom file system in Amazon EFS.</p>
     */
    inline void SetEFSFileSystem(const EFSFileSystem& value) { m_eFSFileSystemHasBeenSet = true; m_eFSFileSystem = value; }

    /**
     * <p>A custom file system in Amazon EFS.</p>
     */
    inline void SetEFSFileSystem(EFSFileSystem&& value) { m_eFSFileSystemHasBeenSet = true; m_eFSFileSystem = std::move(value); }

    /**
     * <p>A custom file system in Amazon EFS.</p>
     */
    inline CustomFileSystem& WithEFSFileSystem(const EFSFileSystem& value) { SetEFSFileSystem(value); return *this;}

    /**
     * <p>A custom file system in Amazon EFS.</p>
     */
    inline CustomFileSystem& WithEFSFileSystem(EFSFileSystem&& value) { SetEFSFileSystem(std::move(value)); return *this;}

  private:

    EFSFileSystem m_eFSFileSystem;
    bool m_eFSFileSystemHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
