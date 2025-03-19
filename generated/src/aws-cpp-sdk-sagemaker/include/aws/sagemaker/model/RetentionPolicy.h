/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RetentionType.h>
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
   * <p>The retention policy for data stored on an Amazon Elastic File System
   * volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RetentionPolicy">AWS
   * API Reference</a></p>
   */
  class RetentionPolicy
  {
  public:
    AWS_SAGEMAKER_API RetentionPolicy() = default;
    AWS_SAGEMAKER_API RetentionPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RetentionPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default is <code>Retain</code>, which specifies to keep the data stored
     * on the Amazon EFS volume.</p> <p>Specify <code>Delete</code> to delete the data
     * stored on the Amazon EFS volume.</p>
     */
    inline RetentionType GetHomeEfsFileSystem() const { return m_homeEfsFileSystem; }
    inline bool HomeEfsFileSystemHasBeenSet() const { return m_homeEfsFileSystemHasBeenSet; }
    inline void SetHomeEfsFileSystem(RetentionType value) { m_homeEfsFileSystemHasBeenSet = true; m_homeEfsFileSystem = value; }
    inline RetentionPolicy& WithHomeEfsFileSystem(RetentionType value) { SetHomeEfsFileSystem(value); return *this;}
    ///@}
  private:

    RetentionType m_homeEfsFileSystem{RetentionType::NOT_SET};
    bool m_homeEfsFileSystemHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
